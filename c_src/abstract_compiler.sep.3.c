#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var_name /* var name: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
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
val* var35 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : MClass */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var78 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
long var94 /* : Int */;
long var96 /* : Int */;
val* var97 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : MMethod */;
val* var109 /* : Array[RuntimeVariable] */;
long var110 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var111 /* : nullable RuntimeVariable */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : FlatString */;
val* var117 /* : Array[Object] */;
long var118 /* : Int */;
val* var119 /* : NativeArray[Object] */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
var_string = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "String";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var1);
}
{
{ /* Inline model#MClass#mclass_type (var5) on <var5:MClass> */
var8 = var5->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mtype = var6;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "varonce";
var12 = 7;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = abstract_compiler__AbstractCompilerVisitor__get_name(self, var10);
}
var_name = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "static ";
var18 = 7;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
var20 = abstract_compiler__MClassType__ctype(var_mtype);
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " ";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = ";";
var29 = 1;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var20;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var22;
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var33)->values[4] = (val*) var27;
{
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add_decl(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
var35 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "if (";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ") {";
var44 = 3;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " = ";
var53 = 3;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ";";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 4;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var51;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var_name;
((struct instance_array__NativeArray*)var62)->values[3] = (val*) var56;
{
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "} else {";
var67 = 8;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var65); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "NativeString";
var72 = 12;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
var74 = abstract_compiler__AbstractCompilerVisitor__get_class(self, var70);
}
{
{ /* Inline model#MClass#mclass_type (var74) on <var74:MClass> */
var77 = var74->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var74:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_native_mtype = var75;
{
var78 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_native_mtype);
}
var_nat = var78;
if (varonce79) {
var80 = varonce79;
} else {
var81 = " = \"";
var82 = 4;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = string__Text__escape_to_c(var_string);
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "\";";
var88 = 2;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 4;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var_nat;
((struct instance_array__NativeArray*)var92)->values[1] = (val*) var80;
((struct instance_array__NativeArray*)var92)->values[2] = (val*) var84;
((struct instance_array__NativeArray*)var92)->values[3] = (val*) var86;
{
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val*))(var90->class->vft[COLOR_string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var93); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline string#FlatText#length (var_string) on <var_string:String> */
var96 = var_string->attrs[COLOR_string__FlatText___length].l; /* _length on <var_string:String> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, var94);
}
var_length = var97;
if (varonce98) {
var99 = varonce98;
} else {
var100 = " = ";
var101 = 3;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "to_s_with_length";
var106 = 16;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
var108 = abstract_compiler__AbstractCompilerVisitor__get_property(self, var104, var_native_mtype);
}
var109 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var110 = 2;
{
array__Array__with_capacity(var109, var110); /* Direct call array#Array#with_capacity on <var109:Array[RuntimeVariable]>*/
}
var_ = var109;
{
array__AbstractArray__push(var_, var_nat); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
array__AbstractArray__push(var_, var_length); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var111 = separate_compiler__SeparateCompilerVisitor__send(self, var108, var_);
}
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1420);
show_backtrace(1);
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = ";";
var115 = 1;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var117 = array_instance Array[Object] */
var118 = 4;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var99;
((struct instance_array__NativeArray*)var119)->values[2] = (val*) var111;
((struct instance_array__NativeArray*)var119)->values[3] = (val*) var113;
{
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[Object]>*/;
}
}
{
var120 = ((val* (*)(val*))(var117->class->vft[COLOR_string__Object__to_s]))(var117) /* to_s on <var117:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce121) {
var122 = varonce121;
} else {
var123 = " = ";
var124 = 3;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
if (varonce126) {
var127 = varonce126;
} else {
var128 = ";";
var129 = 1;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 4;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var_name;
((struct instance_array__NativeArray*)var133)->values[1] = (val*) var122;
((struct instance_array__NativeArray*)var133)->values[2] = (val*) var_res;
((struct instance_array__NativeArray*)var133)->values[3] = (val*) var127;
{
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
var134 = ((val* (*)(val*))(var131->class->vft[COLOR_string__Object__to_s]))(var131) /* to_s on <var131:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = "}";
var138 = 1;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var136); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: Object, String): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__string_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#value_instance for (self: AbstractCompilerVisitor, Object): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__value_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_object /* var object: Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : RuntimeVariable */;
long var3 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : RuntimeVariable */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : RuntimeVariable */;
var_object = p0;
/* <var_object:Object> isa Int */
cltype = type_kernel__Int.color;
idtype = type_kernel__Int.id;
if(cltype >= var_object->type->table_size) {
var1 = 0;
} else {
var1 = var_object->type->type_table[cltype] == idtype;
}
if (var1){
{
var3 = ((struct instance_kernel__Int*)var_object)->value; /* autounbox from Object to Int */;
var2 = abstract_compiler__AbstractCompilerVisitor__int_instance(self, var3);
}
var = var2;
goto RET_LABEL;
} else {
/* <var_object:Object> isa Bool */
cltype5 = type_kernel__Bool.color;
idtype6 = type_kernel__Bool.id;
if(cltype5 >= var_object->type->table_size) {
var4 = 0;
} else {
var4 = var_object->type->type_table[cltype5] == idtype6;
}
if (var4){
{
var8 = ((struct instance_kernel__Bool*)var_object)->value; /* autounbox from Object to Bool */;
var7 = abstract_compiler__AbstractCompilerVisitor__bool_instance(self, var8);
}
var = var7;
goto RET_LABEL;
} else {
/* <var_object:Object> isa String */
cltype10 = type_string__String.color;
idtype11 = type_string__String.id;
if(cltype10 >= var_object->type->table_size) {
var9 = 0;
} else {
var9 = var_object->type->type_table[cltype10] == idtype11;
}
if (var9){
{
var12 = abstract_compiler__AbstractCompilerVisitor__string_instance(self, var_object);
}
var = var12;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1435);
show_backtrace(1);
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#value_instance for (self: Object, Object): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__value_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__value_instance(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1056);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_abstract_compiler__CodeWriter___lines].val; /* _lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1019);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
abstract_collection__Sequence__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1056);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1020);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
abstract_collection__Sequence__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_decl(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : CodeFile */;
val* var5 /* : CodeFile */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
val* var_reqs /* var reqs: HashSet[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : HashMap[String, ANode] */;
val* var25 /* : HashMap[String, ANode] */;
var_key = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1056);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_abstract_compiler__CodeWriter___file].val; /* _file on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1018);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var3) on <var3:CodeFile> */
var8 = var3->attrs[COLOR_abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var3:CodeFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1013);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_reqs = var6;
{
var9 = hash_collection__HashSet__has(var_reqs, var_key);
}
if (var9){
goto RET_LABEL;
} else {
}
{
hash_collection__HashSet__add(var_reqs, var_key); /* Direct call hash_collection#HashSet#add on <var_reqs:HashSet[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
var13 = NULL;
if (var_node == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var13) on <var_node:nullable ANode> */
var_other = var13;
{
var18 = ((short int (*)(val*, val*))(var_node->class->vft[COLOR_kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ANode(ANode)>*/;
var17 = var18;
}
var19 = !var17;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var22 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 520);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var23, var_key, var_node); /* Direct call hash_collection#HashMap#[]= on <var23:HashMap[String, ANode]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
abstract_compiler__AbstractCompiler__provide_declaration(var, var_s, var_s); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var:AbstractCompiler>*/
}
{
abstract_compiler__AbstractCompilerVisitor__require_declaration(self, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__declare_once(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
val* var_file /* var file: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var_tryfile /* var tryfile: String */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : Array[String] */;
val* var37 /* : Array[String] */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
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
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
val* var65 /* : AbstractCompiler */;
val* var67 /* : AbstractCompiler */;
val* var68 /* : Array[String] */;
val* var70 /* : Array[String] */;
val* var71 /* : AbstractCompiler */;
val* var73 /* : AbstractCompiler */;
val* var74 /* : ArraySet[String] */;
val* var76 /* : ArraySet[String] */;
short int var77 /* : Bool */;
val* var78 /* : AbstractCompiler */;
val* var80 /* : AbstractCompiler */;
val* var81 /* : ArraySet[String] */;
val* var83 /* : ArraySet[String] */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
val* var89 /* : String */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var100 /* : ExternCFile */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var_f /* var f: ExternCFile */;
val* var112 /* : AbstractCompiler */;
val* var114 /* : AbstractCompiler */;
val* var115 /* : Array[ExternFile] */;
val* var117 /* : Array[ExternFile] */;
val* var118 /* : AbstractCompiler */;
val* var120 /* : AbstractCompiler */;
val* var121 /* : Array[String] */;
val* var123 /* : Array[String] */;
var_file = p0;
if (varonce) {
var = varonce;
} else {
var1 = ".nit";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = file__String__strip_extension(var_file, var);
}
var_file = var4;
if (varonce5) {
var6 = varonce5;
} else {
var7 = ".nit.h";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
{
var10 = string__FlatString___43d(var_file, var6);
}
var_tryfile = var10;
{
var11 = file__String__file_exists(var_tryfile);
}
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "#include \"";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "";
var20 = 0;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = file__String__basename(var_tryfile, var18);
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\"";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__declare_once(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var34 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var32) on <var32:AbstractCompiler> */
var37 = var32->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var32:AbstractCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
array__Array__add(var35, var_tryfile); /* Direct call array#Array#add on <var35:Array[String]>*/
}
} else {
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = "_nit.h";
var41 = 6;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
{
var43 = string__FlatString___43d(var_file, var39);
}
var_tryfile = var43;
{
var44 = file__String__file_exists(var_tryfile);
}
if (var44){
if (varonce45) {
var46 = varonce45;
} else {
var47 = "#include \"";
var48 = 10;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "";
var53 = 0;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var55 = file__String__basename(var_tryfile, var51);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "\"";
var59 = 1;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__declare_once(self, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var67 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var65) on <var65:AbstractCompiler> */
var70 = var65->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var65:AbstractCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
array__Array__add(var68, var_tryfile); /* Direct call array#Array#add on <var68:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var73 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var71) on <var71:AbstractCompiler> */
var76 = var71->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var71:AbstractCompiler> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 907);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = array__ArraySet__has(var74, var_file);
}
if (var77){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var80 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var78) on <var78:AbstractCompiler> */
var83 = var78->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var78:AbstractCompiler> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 907);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
array__ArraySet__add(var81, var_file); /* Direct call array#ArraySet#add on <var81:ArraySet[String]>*/
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = ".nit.c";
var87 = 6;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
var89 = string__FlatString___43d(var_file, var85);
}
var_tryfile = var89;
{
var90 = file__String__file_exists(var_tryfile);
}
var91 = !var90;
if (var91){
if (varonce92) {
var93 = varonce92;
} else {
var94 = "_nit.c";
var95 = 6;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = string__FlatString___43d(var_file, var93);
}
var_tryfile = var97;
{
var98 = file__String__file_exists(var_tryfile);
}
var99 = !var98;
if (var99){
goto RET_LABEL;
} else {
}
} else {
}
var100 = NEW_c_tools__ExternCFile(&type_c_tools__ExternCFile);
if (varonce101) {
var102 = varonce101;
} else {
var103 = "";
var104 = 0;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = file__String__basename(var_tryfile, var102);
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "";
var110 = 0;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
c_tools__ExternCFile__init(var100, var106, var108); /* Direct call c_tools#ExternCFile#init on <var100:ExternCFile>*/
}
var_f = var100;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var114 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var112) on <var112:AbstractCompiler> */
var117 = var112->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var112:AbstractCompiler> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 901);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
array__Array__add(var115, var_f); /* Direct call array#Array#add on <var115:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var120 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var118) on <var118:AbstractCompiler> */
var123 = var118->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var118:AbstractCompiler> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 904);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
array__Array__add(var121, var_tryfile); /* Direct call array#Array#add on <var121:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_extern(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_cexpr /* var cexpr: String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
var_cexpr = p0;
var_mtype = p1;
{
var1 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = " = ";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 4;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var_cexpr;
((struct instance_array__NativeArray*)var13)->values[3] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var14); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: Object, String, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
var_message = p0;
if (varonce) {
var = varonce;
} else {
var1 = "PRINT_ERROR(\"Runtime error: %s\", \"";
var2 = 34;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = string__Text__escape_to_c(var_message);
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "\");";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
{
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_abort(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: AbstractCompilerVisitor) */
void abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable ANode */;
val* var13 /* : nullable ANode */;
val* var14 /* : Location */;
val* var16 /* : Location */;
val* var17 /* : nullable SourceFile */;
val* var19 /* : nullable SourceFile */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : nullable ANode */;
val* var33 /* : nullable ANode */;
val* var34 /* : Location */;
val* var36 /* : Location */;
val* var37 /* : nullable SourceFile */;
val* var39 /* : nullable SourceFile */;
val* var40 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : nullable ANode */;
val* var51 /* : nullable ANode */;
val* var52 /* : Location */;
val* var54 /* : Location */;
long var55 /* : Int */;
long var57 /* : Int */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : Object */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable ANode> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable ANode(ANode)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var13 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1518);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var11) on <var11:nullable ANode> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var16 = var11->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var11:nullable ANode> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline location#Location#file (var14) on <var14:Location> */
var19 = var14->attrs[COLOR_location__Location___file].val; /* _file on <var14:Location> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = NULL;
if (var17 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var17,var20) on <var17:nullable SourceFile> */
var_other = var20;
{
var25 = ((short int (*)(val*, val*))(var17->class->vft[COLOR_kernel__Object___61d_61d]))(var17, var_other) /* == on <var17:nullable SourceFile(SourceFile)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
var = var21;
} else {
var = var_;
}
if (var){
if (varonce) {
var27 = varonce;
} else {
var28 = "PRINT_ERROR(\" (%s:%d)\\n\", \"";
var29 = 27;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var33 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1519);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var31) on <var31:nullable ANode> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var36 = var31->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var31:nullable ANode> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline location#Location#file (var34) on <var34:Location> */
var39 = var34->attrs[COLOR_location__Location___file].val; /* _file on <var34:Location> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1519);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var37) on <var37:nullable SourceFile> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var42 = var37->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var37:nullable SourceFile> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "location.nit", 22);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = string__Text__escape_to_c(var40);
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = "\", ";
var47 = 3;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var51 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (var49 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1519);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var49) on <var49:nullable ANode> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var54 = var49->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var49:nullable ANode> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var52) on <var52:Location> */
var57 = var52->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var52:Location> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = ");";
var61 = 2;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 5;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var27;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var43;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var45;
var66 = BOX_kernel__Int(var55); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var65)->values[3] = (val*) var66;
((struct instance_array__NativeArray*)var65)->values[4] = (val*) var59;
{
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
if (varonce68) {
var69 = varonce68;
} else {
var70 = "PRINT_ERROR(\"\\n\");";
var71 = 18;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var69); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "show_backtrace(1);";
var76 = 18;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var74); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
{
var = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag) /* type_test on <self:AbstractCompilerVisitor>*/;
}
var_res = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "if (unlikely(!";
var3 = 14;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = ")) {";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
{
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value) /* class_name_string on <self:AbstractCompilerVisitor>*/;
}
var_cn = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "PRINT_ERROR(\"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = 68;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
var20 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
}
{
var21 = string__Text__escape_to_c(var20);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\", ";
var25 = 3;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ");";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:AbstractCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: Object, RuntimeVariable, MType, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__add_cast(self, p0, p1, p2); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
val* var_s /* var s: RuntimeVariable */;
val* var /* : nullable Frame */;
val* var2 /* : nullable Frame */;
val* var3 /* : nullable RuntimeVariable */;
val* var5 /* : nullable RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : nullable Frame */;
val* var12 /* : nullable Frame */;
val* var13 /* : nullable String */;
val* var15 /* : nullable String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1540);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnvar (var) on <var:nullable Frame> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1691);
show_backtrace(1);
}
var5 = var->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var:nullable Frame> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1540);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(self, var3, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:AbstractCompilerVisitor>*/
}
if (varonce) {
var6 = varonce;
} else {
var7 = "goto ";
var8 = 5;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1541);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnlabel (var10) on <var10:nullable Frame> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1694);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var10:nullable Frame> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1541);
show_backtrace(1);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ";";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var13;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
{
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: Object, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__ret(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable ANode */;
val* var9 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_nexpr = p0;
var = NULL;
if (var_nexpr == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,var) on <var_nexpr:nullable AExpr> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var6 = var_nexpr == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_old = var7;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL10:(void)0;
}
}
{
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__stmt]))(var_nexpr, self) /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: Object, nullable AExpr) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__stmt(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
val* var5 /* : nullable RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MType */;
val* var14 /* : RuntimeVariable */;
val* var15 /* : nullable MType */;
val* var16 /* : RuntimeVariable */;
val* var17 /* : nullable MType */;
val* var19 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
val* var28 /* : AbstractCompiler */;
val* var30 /* : AbstractCompiler */;
val* var31 /* : ModelBuilder */;
val* var33 /* : ModelBuilder */;
val* var34 /* : ToolContext */;
val* var36 /* : ToolContext */;
val* var37 /* : OptionBool */;
val* var39 /* : OptionBool */;
val* var40 /* : nullable Object */;
val* var42 /* : nullable Object */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
var5 = ((val* (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__expr]))(var_nexpr, self) /* expr on <var_nexpr:AExpr>*/;
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1560);
show_backtrace(1);
}
var_res = var5;
var6 = NULL;
if (var_mtype == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var6) on <var_mtype:nullable MType> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
var13 = abstract_compiler__AbstractCompilerVisitor__anchor(self, var_mtype);
}
var_mtype = var13;
{
var14 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_res, var_mtype);
}
var_res = var14;
} else {
}
{
var15 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1565);
show_backtrace(1);
}
{
var16 = abstract_compiler__AbstractCompilerVisitor__autoadapt(self, var_res, var15);
}
var_res = var16;
{
{ /* Inline typing#AExpr#implicit_cast_to (var_nexpr) on <var_nexpr:AExpr> */
var19 = var_nexpr->attrs[COLOR_typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_nexpr:AExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_implicit_cast_to = var17;
var21 = NULL;
if (var_implicit_cast_to == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_implicit_cast_to,var21) on <var_implicit_cast_to:nullable MType> */
var_other = var21;
{
var26 = ((short int (*)(val*, val*))(var_implicit_cast_to->class->vft[COLOR_kernel__Object___61d_61d]))(var_implicit_cast_to, var_other) /* == on <var_implicit_cast_to:nullable MType(MType)>*/;
var25 = var26;
}
var27 = !var25;
var23 = var27;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
var_ = var22;
if (var22){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var30 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var28) on <var28:AbstractCompiler> */
var33 = var28->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var28:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var31) on <var31:ModelBuilder> */
var36 = var31->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var31:ModelBuilder> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (var34) on <var34:ToolContext> */
var39 = var34->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <var34:ToolContext> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 55);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline opts#Option#value (var37) on <var37:OptionBool> */
var42 = var37->attrs[COLOR_opts__Option___value].val; /* _value on <var37:OptionBool> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = ((struct instance_kernel__Bool*)var40)->value; /* autounbox from nullable Object to Bool */;
var44 = !var43;
var20 = var44;
} else {
var20 = var_;
}
if (var20){
if (varonce) {
var45 = varonce;
} else {
var46 = "auto";
var47 = 4;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce = var45;
}
{
abstract_compiler__AbstractCompilerVisitor__add_cast(self, var_res, var_implicit_cast_to, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <self:AbstractCompilerVisitor>*/
}
{
var49 = abstract_compiler__AbstractCompilerVisitor__autoadapt(self, var_res, var_implicit_cast_to);
}
var_res = var49;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL50:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: Object, AExpr, nullable MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: AbstractCompilerVisitor, AExpr): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
var_nexpr = p0;
{
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__expr(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: Object, AExpr): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
var_message = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_node = var;
var3 = NULL;
if (var_node == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var3) on <var_node:nullable ANode> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var9 = var_node == var_other;
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
if (varonce) {
var10 = varonce;
} else {
var11 = "?: ";
var12 = 3;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 2;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_message;
{
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
}
{
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
}
{
file__Object__print(self, var17); /* Direct call file#Object#print on <self:AbstractCompilerVisitor>*/
}
} else {
{
parser_nodes__ANode__debug(var_node, var_message); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "/* DEBUG: ";
var21 = 10;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = " */";
var26 = 3;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_message;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__debug(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: AbstractRuntimeFunction): MMethodDef */
val* abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:AbstractRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: Object): MMethodDef */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:Object(AbstractRuntimeFunction)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:Object(AbstractRuntimeFunction)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1598);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef= for (self: AbstractRuntimeFunction, MMethodDef) */
void abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = p0; /* _mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef= for (self: Object, MMethodDef) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef= (self,p0) on <self:Object(AbstractRuntimeFunction)> */
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = p0; /* _mmethoddef on <self:Object(AbstractRuntimeFunction)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: AbstractRuntimeFunction): String */
val* abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache (self) on <self:AbstractRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__build_c_name]))(self) /* build_c_name on <self:AbstractRuntimeFunction>*/;
}
var_res = var11;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache= (self,var_res) on <self:AbstractRuntimeFunction> */
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var_res; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL12:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: AbstractRuntimeFunction): nullable String */
val* abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache (self) on <self:Object(AbstractRuntimeFunction)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:Object(AbstractRuntimeFunction)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: AbstractRuntimeFunction, nullable String) */
void abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = p0; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache= (self,p0) on <self:Object(AbstractRuntimeFunction)> */
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = p0; /* _c_name_cache on <self:Object(AbstractRuntimeFunction)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: AbstractRuntimeFunction) */
void abstract_compiler__AbstractRuntimeFunction__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__init]))(self) /* init on <self:AbstractRuntimeFunction>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init(val* self) {
{ /* Inline abstract_compiler#AbstractRuntimeFunction#init (self) on <self:Object(AbstractRuntimeFunction)> */
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__init]))(self) /* init on <self:Object(AbstractRuntimeFunction)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1631);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1631);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: RuntimeVariable, String) */
void abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val = p0; /* _name on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: Object, String) */
void VIRTUAL_abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#RuntimeVariable#name= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val = p0; /* _name on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val = p0; /* _mtype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#RuntimeVariable#mtype= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val = p0; /* _mtype on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = p0; /* _mcasttype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = p0; /* _mcasttype on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: RuntimeVariable): Bool */
short int abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline abstract_compiler#RuntimeVariable#is_exact (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:Object(RuntimeVariable)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: RuntimeVariable, Bool) */
void abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = p0; /* _is_exact on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: Object, Bool) */
void VIRTUAL_abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = p0; /* _is_exact on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: RuntimeVariable, String, MType, MType) */
void abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
val* var_name /* var name: String */;
val* var_mtype /* var mtype: MType */;
val* var_mcasttype /* var mcasttype: MType */;
short int var /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_name = p0;
var_mtype = p1;
var_mcasttype = p2;
{
{ /* Inline abstract_compiler#RuntimeVariable#name= (self,var_name) on <self:RuntimeVariable> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val = var_name; /* _name on <self:RuntimeVariable> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype= (self,var_mtype) on <self:RuntimeVariable> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val = var_mtype; /* _mtype on <self:RuntimeVariable> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (self,var_mcasttype) on <self:RuntimeVariable> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = var_mcasttype; /* _mcasttype on <self:RuntimeVariable> */
RET_LABEL3:(void)0;
}
}
{
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var4 = !var;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1649);
show_backtrace(1);
}
{
var5 = ((short int (*)(val*))(var_mcasttype->class->vft[COLOR_model__MType__need_anchor]))(var_mcasttype) /* need_anchor on <var_mcasttype:MType>*/;
}
var6 = !var5;
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1650);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: Object, String, MType, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__RuntimeVariable__init(self, p0, p1, p2); /* Direct call abstract_compiler#RuntimeVariable#init on <self:Object(RuntimeVariable)>*/
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1631);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__inspect(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var_exact_str /* var exact_str: nullable Object */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : MType */;
val* var15 /* : MType */;
val* var16 /* : MType */;
val* var18 /* : MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MType */;
val* var27 /* : MType */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var32 /* : MType */;
val* var34 /* : MType */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : MType */;
val* var42 /* : MType */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Object] */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
if (varonce) {
var4 = varonce;
} else {
var5 = " exact";
var6 = 6;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var_exact_str = var4;
} else {
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var_exact_str = var9;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var15 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var18 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var13,var16) on <var13:MType> */
var_other = var16;
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:MType> */
var24 = var13 == var_other;
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
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var27 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 2;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_exact_str;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
var_type_str = var31;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var34 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "(";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var42 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1637);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = ")";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 5;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var36;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var40;
((struct instance_array__NativeArray*)var50)->values[3] = (val*) var_exact_str;
((struct instance_array__NativeArray*)var50)->values[4] = (val*) var44;
{
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
}
}
{
var51 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
}
var_type_str = var51;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "<";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:RuntimeVariable> */
var59 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1631);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = ":";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = ">";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 5;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var61;
((struct instance_array__NativeArray*)var72)->values[3] = (val*) var_type_str;
((struct instance_array__NativeArray*)var72)->values[4] = (val*) var66;
{
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
}
var = var73;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__inspect(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__inspect(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#visitor= for (self: Frame, AbstractCompilerVisitor) */
void abstract_compiler__Frame__visitor_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1678);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___visitor].val = p0; /* _visitor on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#visitor= for (self: Object, AbstractCompilerVisitor) */
void VIRTUAL_abstract_compiler__Frame__visitor_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline abstract_compiler#Frame#visitor= (self,p0) on <self:Object(Frame)> */
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1678);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___visitor].val = p0; /* _visitor on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#mpropdef for (self: Frame): MPropDef */
val* abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
{ /* Inline abstract_compiler#Frame#mpropdef (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <self:Object(Frame)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1681);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef= for (self: Frame, MPropDef) */
void abstract_compiler__Frame__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = p0; /* _mpropdef on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_abstract_compiler__Frame__mpropdef_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Frame#mpropdef= (self,p0) on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = p0; /* _mpropdef on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#receiver for (self: Frame): MClassType */
val* abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1685);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
{ /* Inline abstract_compiler#Frame#receiver (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <self:Object(Frame)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1685);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver= for (self: Frame, MClassType) */
void abstract_compiler__Frame__receiver_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___receiver].val = p0; /* _receiver on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#receiver= for (self: Object, MClassType) */
void VIRTUAL_abstract_compiler__Frame__receiver_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Frame#receiver= (self,p0) on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___receiver].val = p0; /* _receiver on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#arguments for (self: Frame): Array[RuntimeVariable] */
val* abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments for (self: Object): Array[RuntimeVariable] */
val* VIRTUAL_abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
val* var3 /* : Array[RuntimeVariable] */;
{ /* Inline abstract_compiler#Frame#arguments (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <self:Object(Frame)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1688);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments= for (self: Frame, Array[RuntimeVariable]) */
void abstract_compiler__Frame__arguments_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___arguments].val = p0; /* _arguments on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#arguments= for (self: Object, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__Frame__arguments_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Frame#arguments= (self,p0) on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___arguments].val = p0; /* _arguments on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnvar for (self: Frame): nullable RuntimeVariable */
val* abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar for (self: Object): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
val* var3 /* : nullable RuntimeVariable */;
{ /* Inline abstract_compiler#Frame#returnvar (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <self:Object(Frame)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar= for (self: Frame, nullable RuntimeVariable) */
void abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___returnvar].val = p0; /* _returnvar on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnvar= for (self: Object, nullable RuntimeVariable) */
void VIRTUAL_abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Frame#returnvar= (self,p0) on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___returnvar].val = p0; /* _returnvar on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel for (self: Frame): nullable String */
val* abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#Frame#returnlabel (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <self:Object(Frame)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Frame, nullable String) */
void abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = p0; /* _returnlabel on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Frame#returnlabel= (self,p0) on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = p0; /* _returnlabel on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Frame) */
void abstract_compiler__Frame__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__Frame__init]))(self) /* init on <self:Frame>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Object) */
void VIRTUAL_abstract_compiler__Frame__init(val* self) {
{ /* Inline abstract_compiler#Frame#init (self) on <self:Object(Frame)> */
{
((void (*)(val*))(self->class->vft[COLOR_abstract_compiler__Frame__init]))(self) /* init on <self:Object(Frame)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MType#ctype for (self: MType): String */
val* abstract_compiler__MType__ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val*";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctype_extern for (self: MType): String */
val* abstract_compiler__MType__ctype_extern(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val*";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctype_extern for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctype_extern(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctype_extern(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: MType): String */
val* abstract_compiler__MType__ctypename(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: MType): String */
val* abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1708);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
const char* var_class_name;
{ /* Inline abstract_compiler#MType#c_name (self) on <self:Object(MType)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1708);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: MType): nullable String */
val* abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:Object(MType)> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:Object(MType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache= for (self: MType, nullable String) */
void abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = p0; /* _c_name_cache on <self:MType> */
RET_LABEL:;
}
/* method abstract_compiler#MType#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MType#c_name_cache= (self,p0) on <self:Object(MType)> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MClassType#c_name for (self: MClassType): String */
val* abstract_compiler__MClassType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MClassType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MClassType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var13 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var11:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var14) on <var14:MModule> */
var19 = var14->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var14:MModule> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = string__Text__to_cmangle(var17);
}
if (varonce) {
var21 = varonce;
} else {
var22 = "__";
var23 = 2;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var27 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClass#name (var25) on <var25:MClass> */
var30 = var25->attrs[COLOR_model__MClass___name].val; /* _name on <var25:MClass> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = string__Text__to_cmangle(var28);
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var31;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
var_res = var35;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MClassType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MClassType> */
RET_LABEL36:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: MClassType): String */
val* abstract_compiler__MClassType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
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
val* var36 /* : MClass */;
val* var38 /* : MClass */;
val* var39 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : MClass */;
val* var74 /* : MClass */;
val* var75 /* : String */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : String */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "Int";
var9 = 3;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var12 = string__FlatString___61d_61d(var4, var7);
var11 = var12;
}
if (var11){
if (varonce13) {
var14 = varonce13;
} else {
var15 = "long";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var20 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Bool";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var30 = string__FlatString___61d_61d(var21, var25);
var29 = var30;
}
if (var29){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "short int";
var34 = 9;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var = var32;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var38 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MClass#name (var36) on <var36:MClass> */
var41 = var36->attrs[COLOR_model__MClass___name].val; /* _name on <var36:MClass> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "Char";
var45 = 4;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var48 = string__FlatString___61d_61d(var39, var43);
var47 = var48;
}
if (var47){
if (varonce49) {
var50 = varonce49;
} else {
var51 = "char";
var52 = 4;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var = var50;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var56 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#name (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_model__MClass___name].val; /* _name on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Float";
var63 = 5;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var66 = string__FlatString___61d_61d(var57, var61);
var65 = var66;
}
if (var65){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "double";
var70 = 6;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var = var68;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var74 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClass#name (var72) on <var72:MClass> */
var77 = var72->attrs[COLOR_model__MClass___name].val; /* _name on <var72:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "NativeString";
var81 = 12;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
var84 = string__FlatString___61d_61d(var75, var79);
var83 = var84;
}
if (var83){
if (varonce85) {
var86 = varonce85;
} else {
var87 = "char*";
var88 = 5;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var = var86;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var92 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MClass#name (var90) on <var90:MClass> */
var95 = var90->attrs[COLOR_model__MClass___name].val; /* _name on <var90:MClass> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "NativeArray";
var99 = 11;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
var102 = string__FlatString___61d_61d(var93, var97);
var101 = var102;
}
if (var101){
if (varonce103) {
var104 = varonce103;
} else {
var105 = "val*";
var106 = 4;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var = var104;
goto RET_LABEL;
} else {
if (varonce108) {
var109 = varonce108;
} else {
var110 = "val*";
var111 = 4;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var = var109;
goto RET_LABEL;
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype_extern for (self: MClassType): String */
val* abstract_compiler__MClassType__ctype_extern(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MClassKind */;
val* var6 /* : MClassKind */;
val* var7 /* : MClassKind */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___kind].val; /* _kind on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 371);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var4,var7) on <var4:MClassKind> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MClassKind> */
var13 = var4 == var_other;
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
if (varonce) {
var14 = varonce;
} else {
var15 = "void*";
var16 = 5;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
var18 = abstract_compiler__MClassType__ctype(self);
}
var = var18;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype_extern for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctype_extern(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctype_extern(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: MClassType): String */
val* abstract_compiler__MClassType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
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
val* var36 /* : MClass */;
val* var38 /* : MClass */;
val* var39 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : MClass */;
val* var74 /* : MClass */;
val* var75 /* : String */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : String */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "Int";
var9 = 3;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var12 = string__FlatString___61d_61d(var4, var7);
var11 = var12;
}
if (var11){
if (varonce13) {
var14 = varonce13;
} else {
var15 = "l";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var20 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Bool";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var30 = string__FlatString___61d_61d(var21, var25);
var29 = var30;
}
if (var29){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "s";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var = var32;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var38 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MClass#name (var36) on <var36:MClass> */
var41 = var36->attrs[COLOR_model__MClass___name].val; /* _name on <var36:MClass> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "Char";
var45 = 4;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var48 = string__FlatString___61d_61d(var39, var43);
var47 = var48;
}
if (var47){
if (varonce49) {
var50 = varonce49;
} else {
var51 = "c";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var = var50;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var56 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#name (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_model__MClass___name].val; /* _name on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Float";
var63 = 5;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var66 = string__FlatString___61d_61d(var57, var61);
var65 = var66;
}
if (var65){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "d";
var70 = 1;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var = var68;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var74 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClass#name (var72) on <var72:MClass> */
var77 = var72->attrs[COLOR_model__MClass___name].val; /* _name on <var72:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "NativeString";
var81 = 12;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
var84 = string__FlatString___61d_61d(var75, var79);
var83 = var84;
}
if (var83){
if (varonce85) {
var86 = varonce85;
} else {
var87 = "str";
var88 = 3;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var = var86;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var92 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 986);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MClass#name (var90) on <var90:MClass> */
var95 = var90->attrs[COLOR_model__MClass___name].val; /* _name on <var90:MClass> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "NativeArray";
var99 = 11;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
var102 = string__FlatString___61d_61d(var93, var97);
var101 = var102;
}
if (var101){
if (varonce103) {
var104 = varonce103;
} else {
var105 = "val";
var106 = 3;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var = var104;
goto RET_LABEL;
} else {
if (varonce108) {
var109 = varonce108;
} else {
var110 = "val";
var111 = 3;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var = var109;
goto RET_LABEL;
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: MGenericType): String */
val* abstract_compiler__MGenericType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : String */;
val* var12 /* : Array[MType] */;
val* var14 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var15 /* : ArrayIterator[nullable Object] */;
val* var_16 /* var : ArrayIterator[MType] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var19 /* : String */;
val* var20 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MGenericType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MGenericType__c_name]))(self) /* c_name on <self:MGenericType>*/;
}
var_res = var11;
{
{ /* Inline model#MClassType#arguments (self) on <self:MGenericType> */
var14 = self->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 996);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = array__AbstractArrayRead__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = array__ArrayIterator__is_ok(var_16);
}
if (var17){
{
var18 = array__ArrayIterator__item(var_16);
}
var_t = var18;
{
var19 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MType>*/;
}
{
var20 = string__FlatString___43d(var_res, var19);
}
var_res = var20;
{
array__ArrayIterator__next(var_16); /* Direct call array#ArrayIterator#next on <var_16:ArrayIterator[MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:ArrayIterator[MType]> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MGenericType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MGenericType> */
RET_LABEL22:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MGenericType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MGenericType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: MParameterType): String */
val* abstract_compiler__MParameterType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
long var19 /* : Int */;
long var21 /* : Int */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : Object */;
val* var26 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MParameterType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var13 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1280);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = abstract_compiler__MClass__c_name(var11);
}
if (varonce) {
var15 = varonce;
} else {
var16 = "_FT";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var21 = self->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var15;
var25 = BOX_kernel__Int(var19); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var25;
{
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var26 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
var_res = var26;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MParameterType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MParameterType> */
RET_LABEL27:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MParameterType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MParameterType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: MVirtualType): String */
val* abstract_compiler__MVirtualType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MProperty */;
val* var13 /* : MProperty */;
val* var14 /* : MPropDef */;
val* var16 /* : MPropDef */;
val* var17 /* : MClassDef */;
val* var19 /* : MClassDef */;
val* var20 /* : MClass */;
val* var22 /* : MClass */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : MProperty */;
val* var30 /* : MProperty */;
val* var31 /* : String */;
val* var33 /* : String */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MVirtualType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var13 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var11) on <var11:MProperty> */
var16 = var11->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var11:MProperty> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var14) on <var14:MPropDef> */
var19 = var14->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var14:MPropDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var17) on <var17:MClassDef> */
var22 = var17->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var17:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = abstract_compiler__MClass__c_name(var20);
}
if (varonce) {
var24 = varonce;
} else {
var25 = "_VT";
var26 = 3;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var30 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1152);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var28) on <var28:MProperty> */
var33 = var28->attrs[COLOR_model__MProperty___name].val; /* _name on <var28:MProperty> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var24;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var31;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
var_res = var37;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MVirtualType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MVirtualType> */
RET_LABEL38:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MVirtualType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MVirtualType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: MNullableType): String */
val* abstract_compiler__MNullableType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : MType */;
val* var17 /* : MType */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MNullableType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce) {
var11 = varonce;
} else {
var12 = "nullable_";
var13 = 9;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var17 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_compiler__MType__c_name]))(var15) /* c_name on <var15:MType>*/;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 2;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var18;
{
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var_res = var22;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MNullableType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MNullableType> */
RET_LABEL23:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MNullableType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MNullableType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: MClass): String */
val* abstract_compiler__MClass__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
{
{ /* Inline abstract_compiler#MClass#c_name_cache (self) on <self:MClass> */
var3 = self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val; /* _c_name_cache on <self:MClass> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var13 = self->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 347);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var11) on <var11:MModule> */
var16 = var11->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var11:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = string__Text__to_cmangle(var14);
}
if (varonce) {
var18 = varonce;
} else {
var19 = "__";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var24 = self->attrs[COLOR_model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = string__Text__to_cmangle(var22);
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var18;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var25;
{
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
var_res = var29;
{
{ /* Inline abstract_compiler#MClass#c_name_cache= (self,var_res) on <self:MClass> */
self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val = var_res; /* _c_name_cache on <self:MClass> */
RET_LABEL30:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClass__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClass__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: MClass): nullable String */
val* abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val; /* _c_name_cache on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MClass#c_name_cache (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val; /* _c_name_cache on <self:Object(MClass)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: MClass, nullable String) */
void abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val = p0; /* _c_name_cache on <self:MClass> */
RET_LABEL:;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MClass#c_name_cache= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name for (self: MProperty): String */
val* abstract_compiler__MProperty__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MPropDef */;
val* var13 /* : MPropDef */;
val* var14 /* : String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
{
{ /* Inline abstract_compiler#MProperty#c_name_cache (self) on <self:MProperty> */
var3 = self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val; /* _c_name_cache on <self:MProperty> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro (self) on <self:MProperty> */
var13 = self->attrs[COLOR_model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = abstract_compiler__MPropDef__c_name(var11);
}
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 1;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var14;
{
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
}
}
{
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
}
var_res = var18;
{
{ /* Inline abstract_compiler#MProperty#c_name_cache= (self,var_res) on <self:MProperty> */
self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val = var_res; /* _c_name_cache on <self:MProperty> */
RET_LABEL19:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MProperty__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MProperty__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: MProperty): nullable String */
val* abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val; /* _c_name_cache on <self:MProperty> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MProperty#c_name_cache (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val; /* _c_name_cache on <self:Object(MProperty)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: MProperty, nullable String) */
void abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val = p0; /* _c_name_cache on <self:MProperty> */
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MProperty#c_name_cache= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: MPropDef): nullable String */
val* abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val; /* _c_name_cache on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MPropDef#c_name_cache (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val; /* _c_name_cache on <self:Object(MPropDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: MPropDef, nullable String) */
void abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val = p0; /* _c_name_cache on <self:MPropDef> */
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MPropDef#c_name_cache= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name for (self: MPropDef): String */
val* abstract_compiler__MPropDef__c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClassDef */;
val* var13 /* : MClassDef */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var31 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : MProperty */;
val* var42 /* : MProperty */;
val* var43 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
{
{ /* Inline abstract_compiler#MPropDef#c_name_cache (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val; /* _c_name_cache on <self:MPropDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var13 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var11) on <var11:MClassDef> */
var16 = var11->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var11:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var14) on <var14:MModule> */
var19 = var14->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var14:MModule> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 78);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = string__Text__to_cmangle(var17);
}
if (varonce) {
var21 = varonce;
} else {
var22 = "__";
var23 = 2;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var27 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MClass#name (var28) on <var28:MClass> */
var33 = var28->attrs[COLOR_model__MClass___name].val; /* _name on <var28:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = string__Text__to_cmangle(var31);
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "__";
var38 = 2;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var42 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var40) on <var40:MProperty> */
var45 = var40->attrs[COLOR_model__MProperty___name].val; /* _name on <var40:MProperty> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = string__Text__to_cmangle(var43);
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 5;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var34;
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var36;
((struct instance_array__NativeArray*)var49)->values[4] = (val*) var46;
{
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
var_res = var50;
{
{ /* Inline abstract_compiler#MPropDef#c_name_cache= (self,var_res) on <self:MPropDef> */
self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val = var_res; /* _c_name_cache on <self:MPropDef> */
RET_LABEL51:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MPropDef__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: MMethodDef, AbstractCompilerVisitor): Bool */
short int abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : ModelBuilder */;
val* var11 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var12 /* : HashMap[MPropDef, APropdef] */;
val* var14 /* : HashMap[MPropDef, APropdef] */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[MPropDef, APropdef] */;
val* var18 /* : HashMap[MPropDef, APropdef] */;
val* var19 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var20 /* : Bool */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1859);
show_backtrace(1);
}
var_v = p0;
{
{ /* Inline model#MMethodDef#is_abstract (self) on <self:MMethodDef> */
var4 = self->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_modelbuilder = var9;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var14 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = abstract_collection__MapRead__has_key(var12, self);
}
if (var15){
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var18 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = hash_collection__HashMap___91d_93d(var16, self);
}
var_npropdef = var19;
{
var20 = ((short int (*)(val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__can_inline]))(var_npropdef) /* can_inline on <var_npropdef:APropdef>*/;
}
var = var20;
goto RET_LABEL;
} else {
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var23 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var21) on <var21:MProperty(MMethod)> */
var26 = var21->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var21:MProperty(MMethod)> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24){
var27 = 1;
var = var27;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1871);
show_backtrace(1);
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: Object, AbstractCompilerVisitor): Bool */
short int VIRTUAL_abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__MMethodDef__can_inline(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var8 /* : nullable Object */;
val* var10 /* : nullable Object */;
val* var_val /* var val: nullable Object */;
val* var11 /* : HashMap[MPropDef, APropdef] */;
val* var13 /* : HashMap[MPropDef, APropdef] */;
short int var14 /* : Bool */;
val* var15 /* : HashMap[MPropDef, APropdef] */;
val* var17 /* : HashMap[MPropDef, APropdef] */;
val* var18 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var19 /* : nullable ANode */;
val* var21 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var24 /* : MProperty */;
val* var26 /* : MProperty */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : HashMap[MClassDef, AClassdef] */;
val* var32 /* : HashMap[MClassDef, AClassdef] */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var37 /* : nullable ANode */;
val* var39 /* : nullable ANode */;
val* var_oldnode40 /* var oldnode: nullable ANode */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : RuntimeVariable */;
val* var47 /* : null */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1875);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var4 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_modelbuilder = var5;
{
{ /* Inline model#MMethodDef#constant_value (self) on <self:MMethodDef> */
var10 = self->attrs[COLOR_model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_val = var8;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var13 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = abstract_collection__MapRead__has_key(var11, self);
}
if (var14){
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var17 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_property.nit", 39);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = hash_collection__HashMap___91d_93d(var15, self);
}
var_npropdef = var18;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var21 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_oldnode = var19;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_npropdef) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_npropdef; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL22:(void)0;
}
}
{
abstract_compiler__MMethodDef__compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
((void (*)(val*, val*, val*, val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__compile_to_c]))(var_npropdef, var_v, self, var_arguments) /* compile_to_c on <var_npropdef:APropdef>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL23:(void)0;
}
}
} else {
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var26 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var24) on <var24:MProperty(MMethod)> */
var29 = var24->attrs[COLOR_model__MMethod___is_root_init].s; /* _is_root_init on <var24:MProperty(MMethod)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27){
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var32 = var_modelbuilder->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "modelize/modelize_class.nit", 410);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MMethodDef> */
var35 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = hash_collection__HashMap___91d_93d(var30, var33);
}
var_nclassdef = var36;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var39 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_oldnode40 = var37;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_nclassdef) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nclassdef; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL41:(void)0;
}
}
{
abstract_compiler__MMethodDef__compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
abstract_compiler__AClassdef__compile_to_c(var_nclassdef, var_v, self, var_arguments); /* Direct call abstract_compiler#AClassdef#compile_to_c on <var_nclassdef:AClassdef>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode40) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode40; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL42:(void)0;
}
}
} else {
var43 = NULL;
if (var_val == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
var45 = ((short int (*)(val*, val*))(var_val->class->vft[COLOR_kernel__Object___33d_61d]))(var_val, var43) /* != on <var_val:nullable Object>*/;
var44 = var45;
}
if (var44){
{
var46 = abstract_compiler__AbstractCompilerVisitor__value_instance(var_v, var_val);
}
{
abstract_compiler__AbstractCompilerVisitor__ret(var_v, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1897);
show_backtrace(1);
}
}
}
var47 = NULL;
var = var47;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__MMethodDef__compile_inside_to_c(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var_i /* var i: Int */;
val* var18 /* : nullable MSignature */;
val* var20 /* : nullable MSignature */;
long var21 /* : Int */;
long var_ /* var : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : nullable MSignature */;
val* var31 /* : nullable MSignature */;
long var32 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MProperty */;
val* var41 /* : MProperty */;
val* var42 /* : MPropDef */;
val* var44 /* : MPropDef */;
val* var45 /* : nullable MSignature */;
val* var47 /* : nullable MSignature */;
val* var48 /* : Array[MParameter] */;
val* var50 /* : Array[MParameter] */;
val* var51 /* : nullable Object */;
val* var52 /* : MType */;
val* var54 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable MSignature */;
val* var59 /* : nullable MSignature */;
val* var60 /* : Array[MParameter] */;
val* var62 /* : Array[MParameter] */;
val* var63 /* : nullable Object */;
val* var64 /* : MType */;
val* var66 /* : MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : nullable MSignature */;
val* var78 /* : nullable MSignature */;
val* var79 /* : Array[MParameter] */;
val* var81 /* : Array[MParameter] */;
val* var82 /* : nullable Object */;
val* var83 /* : String */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
long var91 /* : Int */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
val* var99 /* : nullable Object */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
val* var111 /* : Array[Object] */;
long var112 /* : Int */;
val* var113 /* : NativeArray[Object] */;
val* var114 /* : Object */;
val* var115 /* : String */;
long var116 /* : Int */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
val* var124 /* : nullable Object */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
long var130 /* : Int */;
long var131 /* : Int */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1902);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1041);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 470);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 49);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#Option#value (var10) on <var10:OptionBool> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionBool> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = ((struct instance_kernel__Bool*)var13)->value; /* autounbox from nullable Object to Bool */;
if (var16){
goto RET_LABEL;
} else {
}
var17 = 0;
var_i = var17;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var20 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1907);
show_backtrace(1);
} else {
var21 = model__MSignature__arity(var18);
}
var_ = var21;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var24 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var28 = var_i < var_;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var31 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1909);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var29) on <var29:nullable MSignature> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1510);
show_backtrace(1);
}
var34 = var29->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var29:nullable MSignature> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var32,var_i) on <var32:Int> */
var38 = var32 == var_i;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var41 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var39) on <var39:MProperty(MMethod)> */
var44 = var39->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var39:MProperty(MMethod)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var42) on <var42:MPropDef(MMethodDef)> */
var47 = var42->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var42:MPropDef(MMethodDef)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1912);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var45) on <var45:nullable MSignature> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var50 = var45->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var45:nullable MSignature> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = array__Array___91d_93d(var48, var_i);
}
{
{ /* Inline model#MParameter#mtype (var51) on <var51:nullable Object(MParameter)> */
var54 = var51->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var51:nullable Object(MParameter)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_origmtype = var52;
{
var55 = ((short int (*)(val*))(var_origmtype->class->vft[COLOR_model__MType__need_anchor]))(var_origmtype) /* need_anchor on <var_origmtype:MType>*/;
}
var56 = !var55;
if (var56){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var59 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1916);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var57) on <var57:nullable MSignature> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var62 = var57->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var57:nullable MSignature> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = array__Array___91d_93d(var60, var_i);
}
{
{ /* Inline model#MParameter#mtype (var63) on <var63:nullable Object(MParameter)> */
var66 = var63->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var63:nullable Object(MParameter)> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
var_mtype = var64;
if (varonce) {
var67 = varonce;
} else {
var68 = "/* Covariant cast for argument ";
var69 = 31;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = " (";
var74 = 2;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var78 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1920);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var76) on <var76:nullable MSignature> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var81 = var76->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var76:nullable MSignature> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = array__Array___91d_93d(var79, var_i);
}
{
{ /* Inline model#MParameter#name (var82) on <var82:nullable Object(MParameter)> */
var85 = var82->attrs[COLOR_model__MParameter___name].val; /* _name on <var82:nullable Object(MParameter)> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1562);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = ") ";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var91) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var91:Int> isa OTHER */
/* <var91:Int> isa OTHER */
var94 = 1; /* easy <var91:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var98 = var_i + var91;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
var99 = array__Array___91d_93d(var_arguments, var92);
}
{
var100 = abstract_compiler__RuntimeVariable__inspect(var99);
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = " isa ";
var104 = 5;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
if (varonce106) {
var107 = varonce106;
} else {
var108 = " */";
var109 = 3;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var111 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var111 = array_instance Array[Object] */
var112 = 9;
var113 = NEW_array__NativeArray(var112, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var113)->values[0] = (val*) var67;
var114 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var113)->values[1] = (val*) var114;
((struct instance_array__NativeArray*)var113)->values[2] = (val*) var72;
((struct instance_array__NativeArray*)var113)->values[3] = (val*) var83;
((struct instance_array__NativeArray*)var113)->values[4] = (val*) var87;
((struct instance_array__NativeArray*)var113)->values[5] = (val*) var100;
((struct instance_array__NativeArray*)var113)->values[6] = (val*) var102;
((struct instance_array__NativeArray*)var113)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var113)->values[8] = (val*) var107;
{
((void (*)(val*, val*, long))(var111->class->vft[COLOR_array__Array__with_native]))(var111, var113, var112) /* with_native on <var111:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val*))(var111->class->vft[COLOR_string__Object__to_s]))(var111) /* to_s on <var111:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var116 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var116) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var116:Int> isa OTHER */
/* <var116:Int> isa OTHER */
var119 = 1; /* easy <var116:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var123 = var_i + var116;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
{
var124 = array__Array___91d_93d(var_arguments, var117);
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "covariance";
var128 = 10;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
{
abstract_compiler__AbstractCompilerVisitor__add_cast(var_v, var124, var_mtype, var126); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label: (void)0;
var130 = 1;
{
var131 = kernel__Int__successor(var_i, var130);
}
var_i = var131;
} else {
goto BREAK_label132;
}
}
BREAK_label132: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
abstract_compiler__MMethodDef__compile_parameter_check(self, p0, p1); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:Object(MMethodDef)>*/
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : Location */;
val* var17 /* : Location */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var = varonce;
} else {
var1 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var2 = 33;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = string__Object__class_name(self);
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = " ";
var8 = 1;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = " at ";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:APropdef> */
var17 = self->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <self:APropdef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = location__Location__to_s(var15);
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "\\n\");";
var22 = 5;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 7;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var6;
((struct instance_array__NativeArray*)var26)->values[3] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var26)->values[4] = (val*) var11;
((struct instance_array__NativeArray*)var26)->values[5] = (val*) var18;
((struct instance_array__NativeArray*)var26)->values[6] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Not yet implemented";
var31 = 19;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
parser_nodes__ANode__debug(self, var29); /* Direct call parser_nodes#ANode#debug on <self:APropdef>*/
}
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__APropdef__compile_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#APropdef#compile_to_c on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#APropdef#can_inline for (self: APropdef): Bool */
short int abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#APropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__APropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : MProperty */;
val* var11 /* : MProperty */;
val* var12 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
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
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
val* var30 /* : nullable Array[CallSite] */;
val* var32 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
val* var33 /* : null */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Array[RuntimeVariable] */;
long var41 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var42 /* : nullable Object */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var_43 /* var : Array[CallSite] */;
val* var44 /* : ArrayIterator[nullable Object] */;
val* var_45 /* var : ArrayIterator[CallSite] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var48 /* : MMethod */;
val* var50 /* : MMethod */;
val* var51 /* : MProperty */;
val* var53 /* : MProperty */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
long var60 /* : Int */;
long var_i /* var i: Int */;
val* var61 /* : MSignature */;
val* var63 /* : MSignature */;
long var64 /* : Int */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var69 /* : Int */;
long var_70 /* var : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
short int var77 /* : Bool */;
val* var78 /* : nullable Object */;
long var79 /* : Int */;
long var80 /* : Int */;
val* var81 /* : MMethod */;
val* var83 /* : MMethod */;
val* var84 /* : MProperty */;
val* var86 /* : MProperty */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : nullable RuntimeVariable */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : nullable Object */;
val* var100 /* : MType */;
val* var102 /* : MType */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
val* var107 /* : nullable RuntimeVariable */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : MProperty */;
val* var117 /* : MProperty */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : nullable AExpr */;
val* var125 /* : nullable AExpr */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var126 /* : null */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
long var133 /* : Int */;
long var_i134 /* var i: Int */;
val* var135 /* : nullable MSignature */;
val* var137 /* : nullable MSignature */;
long var138 /* : Int */;
long var_139 /* var : Int */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
short int var146 /* : Bool */;
val* var147 /* : nullable ASignature */;
val* var149 /* : nullable ASignature */;
val* var150 /* : ANodes[AParam] */;
val* var152 /* : ANodes[AParam] */;
val* var153 /* : ANode */;
val* var154 /* : nullable Variable */;
val* var156 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var157 /* : RuntimeVariable */;
long var158 /* : Int */;
long var159 /* : Int */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
long var165 /* : Int */;
val* var166 /* : nullable Object */;
long var167 /* : Int */;
long var168 /* : Int */;
val* var170 /* : nullable Object */;
val* var171 /* : String */;
val* var_cn172 /* var cn: String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : FlatString */;
val* var178 /* : MProperty */;
val* var180 /* : MProperty */;
val* var181 /* : String */;
val* var183 /* : String */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[Object] */;
val* var198 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MMethodDef#is_abstract (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <var_mpropdef:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
var3 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var3) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_cn = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "PRINT_ERROR(\"Runtime error: Abstract method `%s` called on `%s`\", \"";
var7 = 67;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var9) on <var9:MProperty(MMethod)> */
var14 = var9->attrs[COLOR_model__MProperty___name].val; /* _name on <var9:MProperty(MMethod)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = string__Text__escape_to_c(var12);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\", ";
var19 = 3;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = ");";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 5;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var28)->values[4] = (val*) var22;
{
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(var_v); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var32 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_auto_super_inits = var30;
var33 = NULL;
if (var_auto_super_inits == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,var33) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other = var33;
{
var38 = ((short int (*)(val*, val*))(var_auto_super_inits->class->vft[COLOR_kernel__Object___61d_61d]))(var_auto_super_inits, var_other) /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
var37 = var38;
}
var39 = !var37;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var40 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var41 = 1;
{
array__Array__with_capacity(var40, var41); /* Direct call array#Array#with_capacity on <var40:Array[RuntimeVariable]>*/
}
var_ = var40;
{
var42 = abstract_collection__SequenceRead__first(var_arguments);
}
{
array__AbstractArray__push(var_, var42); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_43 = var_auto_super_inits;
{
var44 = array__AbstractArrayRead__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = array__ArrayIterator__is_ok(var_45);
}
if (var46){
{
var47 = array__ArrayIterator__item(var_45);
}
var_auto_super_init = var47;
{
{ /* Inline typing#CallSite#mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var50 = var_auto_super_init->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var53 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var48,var51) on <var48:MMethod> */
var_other = var51;
{
var58 = ((short int (*)(val*, val*))(var48->class->vft[COLOR_kernel__Object___61d_61d]))(var48, var_other) /* == on <var48:MMethod>*/;
var57 = var58;
}
var59 = !var57;
var55 = var59;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (unlikely(!var54)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1953);
show_backtrace(1);
}
{
array__AbstractArray__clear(var_args); /* Direct call array#AbstractArray#clear on <var_args:Array[RuntimeVariable]>*/
}
var60 = 0;
var_i = var60;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var63 = var_auto_super_init->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = model__MSignature__arity(var61);
}
var65 = 1;
{
{ /* Inline kernel#Int#+ (var64,var65) on <var64:Int> */
/* Covariant cast for argument 0 (i) <var65:Int> isa OTHER */
/* <var65:Int> isa OTHER */
var68 = 1; /* easy <var65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var69 = var64 + var65;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_70 = var66;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_70) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_70:Int> isa OTHER */
/* <var_70:Int> isa OTHER */
var73 = 1; /* easy <var_70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var77 = var_i < var_70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
{
var78 = array__Array___91d_93d(var_arguments, var_i);
}
{
array__Array__add(var_args, var78); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var79 = 1;
{
var80 = kernel__Int__successor(var_i, var79);
}
var_i = var80;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline typing#CallSite#mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var83 = var_auto_super_init->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var86 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var81,var84) on <var81:MMethod> */
var_other = var84;
{
var91 = ((short int (*)(val*, val*))(var81->class->vft[COLOR_kernel__Object___61d_61d]))(var81, var_other) /* == on <var81:MMethod>*/;
var90 = var91;
}
var92 = !var90;
var88 = var92;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (unlikely(!var87)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1958);
show_backtrace(1);
}
{
var93 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_auto_super_init, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
{
array__ArrayIterator__next(var_45); /* Direct call array#ArrayIterator#next on <var_45:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label94;
}
}
BREAK_label94: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_45) on <var_45:ArrayIterator[CallSite]> */
RET_LABEL95:(void)0;
}
}
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (self) on <self:AMethPropdef> */
var98 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (var96){
{
var99 = abstract_collection__SequenceRead__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var99) on <var99:nullable Object(RuntimeVariable)> */
var102 = var99->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var99:nullable Object(RuntimeVariable)> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1634);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
/* <var100:MType> isa MClassType */
cltype104 = type_model__MClassType.color;
idtype105 = type_model__MClassType.id;
if(cltype104 >= var100->type->table_size) {
var103 = 0;
} else {
var103 = var100->type->type_table[cltype104] == idtype105;
}
if (unlikely(!var103)) {
var_class_name106 = var100 == NULL ? "null" : var100->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1963);
show_backtrace(1);
}
{
var107 = separate_compiler__SeparateCompilerVisitor__supercall(var_v, var_mpropdef, var100, var_arguments);
}
} else {
}
{
{ /* Inline model#MMethodDef#is_intern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var110 = var_mpropdef->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <var_mpropdef:MMethodDef> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (var108){
{
var111 = abstract_compiler__AMethPropdef__compile_intern_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var111){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var114 = var_mpropdef->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <var_mpropdef:MMethodDef> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (var112){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var117 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var115) on <var115:MProperty(MMethod)> */
var120 = var115->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var115:MProperty(MMethod)> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (var118){
{
var121 = abstract_compiler__AMethPropdef__compile_externinit_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var121){
goto RET_LABEL;
} else {
}
} else {
{
var122 = abstract_compiler__AMethPropdef__compile_externmeth_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var122){
goto RET_LABEL;
} else {
}
}
} else {
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var125 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
var_n_block = var123;
var126 = NULL;
if (var_n_block == NULL) {
var127 = 0; /* is null */
} else {
var127 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var126) on <var_n_block:nullable AExpr> */
var_other = var126;
{
var131 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var130 = var131;
}
var132 = !var130;
var128 = var132;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
var127 = var128;
}
if (var127){
var133 = 0;
var_i134 = var133;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var137 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
if (var135 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1980);
show_backtrace(1);
} else {
var138 = model__MSignature__arity(var135);
}
var_139 = var138;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i134,var_139) on <var_i134:Int> */
/* Covariant cast for argument 0 (i) <var_139:Int> isa OTHER */
/* <var_139:Int> isa OTHER */
var142 = 1; /* easy <var_139:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var146 = var_i134 < var_139;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
if (var140){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var149 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
if (var147 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1981);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var147) on <var147:nullable ASignature> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var152 = var147->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var147:nullable ASignature> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = parser_nodes__ANodes___91d_93d(var150, var_i134);
}
{
{ /* Inline scope#AParam#variable (var153) on <var153:ANode(AParam)> */
var156 = var153->attrs[COLOR_scope__AParam___variable].val; /* _variable on <var153:ANode(AParam)> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1981);
show_backtrace(1);
}
var_variable = var154;
{
var157 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
var158 = 1;
{
{ /* Inline kernel#Int#+ (var_i134,var158) on <var_i134:Int> */
/* Covariant cast for argument 0 (i) <var158:Int> isa OTHER */
/* <var158:Int> isa OTHER */
var161 = 1; /* easy <var158:Int> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var165 = var_i134 + var158;
var159 = var165;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
{
var166 = array__Array___91d_93d(var_arguments, var159);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var157, var166); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var167 = 1;
{
var168 = kernel__Int__successor(var_i134, var167);
}
var_i134 = var168;
} else {
goto BREAK_label169;
}
}
BREAK_label169: (void)0;
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var_n_block); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var170 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var171 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var170) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_cn172 = var171;
if (varonce173) {
var174 = varonce173;
} else {
var175 = "PRINT_ERROR(\"Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED\", \"";
var176 = 90;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var180 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var178) on <var178:MProperty(MMethod)> */
var183 = var178->attrs[COLOR_model__MProperty___name].val; /* _name on <var178:MProperty(MMethod)> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
var184 = string__Text__escape_to_c(var181);
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = "\", ";
var188 = 3;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = ");";
var193 = 2;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var195 = array_instance Array[Object] */
var196 = 5;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var174;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var184;
((struct instance_array__NativeArray*)var197)->values[2] = (val*) var186;
((struct instance_array__NativeArray*)var197)->values[3] = (val*) var_cn172;
((struct instance_array__NativeArray*)var197)->values[4] = (val*) var191;
{
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[Object]>*/;
}
}
{
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_string__Object__to_s]))(var195) /* to_s on <var195:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var198); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(var_v); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AMethPropdef__compile_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#AMethPropdef#compile_to_c on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#can_inline for (self: AMethPropdef): Bool */
short int abstract_compiler__AMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Array[CallSite] */;
val* var3 /* : nullable Array[CallSite] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable AExpr */;
val* var14 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other19 /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable MPropDef */;
val* var28 /* : nullable MPropDef */;
val* var29 /* : MProperty */;
val* var31 /* : MProperty */;
val* var32 /* : String */;
val* var34 /* : String */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var_ /* var : Bool */;
val* var41 /* : nullable MPropDef */;
val* var43 /* : nullable MPropDef */;
val* var44 /* : MProperty */;
val* var46 /* : MProperty */;
val* var47 /* : String */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
val* var58 /* : nullable MPropDef */;
val* var60 /* : nullable MPropDef */;
val* var61 /* : MClassDef */;
val* var63 /* : MClassDef */;
val* var64 /* : MClass */;
val* var66 /* : MClass */;
val* var67 /* : String */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
int cltype;
int idtype;
short int var_80 /* var : Bool */;
val* var81 /* : ANodes[AExpr] */;
val* var83 /* : ANodes[AExpr] */;
long var84 /* : Int */;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable Array[CallSite]> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable Array[CallSite](Array[CallSite])>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var14 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_nblock = var12;
var15 = NULL;
if (var_nblock == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,var15) on <var_nblock:nullable AExpr> */
var_other19 = var15;
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other19) on <var_nblock:nullable AExpr(AExpr)> */
var22 = var_nblock == var_other19;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
var23 = 1;
var = var23;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var28 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1999);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var26) on <var26:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var31 = var26->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var26:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var29) on <var29:MProperty(MMethod)> */
var34 = var29->attrs[COLOR_model__MProperty___name].val; /* _name on <var29:MProperty(MMethod)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce) {
var35 = varonce;
} else {
var36 = "==";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
{
var40 = string__FlatString___61d_61d(var32, var35);
var39 = var40;
}
var_ = var39;
if (var39){
var25 = var_;
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var43 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var41 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1999);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var41) on <var41:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var46 = var41->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var41:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var44) on <var44:MProperty(MMethod)> */
var49 = var44->attrs[COLOR_model__MProperty___name].val; /* _name on <var44:MProperty(MMethod)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "!=";
var53 = 2;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var56 = string__FlatString___61d_61d(var47, var51);
var55 = var56;
}
var25 = var55;
}
var_57 = var25;
if (var25){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var60 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "compiler/abstract_compiler.nit", 1999);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var58) on <var58:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var63 = var58->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var58:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var61) on <var61:MClassDef> */
var66 = var61->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var61:MClassDef> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model#MClass#name (var64) on <var64:MClass> */
var69 = var64->attrs[COLOR_model__MClass___name].val; /* _name on <var64:MClass> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 352);
show_backtrace(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = "Object";
var73 = 6;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
var76 = string__FlatString___61d_61d(var67, var71);
var75 = var76;
}
var24 = var75;
} else {
var24 = var_57;
}
if (var24){
var77 = 1;
var = var77;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_parser_nodes__ABlockExpr.color;
idtype = type_parser_nodes__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var79 = 0;
} else {
var79 = var_nblock->type->type_table[cltype] == idtype;
}
var_80 = var79;
if (var79){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nblock) on <var_nblock:nullable AExpr(ABlockExpr)> */
var83 = var_nblock->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nblock:nullable AExpr(ABlockExpr)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = parser_nodes__ANodes__length(var81);
}
var85 = 0;
{
{ /* Inline kernel#Int#== (var84,var85) on <var84:Int> */
var89 = var84 == var85;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
var78 = var86;
} else {
var78 = var_80;
}
if (var78){
var90 = 1;
var = var90;
goto RET_LABEL;
} else {
}
var91 = 0;
var = var91;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__AMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AMethPropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
