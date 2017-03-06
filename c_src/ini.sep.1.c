#include "ini.sep.0.h"
/* method ini$ConfigTree$ini_file for (self: ConfigTree): String */
val* ini___ini__ConfigTree___ini_file(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_ini__ConfigTree___ini_file].val; /* _ini_file on <self:ConfigTree> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ini_file");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini$ConfigTree$ini_file= for (self: ConfigTree, String) */
void ini___ini__ConfigTree___ini_file_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigTree___ini_file].val = p0; /* _ini_file on <self:ConfigTree> */
RET_LABEL:;
}
/* method ini$ConfigTree$init for (self: ConfigTree) */
void ini___ini__ConfigTree___core__kernel__Object__init(val* self) {
val* var /* : String */;
val* var2 /* : String */;
short int var3 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_ini___ini__ConfigTree___core__kernel__Object__init]))(self); /* init on <self:ConfigTree>*/
}
{
{ /* Inline ini$ConfigTree$ini_file (self) on <self:ConfigTree> */
var2 = self->attrs[COLOR_ini__ConfigTree___ini_file].val; /* _ini_file on <self:ConfigTree> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ini_file");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Text___file_exists(var);
}
if (var3){
{
ini___ini__ConfigTree___load(self); /* Direct call ini$ConfigTree$load on <self:ConfigTree>*/
}
} else {
}
RET_LABEL:;
}
/* method ini$ConfigTree$[] for (self: ConfigTree, String): nullable String */
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
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
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
{ /* Inline ini$ConfigNode$value (var_node) on <var_node:nullable ConfigNode(ConfigNode)> */
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
/* method ini$ConfigTree$has_key for (self: ConfigTree, String): Bool */
short int ini___ini__ConfigTree___has_key(val* self, val* p0) {
short int var /* : Bool */;
val* var_key /* var key: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : Array[String] */;
val* var9 /* : Array[nullable Object] */;
val* var_parts /* var parts: Array[String] */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable ConfigNode */;
val* var_node /* var node: nullable ConfigNode */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable ConfigNode */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
var_key = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".";
var4 = (val*)(1l<<2|1);
var5 = (val*)(1l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = core__string_search___Text___split(var_key, var1);
}
{
var9 = core___core__AbstractArrayRead___reversed(var8);
}
var_parts = var9;
{
var10 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var11 = ini___ini__ConfigTree___get_root(self, var10);
}
var_node = var11;
if (var_node == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
var17 = var_node == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
for(;;) {
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
var19 = !var18;
if (var19){
{
var20 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var21 = ini___ini__ConfigNode___get_child(var_node, var20);
}
var_node = var21;
if (var_node == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
var27 = var_node == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
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
/* method ini$ConfigTree$to_map for (self: ConfigTree): Map[String, String] */
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
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[String, String]>*/
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
{ /* Inline ini$ConfigNode$value (var_node) on <var_node:ConfigNode> */
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
{ /* Inline ini$ConfigNode$value (var_node) on <var_node:ConfigNode> */
var16 = var_node->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <var_node:ConfigNode> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 116);
fatal_exit(1);
} else {
var17 = core___core__String___Object__to_s(var14);
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var13, var17); /* Direct call hash_collection$HashMap$[]= on <var_map:HashMap[String, String]>*/
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
/* method ini$ConfigTree$to_s for (self: ConfigTree): String */
val* ini___ini__ConfigTree___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Map[String, String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var17 /* : String */;
{
var1 = ini___ini__ConfigTree___to_map(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = ", ";
var5 = (val*)(2l<<2|1);
var6 = (val*)(2l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ":";
var13 = (val*)(1l<<2|1);
var14 = (val*)(1l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
{
var17 = core__flat___Map___join(var1, var2, var10);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini$ConfigTree$write_to for (self: ConfigTree, Writer) */
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
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : String */;
val* var29 /* : nullable String */;
val* var31 /* : nullable String */;
val* var32 /* : String */;
val* var33 /* : String */;
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
{ /* Inline ini$ConfigNode$value (var_node) on <var_node:ConfigNode> */
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
var11 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "=";
var16 = (val*)(1l<<2|1);
var17 = (val*)(1l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[1]=var13;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "\n";
var24 = (val*)(1l<<2|1);
var25 = (val*)(1l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[3]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
{
var28 = ini___ini__ConfigNode___key(var_node);
}
((struct instance_core__NativeArray*)var11)->values[0]=var28;
{
{ /* Inline ini$ConfigNode$value (var_node) on <var_node:ConfigNode> */
var31 = var_node->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <var_node:ConfigNode> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 126);
fatal_exit(1);
} else {
var32 = core___core__String___Object__to_s(var29);
}
((struct instance_core__NativeArray*)var11)->values[2]=var32;
{
var33 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var33); /* Direct call file$FileWriter$write on <var_stream:Writer>*/
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
/* method ini$ConfigTree$load for (self: ConfigTree) */
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
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
val* var32 /* : Text */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
val* var41 /* : Text */;
val* var_key /* var key: String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : Array[String] */;
val* var_parts /* var parts: Array[String] */;
long var51 /* : Int */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
val* var61 /* : Sys */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : nullable Object */;
val* var75 /* : Text */;
val* var_key76 /* var key: String */;
val* var77 /* : nullable Object */;
val* var78 /* : Text */;
val* var_val /* var val: String */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Bool */;
val* var93 /* : nullable Bool */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
short int var103 /* : Bool */;
{
{ /* Inline ini$ConfigTree$roots (self) on <self:ConfigTree> */
var2 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var); /* Direct call array$AbstractArray$clear on <var:Array[ConfigNode]>*/
}
var3 = NEW_core__FileReader(&type_core__FileReader);
{
{ /* Inline ini$ConfigTree$ini_file (self) on <self:ConfigTree> */
var6 = self->attrs[COLOR_ini__ConfigTree___ini_file].val; /* _ini_file on <self:ConfigTree> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ini_file");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__FileReader___open(var3, var4); /* Direct call file$FileReader$open on <var3:FileReader>*/
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
{ /* Inline kernel$Int$+ (var_line_number,1l) on <var_line_number:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
var18 = (val*)(1l<<2|1);
var19 = (val*)(1l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce = var15;
}
{
var22 = core___core__Text___has_prefix(var_line, var15);
}
if (var22){
goto BREAK_label;
} else {
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "[";
var27 = (val*)(1l<<2|1);
var28 = (val*)(1l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
{
var31 = core___core__Text___has_prefix(var_line, var24);
}
if (var31){
{
var32 = core___core__Text___trim(var_line);
}
var_line = var32;
{
var33 = ((long(*)(val* self))(var_line->class->vft[COLOR_core__abstract_text__Text__length]))(var_line); /* length on <var_line:String>*/
}
{
{ /* Inline kernel$Int$- (var33,2l) on <var33:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var36 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var33 - 2l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = ((val*(*)(val* self, long p0, long p1))(var_line->class->vft[COLOR_core__abstract_text__Text__substring]))(var_line, 1l, var34); /* substring on <var_line:String>*/
}
var_key = var41;
var_path = var_key;
{
ini___ini__ConfigTree___set_node(self, var_path, ((val*)NULL)); /* Direct call ini$ConfigTree$set_node on <self:ConfigTree>*/
}
} else {
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "=";
var46 = (val*)(1l<<2|1);
var47 = (val*)(1l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
{
var50 = core__string_search___Text___split(var_line, var43);
}
var_parts = var50;
{
{ /* Inline array$AbstractArrayRead$length (var_parts) on <var_parts:Array[String]> */
var53 = var_parts->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_parts:Array[String]> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var51,1l) on <var51:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var60 = var51 > 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (unlikely(!var54)) {
var61 = glob_sys;
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "Error: malformed ini at line ";
var68 = (val*)(29l<<2|1);
var69 = (val*)(29l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[0]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
var72 = core__flat___Int___core__abstract_text__Object__to_s(var_line_number);
((struct instance_core__NativeArray*)var63)->values[1]=var72;
{
var73 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
core__file___Sys___print(var61, var73); /* Direct call file$Sys$print on <var61:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 212);
fatal_exit(1);
}
{
var74 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_parts, 0l);
}
{
var75 = core___core__Text___trim(var74);
}
var_key76 = var75;
{
var77 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_parts, 1l);
}
{
var78 = core___core__Text___trim(var77);
}
var_val = var78;
if (var_path == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_path,((val*)NULL)) on <var_path:nullable String> */
var_other = ((val*)NULL);
{
var82 = ((short int(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_path, var_other); /* == on <var_path:nullable String(String)>*/
}
var83 = !var82;
var80 = var83;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
if (var79){
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ".";
var90 = (val*)(1l<<2|1);
var91 = (val*)(1l<<2|1);
var92 = (val*)((long)(0)<<2|3);
var93 = (val*)((long)(0)<<2|3);
var89 = core__flat___CString___to_s_unsafe(var88, var90, var91, var92, var93);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[1]=var87;
} else {
var85 = varonce84;
varonce84 = NULL;
}
((struct instance_core__NativeArray*)var85)->values[0]=var_path;
((struct instance_core__NativeArray*)var85)->values[2]=var_key76;
{
var94 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
var_key76 = var94;
} else {
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "[]";
var99 = (val*)(2l<<2|1);
var100 = (val*)(2l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
{
var103 = core___core__Text___has_suffix(var_key76, var96);
}
if (var103){
{
ini___ini__ConfigTree___set_array(self, var_key76, var_val); /* Direct call ini$ConfigTree$set_array on <self:ConfigTree>*/
}
} else {
{
ini___ini__ConfigTree___set_node(self, var_key76, var_val); /* Direct call ini$ConfigTree$set_node on <self:ConfigTree>*/
}
}
}
}
}
} else {
goto BREAK_label104;
}
BREAK_label: (void)0;
}
BREAK_label104: (void)0;
{
core___core__FileReader___core__stream__Stream__close(var_stream); /* Direct call file$FileReader$close on <var_stream:FileReader>*/
}
RET_LABEL:;
}
/* method ini$ConfigTree$roots for (self: ConfigTree): Array[ConfigNode] */
val* ini___ini__ConfigTree___roots(val* self) {
val* var /* : Array[ConfigNode] */;
val* var1 /* : Array[ConfigNode] */;
var1 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini$ConfigTree$set_array for (self: ConfigTree, String, nullable String) */
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
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
var_key = p0;
var_value = p1;
{
var = ((long(*)(val* self))(var_key->class->vft[COLOR_core__abstract_text__Text__length]))(var_key); /* length on <var_key:String>*/
}
{
{ /* Inline kernel$Int$- (var,2l) on <var:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var3 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 238);
fatal_exit(1);
} else {
{ /* Inline ini$ConfigNode$children (var7) on <var7:nullable ConfigNode> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var10 = var7->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var7:nullable ConfigNode> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var12 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ".";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
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
var21 = core__flat___Int___core__abstract_text__Object__to_s(var_len);
}
((struct instance_core__NativeArray*)var12)->values[2]=var21;
{
var22 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
ini___ini__ConfigTree___set_node(self, var22, var_value); /* Direct call ini$ConfigTree$set_node on <self:ConfigTree>*/
}
RET_LABEL:;
}
/* method ini$ConfigTree$set_node for (self: ConfigTree, String, nullable String) */
void ini___ini__ConfigTree___set_node(val* self, val* p0, val* p1) {
val* var_key /* var key: String */;
val* var_value /* var value: nullable String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : Array[String] */;
val* var8 /* : Array[nullable Object] */;
val* var_parts /* var parts: Array[String] */;
val* var9 /* : nullable Object */;
val* var_k /* var k: String */;
val* var10 /* : nullable ConfigNode */;
val* var_root /* var root: nullable ConfigNode */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : ConfigNode */;
short int var18 /* : Bool */;
val* var20 /* : Array[ConfigNode] */;
val* var22 /* : Array[ConfigNode] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var26 /* : nullable ConfigNode */;
val* var_node /* var node: nullable ConfigNode */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : ConfigNode */;
val* var35 /* : HashMap[String, ConfigNode] */;
val* var37 /* : HashMap[String, ConfigNode] */;
val* var38 /* : String */;
val* var40 /* : String */;
short int var41 /* : Bool */;
var_key = p0;
var_value = p1;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = ".";
var3 = (val*)(1l<<2|1);
var4 = (val*)(1l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
var7 = core__string_search___Text___split(var_key, var);
}
{
var8 = core___core__AbstractArrayRead___reversed(var7);
}
var_parts = var8;
{
var9 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
var_k = var9;
{
var10 = ini___ini__ConfigTree___get_root(self, var_k);
}
var_root = var10;
if (var_root == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_root,((val*)NULL)) on <var_root:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_root,var_other) on <var_root:nullable ConfigNode(ConfigNode)> */
var16 = var_root == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var17 = NEW_ini__ConfigNode(&type_ini__ConfigNode);
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_ini__ConfigNode__name_61d]))(var17, var_k); /* name= on <var17:ConfigNode>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_core__kernel__Object__init]))(var17); /* init on <var17:ConfigNode>*/
}
var_root = var17;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
if (var18){
{
{ /* Inline ini$ConfigNode$value= (var_root,var_value) on <var_root:nullable ConfigNode(ConfigNode)> */
var_root->attrs[COLOR_ini__ConfigNode___value].val = var_value; /* _value on <var_root:nullable ConfigNode(ConfigNode)> */
RET_LABEL19:(void)0;
}
}
} else {
}
{
{ /* Inline ini$ConfigTree$roots (self) on <self:ConfigTree> */
var22 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var20, var_root); /* Direct call array$Array$add on <var20:Array[ConfigNode]>*/
}
} else {
}
for(;;) {
{
var23 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
var24 = !var23;
if (var24){
{
var25 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
var_k = var25;
{
var26 = ini___ini__ConfigNode___get_child(var_root, var_k);
}
var_node = var26;
if (var_node == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ConfigNode(ConfigNode)> */
var32 = var_node == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
var33 = NEW_ini__ConfigNode(&type_ini__ConfigNode);
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_ini__ConfigNode__name_61d]))(var33, var_k); /* name= on <var33:ConfigNode>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:ConfigNode>*/
}
var_node = var33;
{
{ /* Inline ini$ConfigNode$parent= (var_node,var_root) on <var_node:nullable ConfigNode(ConfigNode)> */
var_node->attrs[COLOR_ini__ConfigNode___parent].val = var_root; /* _parent on <var_node:nullable ConfigNode(ConfigNode)> */
RET_LABEL34:(void)0;
}
}
{
{ /* Inline ini$ConfigNode$children (var_root) on <var_root:nullable ConfigNode(ConfigNode)> */
var37 = var_root->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var_root:nullable ConfigNode(ConfigNode)> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline ini$ConfigNode$name (var_node) on <var_node:nullable ConfigNode(ConfigNode)> */
var40 = var_node->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <var_node:nullable ConfigNode(ConfigNode)> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var35, var38, var_node); /* Direct call hash_collection$HashMap$[]= on <var35:HashMap[String, ConfigNode]>*/
}
} else {
}
{
var41 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
if (var41){
{
{ /* Inline ini$ConfigNode$value= (var_node,var_value) on <var_node:nullable ConfigNode(ConfigNode)> */
var_node->attrs[COLOR_ini__ConfigNode___value].val = var_value; /* _value on <var_node:nullable ConfigNode(ConfigNode)> */
RET_LABEL42:(void)0;
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
/* method ini$ConfigTree$get_node for (self: ConfigTree, String): nullable ConfigNode */
val* ini___ini__ConfigTree___get_node(val* self, val* p0) {
val* var /* : nullable ConfigNode */;
val* var_key /* var key: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : Array[String] */;
val* var9 /* : Array[nullable Object] */;
val* var_parts /* var parts: Array[String] */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable ConfigNode */;
val* var_node /* var node: nullable ConfigNode */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable ConfigNode */;
var_key = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".";
var4 = (val*)(1l<<2|1);
var5 = (val*)(1l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = core__string_search___Text___split(var_key, var1);
}
{
var9 = core___core__AbstractArrayRead___reversed(var8);
}
var_parts = var9;
{
var10 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var11 = ini___ini__ConfigTree___get_root(self, var10);
}
var_node = var11;
for(;;) {
if (var_node == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ConfigNode> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ConfigNode(ConfigNode)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_ = var13;
if (var13){
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_parts);
}
var19 = !var18;
var12 = var19;
} else {
var12 = var_;
}
if (var12){
{
var20 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_parts);
}
{
var21 = ini___ini__ConfigNode___get_child(var_node, var20);
}
var_node = var21;
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
/* method ini$ConfigTree$get_root for (self: ConfigTree, String): nullable ConfigNode */
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
{ /* Inline ini$ConfigTree$roots (self) on <self:ConfigTree> */
var3 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline ini$ConfigNode$name (var_root) on <var_root:ConfigNode> */
var10 = var_root->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <var_root:ConfigNode> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method ini$ConfigTree$leaves for (self: ConfigTree): Array[ConfigNode] */
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
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[ConfigNode]>*/
}
var_res = var1;
var2 = NEW_core__Array(&type_core__Array__ini__ConfigNode);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[ConfigNode]>*/
}
var_todo = var2;
{
{ /* Inline ini$ConfigTree$roots (self) on <self:ConfigTree> */
var5 = self->attrs[COLOR_ini__ConfigTree___roots].val; /* _roots on <self:ConfigTree> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _roots");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 231);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var3); /* Direct call array$Array$add_all on <var_todo:Array[ConfigNode]>*/
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
{ /* Inline ini$ConfigNode$children (var_node) on <var_node:ConfigNode> */
var11 = var_node->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var_node:ConfigNode> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_node); /* Direct call array$Array$add on <var_res:Array[ConfigNode]>*/
}
} else {
{
{ /* Inline ini$ConfigNode$children (var_node) on <var_node:ConfigNode> */
var15 = var_node->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <var_node:ConfigNode> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var16); /* Direct call array$Array$add_all on <var_todo:Array[ConfigNode]>*/
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
/* method ini$ConfigNode$parent for (self: ConfigNode): nullable ConfigNode */
val* ini___ini__ConfigNode___parent(val* self) {
val* var /* : nullable ConfigNode */;
val* var1 /* : nullable ConfigNode */;
var1 = self->attrs[COLOR_ini__ConfigNode___parent].val; /* _parent on <self:ConfigNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ini$ConfigNode$parent= for (self: ConfigNode, nullable ConfigNode) */
void ini___ini__ConfigNode___parent_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigNode___parent].val = p0; /* _parent on <self:ConfigNode> */
RET_LABEL:;
}
/* method ini$ConfigNode$children for (self: ConfigNode): HashMap[String, ConfigNode] */
val* ini___ini__ConfigNode___children(val* self) {
val* var /* : HashMap[String, ConfigNode] */;
val* var1 /* : HashMap[String, ConfigNode] */;
var1 = self->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <self:ConfigNode> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _children");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 304);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini$ConfigNode$name for (self: ConfigNode): String */
val* ini___ini__ConfigNode___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <self:ConfigNode> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ini$ConfigNode$name= for (self: ConfigNode, String) */
void ini___ini__ConfigNode___name_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigNode___name].val = p0; /* _name on <self:ConfigNode> */
RET_LABEL:;
}
/* method ini$ConfigNode$value for (self: ConfigNode): nullable String */
val* ini___ini__ConfigNode___value(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_ini__ConfigNode___value].val; /* _value on <self:ConfigNode> */
var = var1;
RET_LABEL:;
return var;
}
/* method ini$ConfigNode$value= for (self: ConfigNode, nullable String) */
void ini___ini__ConfigNode___value_61d(val* self, val* p0) {
self->attrs[COLOR_ini__ConfigNode___value].val = p0; /* _value on <self:ConfigNode> */
RET_LABEL:;
}
/* method ini$ConfigNode$key for (self: ConfigNode): String */
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
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable ConfigNode */;
val* var24 /* : nullable ConfigNode */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
{
{ /* Inline ini$ConfigNode$parent (self) on <self:ConfigNode> */
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
{ /* Inline kernel$Object$== (var1,((val*)NULL)) on <var1:nullable ConfigNode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable ConfigNode(ConfigNode)> */
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
{ /* Inline ini$ConfigNode$name (self) on <self:ConfigNode> */
var12 = self->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <self:ConfigNode> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var13 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ".";
var18 = (val*)(1l<<2|1);
var19 = (val*)(1l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[1]=var15;
} else {
var13 = varonce;
varonce = NULL;
}
{
{ /* Inline ini$ConfigNode$parent (self) on <self:ConfigNode> */
var24 = self->attrs[COLOR_ini__ConfigNode___parent].val; /* _parent on <self:ConfigNode> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 312);
fatal_exit(1);
} else {
var25 = ini___ini__ConfigNode___key(var22);
}
((struct instance_core__NativeArray*)var13)->values[0]=var25;
{
{ /* Inline ini$ConfigNode$name (self) on <self:ConfigNode> */
var28 = self->attrs[COLOR_ini__ConfigNode___name].val; /* _name on <self:ConfigNode> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_ini, 305);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
((struct instance_core__NativeArray*)var13)->values[2]=var26;
{
var29 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ini$ConfigNode$get_child for (self: ConfigNode, String): nullable ConfigNode */
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
{ /* Inline ini$ConfigNode$children (self) on <self:ConfigNode> */
var3 = self->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <self:ConfigNode> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline ini$ConfigNode$children (self) on <self:ConfigNode> */
var7 = self->attrs[COLOR_ini__ConfigNode___children].val; /* _children on <self:ConfigNode> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method ini$ConfigNode$init for (self: ConfigNode) */
void ini___ini__ConfigNode___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_ini___ini__ConfigNode___core__kernel__Object__init]))(self); /* init on <self:ConfigNode>*/
}
RET_LABEL:;
}
