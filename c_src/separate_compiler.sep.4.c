#include "separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: SeparateCompilerVisitor, RuntimeVariable): String */
val* separate_compiler__SeparateCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var_res /* var res: String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var22 /* : MType */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
short int var50 /* : Bool */;
val* var51 /* : MType */;
val* var53 /* : MType */;
short int var54 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var55 /* : MType */;
val* var57 /* : MType */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name;
val* var61 /* : MClass */;
val* var63 /* : MClass */;
val* var64 /* : MClassKind */;
val* var66 /* : MClassKind */;
val* var67 /* : MClassKind */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : MType */;
val* var81 /* : MType */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
val* var86 /* : MClass */;
val* var88 /* : MClass */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : Array[Object] */;
long var95 /* : Int */;
val* var96 /* : NativeArray[Object] */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
val* var103 /* : MType */;
val* var105 /* : MType */;
val* var106 /* : String */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
long var114 /* : Int */;
val* var115 /* : FlatString */;
val* var116 /* : MType */;
val* var118 /* : MType */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : Array[Object] */;
long var126 /* : Int */;
val* var127 /* : NativeArray[Object] */;
val* var128 /* : String */;
var_value = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = 14;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var1);
}
var_res = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "const char* ";
var9 = 12;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ";";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var22 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_abstract_compiler__MType__ctype]))(var20) /* ctype on <var20:MType>*/;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "val*";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var30 = string__FlatString___61d_61d(var23, var25);
var29 = var30;
}
if (var29){
if (varonce31) {
var32 = varonce31;
} else {
var33 = " = ";
var34 = 3;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = " == NULL ? \"null\" : ";
var39 = 20;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "->type->name;";
var44 = 13;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 6;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var32;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var_value;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[4] = (val*) var_value;
((struct instance_array__NativeArray*)var48)->values[5] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var53 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
/* <var51:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var51->type->table_size) {
var54 = 0;
} else {
var54 = var51->type->type_table[cltype] == idtype;
}
var_ = var54;
if (var54){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var57 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
/* <var55:MType> isa MClassType */
cltype59 = type_model__MClassType.color;
idtype60 = type_model__MClassType.id;
if(cltype59 >= var55->type->table_size) {
var58 = 0;
} else {
var58 = var55->type->type_table[cltype59] == idtype60;
}
if (unlikely(!var58)) {
var_class_name = var55 == NULL ? "null" : var55->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1481);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var55) on <var55:MType(MClassType)> */
var63 = var55->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var55:MType(MClassType)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var61) on <var61:MClass> */
var66 = var61->attrs[COLOR_model__MClass___kind].val; /* _kind on <var61:MClass> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var64,var67) on <var64:MClassKind> */
var_other = var67;
{
{ /* Inline kernel#Object#is_same_instance (var64,var_other) on <var64:MClassKind> */
var73 = var64 == var_other;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
var50 = var68;
} else {
var50 = var_;
}
if (var50){
if (varonce74) {
var75 = varonce74;
} else {
var76 = " = \"";
var77 = 4;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var81 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:MType> isa MClassType */
cltype83 = type_model__MClassType.color;
idtype84 = type_model__MClassType.id;
if(cltype83 >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype83] == idtype84;
}
if (unlikely(!var82)) {
var_class_name85 = var79 == NULL ? "null" : var79->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1482);
show_backtrace(1);
}
{
{ /* Inline model#MClassType#mclass (var79) on <var79:MType(MClassType)> */
var88 = var79->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var79:MType(MClassType)> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (varonce89) {
var90 = varonce89;
} else {
var91 = "\";";
var92 = 2;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
var94 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var94 = array_instance Array[Object] */
var95 = 4;
var96 = NEW_array__NativeArray(var95, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var96)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var96)->values[1] = (val*) var75;
((struct instance_array__NativeArray*)var96)->values[2] = (val*) var86;
((struct instance_array__NativeArray*)var96)->values[3] = (val*) var90;
{
((void (*)(val*, val*, long))(var94->class->vft[COLOR_array__Array__with_native]))(var94, var96, var95) /* with_native on <var94:Array[Object]>*/;
}
}
{
var97 = ((val* (*)(val*))(var94->class->vft[COLOR_string__Object__to_s]))(var94) /* to_s on <var94:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
if (varonce98) {
var99 = varonce98;
} else {
var100 = "type_";
var101 = 5;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var105 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = ((val* (*)(val*))(var103->class->vft[COLOR_abstract_compiler__MType__c_name]))(var103) /* c_name on <var103:MType>*/;
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 2;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var99;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var106;
{
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce111) {
var112 = varonce111;
} else {
var113 = " = type_";
var114 = 8;
var115 = string__NativeString__to_s_with_length(var113, var114);
var112 = var115;
varonce111 = var112;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var118 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = ((val* (*)(val*))(var116->class->vft[COLOR_abstract_compiler__MType__c_name]))(var116) /* c_name on <var116:MType>*/;
}
if (varonce120) {
var121 = varonce120;
} else {
var122 = ".name;";
var123 = 6;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
var125 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var125 = array_instance Array[Object] */
var126 = 4;
var127 = NEW_array__NativeArray(var126, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var127)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var127)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var127)->values[2] = (val*) var119;
((struct instance_array__NativeArray*)var127)->values[3] = (val*) var121;
{
((void (*)(val*, val*, long))(var125->class->vft[COLOR_array__Array__with_native]))(var125, var127, var126) /* with_native on <var125:Array[Object]>*/;
}
}
{
var128 = ((val* (*)(val*))(var125->class->vft[COLOR_string__Object__to_s]))(var125) /* to_s on <var125:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#class_name_string for (self: Object, RuntimeVariable): String */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateCompilerVisitor__class_name_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: SeparateCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : MType */;
val* var20 /* : MType */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var29 /* : MType */;
val* var31 /* : MType */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MType */;
val* var46 /* : MType */;
val* var47 /* : MType */;
val* var49 /* : MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other53 /* var other: nullable Object */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : Array[Object] */;
long var73 /* : Int */;
val* var74 /* : NativeArray[Object] */;
val* var75 /* : String */;
val* var76 /* : MType */;
val* var78 /* : MType */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
val* var96 /* : MType */;
val* var98 /* : MType */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : MType */;
val* var106 /* : MType */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
val* var116 /* : MType */;
val* var118 /* : MType */;
short int var119 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
val* var125 /* : String */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : FlatString */;
val* var151 /* : Array[Object] */;
long var152 /* : Int */;
val* var153 /* : NativeArray[Object] */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
long var158 /* : Int */;
val* var159 /* : FlatString */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : FlatString */;
val* var165 /* : Array[Object] */;
long var166 /* : Int */;
val* var167 /* : NativeArray[Object] */;
val* var168 /* : String */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
val* var174 /* : MType */;
val* var176 /* : MType */;
val* var177 /* : RuntimeVariable */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
long var181 /* : Int */;
val* var182 /* : FlatString */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : NativeString */;
long var195 /* : Int */;
val* var196 /* : FlatString */;
short int var197 /* : Bool */;
short int var_maybe_null /* var maybe_null: Bool */;
val* var198 /* : Array[String] */;
val* var_test /* var test: Array[String] */;
val* var199 /* : MType */;
val* var201 /* : MType */;
val* var_t1 /* var t1: MType */;
short int var202 /* : Bool */;
int cltype203;
int idtype204;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var212 /* : NativeArray[Object] */;
val* var213 /* : String */;
val* var214 /* : MType */;
val* var216 /* : MType */;
short int var217 /* : Bool */;
val* var218 /* : MType */;
val* var220 /* : MType */;
val* var_t2 /* var t2: MType */;
short int var221 /* : Bool */;
int cltype222;
int idtype223;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
long var227 /* : Int */;
val* var228 /* : FlatString */;
val* var229 /* : Array[Object] */;
long var230 /* : Int */;
val* var231 /* : NativeArray[Object] */;
val* var232 /* : String */;
val* var233 /* : MType */;
val* var235 /* : MType */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var_incompatible /* var incompatible: Bool */;
val* var238 /* : String */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : FlatString */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var_primitive /* var primitive: nullable Object */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var253 /* : Bool */;
short int var255 /* : Bool */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
long var260 /* : Int */;
val* var261 /* : FlatString */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
short int var265 /* : Bool */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : FlatString */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : Array[Object] */;
long var281 /* : Int */;
val* var282 /* : NativeArray[Object] */;
val* var283 /* : String */;
short int var284 /* : Bool */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : NativeString */;
long var289 /* : Int */;
val* var290 /* : FlatString */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
long var301 /* : Int */;
val* var302 /* : FlatString */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : NativeString */;
long var306 /* : Int */;
val* var307 /* : FlatString */;
val* var308 /* : Array[Object] */;
long var309 /* : Int */;
val* var310 /* : NativeArray[Object] */;
val* var311 /* : String */;
short int var312 /* : Bool */;
val* var313 /* : null */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
long var317 /* : Int */;
val* var318 /* : FlatString */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : NativeString */;
long var322 /* : Int */;
val* var323 /* : FlatString */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : FlatString */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
val* var339 /* : Array[Object] */;
long var340 /* : Int */;
val* var341 /* : NativeArray[Object] */;
val* var342 /* : String */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : NativeString */;
long var346 /* : Int */;
val* var347 /* : FlatString */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : NativeString */;
long var351 /* : Int */;
val* var352 /* : FlatString */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : NativeString */;
long var356 /* : Int */;
val* var357 /* : FlatString */;
val* var358 /* : Array[Object] */;
long var359 /* : Int */;
val* var360 /* : NativeArray[Object] */;
val* var361 /* : String */;
val* var362 /* : null */;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
short int var366 /* : Bool */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : NativeString */;
long var372 /* : Int */;
val* var373 /* : FlatString */;
val* var374 /* : String */;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
long var378 /* : Int */;
val* var379 /* : FlatString */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : NativeString */;
long var383 /* : Int */;
val* var384 /* : FlatString */;
val* var385 /* : String */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
long var389 /* : Int */;
val* var390 /* : FlatString */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
long var394 /* : Int */;
val* var395 /* : FlatString */;
val* var396 /* : Array[Object] */;
long var397 /* : Int */;
val* var398 /* : NativeArray[Object] */;
val* var399 /* : String */;
short int var400 /* : Bool */;
short int var401 /* : Bool */;
short int var_402 /* var : Bool */;
short int var403 /* : Bool */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : FlatString */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
long var412 /* : Int */;
val* var413 /* : FlatString */;
val* var414 /* : Array[Object] */;
long var415 /* : Int */;
val* var416 /* : NativeArray[Object] */;
val* var417 /* : String */;
val* var418 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var419 /* : AbstractCompiler */;
val* var421 /* : AbstractCompiler */;
val* var422 /* : HashMap[MClass, Int] */;
val* var424 /* : HashMap[MClass, Int] */;
val* var425 /* : HashMapIterator[Object, nullable Object] */;
short int var426 /* : Bool */;
val* var427 /* : Object */;
val* var_t /* var t: MClass */;
val* var428 /* : nullable Object */;
long var_v /* var v: Int */;
long var429 /* : Int */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : NativeString */;
long var433 /* : Int */;
val* var434 /* : FlatString */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : NativeString */;
long var438 /* : Int */;
val* var439 /* : FlatString */;
static val* varonce440;
val* var441 /* : String */;
char* var442 /* : NativeString */;
long var443 /* : Int */;
val* var444 /* : FlatString */;
val* var445 /* : String */;
static val* varonce446;
val* var447 /* : String */;
char* var448 /* : NativeString */;
long var449 /* : Int */;
val* var450 /* : FlatString */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : NativeString */;
long var454 /* : Int */;
val* var455 /* : FlatString */;
val* var456 /* : String */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
long var460 /* : Int */;
val* var461 /* : FlatString */;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : NativeString */;
long var465 /* : Int */;
val* var466 /* : FlatString */;
val* var467 /* : Array[Object] */;
long var468 /* : Int */;
val* var469 /* : NativeArray[Object] */;
val* var470 /* : Object */;
val* var471 /* : String */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
long var475 /* : Int */;
val* var476 /* : FlatString */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : NativeString */;
long var480 /* : Int */;
val* var481 /* : FlatString */;
val* var482 /* : String */;
static val* varonce483;
val* var484 /* : String */;
char* var485 /* : NativeString */;
long var486 /* : Int */;
val* var487 /* : FlatString */;
val* var488 /* : Array[Object] */;
long var489 /* : Int */;
val* var490 /* : NativeArray[Object] */;
val* var491 /* : String */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : NativeString */;
long var495 /* : Int */;
val* var496 /* : FlatString */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
long var500 /* : Int */;
val* var501 /* : FlatString */;
static val* varonce502;
val* var503 /* : String */;
char* var504 /* : NativeString */;
long var505 /* : Int */;
val* var506 /* : FlatString */;
val* var507 /* : Array[Object] */;
long var508 /* : Int */;
val* var509 /* : NativeArray[Object] */;
val* var510 /* : String */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : NativeString */;
long var514 /* : Int */;
val* var515 /* : FlatString */;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : NativeString */;
long var519 /* : Int */;
val* var520 /* : FlatString */;
static val* varonce521;
val* var522 /* : String */;
char* var523 /* : NativeString */;
long var524 /* : Int */;
val* var525 /* : FlatString */;
static val* varonce526;
val* var527 /* : String */;
char* var528 /* : NativeString */;
long var529 /* : Int */;
val* var530 /* : FlatString */;
val* var531 /* : String */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
long var535 /* : Int */;
val* var536 /* : FlatString */;
val* var537 /* : Array[Object] */;
long var538 /* : Int */;
val* var539 /* : NativeArray[Object] */;
val* var540 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_compiler__MType__ctype]))(var4) /* ctype on <var4:MType>*/;
}
if (varonce) {
var8 = varonce;
} else {
var9 = "val*";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var7,var8) on <var7:String> */
var_other = var8;
{
var16 = ((short int (*)(val*, val*))(var7->class->vft[COLOR_kernel__Object___61d_61d]))(var7, var_other) /* == on <var7:String>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var20 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_compiler__MType__ctype]))(var18) /* ctype on <var18:MType>*/;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
{
var28 = string__FlatString___61d_61d(var21, var23);
var27 = var28;
}
var3 = var27;
} else {
var3 = var_;
}
if (var3){
var_tmp = var_value1;
var_value1 = var_value2;
var_value2 = var_tmp;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var31 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_compiler__MType__ctype]))(var29) /* ctype on <var29:MType>*/;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "val*";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
{
{ /* Inline kernel#Object#!= (var32,var34) on <var32:String> */
var_other = var34;
{
var42 = ((short int (*)(val*, val*))(var32->class->vft[COLOR_kernel__Object___61d_61d]))(var32, var_other) /* == on <var32:String>*/;
var41 = var42;
}
var43 = !var41;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var46 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var49 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var44,var47) on <var44:MType> */
var_other53 = var47;
{
{ /* Inline kernel#Object#is_same_instance (var44,var_other53) on <var44:MType> */
var56 = var44 == var_other53;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
if (varonce57) {
var58 = varonce57;
} else {
var59 = " = ";
var60 = 3;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = " == ";
var65 = 4;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = ";";
var70 = 1;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var72 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var72 = array_instance Array[Object] */
var73 = 6;
var74 = NEW_array__NativeArray(var73, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var74)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var74)->values[1] = (val*) var58;
((struct instance_array__NativeArray*)var74)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var74)->values[3] = (val*) var63;
((struct instance_array__NativeArray*)var74)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var74)->values[5] = (val*) var68;
{
((void (*)(val*, val*, long))(var72->class->vft[COLOR_array__Array__with_native]))(var72, var74, var73) /* with_native on <var72:Array[Object]>*/;
}
}
{
var75 = ((val* (*)(val*))(var72->class->vft[COLOR_string__Object__to_s]))(var72) /* to_s on <var72:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var78 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_abstract_compiler__MType__ctype]))(var76) /* ctype on <var76:MType>*/;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "val*";
var83 = 4;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
{ /* Inline kernel#Object#!= (var79,var81) on <var79:String> */
var_other = var81;
{
var89 = ((short int (*)(val*, val*))(var79->class->vft[COLOR_kernel__Object___61d_61d]))(var79, var_other) /* == on <var79:String>*/;
var88 = var89;
}
var90 = !var88;
var86 = var90;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
if (varonce91) {
var92 = varonce91;
} else {
var93 = " = 0; /* incompatible types ";
var94 = 28;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var98 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " vs. ";
var102 = 5;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var106 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "*/";
var110 = 2;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 6;
var114 = NEW_array__NativeArray(var113, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var114)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var114)->values[1] = (val*) var92;
((struct instance_array__NativeArray*)var114)->values[2] = (val*) var96;
((struct instance_array__NativeArray*)var114)->values[3] = (val*) var100;
((struct instance_array__NativeArray*)var114)->values[4] = (val*) var104;
((struct instance_array__NativeArray*)var114)->values[5] = (val*) var108;
{
((void (*)(val*, val*, long))(var112->class->vft[COLOR_array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var112->class->vft[COLOR_string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var118 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
/* <var116:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var116->type->table_size) {
var119 = 0;
} else {
var119 = var116->type->type_table[cltype] == idtype;
}
if (unlikely(!var119)) {
var_class_name = var116 == NULL ? "null" : var116->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1504);
show_backtrace(1);
}
var_mtype1 = var116;
if (varonce120) {
var121 = varonce120;
} else {
var122 = "class_";
var123 = 6;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
var125 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 2;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var125;
{
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var129); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = " = (";
var133 = 4;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = " != NULL) && (";
var138 = 14;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = "->class == &class_";
var143 = 18;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
var145 = ((val* (*)(val*))(var_mtype1->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_mtype1) /* c_name on <var_mtype1:MClassType>*/;
}
if (varonce146) {
var147 = varonce146;
} else {
var148 = ");";
var149 = 2;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var151 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var151 = array_instance Array[Object] */
var152 = 8;
var153 = NEW_array__NativeArray(var152, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var153)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var153)->values[1] = (val*) var131;
((struct instance_array__NativeArray*)var153)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var153)->values[3] = (val*) var136;
((struct instance_array__NativeArray*)var153)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var153)->values[5] = (val*) var141;
((struct instance_array__NativeArray*)var153)->values[6] = (val*) var145;
((struct instance_array__NativeArray*)var153)->values[7] = (val*) var147;
{
((void (*)(val*, val*, long))(var151->class->vft[COLOR_array__Array__with_native]))(var151, var153, var152) /* with_native on <var151:Array[Object]>*/;
}
}
{
var154 = ((val* (*)(val*))(var151->class->vft[COLOR_string__Object__to_s]))(var151) /* to_s on <var151:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var154); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce155) {
var156 = varonce155;
} else {
var157 = "if (";
var158 = 4;
var159 = string__NativeString__to_s_with_length(var157, var158);
var156 = var159;
varonce155 = var156;
}
if (varonce160) {
var161 = varonce160;
} else {
var162 = ") {";
var163 = 3;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
var165 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var165 = array_instance Array[Object] */
var166 = 3;
var167 = NEW_array__NativeArray(var166, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var167)->values[0] = (val*) var156;
((struct instance_array__NativeArray*)var167)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var167)->values[2] = (val*) var161;
{
((void (*)(val*, val*, long))(var165->class->vft[COLOR_array__Array__with_native]))(var165, var167, var166) /* with_native on <var165:Array[Object]>*/;
}
}
{
var168 = ((val* (*)(val*))(var165->class->vft[COLOR_string__Object__to_s]))(var165) /* to_s on <var165:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var168); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce169) {
var170 = varonce169;
} else {
var171 = " = (";
var172 = 4;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var176 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
var177 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_value2, var174);
}
if (varonce178) {
var179 = varonce178;
} else {
var180 = " == ";
var181 = 4;
var182 = string__NativeString__to_s_with_length(var180, var181);
var179 = var182;
varonce178 = var179;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = ");";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 6;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var170;
((struct instance_array__NativeArray*)var190)->values[2] = (val*) var177;
((struct instance_array__NativeArray*)var190)->values[3] = (val*) var179;
((struct instance_array__NativeArray*)var190)->values[4] = (val*) var_value1;
((struct instance_array__NativeArray*)var190)->values[5] = (val*) var184;
{
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var191 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
if (varonce192) {
var193 = varonce192;
} else {
var194 = "}";
var195 = 1;
var196 = string__NativeString__to_s_with_length(var194, var195);
var193 = var196;
varonce192 = var193;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var193); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
} else {
}
var197 = 1;
var_maybe_null = var197;
var198 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var198); /* Direct call array#Array#init on <var198:Array[String]>*/
}
var_test = var198;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var201 = var_value1->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
var_t1 = var199;
/* <var_t1:MType> isa MNullableType */
cltype203 = type_model__MNullableType.color;
idtype204 = type_model__MNullableType.id;
if(cltype203 >= var_t1->type->table_size) {
var202 = 0;
} else {
var202 = var_t1->type->type_table[cltype203] == idtype204;
}
if (var202){
if (varonce205) {
var206 = varonce205;
} else {
var207 = " != NULL";
var208 = 8;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var210 = array_instance Array[Object] */
var211 = 2;
var212 = NEW_array__NativeArray(var211, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var212)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var212)->values[1] = (val*) var206;
{
((void (*)(val*, val*, long))(var210->class->vft[COLOR_array__Array__with_native]))(var210, var212, var211) /* with_native on <var210:Array[Object]>*/;
}
}
{
var213 = ((val* (*)(val*))(var210->class->vft[COLOR_string__Object__to_s]))(var210) /* to_s on <var210:Array[Object]>*/;
}
{
array__Array__add(var_test, var213); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MNullableType#mtype (var_t1) on <var_t1:MType(MNullableType)> */
var216 = var_t1->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_t1:MType(MNullableType)> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
var_t1 = var214;
} else {
var217 = 0;
var_maybe_null = var217;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var220 = var_value2->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
var_t2 = var218;
/* <var_t2:MType> isa MNullableType */
cltype222 = type_model__MNullableType.color;
idtype223 = type_model__MNullableType.id;
if(cltype222 >= var_t2->type->table_size) {
var221 = 0;
} else {
var221 = var_t2->type->type_table[cltype222] == idtype223;
}
if (var221){
if (varonce224) {
var225 = varonce224;
} else {
var226 = " != NULL";
var227 = 8;
var228 = string__NativeString__to_s_with_length(var226, var227);
var225 = var228;
varonce224 = var225;
}
var229 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var229 = array_instance Array[Object] */
var230 = 2;
var231 = NEW_array__NativeArray(var230, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var231)->values[0] = (val*) var_value2;
((struct instance_array__NativeArray*)var231)->values[1] = (val*) var225;
{
((void (*)(val*, val*, long))(var229->class->vft[COLOR_array__Array__with_native]))(var229, var231, var230) /* with_native on <var229:Array[Object]>*/;
}
}
{
var232 = ((val* (*)(val*))(var229->class->vft[COLOR_string__Object__to_s]))(var229) /* to_s on <var229:Array[Object]>*/;
}
{
array__Array__add(var_test, var232); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
{
{ /* Inline model#MNullableType#mtype (var_t2) on <var_t2:MType(MNullableType)> */
var235 = var_t2->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_t2:MType(MNullableType)> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
var_t2 = var233;
} else {
var236 = 0;
var_maybe_null = var236;
}
var237 = 0;
var_incompatible = var237;
{
var238 = ((val* (*)(val*))(var_t1->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t1) /* ctype on <var_t1:MType>*/;
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = "val*";
var242 = 4;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
{
{ /* Inline kernel#Object#!= (var238,var240) on <var238:String> */
var_other = var240;
{
var248 = ((short int (*)(val*, val*))(var238->class->vft[COLOR_kernel__Object___61d_61d]))(var238, var_other) /* == on <var238:String>*/;
var247 = var248;
}
var249 = !var247;
var245 = var249;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
if (var244){
var_primitive = var_t1;
{
{ /* Inline kernel#Object#== (var_t1,var_t2) on <var_t1:MType> */
var_other53 = var_t2;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other53) on <var_t1:MType> */
var255 = var_t1 == var_other53;
var253 = var255;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
var251 = var253;
goto RET_LABEL252;
RET_LABEL252:(void)0;
}
var250 = var251;
}
if (var250){
} else {
{
var256 = ((val* (*)(val*))(var_t2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
}
if (varonce257) {
var258 = varonce257;
} else {
var259 = "val*";
var260 = 4;
var261 = string__NativeString__to_s_with_length(var259, var260);
var258 = var261;
varonce257 = var258;
}
{
{ /* Inline kernel#Object#!= (var256,var258) on <var256:String> */
var_other = var258;
{
var266 = ((short int (*)(val*, val*))(var256->class->vft[COLOR_kernel__Object___61d_61d]))(var256, var_other) /* == on <var256:String>*/;
var265 = var266;
}
var267 = !var265;
var263 = var267;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
var262 = var263;
}
if (var262){
var268 = 1;
var_incompatible = var268;
} else {
{
var269 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value2);
}
if (var269){
if (varonce270) {
var271 = varonce270;
} else {
var272 = "->class == ";
var273 = 11;
var274 = string__NativeString__to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
if (varonce275) {
var276 = varonce275;
} else {
var277 = "->class";
var278 = 7;
var279 = string__NativeString__to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
var280 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var280 = array_instance Array[Object] */
var281 = 4;
var282 = NEW_array__NativeArray(var281, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var282)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var282)->values[1] = (val*) var271;
((struct instance_array__NativeArray*)var282)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var282)->values[3] = (val*) var276;
{
((void (*)(val*, val*, long))(var280->class->vft[COLOR_array__Array__with_native]))(var280, var282, var281) /* with_native on <var280:Array[Object]>*/;
}
}
{
var283 = ((val* (*)(val*))(var280->class->vft[COLOR_string__Object__to_s]))(var280) /* to_s on <var280:Array[Object]>*/;
}
{
array__Array__add(var_test, var283); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var284 = 1;
var_incompatible = var284;
}
}
}
} else {
{
var285 = ((val* (*)(val*))(var_t2->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_t2) /* ctype on <var_t2:MType>*/;
}
if (varonce286) {
var287 = varonce286;
} else {
var288 = "val*";
var289 = 4;
var290 = string__NativeString__to_s_with_length(var288, var289);
var287 = var290;
varonce286 = var287;
}
{
{ /* Inline kernel#Object#!= (var285,var287) on <var285:String> */
var_other = var287;
{
var295 = ((short int (*)(val*, val*))(var285->class->vft[COLOR_kernel__Object___61d_61d]))(var285, var_other) /* == on <var285:String>*/;
var294 = var295;
}
var296 = !var294;
var292 = var296;
goto RET_LABEL293;
RET_LABEL293:(void)0;
}
var291 = var292;
}
if (var291){
var_primitive = var_t2;
{
var297 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value1);
}
if (var297){
if (varonce298) {
var299 = varonce298;
} else {
var300 = "->class == ";
var301 = 11;
var302 = string__NativeString__to_s_with_length(var300, var301);
var299 = var302;
varonce298 = var299;
}
if (varonce303) {
var304 = varonce303;
} else {
var305 = "->class";
var306 = 7;
var307 = string__NativeString__to_s_with_length(var305, var306);
var304 = var307;
varonce303 = var304;
}
var308 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var308 = array_instance Array[Object] */
var309 = 4;
var310 = NEW_array__NativeArray(var309, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var310)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var310)->values[1] = (val*) var299;
((struct instance_array__NativeArray*)var310)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var310)->values[3] = (val*) var304;
{
((void (*)(val*, val*, long))(var308->class->vft[COLOR_array__Array__with_native]))(var308, var310, var309) /* with_native on <var308:Array[Object]>*/;
}
}
{
var311 = ((val* (*)(val*))(var308->class->vft[COLOR_string__Object__to_s]))(var308) /* to_s on <var308:Array[Object]>*/;
}
{
array__Array__add(var_test, var311); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
var312 = 1;
var_incompatible = var312;
}
} else {
var313 = NULL;
var_primitive = var313;
}
}
if (var_incompatible){
if (var_maybe_null){
if (varonce314) {
var315 = varonce314;
} else {
var316 = " = ";
var317 = 3;
var318 = string__NativeString__to_s_with_length(var316, var317);
var315 = var318;
varonce314 = var315;
}
if (varonce319) {
var320 = varonce319;
} else {
var321 = " == ";
var322 = 4;
var323 = string__NativeString__to_s_with_length(var321, var322);
var320 = var323;
varonce319 = var320;
}
if (varonce324) {
var325 = varonce324;
} else {
var326 = "; /* incompatible types ";
var327 = 24;
var328 = string__NativeString__to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = " vs. ";
var332 = 5;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = "; but may be NULL*/";
var337 = 19;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
var339 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var339 = array_instance Array[Object] */
var340 = 10;
var341 = NEW_array__NativeArray(var340, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var341)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var341)->values[1] = (val*) var315;
((struct instance_array__NativeArray*)var341)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var341)->values[3] = (val*) var320;
((struct instance_array__NativeArray*)var341)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var341)->values[5] = (val*) var325;
((struct instance_array__NativeArray*)var341)->values[6] = (val*) var_t1;
((struct instance_array__NativeArray*)var341)->values[7] = (val*) var330;
((struct instance_array__NativeArray*)var341)->values[8] = (val*) var_t2;
((struct instance_array__NativeArray*)var341)->values[9] = (val*) var335;
{
((void (*)(val*, val*, long))(var339->class->vft[COLOR_array__Array__with_native]))(var339, var341, var340) /* with_native on <var339:Array[Object]>*/;
}
}
{
var342 = ((val* (*)(val*))(var339->class->vft[COLOR_string__Object__to_s]))(var339) /* to_s on <var339:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var342); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
if (varonce343) {
var344 = varonce343;
} else {
var345 = " = 0; /* incompatible types ";
var346 = 28;
var347 = string__NativeString__to_s_with_length(var345, var346);
var344 = var347;
varonce343 = var344;
}
if (varonce348) {
var349 = varonce348;
} else {
var350 = " vs. ";
var351 = 5;
var352 = string__NativeString__to_s_with_length(var350, var351);
var349 = var352;
varonce348 = var349;
}
if (varonce353) {
var354 = varonce353;
} else {
var355 = "; cannot be NULL */";
var356 = 19;
var357 = string__NativeString__to_s_with_length(var355, var356);
var354 = var357;
varonce353 = var354;
}
var358 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var358 = array_instance Array[Object] */
var359 = 6;
var360 = NEW_array__NativeArray(var359, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var360)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var360)->values[1] = (val*) var344;
((struct instance_array__NativeArray*)var360)->values[2] = (val*) var_t1;
((struct instance_array__NativeArray*)var360)->values[3] = (val*) var349;
((struct instance_array__NativeArray*)var360)->values[4] = (val*) var_t2;
((struct instance_array__NativeArray*)var360)->values[5] = (val*) var354;
{
((void (*)(val*, val*, long))(var358->class->vft[COLOR_array__Array__with_native]))(var358, var360, var359) /* with_native on <var358:Array[Object]>*/;
}
}
{
var361 = ((val* (*)(val*))(var358->class->vft[COLOR_string__Object__to_s]))(var358) /* to_s on <var358:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var361); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
} else {
}
var362 = NULL;
if (var_primitive == NULL) {
var363 = 0; /* is null */
} else {
var363 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_primitive,var362) on <var_primitive:nullable Object(nullable MType)> */
var_other = var362;
{
var367 = ((short int (*)(val*, val*))(var_primitive->class->vft[COLOR_kernel__Object___61d_61d]))(var_primitive, var_other) /* == on <var_primitive:nullable MType(MType)>*/;
var366 = var367;
}
var368 = !var366;
var364 = var368;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
var363 = var364;
}
if (var363){
if (varonce369) {
var370 = varonce369;
} else {
var371 = "((struct instance_";
var372 = 18;
var373 = string__NativeString__to_s_with_length(var371, var372);
var370 = var373;
varonce369 = var370;
}
{
var374 = ((val* (*)(val*))(var_primitive->class->vft[COLOR_separate_compiler__MType__c_instance_name]))(var_primitive) /* c_instance_name on <var_primitive:nullable Object(MType)>*/;
}
if (varonce375) {
var376 = varonce375;
} else {
var377 = "*)";
var378 = 2;
var379 = string__NativeString__to_s_with_length(var377, var378);
var376 = var379;
varonce375 = var376;
}
if (varonce380) {
var381 = varonce380;
} else {
var382 = ")->value == ((struct instance_";
var383 = 30;
var384 = string__NativeString__to_s_with_length(var382, var383);
var381 = var384;
varonce380 = var381;
}
{
var385 = ((val* (*)(val*))(var_primitive->class->vft[COLOR_separate_compiler__MType__c_instance_name]))(var_primitive) /* c_instance_name on <var_primitive:nullable Object(MType)>*/;
}
if (varonce386) {
var387 = varonce386;
} else {
var388 = "*)";
var389 = 2;
var390 = string__NativeString__to_s_with_length(var388, var389);
var387 = var390;
varonce386 = var387;
}
if (varonce391) {
var392 = varonce391;
} else {
var393 = ")->value";
var394 = 8;
var395 = string__NativeString__to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
var396 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var396 = array_instance Array[Object] */
var397 = 9;
var398 = NEW_array__NativeArray(var397, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var398)->values[0] = (val*) var370;
((struct instance_array__NativeArray*)var398)->values[1] = (val*) var374;
((struct instance_array__NativeArray*)var398)->values[2] = (val*) var376;
((struct instance_array__NativeArray*)var398)->values[3] = (val*) var_value1;
((struct instance_array__NativeArray*)var398)->values[4] = (val*) var381;
((struct instance_array__NativeArray*)var398)->values[5] = (val*) var385;
((struct instance_array__NativeArray*)var398)->values[6] = (val*) var387;
((struct instance_array__NativeArray*)var398)->values[7] = (val*) var_value2;
((struct instance_array__NativeArray*)var398)->values[8] = (val*) var392;
{
((void (*)(val*, val*, long))(var396->class->vft[COLOR_array__Array__with_native]))(var396, var398, var397) /* with_native on <var396:Array[Object]>*/;
}
}
{
var399 = ((val* (*)(val*))(var396->class->vft[COLOR_string__Object__to_s]))(var396) /* to_s on <var396:Array[Object]>*/;
}
{
array__Array__add(var_test, var399); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
{
var401 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value1);
}
var_402 = var401;
if (var401){
{
var403 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, var_value2);
}
var400 = var403;
} else {
var400 = var_402;
}
if (var400){
if (varonce404) {
var405 = varonce404;
} else {
var406 = "->class == ";
var407 = 11;
var408 = string__NativeString__to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
if (varonce409) {
var410 = varonce409;
} else {
var411 = "->class";
var412 = 7;
var413 = string__NativeString__to_s_with_length(var411, var412);
var410 = var413;
varonce409 = var410;
}
var414 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var414 = array_instance Array[Object] */
var415 = 4;
var416 = NEW_array__NativeArray(var415, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var416)->values[0] = (val*) var_value1;
((struct instance_array__NativeArray*)var416)->values[1] = (val*) var405;
((struct instance_array__NativeArray*)var416)->values[2] = (val*) var_value2;
((struct instance_array__NativeArray*)var416)->values[3] = (val*) var410;
{
((void (*)(val*, val*, long))(var414->class->vft[COLOR_array__Array__with_native]))(var414, var416, var415) /* with_native on <var414:Array[Object]>*/;
}
}
{
var417 = ((val* (*)(val*))(var414->class->vft[COLOR_string__Object__to_s]))(var414) /* to_s on <var414:Array[Object]>*/;
}
{
array__Array__add(var_test, var417); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
var418 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var418); /* Direct call array#Array#init on <var418:Array[String]>*/
}
var_s = var418;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var421 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var421 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (var419) on <var419:AbstractCompiler(SeparateCompiler)> */
var424 = var419->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <var419:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var424 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 211);
show_backtrace(1);
}
var422 = var424;
RET_LABEL423:(void)0;
}
}
{
var425 = hash_collection__HashMap__iterator(var422);
}
for(;;) {
{
var426 = hash_collection__HashMapIterator__is_ok(var425);
}
if(!var426) break;
{
var427 = hash_collection__HashMapIterator__key(var425);
}
var_t = var427;
{
var428 = hash_collection__HashMapIterator__item(var425);
}
var429 = ((struct instance_kernel__Int*)var428)->value; /* autounbox from nullable Object to Int */;
var_v = var429;
if (varonce430) {
var431 = varonce430;
} else {
var432 = "(";
var433 = 1;
var434 = string__NativeString__to_s_with_length(var432, var433);
var431 = var434;
varonce430 = var431;
}
if (varonce435) {
var436 = varonce435;
} else {
var437 = "->class->box_kind == ";
var438 = 21;
var439 = string__NativeString__to_s_with_length(var437, var438);
var436 = var439;
varonce435 = var436;
}
if (varonce440) {
var441 = varonce440;
} else {
var442 = " && ((struct instance_";
var443 = 22;
var444 = string__NativeString__to_s_with_length(var442, var443);
var441 = var444;
varonce440 = var441;
}
{
var445 = separate_compiler__MClass__c_instance_name(var_t);
}
if (varonce446) {
var447 = varonce446;
} else {
var448 = "*)";
var449 = 2;
var450 = string__NativeString__to_s_with_length(var448, var449);
var447 = var450;
varonce446 = var447;
}
if (varonce451) {
var452 = varonce451;
} else {
var453 = ")->value == ((struct instance_";
var454 = 30;
var455 = string__NativeString__to_s_with_length(var453, var454);
var452 = var455;
varonce451 = var452;
}
{
var456 = separate_compiler__MClass__c_instance_name(var_t);
}
if (varonce457) {
var458 = varonce457;
} else {
var459 = "*)";
var460 = 2;
var461 = string__NativeString__to_s_with_length(var459, var460);
var458 = var461;
varonce457 = var458;
}
if (varonce462) {
var463 = varonce462;
} else {
var464 = ")->value)";
var465 = 9;
var466 = string__NativeString__to_s_with_length(var464, var465);
var463 = var466;
varonce462 = var463;
}
var467 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var467 = array_instance Array[Object] */
var468 = 13;
var469 = NEW_array__NativeArray(var468, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var469)->values[0] = (val*) var431;
((struct instance_array__NativeArray*)var469)->values[1] = (val*) var_value1;
((struct instance_array__NativeArray*)var469)->values[2] = (val*) var436;
var470 = BOX_kernel__Int(var_v); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var469)->values[3] = (val*) var470;
((struct instance_array__NativeArray*)var469)->values[4] = (val*) var441;
((struct instance_array__NativeArray*)var469)->values[5] = (val*) var445;
((struct instance_array__NativeArray*)var469)->values[6] = (val*) var447;
((struct instance_array__NativeArray*)var469)->values[7] = (val*) var_value1;
((struct instance_array__NativeArray*)var469)->values[8] = (val*) var452;
((struct instance_array__NativeArray*)var469)->values[9] = (val*) var456;
((struct instance_array__NativeArray*)var469)->values[10] = (val*) var458;
((struct instance_array__NativeArray*)var469)->values[11] = (val*) var_value2;
((struct instance_array__NativeArray*)var469)->values[12] = (val*) var463;
{
((void (*)(val*, val*, long))(var467->class->vft[COLOR_array__Array__with_native]))(var467, var469, var468) /* with_native on <var467:Array[Object]>*/;
}
}
{
var471 = ((val* (*)(val*))(var467->class->vft[COLOR_string__Object__to_s]))(var467) /* to_s on <var467:Array[Object]>*/;
}
{
array__Array__add(var_s, var471); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
CONTINUE_label: (void)0;
{
hash_collection__HashMapIterator__next(var425); /* Direct call hash_collection#HashMapIterator#next on <var425:HashMapIterator[Object, nullable Object]>*/
}
}
BREAK_label: (void)0;
if (varonce472) {
var473 = varonce472;
} else {
var474 = "(";
var475 = 1;
var476 = string__NativeString__to_s_with_length(var474, var475);
var473 = var476;
varonce472 = var473;
}
if (varonce477) {
var478 = varonce477;
} else {
var479 = " || ";
var480 = 4;
var481 = string__NativeString__to_s_with_length(var479, var480);
var478 = var481;
varonce477 = var478;
}
{
var482 = string__Collection__join(var_s, var478);
}
if (varonce483) {
var484 = varonce483;
} else {
var485 = ")";
var486 = 1;
var487 = string__NativeString__to_s_with_length(var485, var486);
var484 = var487;
varonce483 = var484;
}
var488 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var488 = array_instance Array[Object] */
var489 = 3;
var490 = NEW_array__NativeArray(var489, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var490)->values[0] = (val*) var473;
((struct instance_array__NativeArray*)var490)->values[1] = (val*) var482;
((struct instance_array__NativeArray*)var490)->values[2] = (val*) var484;
{
((void (*)(val*, val*, long))(var488->class->vft[COLOR_array__Array__with_native]))(var488, var490, var489) /* with_native on <var488:Array[Object]>*/;
}
}
{
var491 = ((val* (*)(val*))(var488->class->vft[COLOR_string__Object__to_s]))(var488) /* to_s on <var488:Array[Object]>*/;
}
{
array__Array__add(var_test, var491); /* Direct call array#Array#add on <var_test:Array[String]>*/
}
} else {
if (varonce492) {
var493 = varonce492;
} else {
var494 = " = ";
var495 = 3;
var496 = string__NativeString__to_s_with_length(var494, var495);
var493 = var496;
varonce492 = var493;
}
if (varonce497) {
var498 = varonce497;
} else {
var499 = " == ";
var500 = 4;
var501 = string__NativeString__to_s_with_length(var499, var500);
var498 = var501;
varonce497 = var498;
}
if (varonce502) {
var503 = varonce502;
} else {
var504 = ";";
var505 = 1;
var506 = string__NativeString__to_s_with_length(var504, var505);
var503 = var506;
varonce502 = var503;
}
var507 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var507 = array_instance Array[Object] */
var508 = 6;
var509 = NEW_array__NativeArray(var508, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var509)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var509)->values[1] = (val*) var493;
((struct instance_array__NativeArray*)var509)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var509)->values[3] = (val*) var498;
((struct instance_array__NativeArray*)var509)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var509)->values[5] = (val*) var503;
{
((void (*)(val*, val*, long))(var507->class->vft[COLOR_array__Array__with_native]))(var507, var509, var508) /* with_native on <var507:Array[Object]>*/;
}
}
{
var510 = ((val* (*)(val*))(var507->class->vft[COLOR_string__Object__to_s]))(var507) /* to_s on <var507:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var510); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
}
if (varonce511) {
var512 = varonce511;
} else {
var513 = " = ";
var514 = 3;
var515 = string__NativeString__to_s_with_length(var513, var514);
var512 = var515;
varonce511 = var512;
}
if (varonce516) {
var517 = varonce516;
} else {
var518 = " == ";
var519 = 4;
var520 = string__NativeString__to_s_with_length(var518, var519);
var517 = var520;
varonce516 = var517;
}
if (varonce521) {
var522 = varonce521;
} else {
var523 = " || (";
var524 = 5;
var525 = string__NativeString__to_s_with_length(var523, var524);
var522 = var525;
varonce521 = var522;
}
if (varonce526) {
var527 = varonce526;
} else {
var528 = " && ";
var529 = 4;
var530 = string__NativeString__to_s_with_length(var528, var529);
var527 = var530;
varonce526 = var527;
}
{
var531 = string__Collection__join(var_test, var527);
}
if (varonce532) {
var533 = varonce532;
} else {
var534 = ");";
var535 = 2;
var536 = string__NativeString__to_s_with_length(var534, var535);
var533 = var536;
varonce532 = var533;
}
var537 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var537 = array_instance Array[Object] */
var538 = 8;
var539 = NEW_array__NativeArray(var538, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var539)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var539)->values[1] = (val*) var512;
((struct instance_array__NativeArray*)var539)->values[2] = (val*) var_value1;
((struct instance_array__NativeArray*)var539)->values[3] = (val*) var517;
((struct instance_array__NativeArray*)var539)->values[4] = (val*) var_value2;
((struct instance_array__NativeArray*)var539)->values[5] = (val*) var522;
((struct instance_array__NativeArray*)var539)->values[6] = (val*) var531;
((struct instance_array__NativeArray*)var539)->values[7] = (val*) var533;
{
((void (*)(val*, val*, long))(var537->class->vft[COLOR_array__Array__with_native]))(var537, var539, var538) /* with_native on <var537:Array[Object]>*/;
}
}
{
var540 = ((val* (*)(val*))(var537->class->vft[COLOR_string__Object__to_s]))(var537) /* to_s on <var537:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var540); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#equal_test for (self: Object, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__equal_test(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int separate_compiler__SeparateCompilerVisitor__can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_t /* var t: MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MClass */;
val* var10 /* : MClass */;
val* var11 /* : MClassKind */;
val* var13 /* : MClassKind */;
val* var_k /* var k: MClassKind */;
short int var14 /* : Bool */;
val* var15 /* : MClassKind */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MType__as_notnullable]))(var1) /* as_notnullable on <var1:MType>*/;
}
var_t = var4;
/* <var_t:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
var7 = 0;
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_t) on <var_t:MType(MClassType)> */
var10 = var_t->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_t:MType(MClassType)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var8) on <var8:MClass> */
var13 = var8->attrs[COLOR_model__MClass___kind].val; /* _kind on <var8:MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_k = var11;
{
var15 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var_k,var15) on <var_k:MClassKind> */
var_other = var15;
{
{ /* Inline kernel#Object#is_same_instance (var_k,var_other) on <var_k:MClassKind> */
var21 = var_k == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var_ = var16;
if (var16){
var14 = var_;
} else {
{
var22 = abstract_compiler__MClassType__ctype(var_t);
}
if (varonce) {
var23 = varonce;
} else {
var24 = "val*";
var25 = 4;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
{ /* Inline kernel#Object#!= (var22,var23) on <var22:String> */
var_other30 = var23;
{
var32 = ((short int (*)(val*, val*))(var22->class->vft[COLOR_kernel__Object___61d_61d]))(var22, var_other30) /* == on <var22:String>*/;
var31 = var32;
}
var33 = !var31;
var28 = var33;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
var14 = var27;
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#can_be_primitive for (self: Object, RuntimeVariable): Bool */
short int VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__SeparateCompilerVisitor__can_be_primitive(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: SeparateCompilerVisitor, RuntimeVariable): Bool */
short int separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_t /* var t: MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_t = var1;
/* <var_t:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var5 = 0;
} else {
var5 = var_t->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
/* <var_t:MType> isa MNullType */
cltype7 = type_model__MNullType.color;
idtype8 = type_model__MNullType.id;
if(cltype7 >= var_t->type->table_size) {
var6 = 0;
} else {
var6 = var_t->type->type_table[cltype7] == idtype8;
}
var4 = var6;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#maybe_null for (self: Object, RuntimeVariable): Bool */
short int VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = separate_compiler__SeparateCompilerVisitor__maybe_null(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: SeparateCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : MClass */;
val* var_arrayclass /* var arrayclass: MClass */;
val* var12 /* : Array[MType] */;
long var13 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var14 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var15 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
long var35 /* : Int */;
val* var36 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
val* var37 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
val* var38 /* : Range[Int] */;
long var39 /* : Int */;
long var40 /* : Int */;
val* var41 /* : Discrete */;
val* var42 /* : Discrete */;
val* var43 /* : Iterator[Discrete] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
long var_i /* var i: Int */;
long var46 /* : Int */;
val* var47 /* : nullable Object */;
val* var48 /* : MClassType */;
val* var49 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : Object */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : MClassDef */;
val* var87 /* : MClassType */;
val* var89 /* : MClassType */;
val* var90 /* : MMethod */;
val* var91 /* : Array[RuntimeVariable] */;
long var92 /* : Int */;
val* var_93 /* var : Array[RuntimeVariable] */;
val* var94 /* : nullable RuntimeVariable */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
var_array = p0;
var_elttype = p1;
if (varonce) {
var1 = varonce;
} else {
var2 = "NativeArray";
var3 = 11;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
var_nclass = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "Array";
var9 = 5;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
{
var11 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var7);
}
var_arrayclass = var11;
var12 = NEW_array__Array(&type_array__Arraymodel__MType);
var13 = 1;
{
array__Array__with_capacity(var12, var13); /* Direct call array#Array#with_capacity on <var12:Array[MType]>*/
}
var_ = var12;
{
array__AbstractArray__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var14 = model__MClass__get_mtype(var_arrayclass, var_);
}
var_arraytype = var14;
{
var15 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_arraytype) /* init_instance on <self:SeparateCompilerVisitor>*/;
}
var_res = var15;
if (varonce16) {
var17 = varonce16;
} else {
var18 = "{ /* ";
var19 = 5;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " = array_instance Array[";
var24 = 24;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "] */";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var22;
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var_elttype;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
{
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
{
var35 = array__AbstractArrayRead__length(var_array);
}
{
var36 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, var35);
}
var_length = var36;
{
var37 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_elttype, var_length) /* native_array_instance on <self:SeparateCompilerVisitor>*/;
}
var_nat = var37;
var38 = NEW_range__Range(&type_range__Rangekernel__Int);
var39 = 0;
{
var40 = array__AbstractArrayRead__length(var_array);
}
{
var41 = BOX_kernel__Int(var39); /* autobox from Int to Discrete */
var42 = BOX_kernel__Int(var40); /* autobox from Int to Discrete */
range__Range__without_last(var38, var41, var42); /* Direct call range#Range#without_last on <var38:Range[Int]>*/
}
{
var43 = range__Range__iterator(var38);
}
for(;;) {
{
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var43) /* is_ok on <var43:Iterator[Discrete]>*/;
}
if(!var44) break;
{
var45 = ((val* (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__item]))(var43) /* item on <var43:Iterator[Discrete]>*/;
}
var46 = ((struct instance_kernel__Int*)var45)->value; /* autounbox from nullable Object to Int */;
var_i = var46;
{
var47 = array__Array___91d_93d(var_array, var_i);
}
{
var48 = abstract_compiler__AbstractCompilerVisitor__object_type(self);
}
{
var49 = separate_compiler__SeparateCompilerVisitor__autobox(self, var47, var48);
}
var_r = var49;
if (varonce50) {
var51 = varonce50;
} else {
var52 = "((struct instance_";
var53 = 18;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var55 = abstract_compiler__MClass__c_name(var_nclass);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "*)";
var59 = 2;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = ")->values[";
var64 = 10;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "] = (val*) ";
var69 = 11;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ";";
var74 = 1;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 9;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var57;
((struct instance_array__NativeArray*)var78)->values[3] = (val*) var_nat;
((struct instance_array__NativeArray*)var78)->values[4] = (val*) var62;
var79 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var78)->values[5] = (val*) var79;
((struct instance_array__NativeArray*)var78)->values[6] = (val*) var67;
((struct instance_array__NativeArray*)var78)->values[7] = (val*) var_r;
((struct instance_array__NativeArray*)var78)->values[8] = (val*) var72;
{
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var80); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var43->class->vft[COLOR_abstract_collection__Iterator__next]))(var43) /* next on <var43:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
if (varonce81) {
var82 = varonce81;
} else {
var83 = "with_native";
var84 = 11;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
{
var86 = model__MClass__intro(var_arrayclass);
}
{
{ /* Inline model#MClassDef#bound_mtype (var86) on <var86:MClassDef> */
var89 = var86->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var86:MClassDef> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = abstract_compiler__AbstractCompilerVisitor__get_property(self, var82, var87);
}
var91 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var92 = 3;
{
array__Array__with_capacity(var91, var92); /* Direct call array#Array#with_capacity on <var91:Array[RuntimeVariable]>*/
}
var_93 = var91;
{
array__AbstractArray__push(var_93, var_res); /* Direct call array#AbstractArray#push on <var_93:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_93, var_nat); /* Direct call array#AbstractArray#push on <var_93:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_93, var_length); /* Direct call array#AbstractArray#push on <var_93:Array[RuntimeVariable]>*/
}
{
var94 = separate_compiler__SeparateCompilerVisitor__send(self, var90, var_93);
}
var94;
if (varonce95) {
var96 = varonce95;
} else {
var97 = "}";
var98 = 1;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#array_instance for (self: Object, Array[RuntimeVariable], MType): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: SeparateCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* separate_compiler__SeparateCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var6 /* : Array[MType] */;
long var7 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : MClass */;
val* var16 /* : MClass */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
short int var22 /* : Bool */;
int cltype;
int idtype;
val* var23 /* : AbstractCompiler */;
val* var25 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable Frame */;
val* var31 /* : nullable Frame */;
val* var32 /* : MPropDef */;
val* var34 /* : MPropDef */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : nullable Frame */;
val* var40 /* : nullable Frame */;
val* var41 /* : Array[RuntimeVariable] */;
val* var43 /* : Array[RuntimeVariable] */;
val* var44 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var45 /* : String */;
val* var_recv_type_info /* var recv_type_info: String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : MClass */;
val* var54 /* : MClass */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : Array[Object] */;
long var78 /* : Int */;
val* var79 /* : NativeArray[Object] */;
val* var80 /* : String */;
val* var81 /* : RuntimeVariable */;
val* var82 /* : Set[MType] */;
val* var84 /* : Set[MType] */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : String */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : MClass */;
val* var102 /* : MClass */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
val* var124 /* : RuntimeVariable */;
var_elttype = p0;
var_length = p1;
if (varonce) {
var1 = varonce;
} else {
var2 = "NativeArray";
var3 = 11;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
var6 = NEW_array__Array(&type_array__Arraymodel__MType);
var7 = 1;
{
array__Array__with_capacity(var6, var7); /* Direct call array#Array#with_capacity on <var6:Array[MType]>*/
}
var_ = var6;
{
array__AbstractArray__push(var_, var_elttype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var8 = model__MClass__get_mtype(var5, var_);
}
var_mtype = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "NEW_";
var12 = 4;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var16 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = abstract_compiler__MClass__c_name(var14);
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var17;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
/* <var_mtype:MClassType> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var22 = 0;
} else {
var22 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1616);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var25 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_compiler = var23;
{
{ /* Inline model#MGenericType#need_anchor (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var28 = var_mtype->attrs[COLOR_model__MGenericType___need_anchor].s; /* _need_anchor on <var_mtype:MClassType(MGenericType)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26){
{
separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(self, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#hardening_live_open_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var31 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1620);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var29) on <var29:nullable Frame> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var34 = var29->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var29:nullable Frame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var32) on <var32:MPropDef> */
var37 = var32->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var32:MPropDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
separate_compiler__SeparateCompilerVisitor__link_unresolved_type(self, var35, var_mtype); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var40 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (var38 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1621);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#arguments (var38) on <var38:nullable Frame> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var43 = var38->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <var38:nullable Frame> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = abstract_collection__SequenceRead__first(var41);
}
var_recv = var44;
{
var45 = separate_compiler__SeparateCompilerVisitor__type_info(self, var_recv);
}
var_recv_type_info = var45;
{
var46 = separate_compiler__MType__const_color(var_mtype);
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "NEW_";
var50 = 4;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var54 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = abstract_compiler__MClass__c_name(var52);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "(";
var59 = 1;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = ", ";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "->resolution_table->types[";
var69 = 26;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = separate_compiler__MType__const_color(var_mtype);
}
if (varonce72) {
var73 = varonce72;
} else {
var74 = "])";
var75 = 2;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
var77 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var77 = array_instance Array[Object] */
var78 = 9;
var79 = NEW_array__NativeArray(var78, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var79)->values[0] = (val*) var48;
((struct instance_array__NativeArray*)var79)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var79)->values[2] = (val*) var57;
((struct instance_array__NativeArray*)var79)->values[3] = (val*) var_length;
((struct instance_array__NativeArray*)var79)->values[4] = (val*) var62;
((struct instance_array__NativeArray*)var79)->values[5] = (val*) var_recv_type_info;
((struct instance_array__NativeArray*)var79)->values[6] = (val*) var67;
((struct instance_array__NativeArray*)var79)->values[7] = (val*) var71;
((struct instance_array__NativeArray*)var79)->values[8] = (val*) var73;
{
((void (*)(val*, val*, long))(var77->class->vft[COLOR_array__Array__with_native]))(var77, var79, var78) /* with_native on <var77:Array[Object]>*/;
}
}
{
var80 = ((val* (*)(val*))(var77->class->vft[COLOR_string__Object__to_s]))(var77) /* to_s on <var77:Array[Object]>*/;
}
{
var81 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var80, var_mtype);
}
var = var81;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var_compiler) on <var_compiler:SeparateCompiler> */
var84 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var_compiler:SeparateCompiler> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 155);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
((void (*)(val*, val*))(var82->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var82, var_mtype) /* add on <var82:Set[MType]>*/;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "type_";
var88 = 5;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
var90 = abstract_compiler__MGenericType__c_name(var_mtype);
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 2;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var86;
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var90;
{
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
}
{
var94 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:SeparateCompilerVisitor>*/
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "NEW_";
var98 = 4;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType(MGenericType)> */
var102 = var_mtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType(MGenericType)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = abstract_compiler__MClass__c_name(var100);
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "(";
var107 = 1;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = ", &type_";
var112 = 8;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
{
var114 = abstract_compiler__MGenericType__c_name(var_mtype);
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = ")";
var118 = 1;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 7;
var122 = NEW_array__NativeArray(var121, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var122)->values[0] = (val*) var96;
((struct instance_array__NativeArray*)var122)->values[1] = (val*) var103;
((struct instance_array__NativeArray*)var122)->values[2] = (val*) var105;
((struct instance_array__NativeArray*)var122)->values[3] = (val*) var_length;
((struct instance_array__NativeArray*)var122)->values[4] = (val*) var110;
((struct instance_array__NativeArray*)var122)->values[5] = (val*) var114;
((struct instance_array__NativeArray*)var122)->values[6] = (val*) var116;
{
((void (*)(val*, val*, long))(var120->class->vft[COLOR_array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val*))(var120->class->vft[COLOR_string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
}
{
var124 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var123, var_mtype);
}
var = var124;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_instance for (self: Object, MType, RuntimeVariable): RuntimeVariable */
val* VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = separate_compiler__SeparateCompilerVisitor__native_array_instance(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_def for (self: SeparateCompilerVisitor, String, nullable MType, Array[RuntimeVariable]) */
void separate_compiler__SeparateCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
val* var_pname /* var pname: String */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_elttype /* var elttype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var8 /* : MClass */;
val* var_nclass /* var nclass: MClass */;
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
val* var21 /* : nullable Object */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var_recv /* var recv: String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
long var43 /* : Int */;
val* var44 /* : nullable Object */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
val* var54 /* : RuntimeVariable */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
long var67 /* : Int */;
val* var68 /* : nullable Object */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
long var103 /* : Int */;
val* var104 /* : nullable Object */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : String */;
val* var114 /* : RuntimeVariable */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : FlatString */;
long var133 /* : Int */;
val* var134 /* : nullable Object */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
val* var_recv1 /* var recv1: String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : FlatString */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : FlatString */;
long var159 /* : Int */;
val* var160 /* : nullable Object */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : FlatString */;
val* var166 /* : String */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : Array[Object] */;
long var173 /* : Int */;
val* var174 /* : NativeArray[Object] */;
val* var175 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
{
var = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var) on <var:nullable Object(RuntimeVariable)> */
var3 = var->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var:nullable Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_elttype = var1;
if (varonce) {
var4 = varonce;
} else {
var5 = "NativeArray";
var6 = 11;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
{
var8 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var4);
}
var_nclass = var8;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "((struct instance_";
var12 = 18;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = separate_compiler__MClass__c_instance_name(var_nclass);
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "*)";
var18 = 2;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = 0;
{
var21 = array__Array___91d_93d(var_arguments, var20);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = ")->values";
var25 = 9;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 5;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var14;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var16;
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var21;
((struct instance_array__NativeArray*)var29)->values[4] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
var_recv = var30;
if (varonce31) {
var32 = varonce31;
} else {
var33 = "[]";
var34 = 2;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
{
var37 = string__FlatString___61d_61d(var_pname, var32);
var36 = var37;
}
if (var36){
if (varonce38) {
var39 = varonce38;
} else {
var40 = "[";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = 1;
{
var44 = array__Array___91d_93d(var_arguments, var43);
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "]";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 4;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var39;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var44;
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1637);
show_backtrace(1);
}
{
var54 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var53, var_ret_type);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(self, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce55) {
var56 = varonce55;
} else {
var57 = "[]=";
var58 = 3;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
{
var61 = string__FlatString___61d_61d(var_pname, var56);
var60 = var61;
}
if (var60){
if (varonce62) {
var63 = varonce62;
} else {
var64 = "[";
var65 = 1;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = 1;
{
var68 = array__Array___91d_93d(var_arguments, var67);
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "]=";
var72 = 2;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = 2;
{
var75 = array__Array___91d_93d(var_arguments, var74);
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = ";";
var79 = 1;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 6;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var_recv;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var63;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var68;
((struct instance_array__NativeArray*)var83)->values[3] = (val*) var70;
((struct instance_array__NativeArray*)var83)->values[4] = (val*) var75;
((struct instance_array__NativeArray*)var83)->values[5] = (val*) var77;
{
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var84); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce85) {
var86 = varonce85;
} else {
var87 = "length";
var88 = 6;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
var91 = string__FlatString___61d_61d(var_pname, var86);
var90 = var91;
}
if (var90){
if (varonce92) {
var93 = varonce92;
} else {
var94 = "((struct instance_";
var95 = 18;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = separate_compiler__MClass__c_instance_name(var_nclass);
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "*)";
var101 = 2;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
var103 = 0;
{
var104 = array__Array___91d_93d(var_arguments, var103);
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = ")->length";
var108 = 9;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 5;
var112 = NEW_array__NativeArray(var111, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var112)->values[0] = (val*) var93;
((struct instance_array__NativeArray*)var112)->values[1] = (val*) var97;
((struct instance_array__NativeArray*)var112)->values[2] = (val*) var99;
((struct instance_array__NativeArray*)var112)->values[3] = (val*) var104;
((struct instance_array__NativeArray*)var112)->values[4] = (val*) var106;
{
((void (*)(val*, val*, long))(var110->class->vft[COLOR_array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val*))(var110->class->vft[COLOR_string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1643);
show_backtrace(1);
}
{
var114 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, var113, var_ret_type);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(self, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce115) {
var116 = varonce115;
} else {
var117 = "copy_to";
var118 = 7;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
{
var121 = string__FlatString___61d_61d(var_pname, var116);
var120 = var121;
}
if (var120){
if (varonce122) {
var123 = varonce122;
} else {
var124 = "((struct instance_";
var125 = 18;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
{
var127 = separate_compiler__MClass__c_instance_name(var_nclass);
}
if (varonce128) {
var129 = varonce128;
} else {
var130 = "*)";
var131 = 2;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = 1;
{
var134 = array__Array___91d_93d(var_arguments, var133);
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = ")->values";
var138 = 9;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 5;
var142 = NEW_array__NativeArray(var141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var142)->values[0] = (val*) var123;
((struct instance_array__NativeArray*)var142)->values[1] = (val*) var127;
((struct instance_array__NativeArray*)var142)->values[2] = (val*) var129;
((struct instance_array__NativeArray*)var142)->values[3] = (val*) var134;
((struct instance_array__NativeArray*)var142)->values[4] = (val*) var136;
{
((void (*)(val*, val*, long))(var140->class->vft[COLOR_array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val*))(var140->class->vft[COLOR_string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
var_recv1 = var143;
if (varonce144) {
var145 = varonce144;
} else {
var146 = "memcpy(";
var147 = 7;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
if (varonce149) {
var150 = varonce149;
} else {
var151 = ", ";
var152 = 2;
var153 = string__NativeString__to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
if (varonce154) {
var155 = varonce154;
} else {
var156 = ", ";
var157 = 2;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce154 = var155;
}
var159 = 2;
{
var160 = array__Array___91d_93d(var_arguments, var159);
}
if (varonce161) {
var162 = varonce161;
} else {
var163 = "*sizeof(";
var164 = 8;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
{
var166 = ((val* (*)(val*))(var_elttype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_elttype) /* ctype on <var_elttype:MType>*/;
}
if (varonce167) {
var168 = varonce167;
} else {
var169 = "));";
var170 = 3;
var171 = string__NativeString__to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
var172 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var172 = array_instance Array[Object] */
var173 = 9;
var174 = NEW_array__NativeArray(var173, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var174)->values[0] = (val*) var145;
((struct instance_array__NativeArray*)var174)->values[1] = (val*) var_recv1;
((struct instance_array__NativeArray*)var174)->values[2] = (val*) var150;
((struct instance_array__NativeArray*)var174)->values[3] = (val*) var_recv;
((struct instance_array__NativeArray*)var174)->values[4] = (val*) var155;
((struct instance_array__NativeArray*)var174)->values[5] = (val*) var160;
((struct instance_array__NativeArray*)var174)->values[6] = (val*) var162;
((struct instance_array__NativeArray*)var174)->values[7] = (val*) var166;
((struct instance_array__NativeArray*)var174)->values[8] = (val*) var168;
{
((void (*)(val*, val*, long))(var172->class->vft[COLOR_array__Array__with_native]))(var172, var174, var173) /* with_native on <var172:Array[Object]>*/;
}
}
{
var175 = ((val* (*)(val*))(var172->class->vft[COLOR_string__Object__to_s]))(var172) /* to_s on <var172:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#native_array_def for (self: Object, String, nullable MType, Array[RuntimeVariable]) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
separate_compiler__SeparateCompilerVisitor__native_array_def(self, p0, p1, p2); /* Direct call separate_compiler#SeparateCompilerVisitor#native_array_def on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#calloc_array for (self: SeparateCompilerVisitor, MType, Array[RuntimeVariable]) */
void separate_compiler__SeparateCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
val* var_ret_type /* var ret_type: MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var5 /* : MClassType */;
val* var7 /* : MClassType */;
val* var8 /* : Array[MType] */;
val* var10 /* : Array[MType] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_ft /* var ft: MParameterType */;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
val* var15 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_ret_type = p0;
var_arguments = p1;
if (varonce) {
var = varonce;
} else {
var1 = "ArrayCapable";
var2 = 12;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var);
}
var_mclass = var4;
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var7 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassType#arguments (var5) on <var5:MClassType> */
var10 = var5->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var5:MClassType> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = abstract_collection__SequenceRead__first(var8);
}
/* <var11:nullable Object(MType)> isa MParameterType */
cltype = type_model__MParameterType.color;
idtype = type_model__MParameterType.id;
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MParameterType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1655);
show_backtrace(1);
}
var_ft = var11;
var13 = 1;
{
var14 = array__Array___91d_93d(var_arguments, var13);
}
{
var15 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(self, var_ft, var14) /* native_array_instance on <self:SeparateCompilerVisitor>*/;
}
var_res = var15;
{
abstract_compiler__AbstractCompilerVisitor__ret(self, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#calloc_array for (self: Object, MType, Array[RuntimeVariable]) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__calloc_array(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerVisitor__calloc_array(self, p0, p1); /* Direct call separate_compiler#SeparateCompilerVisitor#calloc_array on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#link_unresolved_type for (self: SeparateCompilerVisitor, MClassDef, MType) */
void separate_compiler__SeparateCompilerVisitor__link_unresolved_type(val* self, val* p0, val* p1) {
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var_compiler /* var compiler: SeparateCompiler */;
val* var4 /* : Map[MClassDef, Set[MType]] */;
val* var6 /* : Map[MClassDef, Set[MType]] */;
val* var7 /* : nullable Frame */;
val* var9 /* : nullable Frame */;
val* var10 /* : MPropDef */;
val* var12 /* : MPropDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Map[MClassDef, Set[MType]] */;
val* var20 /* : Map[MClassDef, Set[MType]] */;
val* var21 /* : nullable Frame */;
val* var23 /* : nullable Frame */;
val* var24 /* : MPropDef */;
val* var26 /* : MPropDef */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : HashSet[MType] */;
val* var31 /* : Map[MClassDef, Set[MType]] */;
val* var33 /* : Map[MClassDef, Set[MType]] */;
val* var34 /* : nullable Frame */;
val* var36 /* : nullable Frame */;
val* var37 /* : MPropDef */;
val* var39 /* : MPropDef */;
val* var40 /* : MClassDef */;
val* var42 /* : MClassDef */;
val* var43 /* : nullable Object */;
var_mclassdef = p0;
var_mtype = p1;
{
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1661);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:SeparateCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_compiler = var1;
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var6 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1663);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var7) on <var7:nullable Frame> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var7:nullable Frame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var10) on <var10:MPropDef> */
var15 = var10->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var10:MPropDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = abstract_collection__MapRead__has_key(var4, var13);
}
var17 = !var16;
if (var17){
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var20 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var23 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1664);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var21) on <var21:nullable Frame> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var26 = var21->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var21:nullable Frame> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var24) on <var24:MPropDef> */
var29 = var24->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var24:MPropDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
hash_collection__HashSet__init(var30); /* Direct call hash_collection#HashSet#init on <var30:HashSet[MType]>*/
}
{
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var18, var27, var30) /* []= on <var18:Map[MClassDef, Set[MType]]>*/;
}
} else {
}
{
{ /* Inline separate_compiler#SeparateCompiler#live_unresolved_types (var_compiler) on <var_compiler:SeparateCompiler> */
var33 = var_compiler->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val; /* _live_unresolved_types on <var_compiler:SeparateCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_unresolved_types");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 156);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:SeparateCompilerVisitor> */
var36 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:SeparateCompilerVisitor> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1666);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#mpropdef (var34) on <var34:nullable Frame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var39 = var34->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <var34:nullable Frame> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var37) on <var37:MPropDef> */
var42 = var37->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var37:MPropDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val* (*)(val*, val*))(var31->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var31, var40) /* [] on <var31:Map[MClassDef, Set[MType]]>*/;
}
{
((void (*)(val*, val*))(var43->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var43, var_mtype) /* add on <var43:nullable Object(Set[MType])>*/;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#link_unresolved_type for (self: Object, MClassDef, MType) */
void VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type(val* self, val* p0, val* p1) {
separate_compiler__SeparateCompilerVisitor__link_unresolved_type(self, p0, p1); /* Direct call separate_compiler#SeparateCompilerVisitor#link_unresolved_type on <self:Object(SeparateCompilerVisitor)>*/
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#separate_runtime_function for (self: MMethodDef): AbstractRuntimeFunction */
val* separate_compiler__MMethodDef__separate_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
val* var_res /* var res: nullable SeparateRuntimeFunction */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : SeparateRuntimeFunction */;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var4) on <var_res:nullable SeparateRuntimeFunction> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable SeparateRuntimeFunction(SeparateRuntimeFunction)> */
var10 = var_res == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = NEW_separate_compiler__SeparateRuntimeFunction(&type_separate_compiler__SeparateRuntimeFunction);
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#init (var11,self) on <var11:SeparateRuntimeFunction> */
var11->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = self; /* _mmethoddef on <var11:SeparateRuntimeFunction> */
RET_LABEL12:(void)0;
}
}
var_res = var11;
{
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val = var_res; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL13:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function for (self: Object): AbstractRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : AbstractRuntimeFunction */;
var1 = separate_compiler__MMethodDef__separate_runtime_function(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache for (self: MMethodDef): nullable SeparateRuntimeFunction */
val* separate_compiler__MMethodDef__separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
var1 = self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache for (self: Object): nullable SeparateRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function_cache(val* self) {
val* var /* : nullable SeparateRuntimeFunction */;
val* var1 /* : nullable SeparateRuntimeFunction */;
val* var3 /* : nullable SeparateRuntimeFunction */;
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val; /* _separate_runtime_function_cache on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache= for (self: MMethodDef, nullable SeparateRuntimeFunction) */
void separate_compiler__MMethodDef__separate_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#separate_runtime_function_cache= for (self: Object, nullable SeparateRuntimeFunction) */
void VIRTUAL_separate_compiler__MMethodDef__separate_runtime_function_cache_61d(val* self, val* p0) {
{ /* Inline separate_compiler#MMethodDef#separate_runtime_function_cache= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache].val = p0; /* _separate_runtime_function_cache on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function for (self: MMethodDef): AbstractRuntimeFunction */
val* separate_compiler__MMethodDef__virtual_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : nullable VirtualRuntimeFunction */;
val* var3 /* : nullable VirtualRuntimeFunction */;
val* var_res /* var res: nullable VirtualRuntimeFunction */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : VirtualRuntimeFunction */;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache (self) on <self:MMethodDef> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var4) on <var_res:nullable VirtualRuntimeFunction> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable VirtualRuntimeFunction(VirtualRuntimeFunction)> */
var10 = var_res == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = NEW_separate_compiler__VirtualRuntimeFunction(&type_separate_compiler__VirtualRuntimeFunction);
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#init (var11,self) on <var11:VirtualRuntimeFunction> */
var11->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = self; /* _mmethoddef on <var11:VirtualRuntimeFunction> */
RET_LABEL12:(void)0;
}
}
var_res = var11;
{
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,var_res) on <self:MMethodDef> */
self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val = var_res; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL13:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function for (self: Object): AbstractRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function(val* self) {
val* var /* : AbstractRuntimeFunction */;
val* var1 /* : AbstractRuntimeFunction */;
var1 = separate_compiler__MMethodDef__virtual_runtime_function(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache for (self: MMethodDef): nullable VirtualRuntimeFunction */
val* separate_compiler__MMethodDef__virtual_runtime_function_cache(val* self) {
val* var /* : nullable VirtualRuntimeFunction */;
val* var1 /* : nullable VirtualRuntimeFunction */;
var1 = self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache for (self: Object): nullable VirtualRuntimeFunction */
val* VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function_cache(val* self) {
val* var /* : nullable VirtualRuntimeFunction */;
val* var1 /* : nullable VirtualRuntimeFunction */;
val* var3 /* : nullable VirtualRuntimeFunction */;
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val; /* _virtual_runtime_function_cache on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache= for (self: MMethodDef, nullable VirtualRuntimeFunction) */
void separate_compiler__MMethodDef__virtual_runtime_function_cache_61d(val* self, val* p0) {
self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:MMethodDef> */
RET_LABEL:;
}
/* method separate_compiler#MMethodDef#virtual_runtime_function_cache= for (self: Object, nullable VirtualRuntimeFunction) */
void VIRTUAL_separate_compiler__MMethodDef__virtual_runtime_function_cache_61d(val* self, val* p0) {
{ /* Inline separate_compiler#MMethodDef#virtual_runtime_function_cache= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache].val = p0; /* _virtual_runtime_function_cache on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name for (self: SeparateRuntimeFunction): String */
val* separate_compiler__SeparateRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_compiler__MPropDef__c_name(var1);
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 1;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var4;
{
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_separate_compiler__SeparateRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#to_s for (self: SeparateRuntimeFunction): String */
val* separate_compiler__SeparateRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1900);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#to_s for (self: Object): String */
val* VIRTUAL_separate_compiler__SeparateRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__SeparateRuntimeFunction__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: SeparateRuntimeFunction, AbstractCompiler) */
void separate_compiler__SeparateRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var13 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var14 /* : RuntimeVariable */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var19 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var20 /* : Frame */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const struct type* type_struct25;
const char* var_class_name26;
val* var_frame /* var frame: Frame */;
val* var28 /* : nullable MSignature */;
val* var30 /* : nullable MSignature */;
val* var31 /* : MClassDef */;
val* var33 /* : MClassDef */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
val* var37 /* : MClassDef */;
val* var39 /* : MClassDef */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : MClassDef */;
val* var45 /* : MClassDef */;
val* var46 /* : MModule */;
val* var48 /* : MModule */;
short int var49 /* : Bool */;
val* var50 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var51 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var52 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var53 /* : nullable MType */;
val* var55 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var56 /* : null */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
val* var73 /* : MProperty */;
val* var75 /* : MProperty */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : MType */;
val* var102 /* : MType */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : MType */;
val* var125 /* : MType */;
val* var126 /* : Array[Object] */;
long var127 /* : Int */;
val* var128 /* : NativeArray[Object] */;
val* var129 /* : String */;
val* var130 /* : Range[Int] */;
long var131 /* : Int */;
long var132 /* : Int */;
val* var133 /* : Discrete */;
val* var134 /* : Discrete */;
val* var135 /* : Iterator[Discrete] */;
short int var136 /* : Bool */;
val* var137 /* : nullable Object */;
long var_i /* var i: Int */;
long var138 /* : Int */;
val* var139 /* : Array[MParameter] */;
val* var141 /* : Array[MParameter] */;
val* var142 /* : nullable Object */;
val* var143 /* : MType */;
val* var145 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var146 /* : Int */;
long var148 /* : Int */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var152 /* : Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
val* var158 /* : MClass */;
val* var159 /* : Array[MType] */;
long var160 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var161 /* : MClassType */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : NativeString */;
long var165 /* : Int */;
val* var166 /* : FlatString */;
val* var167 /* : Array[Object] */;
long var168 /* : Int */;
val* var169 /* : NativeArray[Object] */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
val* var182 /* : Array[Object] */;
long var183 /* : Int */;
val* var184 /* : NativeArray[Object] */;
val* var185 /* : Object */;
val* var186 /* : String */;
val* var187 /* : RuntimeVariable */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : FlatString */;
val* var193 /* : Array[Object] */;
long var194 /* : Int */;
val* var195 /* : NativeArray[Object] */;
val* var196 /* : Object */;
val* var197 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
long var201 /* : Int */;
val* var202 /* : FlatString */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : NativeString */;
long var206 /* : Int */;
val* var207 /* : FlatString */;
val* var208 /* : null */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
val* var220 /* : Array[Object] */;
long var221 /* : Int */;
val* var222 /* : NativeArray[Object] */;
val* var223 /* : String */;
val* var224 /* : String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
long var228 /* : Int */;
val* var229 /* : FlatString */;
val* var230 /* : Array[Object] */;
long var231 /* : Int */;
val* var232 /* : NativeArray[Object] */;
val* var233 /* : String */;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
long var237 /* : Int */;
val* var238 /* : FlatString */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : NativeString */;
long var242 /* : Int */;
val* var243 /* : FlatString */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
long var247 /* : Int */;
val* var248 /* : FlatString */;
val* var249 /* : Array[Object] */;
long var250 /* : Int */;
val* var251 /* : NativeArray[Object] */;
val* var252 /* : String */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
val* var258 /* : Array[Object] */;
long var259 /* : Int */;
val* var260 /* : NativeArray[Object] */;
val* var261 /* : String */;
val* var262 /* : null */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
short int var266 /* : Bool */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
val* var269 /* : RuntimeVariable */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : NativeString */;
long var274 /* : Int */;
val* var275 /* : FlatString */;
val* var276 /* : String */;
val* var278 /* : nullable Object */;
val* var279 /* : MType */;
val* var281 /* : MType */;
short int var282 /* : Bool */;
short int var283 /* : Bool */;
short int var285 /* : Bool */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
val* var288 /* : nullable RuntimeVariable */;
val* var289 /* : nullable String */;
val* var291 /* : nullable String */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
long var295 /* : Int */;
val* var296 /* : FlatString */;
val* var297 /* : Array[Object] */;
long var298 /* : Int */;
val* var299 /* : NativeArray[Object] */;
val* var300 /* : String */;
val* var301 /* : null */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
val* var313 /* : nullable RuntimeVariable */;
val* var315 /* : nullable RuntimeVariable */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
long var319 /* : Int */;
val* var320 /* : FlatString */;
val* var321 /* : Array[Object] */;
long var322 /* : Int */;
val* var323 /* : NativeArray[Object] */;
val* var324 /* : String */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
long var328 /* : Int */;
val* var329 /* : FlatString */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : NativeString */;
long var334 /* : Int */;
val* var335 /* : FlatString */;
long var336 /* : Int */;
short int var337 /* : Bool */;
short int var338 /* : Bool */;
val* var339 /* : HashMap[String, String] */;
val* var341 /* : HashMap[String, String] */;
val* var342 /* : String */;
val* var343 /* : MClassDef */;
val* var345 /* : MClassDef */;
val* var346 /* : MModule */;
val* var348 /* : MModule */;
val* var349 /* : String */;
val* var351 /* : String */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : NativeString */;
long var355 /* : Int */;
val* var356 /* : FlatString */;
val* var357 /* : MClassDef */;
val* var359 /* : MClassDef */;
val* var360 /* : MClass */;
val* var362 /* : MClass */;
val* var363 /* : String */;
val* var365 /* : String */;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
long var369 /* : Int */;
val* var370 /* : FlatString */;
val* var371 /* : MProperty */;
val* var373 /* : MProperty */;
val* var374 /* : String */;
val* var376 /* : String */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : NativeString */;
long var380 /* : Int */;
val* var381 /* : FlatString */;
val* var382 /* : Location */;
val* var384 /* : Location */;
val* var385 /* : nullable SourceFile */;
val* var387 /* : nullable SourceFile */;
val* var388 /* : String */;
val* var390 /* : String */;
static val* varonce391;
val* var392 /* : String */;
char* var393 /* : NativeString */;
long var394 /* : Int */;
val* var395 /* : FlatString */;
val* var396 /* : Location */;
val* var398 /* : Location */;
long var399 /* : Int */;
long var401 /* : Int */;
static val* varonce402;
val* var403 /* : String */;
char* var404 /* : NativeString */;
long var405 /* : Int */;
val* var406 /* : FlatString */;
val* var407 /* : Array[Object] */;
long var408 /* : Int */;
val* var409 /* : NativeArray[Object] */;
val* var410 /* : Object */;
val* var411 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1702);
show_backtrace(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:SeparateRuntimeFunction> */
var6 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:SeparateRuntimeFunction> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_recv = var10;
{
var13 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:AbstractCompiler>*/;
}
var_v = var13;
var14 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce) {
var15 = varonce;
} else {
var16 = "self";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
abstract_compiler__RuntimeVariable__init(var14, var15, var_recv, var_recv); /* Direct call abstract_compiler#RuntimeVariable#init on <var14:RuntimeVariable>*/
}
var_selfvar = var14;
var19 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
array__Array__init(var19); /* Direct call array#Array#init on <var19:Array[RuntimeVariable]>*/
}
var_arguments = var19;
var20 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
{ /* Inline abstract_compiler#Frame#init (var20,var_v,var_mmethoddef,var_recv,var_arguments) on <var20:Frame> */
/* Covariant cast for argument 0 (visitor) <var_v:AbstractCompilerVisitor> isa VISITOR */
/* <var_v:AbstractCompilerVisitor> isa VISITOR */
type_struct25 = var20->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype23 = type_struct25->color;
idtype24 = type_struct25->id;
if(cltype23 >= var_v->type->table_size) {
var22 = 0;
} else {
var22 = var_v->type->type_table[cltype23] == idtype24;
}
if (unlikely(!var22)) {
var_class_name26 = var_v == NULL ? "null" : var_v->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
var20->attrs[COLOR_abstract_compiler__Frame___visitor].val = var_v; /* _visitor on <var20:Frame> */
var20->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = var_mmethoddef; /* _mpropdef on <var20:Frame> */
var20->attrs[COLOR_abstract_compiler__Frame___receiver].val = var_recv; /* _receiver on <var20:Frame> */
var20->attrs[COLOR_abstract_compiler__Frame___arguments].val = var_arguments; /* _arguments on <var20:Frame> */
RET_LABEL21:(void)0;
}
}
var_frame = var20;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var30 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var33 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var31) on <var31:MClassDef> */
var36 = var31->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var31:MClassDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var39 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var37) on <var37:MClassDef> */
var42 = var37->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var37:MClassDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var45 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var43) on <var43:MClassDef> */
var48 = var43->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var43:MClassDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = 1;
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1713);
show_backtrace(1);
} else {
var50 = model__MSignature__resolve_for(var28, var34, var40, var46, var49);
}
var_msignature = var50;
var51 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var51); /* Direct call string#FlatBuffer#init on <var51:FlatBuffer>*/
}
var_sig = var51;
var52 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var52); /* Direct call string#FlatBuffer#init on <var52:FlatBuffer>*/
}
var_comment = var52;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var55 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_ret = var53;
var56 = NULL;
if (var_ret == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var56) on <var_ret:nullable MType> */
var_other = var56;
{
var61 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var60 = var61;
}
var62 = !var60;
var58 = var62;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
{
var63 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = " ";
var67 = 1;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 2;
var71 = NEW_array__NativeArray(var70, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var71)->values[0] = (val*) var63;
((struct instance_array__NativeArray*)var71)->values[1] = (val*) var65;
{
((void (*)(val*, val*, long))(var69->class->vft[COLOR_array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val*))(var69->class->vft[COLOR_string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var72); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var75 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var73) on <var73:MProperty(MMethod)> */
var78 = var73->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var73:MProperty(MMethod)> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76){
var_ret = var_recv;
{
var79 = abstract_compiler__MClassType__ctype(var_ret);
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = " ";
var83 = 1;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 2;
var87 = NEW_array__NativeArray(var86, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var87)->values[0] = (val*) var79;
((struct instance_array__NativeArray*)var87)->values[1] = (val*) var81;
{
((void (*)(val*, val*, long))(var85->class->vft[COLOR_array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val*))(var85->class->vft[COLOR_string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var88); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
} else {
if (varonce89) {
var90 = varonce89;
} else {
var91 = "void ";
var92 = 5;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
string__FlatBuffer__append(var_sig, var90); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
}
}
{
var94 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
string__FlatBuffer__append(var_sig, var94); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce95) {
var96 = varonce95;
} else {
var97 = "(";
var98 = 1;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var102 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = ((val* (*)(val*))(var100->class->vft[COLOR_abstract_compiler__MType__ctype]))(var100) /* ctype on <var100:MType>*/;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = " ";
var107 = 1;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 4;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var96;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var103;
((struct instance_array__NativeArray*)var111)->values[2] = (val*) var105;
((struct instance_array__NativeArray*)var111)->values[3] = (val*) var_selfvar;
{
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
}
{
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var112); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "(";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = ": ";
var121 = 2;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var125 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
var126 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var126 = array_instance Array[Object] */
var127 = 4;
var128 = NEW_array__NativeArray(var127, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var128)->values[0] = (val*) var114;
((struct instance_array__NativeArray*)var128)->values[1] = (val*) var_selfvar;
((struct instance_array__NativeArray*)var128)->values[2] = (val*) var119;
((struct instance_array__NativeArray*)var128)->values[3] = (val*) var123;
{
((void (*)(val*, val*, long))(var126->class->vft[COLOR_array__Array__with_native]))(var126, var128, var127) /* with_native on <var126:Array[Object]>*/;
}
}
{
var129 = ((val* (*)(val*))(var126->class->vft[COLOR_string__Object__to_s]))(var126) /* to_s on <var126:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var129); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
{
array__Array__add(var_arguments, var_selfvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var130 = NEW_range__Range(&type_range__Rangekernel__Int);
var131 = 0;
{
var132 = model__MSignature__arity(var_msignature);
}
{
var133 = BOX_kernel__Int(var131); /* autobox from Int to Discrete */
var134 = BOX_kernel__Int(var132); /* autobox from Int to Discrete */
range__Range__without_last(var130, var133, var134); /* Direct call range#Range#without_last on <var130:Range[Int]>*/
}
{
var135 = range__Range__iterator(var130);
}
for(;;) {
{
var136 = ((short int (*)(val*))(var135->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var135) /* is_ok on <var135:Iterator[Discrete]>*/;
}
if(!var136) break;
{
var137 = ((val* (*)(val*))(var135->class->vft[COLOR_abstract_collection__Iterator__item]))(var135) /* item on <var135:Iterator[Discrete]>*/;
}
var138 = ((struct instance_kernel__Int*)var137)->value; /* autounbox from nullable Object to Int */;
var_i = var138;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var141 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
var142 = array__Array___91d_93d(var139, var_i);
}
{
{ /* Inline model#MParameter#mtype (var142) on <var142:nullable Object(MParameter)> */
var145 = var142->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var142:nullable Object(MParameter)> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
var_mtype = var143;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var148 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var146) on <var_i:Int> */
var152 = var_i == var146;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var149 = var150;
}
if (var149){
if (varonce153) {
var154 = varonce153;
} else {
var155 = "Array";
var156 = 5;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
var158 = abstract_compiler__AbstractCompilerVisitor__get_class(var_v, var154);
}
var159 = NEW_array__Array(&type_array__Arraymodel__MType);
var160 = 1;
{
array__Array__with_capacity(var159, var160); /* Direct call array#Array#with_capacity on <var159:Array[MType]>*/
}
var_ = var159;
{
array__AbstractArray__push(var_, var_mtype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var161 = model__MClass__get_mtype(var158, var_);
}
var_mtype = var161;
} else {
}
if (varonce162) {
var163 = varonce162;
} else {
var164 = ", ";
var165 = 2;
var166 = string__NativeString__to_s_with_length(var164, var165);
var163 = var166;
varonce162 = var163;
}
var167 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var167 = array_instance Array[Object] */
var168 = 2;
var169 = NEW_array__NativeArray(var168, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var169)->values[0] = (val*) var163;
((struct instance_array__NativeArray*)var169)->values[1] = (val*) var_mtype;
{
((void (*)(val*, val*, long))(var167->class->vft[COLOR_array__Array__with_native]))(var167, var169, var168) /* with_native on <var167:Array[Object]>*/;
}
}
{
var170 = ((val* (*)(val*))(var167->class->vft[COLOR_string__Object__to_s]))(var167) /* to_s on <var167:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var170); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
if (varonce171) {
var172 = varonce171;
} else {
var173 = ", ";
var174 = 2;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
{
var176 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce177) {
var178 = varonce177;
} else {
var179 = " p";
var180 = 2;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
var182 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var182 = array_instance Array[Object] */
var183 = 4;
var184 = NEW_array__NativeArray(var183, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var184)->values[0] = (val*) var172;
((struct instance_array__NativeArray*)var184)->values[1] = (val*) var176;
((struct instance_array__NativeArray*)var184)->values[2] = (val*) var178;
var185 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var184)->values[3] = (val*) var185;
{
((void (*)(val*, val*, long))(var182->class->vft[COLOR_array__Array__with_native]))(var182, var184, var183) /* with_native on <var182:Array[Object]>*/;
}
}
{
var186 = ((val* (*)(val*))(var182->class->vft[COLOR_string__Object__to_s]))(var182) /* to_s on <var182:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var186); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var187 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce188) {
var189 = varonce188;
} else {
var190 = "p";
var191 = 1;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var193 = array_instance Array[Object] */
var194 = 2;
var195 = NEW_array__NativeArray(var194, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var195)->values[0] = (val*) var189;
var196 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var195)->values[1] = (val*) var196;
{
((void (*)(val*, val*, long))(var193->class->vft[COLOR_array__Array__with_native]))(var193, var195, var194) /* with_native on <var193:Array[Object]>*/;
}
}
{
var197 = ((val* (*)(val*))(var193->class->vft[COLOR_string__Object__to_s]))(var193) /* to_s on <var193:Array[Object]>*/;
}
{
abstract_compiler__RuntimeVariable__init(var187, var197, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var187:RuntimeVariable>*/
}
var_argvar = var187;
{
array__Array__add(var_arguments, var_argvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var135->class->vft[COLOR_abstract_collection__Iterator__next]))(var135) /* next on <var135:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
if (varonce198) {
var199 = varonce198;
} else {
var200 = ")";
var201 = 1;
var202 = string__NativeString__to_s_with_length(var200, var201);
var199 = var202;
varonce198 = var199;
}
{
string__FlatBuffer__append(var_sig, var199); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce203) {
var204 = varonce203;
} else {
var205 = ")";
var206 = 1;
var207 = string__NativeString__to_s_with_length(var205, var206);
var204 = var207;
varonce203 = var204;
}
{
string__FlatBuffer__append(var_comment, var204); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
var208 = NULL;
if (var_ret == NULL) {
var209 = 0; /* is null */
} else {
var209 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var208) on <var_ret:nullable MType> */
var_other = var208;
{
var213 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var212 = var213;
}
var214 = !var212;
var210 = var214;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
var209 = var210;
}
if (var209){
if (varonce215) {
var216 = varonce215;
} else {
var217 = ": ";
var218 = 2;
var219 = string__NativeString__to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var220 = array_instance Array[Object] */
var221 = 2;
var222 = NEW_array__NativeArray(var221, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var222)->values[0] = (val*) var216;
((struct instance_array__NativeArray*)var222)->values[1] = (val*) var_ret;
{
((void (*)(val*, val*, long))(var220->class->vft[COLOR_array__Array__with_native]))(var220, var222, var221) /* with_native on <var220:Array[Object]>*/;
}
}
{
var223 = ((val* (*)(val*))(var220->class->vft[COLOR_string__Object__to_s]))(var220) /* to_s on <var220:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var223); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
} else {
}
{
var224 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce225) {
var226 = varonce225;
} else {
var227 = ";";
var228 = 1;
var229 = string__NativeString__to_s_with_length(var227, var228);
var226 = var229;
varonce225 = var226;
}
var230 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var230 = array_instance Array[Object] */
var231 = 2;
var232 = NEW_array__NativeArray(var231, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var232)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var232)->values[1] = (val*) var226;
{
((void (*)(val*, val*, long))(var230->class->vft[COLOR_array__Array__with_native]))(var230, var232, var231) /* with_native on <var230:Array[Object]>*/;
}
}
{
var233 = ((val* (*)(val*))(var230->class->vft[COLOR_string__Object__to_s]))(var230) /* to_s on <var230:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(var_compiler, var224, var233); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:AbstractCompiler>*/
}
if (varonce234) {
var235 = varonce234;
} else {
var236 = "/* method ";
var237 = 10;
var238 = string__NativeString__to_s_with_length(var236, var237);
var235 = var238;
varonce234 = var235;
}
if (varonce239) {
var240 = varonce239;
} else {
var241 = " for ";
var242 = 5;
var243 = string__NativeString__to_s_with_length(var241, var242);
var240 = var243;
varonce239 = var240;
}
if (varonce244) {
var245 = varonce244;
} else {
var246 = " */";
var247 = 3;
var248 = string__NativeString__to_s_with_length(var246, var247);
var245 = var248;
varonce244 = var245;
}
var249 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var249 = array_instance Array[Object] */
var250 = 5;
var251 = NEW_array__NativeArray(var250, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var251)->values[0] = (val*) var235;
((struct instance_array__NativeArray*)var251)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var251)->values[2] = (val*) var240;
((struct instance_array__NativeArray*)var251)->values[3] = (val*) var_comment;
((struct instance_array__NativeArray*)var251)->values[4] = (val*) var245;
{
((void (*)(val*, val*, long))(var249->class->vft[COLOR_array__Array__with_native]))(var249, var251, var250) /* with_native on <var249:Array[Object]>*/;
}
}
{
var252 = ((val* (*)(val*))(var249->class->vft[COLOR_string__Object__to_s]))(var249) /* to_s on <var249:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var252); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = " {";
var256 = 2;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
var258 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var258 = array_instance Array[Object] */
var259 = 2;
var260 = NEW_array__NativeArray(var259, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var260)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var260)->values[1] = (val*) var254;
{
((void (*)(val*, val*, long))(var258->class->vft[COLOR_array__Array__with_native]))(var258, var260, var259) /* with_native on <var258:Array[Object]>*/;
}
}
{
var261 = ((val* (*)(val*))(var258->class->vft[COLOR_string__Object__to_s]))(var258) /* to_s on <var258:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var261); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var262 = NULL;
if (var_ret == NULL) {
var263 = 0; /* is null */
} else {
var263 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var262) on <var_ret:nullable MType> */
var_other = var262;
{
var267 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var266 = var267;
}
var268 = !var266;
var264 = var268;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
var263 = var264;
}
if (var263){
{
var269 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#Frame#returnvar= (var_frame,var269) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var269; /* _returnvar on <var_frame:Frame> */
RET_LABEL270:(void)0;
}
}
} else {
}
if (varonce271) {
var272 = varonce271;
} else {
var273 = "RET_LABEL";
var274 = 9;
var275 = string__NativeString__to_s_with_length(var273, var274);
var272 = var275;
varonce271 = var272;
}
{
var276 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var272);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel= (var_frame,var276) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var276; /* _returnlabel on <var_frame:Frame> */
RET_LABEL277:(void)0;
}
}
{
var278 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var278) on <var278:nullable Object(RuntimeVariable)> */
var281 = var278->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var278:nullable Object(RuntimeVariable)> */
if (unlikely(var281 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var279 = var281;
RET_LABEL280:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_recv,var279) on <var_recv:MClassType> */
var_other = var279;
{
var286 = ((short int (*)(val*, val*))(var_recv->class->vft[COLOR_kernel__Object___61d_61d]))(var_recv, var_other) /* == on <var_recv:MClassType>*/;
var285 = var286;
}
var287 = !var285;
var283 = var287;
goto RET_LABEL284;
RET_LABEL284:(void)0;
}
var282 = var283;
}
if (var282){
} else {
}
{
var288 = abstract_compiler__MMethodDef__compile_inside_to_c(var_mmethoddef, var_v, var_arguments);
}
var288;
{
{ /* Inline abstract_compiler#Frame#returnlabel (var_frame) on <var_frame:Frame> */
var291 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var_frame:Frame> */
var289 = var291;
RET_LABEL290:(void)0;
}
}
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1759);
show_backtrace(1);
}
if (varonce292) {
var293 = varonce292;
} else {
var294 = ":;";
var295 = 2;
var296 = string__NativeString__to_s_with_length(var294, var295);
var293 = var296;
varonce292 = var293;
}
var297 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var297 = array_instance Array[Object] */
var298 = 2;
var299 = NEW_array__NativeArray(var298, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var299)->values[0] = (val*) var289;
((struct instance_array__NativeArray*)var299)->values[1] = (val*) var293;
{
((void (*)(val*, val*, long))(var297->class->vft[COLOR_array__Array__with_native]))(var297, var299, var298) /* with_native on <var297:Array[Object]>*/;
}
}
{
var300 = ((val* (*)(val*))(var297->class->vft[COLOR_string__Object__to_s]))(var297) /* to_s on <var297:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var300); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var301 = NULL;
if (var_ret == NULL) {
var302 = 0; /* is null */
} else {
var302 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var301) on <var_ret:nullable MType> */
var_other = var301;
{
var306 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var305 = var306;
}
var307 = !var305;
var303 = var307;
goto RET_LABEL304;
RET_LABEL304:(void)0;
}
var302 = var303;
}
if (var302){
if (varonce308) {
var309 = varonce308;
} else {
var310 = "return ";
var311 = 7;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
{
{ /* Inline abstract_compiler#Frame#returnvar (var_frame) on <var_frame:Frame> */
var315 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var_frame:Frame> */
var313 = var315;
RET_LABEL314:(void)0;
}
}
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1761);
show_backtrace(1);
}
if (varonce316) {
var317 = varonce316;
} else {
var318 = ";";
var319 = 1;
var320 = string__NativeString__to_s_with_length(var318, var319);
var317 = var320;
varonce316 = var317;
}
var321 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var321 = array_instance Array[Object] */
var322 = 3;
var323 = NEW_array__NativeArray(var322, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var323)->values[0] = (val*) var309;
((struct instance_array__NativeArray*)var323)->values[1] = (val*) var313;
((struct instance_array__NativeArray*)var323)->values[2] = (val*) var317;
{
((void (*)(val*, val*, long))(var321->class->vft[COLOR_array__Array__with_native]))(var321, var323, var322) /* with_native on <var321:Array[Object]>*/;
}
}
{
var324 = ((val* (*)(val*))(var321->class->vft[COLOR_string__Object__to_s]))(var321) /* to_s on <var321:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var324); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce325) {
var326 = varonce325;
} else {
var327 = "}";
var328 = 1;
var329 = string__NativeString__to_s_with_length(var327, var328);
var326 = var329;
varonce325 = var326;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var326); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var330 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce331) {
var332 = varonce331;
} else {
var333 = "VIRTUAL";
var334 = 7;
var335 = string__NativeString__to_s_with_length(var333, var334);
var332 = var335;
varonce331 = var332;
}
var336 = 0;
{
var337 = string__Text__has_substring(var330, var332, var336);
}
var338 = !var337;
if (var338){
{
{ /* Inline abstract_compiler#AbstractCompiler#names (var_compiler) on <var_compiler:AbstractCompiler> */
var341 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var341 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var339 = var341;
RET_LABEL340:(void)0;
}
}
{
var342 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var345 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var345 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var343 = var345;
RET_LABEL344:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var343) on <var343:MClassDef> */
var348 = var343->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var343:MClassDef> */
if (unlikely(var348 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var346 = var348;
RET_LABEL347:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var346) on <var346:MModule> */
var351 = var346->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var346:MModule> */
if (unlikely(var351 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
if (varonce352) {
var353 = varonce352;
} else {
var354 = "::";
var355 = 2;
var356 = string__NativeString__to_s_with_length(var354, var355);
var353 = var356;
varonce352 = var353;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var359 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var359 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var357) on <var357:MClassDef> */
var362 = var357->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var357:MClassDef> */
if (unlikely(var362 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var360 = var362;
RET_LABEL361:(void)0;
}
}
{
{ /* Inline model#MClass#name (var360) on <var360:MClass> */
var365 = var360->attrs[COLOR_model__MClass___name].val; /* _name on <var360:MClass> */
if (unlikely(var365 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
if (varonce366) {
var367 = varonce366;
} else {
var368 = "::";
var369 = 2;
var370 = string__NativeString__to_s_with_length(var368, var369);
var367 = var370;
varonce366 = var367;
}
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var373 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var373 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var371 = var373;
RET_LABEL372:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var371) on <var371:MProperty(MMethod)> */
var376 = var371->attrs[COLOR_model__MProperty___name].val; /* _name on <var371:MProperty(MMethod)> */
if (unlikely(var376 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
if (varonce377) {
var378 = varonce377;
} else {
var379 = " (";
var380 = 2;
var381 = string__NativeString__to_s_with_length(var379, var380);
var378 = var381;
varonce377 = var378;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var384 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var384 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1876);
show_backtrace(1);
}
var382 = var384;
RET_LABEL383:(void)0;
}
}
{
{ /* Inline location#Location#file (var382) on <var382:Location> */
var387 = var382->attrs[COLOR_location__Location___file].val; /* _file on <var382:Location> */
var385 = var387;
RET_LABEL386:(void)0;
}
}
if (var385 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1764);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var385) on <var385:nullable SourceFile> */
if (unlikely(var385 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var390 = var385->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var385:nullable SourceFile> */
if (unlikely(var390 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var388 = var390;
RET_LABEL389:(void)0;
}
}
if (varonce391) {
var392 = varonce391;
} else {
var393 = ":";
var394 = 1;
var395 = string__NativeString__to_s_with_length(var393, var394);
var392 = var395;
varonce391 = var392;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var398 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var398 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1876);
show_backtrace(1);
}
var396 = var398;
RET_LABEL397:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var396) on <var396:Location> */
var401 = var396->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var396:Location> */
var399 = var401;
RET_LABEL400:(void)0;
}
}
if (varonce402) {
var403 = varonce402;
} else {
var404 = ")";
var405 = 1;
var406 = string__NativeString__to_s_with_length(var404, var405);
var403 = var406;
varonce402 = var403;
}
var407 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var407 = array_instance Array[Object] */
var408 = 10;
var409 = NEW_array__NativeArray(var408, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var409)->values[0] = (val*) var349;
((struct instance_array__NativeArray*)var409)->values[1] = (val*) var353;
((struct instance_array__NativeArray*)var409)->values[2] = (val*) var363;
((struct instance_array__NativeArray*)var409)->values[3] = (val*) var367;
((struct instance_array__NativeArray*)var409)->values[4] = (val*) var374;
((struct instance_array__NativeArray*)var409)->values[5] = (val*) var378;
((struct instance_array__NativeArray*)var409)->values[6] = (val*) var388;
((struct instance_array__NativeArray*)var409)->values[7] = (val*) var392;
var410 = BOX_kernel__Int(var399); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var409)->values[8] = (val*) var410;
((struct instance_array__NativeArray*)var409)->values[9] = (val*) var403;
{
((void (*)(val*, val*, long))(var407->class->vft[COLOR_array__Array__with_native]))(var407, var409, var408) /* with_native on <var407:Array[Object]>*/;
}
}
{
var411 = ((val* (*)(val*))(var407->class->vft[COLOR_string__Object__to_s]))(var407) /* to_s on <var407:Array[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var339, var342, var411); /* Direct call hash_collection#HashMap#[]= on <var339:HashMap[String, String]>*/
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler#SeparateRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_separate_compiler__SeparateRuntimeFunction__compile_to_c(val* self, val* p0) {
separate_compiler__SeparateRuntimeFunction__compile_to_c(self, p0); /* Direct call separate_compiler#SeparateRuntimeFunction#compile_to_c on <self:Object(SeparateRuntimeFunction)>*/
RET_LABEL:;
}
/* method separate_compiler#VirtualRuntimeFunction#build_c_name for (self: VirtualRuntimeFunction): String */
val* separate_compiler__VirtualRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MMethodDef */;
val* var7 /* : MMethodDef */;
val* var8 /* : String */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "VIRTUAL_";
var3 = 8;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var7 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = abstract_compiler__MPropDef__c_name(var5);
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var8;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var12 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#build_c_name for (self: Object): String */
val* VIRTUAL_separate_compiler__VirtualRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__VirtualRuntimeFunction__build_c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#to_s for (self: VirtualRuntimeFunction): String */
val* separate_compiler__VirtualRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#to_s (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1900);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#to_s for (self: Object): String */
val* VIRTUAL_separate_compiler__VirtualRuntimeFunction__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__VirtualRuntimeFunction__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#VirtualRuntimeFunction#compile_to_c for (self: VirtualRuntimeFunction, AbstractCompiler) */
void separate_compiler__VirtualRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var13 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var14 /* : RuntimeVariable */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : MClassType */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var20 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var21 /* : Frame */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const struct type* type_struct26;
const char* var_class_name27;
val* var_frame /* var frame: Frame */;
val* var29 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var30 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var31 /* : MMethodDef */;
val* var33 /* : MMethodDef */;
val* var34 /* : MProperty */;
val* var36 /* : MProperty */;
val* var37 /* : MPropDef */;
val* var38 /* : MClassDef */;
val* var40 /* : MClassDef */;
val* var_intromclassdef /* var intromclassdef: MClassDef */;
val* var41 /* : MProperty */;
val* var43 /* : MProperty */;
val* var44 /* : MPropDef */;
val* var45 /* : nullable MSignature */;
val* var47 /* : nullable MSignature */;
val* var48 /* : MClassType */;
val* var50 /* : MClassType */;
val* var51 /* : MClassType */;
val* var53 /* : MClassType */;
val* var54 /* : MModule */;
val* var56 /* : MModule */;
short int var57 /* : Bool */;
val* var58 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var59 /* : nullable MType */;
val* var61 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : Array[Object] */;
long var76 /* : Int */;
val* var77 /* : NativeArray[Object] */;
val* var78 /* : String */;
val* var79 /* : MProperty */;
val* var81 /* : MProperty */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
val* var91 /* : Array[Object] */;
long var92 /* : Int */;
val* var93 /* : NativeArray[Object] */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : MType */;
val* var108 /* : MType */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : MType */;
val* var131 /* : MType */;
val* var132 /* : Array[Object] */;
long var133 /* : Int */;
val* var134 /* : NativeArray[Object] */;
val* var135 /* : String */;
val* var136 /* : Range[Int] */;
long var137 /* : Int */;
long var138 /* : Int */;
val* var139 /* : Discrete */;
val* var140 /* : Discrete */;
val* var141 /* : Iterator[Discrete] */;
short int var142 /* : Bool */;
val* var143 /* : nullable Object */;
long var_i /* var i: Int */;
long var144 /* : Int */;
val* var145 /* : Array[MParameter] */;
val* var147 /* : Array[MParameter] */;
val* var148 /* : nullable Object */;
val* var149 /* : MType */;
val* var151 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var152 /* : Int */;
long var154 /* : Int */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
val* var164 /* : MClass */;
val* var165 /* : Array[MType] */;
long var166 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var167 /* : MClassType */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : FlatString */;
val* var173 /* : Array[Object] */;
long var174 /* : Int */;
val* var175 /* : NativeArray[Object] */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : FlatString */;
val* var188 /* : Array[Object] */;
long var189 /* : Int */;
val* var190 /* : NativeArray[Object] */;
val* var191 /* : Object */;
val* var192 /* : String */;
val* var193 /* : RuntimeVariable */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : FlatString */;
val* var199 /* : Array[Object] */;
long var200 /* : Int */;
val* var201 /* : NativeArray[Object] */;
val* var202 /* : Object */;
val* var203 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : FlatString */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : NativeString */;
long var212 /* : Int */;
val* var213 /* : FlatString */;
val* var214 /* : null */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : FlatString */;
val* var226 /* : Array[Object] */;
long var227 /* : Int */;
val* var228 /* : NativeArray[Object] */;
val* var229 /* : String */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : FlatString */;
val* var236 /* : Array[Object] */;
long var237 /* : Int */;
val* var238 /* : NativeArray[Object] */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
long var243 /* : Int */;
val* var244 /* : FlatString */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : NativeString */;
long var248 /* : Int */;
val* var249 /* : FlatString */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : FlatString */;
val* var255 /* : Array[Object] */;
long var256 /* : Int */;
val* var257 /* : NativeArray[Object] */;
val* var258 /* : String */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
long var262 /* : Int */;
val* var263 /* : FlatString */;
val* var264 /* : Array[Object] */;
long var265 /* : Int */;
val* var266 /* : NativeArray[Object] */;
val* var267 /* : String */;
val* var268 /* : null */;
short int var269 /* : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
val* var275 /* : RuntimeVariable */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : NativeString */;
long var280 /* : Int */;
val* var281 /* : FlatString */;
val* var282 /* : String */;
val* var284 /* : nullable RuntimeVariable */;
val* var_subret /* var subret: nullable RuntimeVariable */;
val* var285 /* : null */;
short int var286 /* : Bool */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
val* var292 /* : null */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
short int var296 /* : Bool */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
val* var299 /* : nullable RuntimeVariable */;
val* var301 /* : nullable RuntimeVariable */;
val* var302 /* : nullable String */;
val* var304 /* : nullable String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : NativeString */;
long var308 /* : Int */;
val* var309 /* : FlatString */;
val* var310 /* : Array[Object] */;
long var311 /* : Int */;
val* var312 /* : NativeArray[Object] */;
val* var313 /* : String */;
val* var314 /* : null */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var318 /* : Bool */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
long var324 /* : Int */;
val* var325 /* : FlatString */;
val* var326 /* : nullable RuntimeVariable */;
val* var328 /* : nullable RuntimeVariable */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
val* var334 /* : Array[Object] */;
long var335 /* : Int */;
val* var336 /* : NativeArray[Object] */;
val* var337 /* : String */;
static val* varonce338;
val* var339 /* : String */;
char* var340 /* : NativeString */;
long var341 /* : Int */;
val* var342 /* : FlatString */;
val* var343 /* : String */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
long var347 /* : Int */;
val* var348 /* : FlatString */;
long var349 /* : Int */;
short int var350 /* : Bool */;
short int var351 /* : Bool */;
val* var352 /* : HashMap[String, String] */;
val* var354 /* : HashMap[String, String] */;
val* var355 /* : String */;
val* var356 /* : MClassDef */;
val* var358 /* : MClassDef */;
val* var359 /* : MModule */;
val* var361 /* : MModule */;
val* var362 /* : String */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : FlatString */;
val* var370 /* : MClassDef */;
val* var372 /* : MClassDef */;
val* var373 /* : MClass */;
val* var375 /* : MClass */;
val* var376 /* : String */;
val* var378 /* : String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
long var382 /* : Int */;
val* var383 /* : FlatString */;
val* var384 /* : MProperty */;
val* var386 /* : MProperty */;
val* var387 /* : String */;
val* var389 /* : String */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : NativeString */;
long var393 /* : Int */;
val* var394 /* : FlatString */;
val* var395 /* : Location */;
val* var397 /* : Location */;
val* var398 /* : nullable SourceFile */;
val* var400 /* : nullable SourceFile */;
val* var401 /* : String */;
val* var403 /* : String */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
long var407 /* : Int */;
val* var408 /* : FlatString */;
val* var409 /* : Location */;
val* var411 /* : Location */;
long var412 /* : Int */;
long var414 /* : Int */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
long var418 /* : Int */;
val* var419 /* : FlatString */;
val* var420 /* : Array[Object] */;
long var421 /* : Int */;
val* var422 /* : NativeArray[Object] */;
val* var423 /* : Object */;
val* var424 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1777);
show_backtrace(1);
}
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmethoddef = var1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var6 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_recv = var10;
{
var13 = ((val* (*)(val*))(var_compiler->class->vft[COLOR_abstract_compiler__AbstractCompiler__new_visitor]))(var_compiler) /* new_visitor on <var_compiler:AbstractCompiler>*/;
}
var_v = var13;
var14 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce) {
var15 = varonce;
} else {
var16 = "self";
var17 = 4;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
var19 = abstract_compiler__AbstractCompilerVisitor__object_type(var_v);
}
{
abstract_compiler__RuntimeVariable__init(var14, var15, var19, var_recv); /* Direct call abstract_compiler#RuntimeVariable#init on <var14:RuntimeVariable>*/
}
var_selfvar = var14;
var20 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
{
array__Array__init(var20); /* Direct call array#Array#init on <var20:Array[RuntimeVariable]>*/
}
var_arguments = var20;
var21 = NEW_abstract_compiler__Frame(&type_abstract_compiler__Frame);
{
{ /* Inline abstract_compiler#Frame#init (var21,var_v,var_mmethoddef,var_recv,var_arguments) on <var21:Frame> */
/* Covariant cast for argument 0 (visitor) <var_v:AbstractCompilerVisitor> isa VISITOR */
/* <var_v:AbstractCompilerVisitor> isa VISITOR */
type_struct26 = var21->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype24 = type_struct26->color;
idtype25 = type_struct26->id;
if(cltype24 >= var_v->type->table_size) {
var23 = 0;
} else {
var23 = var_v->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name27 = var_v == NULL ? "null" : var_v->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
var21->attrs[COLOR_abstract_compiler__Frame___visitor].val = var_v; /* _visitor on <var21:Frame> */
var21->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = var_mmethoddef; /* _mpropdef on <var21:Frame> */
var21->attrs[COLOR_abstract_compiler__Frame___receiver].val = var_recv; /* _receiver on <var21:Frame> */
var21->attrs[COLOR_abstract_compiler__Frame___arguments].val = var_arguments; /* _arguments on <var21:Frame> */
RET_LABEL22:(void)0;
}
}
var_frame = var21;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL28:(void)0;
}
}
var29 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var29); /* Direct call string#FlatBuffer#init on <var29:FlatBuffer>*/
}
var_sig = var29;
var30 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var30); /* Direct call string#FlatBuffer#init on <var30:FlatBuffer>*/
}
var_comment = var30;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:VirtualRuntimeFunction> */
var33 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:VirtualRuntimeFunction> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var31) on <var31:MMethodDef> */
var36 = var31->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var31:MMethodDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = model__MProperty__intro(var34);
}
{
{ /* Inline model#MPropDef#mclassdef (var37) on <var37:MPropDef(MMethodDef)> */
var40 = var37->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var37:MPropDef(MMethodDef)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_intromclassdef = var38;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var43 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = model__MProperty__intro(var41);
}
{
{ /* Inline model#MMethodDef#msignature (var44) on <var44:MPropDef(MMethodDef)> */
var47 = var44->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var44:MPropDef(MMethodDef)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var50 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var53 = var_intromclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intromclassdef:MClassDef> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_intromclassdef) on <var_intromclassdef:MClassDef> */
var56 = var_intromclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intromclassdef:MClassDef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var57 = 1;
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1793);
show_backtrace(1);
} else {
var58 = model__MSignature__resolve_for(var45, var48, var51, var54, var57);
}
var_msignature = var58;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var61 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var_ret = var59;
var62 = NULL;
if (var_ret == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var62) on <var_ret:nullable MType> */
var_other = var62;
{
var67 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var66 = var67;
}
var68 = !var66;
var64 = var68;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
{
var69 = ((val* (*)(val*))(var_ret->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_ret) /* ctype on <var_ret:nullable MType(MType)>*/;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = " ";
var73 = 1;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var75 = array_instance Array[Object] */
var76 = 2;
var77 = NEW_array__NativeArray(var76, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var77)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var77)->values[1] = (val*) var71;
{
((void (*)(val*, val*, long))(var75->class->vft[COLOR_array__Array__with_native]))(var75, var77, var76) /* with_native on <var75:Array[Object]>*/;
}
}
{
var78 = ((val* (*)(val*))(var75->class->vft[COLOR_string__Object__to_s]))(var75) /* to_s on <var75:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var78); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var81 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var79) on <var79:MProperty(MMethod)> */
var84 = var79->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var79:MProperty(MMethod)> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (var82){
var_ret = var_recv;
{
var85 = abstract_compiler__MClassType__ctype(var_ret);
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = " ";
var89 = 1;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var91 = array_instance Array[Object] */
var92 = 2;
var93 = NEW_array__NativeArray(var92, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var93)->values[0] = (val*) var85;
((struct instance_array__NativeArray*)var93)->values[1] = (val*) var87;
{
((void (*)(val*, val*, long))(var91->class->vft[COLOR_array__Array__with_native]))(var91, var93, var92) /* with_native on <var91:Array[Object]>*/;
}
}
{
var94 = ((val* (*)(val*))(var91->class->vft[COLOR_string__Object__to_s]))(var91) /* to_s on <var91:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var94); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
} else {
if (varonce95) {
var96 = varonce95;
} else {
var97 = "void ";
var98 = 5;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
string__FlatBuffer__append(var_sig, var96); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
}
}
{
var100 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
string__FlatBuffer__append(var_sig, var100); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "(";
var104 = 1;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var108 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
var109 = ((val* (*)(val*))(var106->class->vft[COLOR_abstract_compiler__MType__ctype]))(var106) /* ctype on <var106:MType>*/;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = " ";
var113 = 1;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 4;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var102;
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var109;
((struct instance_array__NativeArray*)var117)->values[2] = (val*) var111;
((struct instance_array__NativeArray*)var117)->values[3] = (val*) var_selfvar;
{
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
}
{
var118 = ((val* (*)(val*))(var115->class->vft[COLOR_string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var118); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "(";
var122 = 1;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = ": ";
var127 = 2;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_selfvar) on <var_selfvar:RuntimeVariable> */
var131 = var_selfvar->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_selfvar:RuntimeVariable> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
var132 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var132 = array_instance Array[Object] */
var133 = 4;
var134 = NEW_array__NativeArray(var133, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var134)->values[0] = (val*) var120;
((struct instance_array__NativeArray*)var134)->values[1] = (val*) var_selfvar;
((struct instance_array__NativeArray*)var134)->values[2] = (val*) var125;
((struct instance_array__NativeArray*)var134)->values[3] = (val*) var129;
{
((void (*)(val*, val*, long))(var132->class->vft[COLOR_array__Array__with_native]))(var132, var134, var133) /* with_native on <var132:Array[Object]>*/;
}
}
{
var135 = ((val* (*)(val*))(var132->class->vft[COLOR_string__Object__to_s]))(var132) /* to_s on <var132:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var135); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
{
array__Array__add(var_arguments, var_selfvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var136 = NEW_range__Range(&type_range__Rangekernel__Int);
var137 = 0;
{
var138 = model__MSignature__arity(var_msignature);
}
{
var139 = BOX_kernel__Int(var137); /* autobox from Int to Discrete */
var140 = BOX_kernel__Int(var138); /* autobox from Int to Discrete */
range__Range__without_last(var136, var139, var140); /* Direct call range#Range#without_last on <var136:Range[Int]>*/
}
{
var141 = range__Range__iterator(var136);
}
for(;;) {
{
var142 = ((short int (*)(val*))(var141->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var141) /* is_ok on <var141:Iterator[Discrete]>*/;
}
if(!var142) break;
{
var143 = ((val* (*)(val*))(var141->class->vft[COLOR_abstract_collection__Iterator__item]))(var141) /* item on <var141:Iterator[Discrete]>*/;
}
var144 = ((struct instance_kernel__Int*)var143)->value; /* autounbox from nullable Object to Int */;
var_i = var144;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var147 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
var148 = array__Array___91d_93d(var145, var_i);
}
{
{ /* Inline model#MParameter#mtype (var148) on <var148:nullable Object(MParameter)> */
var151 = var148->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var148:nullable Object(MParameter)> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
var_mtype = var149;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var154 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var152) on <var_i:Int> */
var158 = var_i == var152;
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
if (var155){
if (varonce159) {
var160 = varonce159;
} else {
var161 = "Array";
var162 = 5;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
var164 = abstract_compiler__AbstractCompilerVisitor__get_class(var_v, var160);
}
var165 = NEW_array__Array(&type_array__Arraymodel__MType);
var166 = 1;
{
array__Array__with_capacity(var165, var166); /* Direct call array#Array#with_capacity on <var165:Array[MType]>*/
}
var_ = var165;
{
array__AbstractArray__push(var_, var_mtype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var167 = model__MClass__get_mtype(var164, var_);
}
var_mtype = var167;
} else {
}
if (varonce168) {
var169 = varonce168;
} else {
var170 = ", ";
var171 = 2;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var173 = array_instance Array[Object] */
var174 = 2;
var175 = NEW_array__NativeArray(var174, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var175)->values[0] = (val*) var169;
((struct instance_array__NativeArray*)var175)->values[1] = (val*) var_mtype;
{
((void (*)(val*, val*, long))(var173->class->vft[COLOR_array__Array__with_native]))(var173, var175, var174) /* with_native on <var173:Array[Object]>*/;
}
}
{
var176 = ((val* (*)(val*))(var173->class->vft[COLOR_string__Object__to_s]))(var173) /* to_s on <var173:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var176); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
if (varonce177) {
var178 = varonce177;
} else {
var179 = ", ";
var180 = 2;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
{
var182 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_abstract_compiler__MType__ctype]))(var_mtype) /* ctype on <var_mtype:MType>*/;
}
if (varonce183) {
var184 = varonce183;
} else {
var185 = " p";
var186 = 2;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
var188 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var188 = array_instance Array[Object] */
var189 = 4;
var190 = NEW_array__NativeArray(var189, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var190)->values[0] = (val*) var178;
((struct instance_array__NativeArray*)var190)->values[1] = (val*) var182;
((struct instance_array__NativeArray*)var190)->values[2] = (val*) var184;
var191 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var190)->values[3] = (val*) var191;
{
((void (*)(val*, val*, long))(var188->class->vft[COLOR_array__Array__with_native]))(var188, var190, var189) /* with_native on <var188:Array[Object]>*/;
}
}
{
var192 = ((val* (*)(val*))(var188->class->vft[COLOR_string__Object__to_s]))(var188) /* to_s on <var188:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_sig, var192); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var193 = NEW_abstract_compiler__RuntimeVariable(&type_abstract_compiler__RuntimeVariable);
if (varonce194) {
var195 = varonce194;
} else {
var196 = "p";
var197 = 1;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
var199 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var199 = array_instance Array[Object] */
var200 = 2;
var201 = NEW_array__NativeArray(var200, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var201)->values[0] = (val*) var195;
var202 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var201)->values[1] = (val*) var202;
{
((void (*)(val*, val*, long))(var199->class->vft[COLOR_array__Array__with_native]))(var199, var201, var200) /* with_native on <var199:Array[Object]>*/;
}
}
{
var203 = ((val* (*)(val*))(var199->class->vft[COLOR_string__Object__to_s]))(var199) /* to_s on <var199:Array[Object]>*/;
}
{
abstract_compiler__RuntimeVariable__init(var193, var203, var_mtype, var_mtype); /* Direct call abstract_compiler#RuntimeVariable#init on <var193:RuntimeVariable>*/
}
var_argvar = var193;
{
array__Array__add(var_arguments, var_argvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var141->class->vft[COLOR_abstract_collection__Iterator__next]))(var141) /* next on <var141:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
if (varonce204) {
var205 = varonce204;
} else {
var206 = ")";
var207 = 1;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
{
string__FlatBuffer__append(var_sig, var205); /* Direct call string#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (varonce209) {
var210 = varonce209;
} else {
var211 = ")";
var212 = 1;
var213 = string__NativeString__to_s_with_length(var211, var212);
var210 = var213;
varonce209 = var210;
}
{
string__FlatBuffer__append(var_comment, var210); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
var214 = NULL;
if (var_ret == NULL) {
var215 = 0; /* is null */
} else {
var215 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var214) on <var_ret:nullable MType> */
var_other = var214;
{
var219 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var218 = var219;
}
var220 = !var218;
var216 = var220;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
var215 = var216;
}
if (var215){
if (varonce221) {
var222 = varonce221;
} else {
var223 = ": ";
var224 = 2;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
var226 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var226 = array_instance Array[Object] */
var227 = 2;
var228 = NEW_array__NativeArray(var227, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var228)->values[0] = (val*) var222;
((struct instance_array__NativeArray*)var228)->values[1] = (val*) var_ret;
{
((void (*)(val*, val*, long))(var226->class->vft[COLOR_array__Array__with_native]))(var226, var228, var227) /* with_native on <var226:Array[Object]>*/;
}
}
{
var229 = ((val* (*)(val*))(var226->class->vft[COLOR_string__Object__to_s]))(var226) /* to_s on <var226:Array[Object]>*/;
}
{
string__FlatBuffer__append(var_comment, var229); /* Direct call string#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
} else {
}
{
var230 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce231) {
var232 = varonce231;
} else {
var233 = ";";
var234 = 1;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
var236 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var236 = array_instance Array[Object] */
var237 = 2;
var238 = NEW_array__NativeArray(var237, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var238)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var238)->values[1] = (val*) var232;
{
((void (*)(val*, val*, long))(var236->class->vft[COLOR_array__Array__with_native]))(var236, var238, var237) /* with_native on <var236:Array[Object]>*/;
}
}
{
var239 = ((val* (*)(val*))(var236->class->vft[COLOR_string__Object__to_s]))(var236) /* to_s on <var236:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompiler__provide_declaration(var_compiler, var230, var239); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var_compiler:AbstractCompiler>*/
}
if (varonce240) {
var241 = varonce240;
} else {
var242 = "/* method ";
var243 = 10;
var244 = string__NativeString__to_s_with_length(var242, var243);
var241 = var244;
varonce240 = var241;
}
if (varonce245) {
var246 = varonce245;
} else {
var247 = " for ";
var248 = 5;
var249 = string__NativeString__to_s_with_length(var247, var248);
var246 = var249;
varonce245 = var246;
}
if (varonce250) {
var251 = varonce250;
} else {
var252 = " */";
var253 = 3;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
var255 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var255 = array_instance Array[Object] */
var256 = 5;
var257 = NEW_array__NativeArray(var256, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var257)->values[0] = (val*) var241;
((struct instance_array__NativeArray*)var257)->values[1] = (val*) self;
((struct instance_array__NativeArray*)var257)->values[2] = (val*) var246;
((struct instance_array__NativeArray*)var257)->values[3] = (val*) var_comment;
((struct instance_array__NativeArray*)var257)->values[4] = (val*) var251;
{
((void (*)(val*, val*, long))(var255->class->vft[COLOR_array__Array__with_native]))(var255, var257, var256) /* with_native on <var255:Array[Object]>*/;
}
}
{
var258 = ((val* (*)(val*))(var255->class->vft[COLOR_string__Object__to_s]))(var255) /* to_s on <var255:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var258); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (varonce259) {
var260 = varonce259;
} else {
var261 = " {";
var262 = 2;
var263 = string__NativeString__to_s_with_length(var261, var262);
var260 = var263;
varonce259 = var260;
}
var264 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var264 = array_instance Array[Object] */
var265 = 2;
var266 = NEW_array__NativeArray(var265, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var266)->values[0] = (val*) var_sig;
((struct instance_array__NativeArray*)var266)->values[1] = (val*) var260;
{
((void (*)(val*, val*, long))(var264->class->vft[COLOR_array__Array__with_native]))(var264, var266, var265) /* with_native on <var264:Array[Object]>*/;
}
}
{
var267 = ((val* (*)(val*))(var264->class->vft[COLOR_string__Object__to_s]))(var264) /* to_s on <var264:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(var_v, var267); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var268 = NULL;
if (var_ret == NULL) {
var269 = 0; /* is null */
} else {
var269 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var268) on <var_ret:nullable MType> */
var_other = var268;
{
var273 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var272 = var273;
}
var274 = !var272;
var270 = var274;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
var269 = var270;
}
if (var269){
{
var275 = abstract_compiler__AbstractCompilerVisitor__new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#Frame#returnvar= (var_frame,var275) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var275; /* _returnvar on <var_frame:Frame> */
RET_LABEL276:(void)0;
}
}
} else {
}
if (varonce277) {
var278 = varonce277;
} else {
var279 = "RET_LABEL";
var280 = 9;
var281 = string__NativeString__to_s_with_length(var279, var280);
var278 = var281;
varonce277 = var278;
}
{
var282 = abstract_compiler__AbstractCompilerVisitor__get_name(var_v, var278);
}
{
{ /* Inline abstract_compiler#Frame#returnlabel= (var_frame,var282) on <var_frame:Frame> */
var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var282; /* _returnlabel on <var_frame:Frame> */
RET_LABEL283:(void)0;
}
}
{
var284 = separate_compiler__SeparateCompilerVisitor__call(var_v, var_mmethoddef, var_recv, var_arguments);
}
var_subret = var284;
var285 = NULL;
if (var_ret == NULL) {
var286 = 0; /* is null */
} else {
var286 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var285) on <var_ret:nullable MType> */
var_other = var285;
{
var290 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var289 = var290;
}
var291 = !var289;
var287 = var291;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
var286 = var287;
}
if (var286){
var292 = NULL;
if (var_subret == NULL) {
var293 = 0; /* is null */
} else {
var293 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_subret,var292) on <var_subret:nullable RuntimeVariable> */
var_other = var292;
{
var297 = ((short int (*)(val*, val*))(var_subret->class->vft[COLOR_kernel__Object___61d_61d]))(var_subret, var_other) /* == on <var_subret:nullable RuntimeVariable(RuntimeVariable)>*/;
var296 = var297;
}
var298 = !var296;
var294 = var298;
goto RET_LABEL295;
RET_LABEL295:(void)0;
}
var293 = var294;
}
if (unlikely(!var293)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1833);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#Frame#returnvar (var_frame) on <var_frame:Frame> */
var301 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var_frame:Frame> */
var299 = var301;
RET_LABEL300:(void)0;
}
}
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1834);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var299, var_subret); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#Frame#returnlabel (var_frame) on <var_frame:Frame> */
var304 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var_frame:Frame> */
var302 = var304;
RET_LABEL303:(void)0;
}
}
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1837);
show_backtrace(1);
}
if (varonce305) {
var306 = varonce305;
} else {
var307 = ":;";
var308 = 2;
var309 = string__NativeString__to_s_with_length(var307, var308);
var306 = var309;
varonce305 = var306;
}
var310 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var310 = array_instance Array[Object] */
var311 = 2;
var312 = NEW_array__NativeArray(var311, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var312)->values[0] = (val*) var302;
((struct instance_array__NativeArray*)var312)->values[1] = (val*) var306;
{
((void (*)(val*, val*, long))(var310->class->vft[COLOR_array__Array__with_native]))(var310, var312, var311) /* with_native on <var310:Array[Object]>*/;
}
}
{
var313 = ((val* (*)(val*))(var310->class->vft[COLOR_string__Object__to_s]))(var310) /* to_s on <var310:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var313); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var314 = NULL;
if (var_ret == NULL) {
var315 = 0; /* is null */
} else {
var315 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var314) on <var_ret:nullable MType> */
var_other = var314;
{
var319 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var318 = var319;
}
var320 = !var318;
var316 = var320;
goto RET_LABEL317;
RET_LABEL317:(void)0;
}
var315 = var316;
}
if (var315){
if (varonce321) {
var322 = varonce321;
} else {
var323 = "return ";
var324 = 7;
var325 = string__NativeString__to_s_with_length(var323, var324);
var322 = var325;
varonce321 = var322;
}
{
{ /* Inline abstract_compiler#Frame#returnvar (var_frame) on <var_frame:Frame> */
var328 = var_frame->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var_frame:Frame> */
var326 = var328;
RET_LABEL327:(void)0;
}
}
if (unlikely(var326 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1839);
show_backtrace(1);
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = ";";
var332 = 1;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
var334 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var334 = array_instance Array[Object] */
var335 = 3;
var336 = NEW_array__NativeArray(var335, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var336)->values[0] = (val*) var322;
((struct instance_array__NativeArray*)var336)->values[1] = (val*) var326;
((struct instance_array__NativeArray*)var336)->values[2] = (val*) var330;
{
((void (*)(val*, val*, long))(var334->class->vft[COLOR_array__Array__with_native]))(var334, var336, var335) /* with_native on <var334:Array[Object]>*/;
}
}
{
var337 = ((val* (*)(val*))(var334->class->vft[COLOR_string__Object__to_s]))(var334) /* to_s on <var334:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var337); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (varonce338) {
var339 = varonce338;
} else {
var340 = "}";
var341 = 1;
var342 = string__NativeString__to_s_with_length(var340, var341);
var339 = var342;
varonce338 = var339;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var339); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var343 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
if (varonce344) {
var345 = varonce344;
} else {
var346 = "VIRTUAL";
var347 = 7;
var348 = string__NativeString__to_s_with_length(var346, var347);
var345 = var348;
varonce344 = var345;
}
var349 = 0;
{
var350 = string__Text__has_substring(var343, var345, var349);
}
var351 = !var350;
if (var351){
{
{ /* Inline abstract_compiler#AbstractCompiler#names (var_compiler) on <var_compiler:AbstractCompiler> */
var354 = var_compiler->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:AbstractCompiler> */
if (unlikely(var354 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 433);
show_backtrace(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
var355 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var358 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var358 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var356 = var358;
RET_LABEL357:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var356) on <var356:MClassDef> */
var361 = var356->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var356:MClassDef> */
if (unlikely(var361 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var359) on <var359:MModule> */
var364 = var359->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var359:MModule> */
if (unlikely(var364 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
if (varonce365) {
var366 = varonce365;
} else {
var367 = "::";
var368 = 2;
var369 = string__NativeString__to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var372 = var_mmethoddef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var370) on <var370:MClassDef> */
var375 = var370->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var370:MClassDef> */
if (unlikely(var375 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var373 = var375;
RET_LABEL374:(void)0;
}
}
{
{ /* Inline model#MClass#name (var373) on <var373:MClass> */
var378 = var373->attrs[COLOR_model__MClass___name].val; /* _name on <var373:MClass> */
if (unlikely(var378 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var376 = var378;
RET_LABEL377:(void)0;
}
}
if (varonce379) {
var380 = varonce379;
} else {
var381 = "::";
var382 = 2;
var383 = string__NativeString__to_s_with_length(var381, var382);
var380 = var383;
varonce379 = var380;
}
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var386 = var_mmethoddef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var386 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var384 = var386;
RET_LABEL385:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var384) on <var384:MProperty(MMethod)> */
var389 = var384->attrs[COLOR_model__MProperty___name].val; /* _name on <var384:MProperty(MMethod)> */
if (unlikely(var389 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var387 = var389;
RET_LABEL388:(void)0;
}
}
if (varonce390) {
var391 = varonce390;
} else {
var392 = " (";
var393 = 2;
var394 = string__NativeString__to_s_with_length(var392, var393);
var391 = var394;
varonce390 = var391;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var397 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var397 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1876);
show_backtrace(1);
}
var395 = var397;
RET_LABEL396:(void)0;
}
}
{
{ /* Inline location#Location#file (var395) on <var395:Location> */
var400 = var395->attrs[COLOR_location__Location___file].val; /* _file on <var395:Location> */
var398 = var400;
RET_LABEL399:(void)0;
}
}
if (var398 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/separate_compiler.nit", 1842);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var398) on <var398:nullable SourceFile> */
if (unlikely(var398 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var403 = var398->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var398:nullable SourceFile> */
if (unlikely(var403 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var401 = var403;
RET_LABEL402:(void)0;
}
}
if (varonce404) {
var405 = varonce404;
} else {
var406 = "--";
var407 = 2;
var408 = string__NativeString__to_s_with_length(var406, var407);
var405 = var408;
varonce404 = var405;
}
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var411 = var_mmethoddef->attrs[COLOR_model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var411 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1876);
show_backtrace(1);
}
var409 = var411;
RET_LABEL410:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var409) on <var409:Location> */
var414 = var409->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var409:Location> */
var412 = var414;
RET_LABEL413:(void)0;
}
}
if (varonce415) {
var416 = varonce415;
} else {
var417 = ")";
var418 = 1;
var419 = string__NativeString__to_s_with_length(var417, var418);
var416 = var419;
varonce415 = var416;
}
var420 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var420 = array_instance Array[Object] */
var421 = 10;
var422 = NEW_array__NativeArray(var421, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var422)->values[0] = (val*) var362;
((struct instance_array__NativeArray*)var422)->values[1] = (val*) var366;
((struct instance_array__NativeArray*)var422)->values[2] = (val*) var376;
((struct instance_array__NativeArray*)var422)->values[3] = (val*) var380;
((struct instance_array__NativeArray*)var422)->values[4] = (val*) var387;
((struct instance_array__NativeArray*)var422)->values[5] = (val*) var391;
((struct instance_array__NativeArray*)var422)->values[6] = (val*) var401;
((struct instance_array__NativeArray*)var422)->values[7] = (val*) var405;
var423 = BOX_kernel__Int(var412); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var422)->values[8] = (val*) var423;
((struct instance_array__NativeArray*)var422)->values[9] = (val*) var416;
{
((void (*)(val*, val*, long))(var420->class->vft[COLOR_array__Array__with_native]))(var420, var422, var421) /* with_native on <var420:Array[Object]>*/;
}
}
{
var424 = ((val* (*)(val*))(var420->class->vft[COLOR_string__Object__to_s]))(var420) /* to_s on <var420:Array[Object]>*/;
}
{
hash_collection__HashMap___91d_93d_61d(var352, var355, var424); /* Direct call hash_collection#HashMap#[]= on <var352:HashMap[String, String]>*/
}
} else {
}
RET_LABEL:;
}
/* method separate_compiler#VirtualRuntimeFunction#compile_to_c for (self: Object, AbstractCompiler) */
void VIRTUAL_separate_compiler__VirtualRuntimeFunction__compile_to_c(val* self, val* p0) {
separate_compiler__VirtualRuntimeFunction__compile_to_c(self, p0); /* Direct call separate_compiler#VirtualRuntimeFunction#compile_to_c on <self:Object(VirtualRuntimeFunction)>*/
RET_LABEL:;
}
/* method separate_compiler#MType#const_color for (self: MType): String */
val* separate_compiler__MType__const_color(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "COLOR_";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name]))(self) /* c_name on <self:MType>*/;
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MType#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MType__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MType__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MType#c_instance_name for (self: MType): String */
val* separate_compiler__MType__c_instance_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MType__c_name]))(self) /* c_name on <self:MType>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MType#c_instance_name for (self: Object): String */
val* VIRTUAL_separate_compiler__MType__c_instance_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MType__c_instance_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MClassType#c_instance_name for (self: MClassType): String */
val* separate_compiler__MClassType__c_instance_name(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = separate_compiler__MClass__c_instance_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MClassType#c_instance_name for (self: Object): String */
val* VIRTUAL_separate_compiler__MClassType__c_instance_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MClassType__c_instance_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MClass#c_instance_name for (self: MClass): String */
val* separate_compiler__MClass__c_instance_name(val* self) {
val* var /* : String */;
val* var1 /* : MClassKind */;
val* var3 /* : MClassKind */;
val* var4 /* : MClassKind */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
{
{ /* Inline model#MClass#kind (self) on <self:MClass> */
var3 = self->attrs[COLOR_model__MClass___kind].val; /* _kind on <self:MClass> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var1,var4) on <var1:MClassKind> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:MClassKind> */
var10 = var1 == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
if (varonce) {
var11 = varonce;
} else {
var12 = "kernel__Pointer";
var13 = 15;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var = var11;
goto RET_LABEL;
} else {
{
var15 = abstract_compiler__MClass__c_name(self);
}
var = var15;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method separate_compiler#MClass#c_instance_name for (self: Object): String */
val* VIRTUAL_separate_compiler__MClass__c_instance_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MClass__c_instance_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MProperty#const_color for (self: MProperty): String */
val* separate_compiler__MProperty__const_color(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "COLOR_";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__MProperty__c_name(self);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MProperty#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MProperty__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MProperty__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#MPropDef#const_color for (self: MPropDef): String */
val* separate_compiler__MPropDef__const_color(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : Array[Object] */;
long var7 /* : Int */;
val* var8 /* : NativeArray[Object] */;
val* var9 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "COLOR_";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__MPropDef__c_name(self);
}
var6 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var6 = array_instance Array[Object] */
var7 = 2;
var8 = NEW_array__NativeArray(var7, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var8)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var8)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var6->class->vft[COLOR_array__Array__with_native]))(var6, var8, var7) /* with_native on <var6:Array[Object]>*/;
}
}
{
var9 = ((val* (*)(val*))(var6->class->vft[COLOR_string__Object__to_s]))(var6) /* to_s on <var6:Array[Object]>*/;
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#MPropDef#const_color for (self: Object): String */
val* VIRTUAL_separate_compiler__MPropDef__const_color(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = separate_compiler__MPropDef__const_color(self);
var = var1;
RET_LABEL:;
return var;
}
