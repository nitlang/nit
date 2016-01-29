#include "ini.sep.0.h"
/* method ini#ConfigTree#ini_file for (self: ConfigTree): String */
val* ini___ini__ConfigTree___ini_file(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_ini__ConfigTree___ini_file].val; /* _ini_file on <self:ConfigTree> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ini_file");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#ini_file= for (self: ConfigTree, String) */
void ini___ini__ConfigTree___ini_file_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigTree___ini_file].val = p0; /* _ini_file on <self:ConfigTree> */
RET_LABEL:;
}
/* method ini#ConfigTree#init for (self: ConfigTree) */
void ini___ini__ConfigTree___core__kernel__Object__init(val* self) {
val* var /* : String */;
val* var2 /* : String */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_ini___ini__ConfigTree___core__kernel__Object__init]))(self); /* init on <self:ConfigTree>*/
}
{
{ /* Inline ini#ConfigTree#ini_file (self) on <self:ConfigTree> */
var2 = self->attrs[COLOR_ini__ConfigTree___ini_file].val; /* _ini_file on <self:ConfigTree> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ini_file");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___String___file_exists(var);
}
if (var3){
{
ini___ini__ConfigTree___load(self); /* Direct call ini#ConfigTree#load on <self:ConfigTree>*/
}
} else {
}
RET_LABEL:;
}
/* method ini#ConfigTree#[] for (self: ConfigTree, String): nullable String */
val* ini___ini__ConfigTree____91d_93d(val* self, val* p0) {
val* var /* : nullable String */;
val* var_key /* var key: String */;
val* var1 /* : nullable ConfigNode */;
val* var_node /* var node: nullable ConfigNode */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable String */;
val* var10 /* : nullable String */;
var_key = p0;
{
var1 = ini___ini__ConfigTree___get_node(self, var_key);
}
var_node = var1;
if (var_node == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
var7 = var_node == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline ini#ConfigNode#value (var_node) on <var_node:nullable ConfigNode(ConfigNode)> */
var10 = var_node->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <var_node:nullable ConfigNode(ConfigNode)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#has_key for (self: ConfigTree, String): Bool */
short int ini___ini__ConfigTree___has_key(val* self, val* p0) {
short int var /* : Bool */;
val* var_key /* var key: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Array[String] */;
val* var5 /* : Array[nullable Object] */;
val* var_parts /* var parts: Array[String] */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable ConfigNode */;
val* var_node /* var node: nullable ConfigNode */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var17 /* : nullable ConfigNode */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
var_key = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".";
var3 = core__flat___NativeString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = core__string_search___Text___split(var_key, var1);
}
{
var5 = core___core__AbstractArrayRead___reversed(var4);
}
var_parts = var5;
{
var6 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var7 = ini___ini__ConfigTree___get_root(self, var6);
}
var_node = var7;
if (var_node == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
var13 = var_node == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var = 0;
goto RET_LABEL;
} else {
}
for(;;) {
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
var15 = !var14;
if (var15){
{
var16 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var17 = ini___ini__ConfigNode___get_child(var_node, var16);
}
var_node = var17;
if (var_node == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
var23 = var_node == var_other;
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
var = 0;
goto RET_LABEL;
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#to_map for (self: ConfigTree): Map[String, String] */
val* ini___ini__ConfigTree___to_map(val* self) {
val* var /* : Map[String, String] */;
val* var1 /* : HashMap[String, String] */;
val* var_map /* var map: HashMap[String, String] */;
val* var2 /* : Array[ConfigNode] */;
val* var_ /* var : Array[ConfigNode] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[ConfigNode] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_node /* var node: ConfigNode */;
val* var7 /* : nullable String */;
val* var9 /* : nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var13 /* : String */;
val* var14 /* : nullable String */;
val* var16 /* : nullable String */;
val* var17 /* : String */;
var1 = NEW_core__HashMap(&type_core__HashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[String, String]>*/
}
var_map = var1;
{
var2 = ini___ini__ConfigTree___leaves(self);
}
var_ = var2;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[ConfigNode]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[ConfigNode]>*/
}
var_node = var6;
{
{ /* Inline ini#ConfigNode#value (var_node) on <var_node:ConfigNode> */
var9 = var_node->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <var_node:ConfigNode> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, ((val*)NULL)); /* == on <var7:nullable String>*/
var10 = var11;
}
if (var10){
goto BREAK_label12;
} else {
}
{
var13 = ini___ini__ConfigNode___key(var_node);
}
{
{ /* Inline ini#ConfigNode#value (var_node) on <var_node:ConfigNode> */
var16 = var_node->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <var_node:ConfigNode> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 116);
fatal_exit(1);
} else {
var17 = core___core__String___Object__to_s(var14);
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var13, var17); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[ConfigNode]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[ConfigNode]>*/
}
var = var_map;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#to_s for (self: ConfigTree): String */
val* ini___ini__ConfigTree___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Map[String, String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
{
var1 = ini___ini__ConfigTree___to_map(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = ", ";
var4 = core__flat___NativeString___to_s_full(var3, 2l, 2l);
var2 = var4;
varonce = var2;
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ":";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
{
var9 = core__flat___Map___join(var1, var2, var6);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#write_to for (self: ConfigTree, Writer) */
void ini___ini__ConfigTree___core__stream__Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
val* var /* : Array[ConfigNode] */;
val* var_ /* var : Array[ConfigNode] */;
val* var1 /* : IndexedIterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[ConfigNode] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_node /* var node: ConfigNode */;
val* var5 /* : nullable String */;
val* var7 /* : nullable String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : nullable String */;
val* var23 /* : nullable String */;
val* var24 /* : String */;
val* var25 /* : String */;
var_stream = p0;
{
var = ini___ini__ConfigTree___leaves(self);
}
var_ = var;
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[ConfigNode]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[ConfigNode]>*/
}
var_node = var4;
{
{ /* Inline ini#ConfigNode#value (var_node) on <var_node:ConfigNode> */
var7 = var_node->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <var_node:ConfigNode> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, ((val*)NULL)); /* == on <var5:nullable String>*/
var8 = var9;
}
if (var8){
goto BREAK_label10;
} else {
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "=";
var15 = core__flat___NativeString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[1]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "\n";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[3]=var17;
} else {
var11 = varonce;
varonce = NULL;
}
{
var20 = ini___ini__ConfigNode___key(var_node);
}
((struct instance_core__NativeArray*)var11)->values[0]=var20;
{
{ /* Inline ini#ConfigNode#value (var_node) on <var_node:ConfigNode> */
var23 = var_node->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <var_node:ConfigNode> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 126);
fatal_exit(1);
} else {
var24 = core___core__String___Object__to_s(var21);
}
((struct instance_core__NativeArray*)var11)->values[2]=var24;
{
var25 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var25); /* Direct call file#FileWriter#write on <var_stream:Writer>*/
}
BREAK_label10: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[ConfigNode]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[ConfigNode]>*/
}
RET_LABEL:;
}
/* method ini#ConfigTree#load for (self: ConfigTree) */
void ini___ini__ConfigTree___load(val* self) {
val* var /* : Array[ConfigNode] */;
val* var2 /* : Array[ConfigNode] */;
val* var3 /* : FileReader */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var_stream /* var stream: FileReader */;
val* var_path /* var path: nullable String */;
long var_line_number /* var line_number: Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var_line /* var line: String */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
short int var23 /* : Bool */;
val* var24 /* : Text */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
val* var33 /* : Text */;
val* var_key /* var key: String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : Array[String] */;
val* var_parts /* var parts: Array[String] */;
long var39 /* : Int */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
val* var49 /* : Sys */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : nullable Object */;
val* var59 /* : Text */;
val* var_key60 /* var key: String */;
val* var61 /* : nullable Object */;
val* var62 /* : Text */;
val* var_val /* var val: String */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : String */;
short int var79 /* : Bool */;
{
{ /* Inline ini#ConfigTree#roots (self) on <self:ConfigTree> */
var2 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var); /* Direct call array#AbstractArray#clear on <var:Array[ConfigNode]>*/
}
var3 = NEW_core__FileReader(&type_core__FileReader);
{
{ /* Inline ini#ConfigTree#ini_file (self) on <self:ConfigTree> */
var6 = self->attrs[COLOR_ini__ConfigTree___ini_file].val; /* _ini_file on <self:ConfigTree> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ini_file");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__FileReader___open(var3, var4); /* Direct call file#FileReader#open on <var3:FileReader>*/
}
var_stream = var3;
var_path = ((val*)NULL);
var_line_number = 0l;
for(;;) {
{
var7 = core___core__BufferedReader___Reader__eof(var_stream);
}
var8 = !var7;
if (var8){
{
var9 = core___core__Reader___read_line(var_stream);
}
var_line = var9;
{
{ /* Inline kernel#Int#+ (var_line_number,1l) on <var_line_number:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var_line_number + 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_line_number = var10;
{
var14 = ((short int(*)(val* self))(var_line->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_line); /* is_empty on <var_line:String>*/
}
if (var14){
goto BREAK_label;
} else {
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = ";";
var17 = core__flat___NativeString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce = var15;
}
{
var18 = core___core__Text___has_prefix(var_line, var15);
}
if (var18){
goto BREAK_label;
} else {
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "[";
var22 = core__flat___NativeString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
{
var23 = core___core__Text___has_prefix(var_line, var20);
}
if (var23){
{
var24 = core___core__Text___trim(var_line);
}
var_line = var24;
{
var25 = ((long(*)(val* self))(var_line->class->vft[COLOR_core__abstract_text__Text__length]))(var_line); /* length on <var_line:String>*/
}
{
{ /* Inline kernel#Int#- (var25,2l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var28 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var32 = var25 - 2l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
var33 = ((val*(*)(val* self, long p0, long p1))(var_line->class->vft[COLOR_core__abstract_text__Text__substring]))(var_line, 1l, var26); /* substring on <var_line:String>*/
}
var_key = var33;
var_path = var_key;
{
ini___ini__ConfigTree___set_node(self, var_path, ((val*)NULL)); /* Direct call ini#ConfigTree#set_node on <self:ConfigTree>*/
}
} else {
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "=";
var37 = core__flat___NativeString___to_s_full(var36, 1l, 1l);
var35 = var37;
varonce34 = var35;
}
{
var38 = core__string_search___Text___split(var_line, var35);
}
var_parts = var38;
{
{ /* Inline array#AbstractArrayRead#length (var_parts) on <var_parts:Array[String]> */
var41 = var_parts->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_parts:Array[String]> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var39,1l) on <var39:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var48 = var39 > 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (unlikely(!var42)) {
var49 = glob_sys;
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Error: malformed ini at line ";
var55 = core__flat___NativeString___to_s_full(var54, 29l, 29l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
} else {
var51 = varonce50;
varonce50 = NULL;
}
var56 = core__flat___Int___core__abstract_text__Object__to_s(var_line_number);
((struct instance_core__NativeArray*)var51)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
core__file___Sys___print(var49, var57); /* Direct call file#Sys#print on <var49:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 212);
fatal_exit(1);
}
{
var58 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_parts, 0l);
}
{
var59 = core___core__Text___trim(var58);
}
var_key60 = var59;
{
var61 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_parts, 1l);
}
{
var62 = core___core__Text___trim(var61);
}
var_val = var62;
if (var_path == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_path,((val*)NULL)) on <var_path:nullable String> */
var_other = ((val*)NULL);
{
var66 = ((short int(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_path, var_other); /* == on <var_path:nullable String(String)>*/
}
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ".";
var73 = core__flat___NativeString___to_s_full(var72, 1l, 1l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[1]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
((struct instance_core__NativeArray*)var69)->values[0]=var_path;
((struct instance_core__NativeArray*)var69)->values[2]=var_key60;
{
var74 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
var_key60 = var74;
} else {
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "[]";
var78 = core__flat___NativeString___to_s_full(var77, 2l, 2l);
var76 = var78;
varonce75 = var76;
}
{
var79 = core___core__Text___has_suffix(var_key60, var76);
}
if (var79){
{
ini___ini__ConfigTree___set_array(self, var_key60, var_val); /* Direct call ini#ConfigTree#set_array on <self:ConfigTree>*/
}
} else {
{
ini___ini__ConfigTree___set_node(self, var_key60, var_val); /* Direct call ini#ConfigTree#set_node on <self:ConfigTree>*/
}
}
}
}
}
} else {
goto BREAK_label80;
}
BREAK_label: (void)0;
}
BREAK_label80: (void)0;
{
core___core__FileReader___core__stream__Stream__close(var_stream); /* Direct call file#FileReader#close on <var_stream:FileReader>*/
}
RET_LABEL:;
}
/* method ini#ConfigTree#roots for (self: ConfigTree): Array[ConfigNode] */
val* ini___ini__ConfigTree___roots(val* self) {
val* var /* : Array[ConfigNode] */;
val* var1 /* : Array[ConfigNode] */;
var1 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#set_array for (self: ConfigTree, String, nullable String) */
void ini___ini__ConfigTree___set_array(val* self, val* p0, val* p1) {
val* var_key /* var key: String */;
val* var_value /* var value: nullable String */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var5 /* : Text */;
long var_len /* var len: Int */;
short int var6 /* : Bool */;
val* var7 /* : nullable ConfigNode */;
val* var8 /* : HashMap[String, ConfigNode] */;
val* var10 /* : HashMap[String, ConfigNode] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[String] */;
static val* varonce;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
var_key = p0;
var_value = p1;
{
var = ((long(*)(val* self))(var_key->class->vft[COLOR_core__abstract_text__Text__length]))(var_key); /* length on <var_key:String>*/
}
{
{ /* Inline kernel#Int#- (var,2l) on <var:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var3 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var4 = var - 2l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var5 = ((val*(*)(val* self, long p0, long p1))(var_key->class->vft[COLOR_core__abstract_text__Text__substring]))(var_key, 0l, var1); /* substring on <var_key:String>*/
}
var_key = var5;
var_len = 0l;
{
var6 = ini___ini__ConfigTree___has_key(self, var_key);
}
if (var6){
{
var7 = ini___ini__ConfigTree___get_node(self, var_key);
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 238);
fatal_exit(1);
} else {
{ /* Inline ini#ConfigNode#children (var7) on <var7:nullable ConfigNode> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var10 = var7->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var7:nullable ConfigNode> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = core___core__HashMap___core__abstract_collection__MapRead__length(var8);
}
var_len = var11;
} else {
}
if (unlikely(varonce==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ".";
var16 = core__flat___NativeString___to_s_full(var15, 1l, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[1]=var14;
} else {
var12 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var12)->values[0]=var_key;
{
var17 = core__flat___Int___core__abstract_text__Object__to_s(var_len);
}
((struct instance_core__NativeArray*)var12)->values[2]=var17;
{
var18 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
ini___ini__ConfigTree___set_node(self, var18, var_value); /* Direct call ini#ConfigTree#set_node on <self:ConfigTree>*/
}
RET_LABEL:;
}
/* method ini#ConfigTree#set_node for (self: ConfigTree, String, nullable String) */
void ini___ini__ConfigTree___set_node(val* self, val* p0, val* p1) {
val* var_key /* var key: String */;
val* var_value /* var value: nullable String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : Array[String] */;
val* var4 /* : Array[nullable Object] */;
val* var_parts /* var parts: Array[String] */;
val* var5 /* : nullable Object */;
val* var_k /* var k: String */;
val* var6 /* : nullable ConfigNode */;
val* var_root /* var root: nullable ConfigNode */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : ConfigNode */;
short int var14 /* : Bool */;
val* var16 /* : Array[ConfigNode] */;
val* var18 /* : Array[ConfigNode] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var22 /* : nullable ConfigNode */;
val* var_node /* var node: nullable ConfigNode */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : ConfigNode */;
val* var31 /* : HashMap[String, ConfigNode] */;
val* var33 /* : HashMap[String, ConfigNode] */;
val* var34 /* : String */;
val* var36 /* : String */;
short int var37 /* : Bool */;
var_key = p0;
var_value = p1;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = ".";
var2 = core__flat___NativeString___to_s_full(var1, 1l, 1l);
var = var2;
varonce = var;
}
{
var3 = core__string_search___Text___split(var_key, var);
}
{
var4 = core___core__AbstractArrayRead___reversed(var3);
}
var_parts = var4;
{
var5 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
var_k = var5;
{
var6 = ini___ini__ConfigTree___get_root(self, var_k);
}
var_root = var6;
if (var_root == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_root,((val*)NULL)) on <var_root:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_root,var_other) on <var_root:nullable ConfigNode(ConfigNode)> */
var12 = var_root == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var13 = NEW_ini__ConfigNode(&type_ini__ConfigNode);
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_ini__ConfigNode__name_61d]))(var13, var_k); /* name= on <var13:ConfigNode>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:ConfigNode>*/
}
var_root = var13;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
if (var14){
{
{ /* Inline ini#ConfigNode#value= (var_root,var_value) on <var_root:nullable ConfigNode(ConfigNode)> */
var_root->attrs[COLOR_ini__ConfigNode___value].val = var_value; /* _value on <var_root:nullable ConfigNode(ConfigNode)> */
RET_LABEL15:(void)0;
}
}
} else {
}
{
{ /* Inline ini#ConfigTree#roots (self) on <self:ConfigTree> */
var18 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var16, var_root); /* Direct call array#Array#add on <var16:Array[ConfigNode]>*/
}
} else {
}
for(;;) {
{
var19 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
var20 = !var19;
if (var20){
{
var21 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
var_k = var21;
{
var22 = ini___ini__ConfigNode___get_child(var_root, var_k);
}
var_node = var22;
if (var_node == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
var28 = var_node == var_other;
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
var29 = NEW_ini__ConfigNode(&type_ini__ConfigNode);
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_ini__ConfigNode__name_61d]))(var29, var_k); /* name= on <var29:ConfigNode>*/
}
{
((void(*)(val* self))(var29->class->vft[COLOR_core__kernel__Object__init]))(var29); /* init on <var29:ConfigNode>*/
}
var_node = var29;
{
{ /* Inline ini#ConfigNode#parent= (var_node,var_root) on <var_node:nullable ConfigNode(ConfigNode)> */
var_node->attrs[COLOR_ini__ConfigNode___parent].val = var_root; /* _parent on <var_node:nullable ConfigNode(ConfigNode)> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline ini#ConfigNode#children (var_root) on <var_root:nullable ConfigNode(ConfigNode)> */
var33 = var_root->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var_root:nullable ConfigNode(ConfigNode)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline ini#ConfigNode#name (var_node) on <var_node:nullable ConfigNode(ConfigNode)> */
var36 = var_node->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <var_node:nullable ConfigNode(ConfigNode)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var31, var34, var_node); /* Direct call hash_collection#HashMap#[]= on <var31:HashMap[String, ConfigNode]>*/
}
} else {
}
{
var37 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
if (var37){
{
{ /* Inline ini#ConfigNode#value= (var_node,var_value) on <var_node:nullable ConfigNode(ConfigNode)> */
var_node->attrs[COLOR_ini__ConfigNode___value].val = var_value; /* _value on <var_node:nullable ConfigNode(ConfigNode)> */
RET_LABEL38:(void)0;
}
}
} else {
}
var_root = var_node;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ini#ConfigTree#get_node for (self: ConfigTree, String): nullable ConfigNode */
val* ini___ini__ConfigTree___get_node(val* self, val* p0) {
val* var /* : nullable ConfigNode */;
val* var_key /* var key: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Array[String] */;
val* var5 /* : Array[nullable Object] */;
val* var_parts /* var parts: Array[String] */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable ConfigNode */;
val* var_node /* var node: nullable ConfigNode */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var17 /* : nullable ConfigNode */;
var_key = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".";
var3 = core__flat___NativeString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = core__string_search___Text___split(var_key, var1);
}
{
var5 = core___core__AbstractArrayRead___reversed(var4);
}
var_parts = var5;
{
var6 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var7 = ini___ini__ConfigTree___get_root(self, var6);
}
var_node = var7;
for(;;) {
if (var_node == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ConfigNode(ConfigNode)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
var15 = !var14;
var8 = var15;
} else {
var8 = var_;
}
if (var8){
{
var16 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var17 = ini___ini__ConfigNode___get_child(var_node, var16);
}
var_node = var17;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_node;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#get_root for (self: ConfigTree, String): nullable ConfigNode */
val* ini___ini__ConfigTree___get_root(val* self, val* p0) {
val* var /* : nullable ConfigNode */;
val* var_name /* var name: String */;
val* var1 /* : Array[ConfigNode] */;
val* var3 /* : Array[ConfigNode] */;
val* var_ /* var : Array[ConfigNode] */;
val* var4 /* : IndexedIterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[ConfigNode] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_root /* var root: ConfigNode */;
val* var8 /* : String */;
val* var10 /* : String */;
short int var11 /* : Bool */;
var_name = p0;
{
{ /* Inline ini#ConfigTree#roots (self) on <self:ConfigTree> */
var3 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[ConfigNode]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[ConfigNode]>*/
}
var_root = var7;
{
{ /* Inline ini#ConfigNode#name (var_root) on <var_root:ConfigNode> */
var10 = var_root->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <var_root:ConfigNode> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var_name); /* == on <var8:String>*/
}
if (var11){
var = var_root;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[ConfigNode]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[ConfigNode]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigTree#leaves for (self: ConfigTree): Array[ConfigNode] */
val* ini___ini__ConfigTree___leaves(val* self) {
val* var /* : Array[ConfigNode] */;
val* var1 /* : Array[ConfigNode] */;
val* var_res /* var res: Array[ConfigNode] */;
val* var2 /* : Array[ConfigNode] */;
val* var_todo /* var todo: Array[ConfigNode] */;
val* var3 /* : Array[ConfigNode] */;
val* var5 /* : Array[ConfigNode] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_node /* var node: ConfigNode */;
val* var9 /* : HashMap[String, ConfigNode] */;
val* var11 /* : HashMap[String, ConfigNode] */;
short int var12 /* : Bool */;
val* var13 /* : HashMap[String, ConfigNode] */;
val* var15 /* : HashMap[String, ConfigNode] */;
val* var16 /* : RemovableCollection[nullable Object] */;
var1 = NEW_core__Array(&type_core__Array__ini__ConfigNode);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[ConfigNode]>*/
}
var_res = var1;
var2 = NEW_core__Array(&type_core__Array__ini__ConfigNode);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[ConfigNode]>*/
}
var_todo = var2;
{
{ /* Inline ini#ConfigTree#roots (self) on <self:ConfigTree> */
var5 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var3); /* Direct call array#Array#add_all on <var_todo:Array[ConfigNode]>*/
}
for(;;) {
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_todo);
}
var7 = !var6;
if (var7){
{
var8 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_todo);
}
var_node = var8;
{
{ /* Inline ini#ConfigNode#children (var_node) on <var_node:ConfigNode> */
var11 = var_node->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var_node:ConfigNode> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashMap___core__abstract_collection__MapRead__is_empty(var9);
}
if (var12){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_node); /* Direct call array#Array#add on <var_res:Array[ConfigNode]>*/
}
} else {
{
{ /* Inline ini#ConfigNode#children (var_node) on <var_node:ConfigNode> */
var15 = var_node->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var_node:ConfigNode> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = core___core__HashMap___core__abstract_collection__MapRead__values(var13);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var16); /* Direct call array#Array#add_all on <var_todo:Array[ConfigNode]>*/
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigNode#parent for (self: ConfigNode): nullable ConfigNode */
val* ini___ini__ConfigNode___parent(val* self) {
val* var /* : nullable ConfigNode */;
val* var1 /* : nullable ConfigNode */;
var1 = self->attrs[COLOR_ini__ConfigNode___parent].val; /* _parent on <self:ConfigNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ini#ConfigNode#parent= for (self: ConfigNode, nullable ConfigNode) */
void ini___ini__ConfigNode___parent_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigNode___parent].val = p0; /* _parent on <self:ConfigNode> */
RET_LABEL:;
}
/* method ini#ConfigNode#children for (self: ConfigNode): HashMap[String, ConfigNode] */
val* ini___ini__ConfigNode___children(val* self) {
val* var /* : HashMap[String, ConfigNode] */;
val* var1 /* : HashMap[String, ConfigNode] */;
var1 = self->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <self:ConfigNode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini#ConfigNode#name for (self: ConfigNode): String */
val* ini___ini__ConfigNode___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <self:ConfigNode> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini#ConfigNode#name= for (self: ConfigNode, String) */
void ini___ini__ConfigNode___name_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigNode___name].val = p0; /* _name on <self:ConfigNode> */
RET_LABEL:;
}
/* method ini#ConfigNode#value for (self: ConfigNode): nullable String */
val* ini___ini__ConfigNode___value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <self:ConfigNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ini#ConfigNode#value= for (self: ConfigNode, nullable String) */
void ini___ini__ConfigNode___value_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigNode___value].val = p0; /* _value on <self:ConfigNode> */
RET_LABEL:;
}
/* method ini#ConfigNode#key for (self: ConfigNode): String */
val* ini___ini__ConfigNode___key(val* self) {
val* var /* : String */;
val* var1 /* : nullable ConfigNode */;
val* var3 /* : nullable ConfigNode */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
val* var12 /* : String */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : nullable ConfigNode */;
val* var20 /* : nullable ConfigNode */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
{
{ /* Inline ini#ConfigNode#parent (self) on <self:ConfigNode> */
var3 = self->attrs[COLOR_ini__ConfigNode___parent].val; /* _parent on <self:ConfigNode> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable ConfigNode(ConfigNode)> */
var9 = var1 == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline ini#ConfigNode#name (self) on <self:ConfigNode> */
var12 = self->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <self:ConfigNode> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ".";
var17 = core__flat___NativeString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[1]=var15;
} else {
var13 = varonce;
varonce = NULL;
}
{
{ /* Inline ini#ConfigNode#parent (self) on <self:ConfigNode> */
var20 = self->attrs[COLOR_ini__ConfigNode___parent].val; /* _parent on <self:ConfigNode> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 312);
fatal_exit(1);
} else {
var21 = ini___ini__ConfigNode___key(var18);
}
((struct instance_core__NativeArray*)var13)->values[0]=var21;
{
{ /* Inline ini#ConfigNode#name (self) on <self:ConfigNode> */
var24 = self->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <self:ConfigNode> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
((struct instance_core__NativeArray*)var13)->values[2]=var22;
{
var25 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigNode#get_child for (self: ConfigNode, String): nullable ConfigNode */
val* ini___ini__ConfigNode___get_child(val* self, val* p0) {
val* var /* : nullable ConfigNode */;
val* var_name /* var name: String */;
val* var1 /* : HashMap[String, ConfigNode] */;
val* var3 /* : HashMap[String, ConfigNode] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[String, ConfigNode] */;
val* var7 /* : HashMap[String, ConfigNode] */;
val* var8 /* : nullable Object */;
var_name = p0;
{
{ /* Inline ini#ConfigNode#children (self) on <self:ConfigNode> */
var3 = self->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <self:ConfigNode> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_name);
}
if (var4){
{
{ /* Inline ini#ConfigNode#children (self) on <self:ConfigNode> */
var7 = self->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <self:ConfigNode> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_name);
}
var = var8;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini#ConfigNode#init for (self: ConfigNode) */
void ini___ini__ConfigNode___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_ini___ini__ConfigNode___core__kernel__Object__init]))(self); /* init on <self:ConfigNode>*/
}
RET_LABEL:;
}
