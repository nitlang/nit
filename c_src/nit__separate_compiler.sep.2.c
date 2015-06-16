#include "nit__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: SeparateCompiler, MType) */
void nit___nit__SeparateCompiler___compile_type_resolution_table(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
val* var42 /* : Map[MClassType, Array[nullable MType]] */;
val* var44 /* : Map[MClassType, Array[nullable MType]] */;
val* var45 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var46 /* : ArrayIterator[nullable Object] */;
val* var_47 /* var : ArrayIterator[nullable MType] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
val* var60 /* : MModule */;
val* var62 /* : MModule */;
val* var63 /* : MType */;
val* var_tv /* var tv: MType */;
val* var64 /* : Map[MType, Int] */;
val* var66 /* : Map[MType, Int] */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
var_mtype = p0;
{
var = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
/* <var:MType> isa MClassType */
cltype = type_nit__MClassType.color;
idtype = type_nit__MClassType.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 780);
fatal_exit(1);
}
var_mclass_type = var;
if (unlikely(varonce==NULL)) {
var2 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "resolution_table_";
var6 = standard___standard__NativeString___to_s_with_length(var5, 17l);
var4 = var6;
varonce3 = var4;
}
((struct instance_standard__NativeArray*)var2)->values[0]=var4;
} else {
var2 = varonce;
varonce = NULL;
}
{
var7 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var2)->values[1]=var7;
{
var8 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
if (unlikely(varonce9==NULL)) {
var10 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "extern const struct types resolution_table_";
var14 = standard___standard__NativeString___to_s_with_length(var13, 43l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ";";
var18 = standard___standard__NativeString___to_s_with_length(var17, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce9;
varonce9 = NULL;
}
{
var19 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
nit___nit__AbstractCompiler___provide_declaration(self, var8, var20); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "const struct types resolution_table_";
var27 = standard___standard__NativeString___to_s_with_length(var26, 36l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " = {";
var31 = standard___standard__NativeString___to_s_with_length(var30, 4l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var32 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var23)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "0, /* dummy */";
var37 = standard___standard__NativeString___to_s_with_length(var36, 14l);
var35 = var37;
varonce34 = var35;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "{";
var41 = standard___standard__NativeString___to_s_with_length(var40, 1l);
var39 = var41;
varonce38 = var39;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var44 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1052);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self, val* p0))((((long)var42&3)?class_info[((long)var42&3)]:var42->class)->vft[COLOR_standard__abstract_collection__MapRead___91d_93d]))(var42, var_mclass_type); /* [] on <var42:Map[MClassType, Array[nullable MType]]>*/
}
var_ = var45;
{
var46 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_47 = var46;
for(;;) {
{
var48 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_47);
}
if (var48){
{
var49 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_47);
}
var_t = var49;
if (var_t == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var55 = var_t == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "NULL, /* empty */";
var59 = standard___standard__NativeString___to_s_with_length(var58, 17l);
var57 = var59;
varonce56 = var57;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var62 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nit__model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var60, 1); /* resolve_for on <var_t:nullable MType(MType)>*/
}
var_tv = var63;
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var66 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 149);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((short int(*)(val* self, val* p0))((((long)var64&3)?class_info[((long)var64&3)]:var64->class)->vft[COLOR_standard__abstract_collection__MapRead__has_key]))(var64, var_tv); /* has_key on <var64:Map[MType, Int]>*/
}
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "type_";
var73 = standard___standard__NativeString___to_s_with_length(var72, 5l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var69)->values[0]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var74 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_standard__NativeArray*)var69)->values[1]=var74;
{
var75 = ((val*(*)(val* self))(var69->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "&type_";
var81 = standard___standard__NativeString___to_s_with_length(var80, 6l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ", /* ";
var85 = standard___standard__NativeString___to_s_with_length(var84, 5l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var77)->values[2]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ": ";
var89 = standard___standard__NativeString___to_s_with_length(var88, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_standard__NativeArray*)var77)->values[4]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " */";
var93 = standard___standard__NativeString___to_s_with_length(var92, 3l);
var91 = var93;
varonce90 = var91;
}
((struct instance_standard__NativeArray*)var77)->values[6]=var91;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var94 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_standard__NativeArray*)var77)->values[1]=var94;
{
var95 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var77)->values[3]=var95;
{
var96 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_standard__string__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_standard__NativeArray*)var77)->values[5]=var96;
{
var97 = ((val*(*)(val* self))(var77->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "NULL, /* empty (";
var103 = standard___standard__NativeString___to_s_with_length(var102, 16l);
var101 = var103;
varonce100 = var101;
}
((struct instance_standard__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ": ";
var107 = standard___standard__NativeString___to_s_with_length(var106, 2l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = " not a live type) */";
var111 = standard___standard__NativeString___to_s_with_length(var110, 20l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var99)->values[4]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var112 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var99)->values[1]=var112;
{
var113 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_standard__string__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_standard__NativeArray*)var99)->values[3]=var113;
{
var114 = ((val*(*)(val* self))(var99->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_47); /* Direct call array#ArrayIterator#next on <var_47:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_47); /* Direct call array#ArrayIterator#finish on <var_47:ArrayIterator[nullable MType]>*/
}
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "}";
var118 = standard___standard__NativeString___to_s_with_length(var117, 1l);
var116 = var118;
varonce115 = var116;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var116); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "};";
var122 = standard___standard__NativeString___to_s_with_length(var121, 2l);
var120 = var122;
varonce119 = var120;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void nit___nit__SeparateCompiler___compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var6 /* : String */;
val* var_c_name /* var c_name: String */;
val* var7 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var8 /* : nullable RapidTypeAnalysis */;
val* var10 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : HashSet[MClass] */;
val* var22 /* : HashSet[MClass] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : String */;
val* var31 /* : String */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
short int var62 /* : Bool */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : String */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
val* var80 /* : String */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
val* var91 /* : String */;
val* var93 /* : NativeArray[String] */;
static val* varonce92;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : FlatString */;
long var98 /* : Int */;
val* var99 /* : String */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
val* var105 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var107 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var108 /* : nullable Object */;
val* var_vft /* var vft: nullable Array[nullable MPropDef] */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
long var_i /* var i: Int */;
long var114 /* : Int */;
long var116 /* : Int */;
long var_117 /* var : Int */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var121 /* : Bool */;
val* var122 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var_other126 /* var other: nullable Object */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : FlatString */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var_143 /* var : Bool */;
val* var144 /* : HashSet[MMethodDef] */;
val* var146 /* : HashSet[MMethodDef] */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var150 /* : NativeArray[String] */;
static val* varonce149;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : FlatString */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
val* var167 /* : MModule */;
val* var169 /* : MModule */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var175 /* : String */;
val* var177 /* : NativeArray[String] */;
static val* varonce176;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : NativeString */;
val* var181 /* : FlatString */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
val* var185 /* : FlatString */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : NativeString */;
val* var189 /* : FlatString */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
val* var193 /* : FlatString */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
val* var197 /* : FlatString */;
val* var198 /* : String */;
val* var199 /* : MModule */;
val* var201 /* : MModule */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : String */;
val* var205 /* : String */;
long var206 /* : Int */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
val* var211 /* : FlatString */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : NativeString */;
val* var215 /* : FlatString */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
short int var_218 /* var : Bool */;
val* var219 /* : MClass */;
val* var221 /* : MClass */;
val* var222 /* : String */;
val* var224 /* : String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : FlatString */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
val* var233 /* : CodeWriter */;
val* var235 /* : CodeWriter */;
val* var237 /* : NativeArray[String] */;
static val* varonce236;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : FlatString */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : FlatString */;
val* var246 /* : String */;
val* var247 /* : CodeWriter */;
val* var249 /* : CodeWriter */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
val* var253 /* : FlatString */;
val* var254 /* : CodeWriter */;
val* var256 /* : CodeWriter */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : NativeString */;
val* var260 /* : FlatString */;
val* var261 /* : CodeWriter */;
val* var263 /* : CodeWriter */;
val* var265 /* : NativeArray[String] */;
static val* varonce264;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : NativeString */;
val* var269 /* : FlatString */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var272 /* : CodeWriter */;
val* var274 /* : CodeWriter */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
val* var278 /* : FlatString */;
short int var279 /* : Bool */;
val* var280 /* : HashSet[MClassType] */;
val* var282 /* : HashSet[MClassType] */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var_285 /* var : Bool */;
val* var286 /* : MClass */;
val* var288 /* : MClass */;
val* var289 /* : String */;
val* var291 /* : String */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : NativeString */;
val* var295 /* : FlatString */;
short int var296 /* : Bool */;
short int var298 /* : Bool */;
short int var299 /* : Bool */;
val* var301 /* : NativeArray[String] */;
static val* varonce300;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
val* var305 /* : FlatString */;
val* var306 /* : String */;
val* var308 /* : NativeArray[String] */;
static val* varonce307;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
val* var312 /* : FlatString */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
val* var316 /* : FlatString */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : NativeString */;
val* var320 /* : FlatString */;
val* var321 /* : String */;
val* var322 /* : String */;
val* var324 /* : NativeArray[String] */;
static val* varonce323;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : NativeString */;
val* var328 /* : FlatString */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
val* var332 /* : FlatString */;
val* var333 /* : String */;
val* var334 /* : String */;
val* var336 /* : NativeArray[String] */;
static val* varonce335;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : NativeString */;
val* var340 /* : FlatString */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : NativeString */;
val* var344 /* : FlatString */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : NativeString */;
val* var348 /* : FlatString */;
val* var349 /* : String */;
val* var350 /* : String */;
val* var351 /* : String */;
val* var353 /* : NativeArray[String] */;
static val* varonce352;
static val* varonce354;
val* var355 /* : String */;
char* var356 /* : NativeString */;
val* var357 /* : FlatString */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : NativeString */;
val* var361 /* : FlatString */;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : NativeString */;
val* var365 /* : FlatString */;
val* var366 /* : String */;
val* var367 /* : AbstractCompiler */;
val* var369 /* : AbstractCompiler */;
val* var370 /* : Set[MType] */;
val* var372 /* : Set[MType] */;
val* var374 /* : NativeArray[String] */;
static val* varonce373;
static val* varonce375;
val* var376 /* : String */;
char* var377 /* : NativeString */;
val* var378 /* : FlatString */;
val* var379 /* : String */;
val* var381 /* : NativeArray[String] */;
static val* varonce380;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : NativeString */;
val* var385 /* : FlatString */;
static val* varonce386;
val* var387 /* : String */;
char* var388 /* : NativeString */;
val* var389 /* : FlatString */;
val* var390 /* : String */;
val* var392 /* : NativeArray[String] */;
static val* varonce391;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : NativeString */;
val* var396 /* : FlatString */;
val* var397 /* : String */;
val* var399 /* : NativeArray[String] */;
static val* varonce398;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
val* var403 /* : FlatString */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
val* var407 /* : FlatString */;
val* var408 /* : String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : NativeString */;
val* var412 /* : FlatString */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
val* var416 /* : FlatString */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : FlatString */;
val* var421 /* : MClass */;
val* var423 /* : MClass */;
val* var424 /* : String */;
val* var426 /* : String */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
val* var430 /* : FlatString */;
short int var431 /* : Bool */;
short int var433 /* : Bool */;
short int var434 /* : Bool */;
val* var435 /* : AbstractCompilerVisitor */;
val* var437 /* : NativeArray[String] */;
static val* varonce436;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : NativeString */;
val* var441 /* : FlatString */;
val* var442 /* : String */;
val* var444 /* : NativeArray[String] */;
static val* varonce443;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
val* var448 /* : FlatString */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
val* var452 /* : FlatString */;
val* var453 /* : String */;
val* var454 /* : String */;
val* var456 /* : NativeArray[String] */;
static val* varonce455;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
val* var460 /* : FlatString */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
val* var464 /* : FlatString */;
val* var465 /* : String */;
val* var466 /* : String */;
val* var468 /* : NativeArray[String] */;
static val* varonce467;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : NativeString */;
val* var472 /* : FlatString */;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : NativeString */;
val* var476 /* : FlatString */;
val* var477 /* : String */;
val* var478 /* : String */;
val* var480 /* : NativeArray[String] */;
static val* varonce479;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : NativeString */;
val* var484 /* : FlatString */;
val* var485 /* : String */;
val* var486 /* : String */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : NativeString */;
val* var490 /* : FlatString */;
val* var491 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var494 /* : NativeArray[String] */;
static val* varonce493;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : NativeString */;
val* var498 /* : FlatString */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : NativeString */;
val* var502 /* : FlatString */;
val* var503 /* : String */;
val* var504 /* : String */;
val* var505 /* : String */;
val* var507 /* : NativeArray[String] */;
static val* varonce506;
static val* varonce508;
val* var509 /* : String */;
char* var510 /* : NativeString */;
val* var511 /* : FlatString */;
val* var512 /* : String */;
val* var513 /* : String */;
static val* varonce514;
val* var515 /* : String */;
char* var516 /* : NativeString */;
val* var517 /* : FlatString */;
val* var519 /* : NativeArray[String] */;
static val* varonce518;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
val* var523 /* : FlatString */;
val* var524 /* : String */;
val* var526 /* : NativeArray[String] */;
static val* varonce525;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : NativeString */;
val* var530 /* : FlatString */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : NativeString */;
val* var534 /* : FlatString */;
val* var535 /* : String */;
val* var536 /* : String */;
val* var538 /* : NativeArray[String] */;
static val* varonce537;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : NativeString */;
val* var542 /* : FlatString */;
static val* varonce543;
val* var544 /* : String */;
char* var545 /* : NativeString */;
val* var546 /* : FlatString */;
static val* varonce547;
val* var548 /* : String */;
char* var549 /* : NativeString */;
val* var550 /* : FlatString */;
val* var551 /* : String */;
val* var552 /* : String */;
val* var553 /* : String */;
val* var555 /* : NativeArray[String] */;
static val* varonce554;
static val* varonce556;
val* var557 /* : String */;
char* var558 /* : NativeString */;
val* var559 /* : FlatString */;
static val* varonce560;
val* var561 /* : String */;
char* var562 /* : NativeString */;
val* var563 /* : FlatString */;
val* var564 /* : String */;
val* var565 /* : String */;
static val* varonce566;
val* var567 /* : String */;
char* var568 /* : NativeString */;
val* var569 /* : FlatString */;
val* var570 /* : String */;
val* var572 /* : String */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
val* var576 /* : FlatString */;
short int var577 /* : Bool */;
val* var578 /* : CodeWriter */;
val* var580 /* : CodeWriter */;
val* var582 /* : NativeArray[String] */;
static val* varonce581;
static val* varonce583;
val* var584 /* : String */;
char* var585 /* : NativeString */;
val* var586 /* : FlatString */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : NativeString */;
val* var590 /* : FlatString */;
val* var591 /* : String */;
val* var592 /* : CodeWriter */;
val* var594 /* : CodeWriter */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : NativeString */;
val* var598 /* : FlatString */;
val* var599 /* : CodeWriter */;
val* var601 /* : CodeWriter */;
static val* varonce602;
val* var603 /* : String */;
char* var604 /* : NativeString */;
val* var605 /* : FlatString */;
val* var606 /* : CodeWriter */;
val* var608 /* : CodeWriter */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : NativeString */;
val* var612 /* : FlatString */;
val* var613 /* : CodeWriter */;
val* var615 /* : CodeWriter */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : NativeString */;
val* var619 /* : FlatString */;
val* var620 /* : CodeWriter */;
val* var622 /* : CodeWriter */;
static val* varonce623;
val* var624 /* : String */;
char* var625 /* : NativeString */;
val* var626 /* : FlatString */;
val* var628 /* : NativeArray[String] */;
static val* varonce627;
static val* varonce629;
val* var630 /* : String */;
char* var631 /* : NativeString */;
val* var632 /* : FlatString */;
val* var633 /* : String */;
val* var635 /* : NativeArray[String] */;
static val* varonce634;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : NativeString */;
val* var639 /* : FlatString */;
static val* varonce640;
val* var641 /* : String */;
char* var642 /* : NativeString */;
val* var643 /* : FlatString */;
val* var644 /* : String */;
val* var645 /* : String */;
val* var647 /* : NativeArray[String] */;
static val* varonce646;
static val* varonce648;
val* var649 /* : String */;
char* var650 /* : NativeString */;
val* var651 /* : FlatString */;
static val* varonce652;
val* var653 /* : String */;
char* var654 /* : NativeString */;
val* var655 /* : FlatString */;
val* var656 /* : String */;
val* var657 /* : String */;
val* var659 /* : NativeArray[String] */;
static val* varonce658;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : NativeString */;
val* var663 /* : FlatString */;
static val* varonce664;
val* var665 /* : String */;
char* var666 /* : NativeString */;
val* var667 /* : FlatString */;
val* var668 /* : String */;
val* var669 /* : String */;
static val* varonce670;
val* var671 /* : String */;
char* var672 /* : NativeString */;
val* var673 /* : FlatString */;
val* var674 /* : String */;
val* var_res675 /* var res: String */;
val* var677 /* : NativeArray[String] */;
static val* varonce676;
static val* varonce678;
val* var679 /* : String */;
char* var680 /* : NativeString */;
val* var681 /* : FlatString */;
static val* varonce682;
val* var683 /* : String */;
char* var684 /* : NativeString */;
val* var685 /* : FlatString */;
static val* varonce686;
val* var687 /* : String */;
char* var688 /* : NativeString */;
val* var689 /* : FlatString */;
val* var690 /* : String */;
val* var691 /* : Array[MType] */;
val* var692 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
val* var694 /* : NativeArray[String] */;
static val* varonce693;
static val* varonce695;
val* var696 /* : String */;
char* var697 /* : NativeString */;
val* var698 /* : FlatString */;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : NativeString */;
val* var702 /* : FlatString */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : NativeString */;
val* var706 /* : FlatString */;
val* var707 /* : String */;
val* var708 /* : String */;
val* var710 /* : NativeArray[String] */;
static val* varonce709;
static val* varonce711;
val* var712 /* : String */;
char* var713 /* : NativeString */;
val* var714 /* : FlatString */;
val* var715 /* : String */;
static val* varonce716;
val* var717 /* : String */;
char* var718 /* : NativeString */;
val* var719 /* : FlatString */;
val* var721 /* : NativeArray[String] */;
static val* varonce720;
static val* varonce722;
val* var723 /* : String */;
char* var724 /* : NativeString */;
val* var725 /* : FlatString */;
val* var726 /* : String */;
val* var728 /* : NativeArray[String] */;
static val* varonce727;
static val* varonce729;
val* var730 /* : String */;
char* var731 /* : NativeString */;
val* var732 /* : FlatString */;
static val* varonce733;
val* var734 /* : String */;
char* var735 /* : NativeString */;
val* var736 /* : FlatString */;
val* var737 /* : String */;
val* var739 /* : NativeArray[String] */;
static val* varonce738;
static val* varonce740;
val* var741 /* : String */;
char* var742 /* : NativeString */;
val* var743 /* : FlatString */;
val* var744 /* : String */;
val* var746 /* : NativeArray[String] */;
static val* varonce745;
static val* varonce747;
val* var748 /* : String */;
char* var749 /* : NativeString */;
val* var750 /* : FlatString */;
static val* varonce751;
val* var752 /* : String */;
char* var753 /* : NativeString */;
val* var754 /* : FlatString */;
val* var755 /* : String */;
static val* varonce756;
val* var757 /* : String */;
char* var758 /* : NativeString */;
val* var759 /* : FlatString */;
short int var760 /* : Bool */;
val* var761 /* : MClass */;
val* var763 /* : MClass */;
val* var764 /* : MClassKind */;
val* var766 /* : MClassKind */;
val* var767 /* : Sys */;
val* var768 /* : MClassKind */;
short int var769 /* : Bool */;
short int var771 /* : Bool */;
short int var773 /* : Bool */;
short int var_774 /* var : Bool */;
val* var775 /* : MClass */;
val* var777 /* : MClass */;
val* var778 /* : String */;
val* var780 /* : String */;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : NativeString */;
val* var784 /* : FlatString */;
short int var785 /* : Bool */;
short int var787 /* : Bool */;
short int var788 /* : Bool */;
val* var789 /* : MModule */;
val* var791 /* : MModule */;
val* var792 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var794 /* : NativeArray[String] */;
static val* varonce793;
static val* varonce795;
val* var796 /* : String */;
char* var797 /* : NativeString */;
val* var798 /* : FlatString */;
val* var799 /* : String */;
val* var801 /* : NativeArray[String] */;
static val* varonce800;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : NativeString */;
val* var805 /* : FlatString */;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : NativeString */;
val* var809 /* : FlatString */;
val* var810 /* : String */;
val* var811 /* : String */;
val* var813 /* : NativeArray[String] */;
static val* varonce812;
static val* varonce814;
val* var815 /* : String */;
char* var816 /* : NativeString */;
val* var817 /* : FlatString */;
static val* varonce818;
val* var819 /* : String */;
char* var820 /* : NativeString */;
val* var821 /* : FlatString */;
val* var822 /* : String */;
val* var823 /* : String */;
val* var825 /* : NativeArray[String] */;
static val* varonce824;
static val* varonce826;
val* var827 /* : String */;
char* var828 /* : NativeString */;
val* var829 /* : FlatString */;
static val* varonce830;
val* var831 /* : String */;
char* var832 /* : NativeString */;
val* var833 /* : FlatString */;
val* var834 /* : String */;
val* var835 /* : String */;
val* var837 /* : NativeArray[String] */;
static val* varonce836;
static val* varonce838;
val* var839 /* : String */;
char* var840 /* : NativeString */;
val* var841 /* : FlatString */;
val* var842 /* : String */;
val* var843 /* : String */;
static val* varonce844;
val* var845 /* : String */;
char* var846 /* : NativeString */;
val* var847 /* : FlatString */;
val* var848 /* : RuntimeVariable */;
val* var_res849 /* var res: RuntimeVariable */;
val* var852 /* : NativeArray[String] */;
static val* varonce851;
static val* varonce853;
val* var854 /* : String */;
char* var855 /* : NativeString */;
val* var856 /* : FlatString */;
static val* varonce857;
val* var858 /* : String */;
char* var859 /* : NativeString */;
val* var860 /* : FlatString */;
val* var861 /* : String */;
val* var862 /* : String */;
val* var863 /* : String */;
val* var865 /* : NativeArray[String] */;
static val* varonce864;
static val* varonce866;
val* var867 /* : String */;
char* var868 /* : NativeString */;
val* var869 /* : FlatString */;
val* var870 /* : String */;
val* var871 /* : String */;
static val* varonce872;
val* var873 /* : String */;
char* var874 /* : NativeString */;
val* var875 /* : FlatString */;
val* var877 /* : NativeArray[String] */;
static val* varonce876;
static val* varonce878;
val* var879 /* : String */;
char* var880 /* : NativeString */;
val* var881 /* : FlatString */;
val* var882 /* : String */;
val* var884 /* : NativeArray[String] */;
static val* varonce883;
static val* varonce885;
val* var886 /* : String */;
char* var887 /* : NativeString */;
val* var888 /* : FlatString */;
static val* varonce889;
val* var890 /* : String */;
char* var891 /* : NativeString */;
val* var892 /* : FlatString */;
val* var893 /* : String */;
val* var894 /* : String */;
val* var896 /* : NativeArray[String] */;
static val* varonce895;
static val* varonce897;
val* var898 /* : String */;
char* var899 /* : NativeString */;
val* var900 /* : FlatString */;
static val* varonce901;
val* var902 /* : String */;
char* var903 /* : NativeString */;
val* var904 /* : FlatString */;
static val* varonce905;
val* var906 /* : String */;
char* var907 /* : NativeString */;
val* var908 /* : FlatString */;
val* var909 /* : String */;
val* var910 /* : String */;
val* var911 /* : String */;
val* var913 /* : NativeArray[String] */;
static val* varonce912;
static val* varonce914;
val* var915 /* : String */;
char* var916 /* : NativeString */;
val* var917 /* : FlatString */;
static val* varonce918;
val* var919 /* : String */;
char* var920 /* : NativeString */;
val* var921 /* : FlatString */;
val* var922 /* : String */;
val* var923 /* : String */;
static val* varonce924;
val* var925 /* : String */;
char* var926 /* : NativeString */;
val* var927 /* : FlatString */;
val* var929 /* : NativeArray[String] */;
static val* varonce928;
static val* varonce930;
val* var931 /* : String */;
char* var932 /* : NativeString */;
val* var933 /* : FlatString */;
val* var934 /* : String */;
val* var936 /* : NativeArray[String] */;
static val* varonce935;
static val* varonce937;
val* var938 /* : String */;
char* var939 /* : NativeString */;
val* var940 /* : FlatString */;
static val* varonce941;
val* var942 /* : String */;
char* var943 /* : NativeString */;
val* var944 /* : FlatString */;
val* var945 /* : String */;
val* var946 /* : String */;
val* var948 /* : NativeArray[String] */;
static val* varonce947;
static val* varonce949;
val* var950 /* : String */;
char* var951 /* : NativeString */;
val* var952 /* : FlatString */;
static val* varonce953;
val* var954 /* : String */;
char* var955 /* : NativeString */;
val* var956 /* : FlatString */;
val* var957 /* : String */;
val* var958 /* : String */;
val* var960 /* : NativeArray[String] */;
static val* varonce959;
static val* varonce961;
val* var962 /* : String */;
char* var963 /* : NativeString */;
val* var964 /* : FlatString */;
static val* varonce965;
val* var966 /* : String */;
char* var967 /* : NativeString */;
val* var968 /* : FlatString */;
val* var969 /* : String */;
val* var970 /* : String */;
val* var972 /* : NativeArray[String] */;
static val* varonce971;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : NativeString */;
val* var976 /* : FlatString */;
val* var977 /* : String */;
val* var978 /* : String */;
static val* varonce979;
val* var980 /* : String */;
char* var981 /* : NativeString */;
val* var982 /* : FlatString */;
val* var983 /* : RuntimeVariable */;
val* var_res984 /* var res: RuntimeVariable */;
val* var986 /* : Map[MClass, Array[nullable MProperty]] */;
val* var988 /* : Map[MClass, Array[nullable MProperty]] */;
val* var989 /* : nullable Object */;
val* var_attrs /* var attrs: nullable Array[nullable MProperty] */;
short int var990 /* : Bool */;
short int var991 /* : Bool */;
val* var993 /* : NativeArray[String] */;
static val* varonce992;
static val* varonce994;
val* var995 /* : String */;
char* var996 /* : NativeString */;
val* var997 /* : FlatString */;
val* var998 /* : String */;
val* var999 /* : String */;
val* var1001 /* : NativeArray[String] */;
static val* varonce1000;
static val* varonce1002;
val* var1003 /* : String */;
char* var1004 /* : NativeString */;
val* var1005 /* : FlatString */;
static val* varonce1006;
val* var1007 /* : String */;
char* var1008 /* : NativeString */;
val* var1009 /* : FlatString */;
val* var1010 /* : String */;
long var1011 /* : Int */;
long var1013 /* : Int */;
val* var1014 /* : String */;
val* var1015 /* : String */;
val* var1017 /* : NativeArray[String] */;
static val* varonce1016;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : NativeString */;
val* var1021 /* : FlatString */;
val* var1022 /* : String */;
val* var1023 /* : String */;
static val* varonce1024;
val* var1025 /* : String */;
char* var1026 /* : NativeString */;
val* var1027 /* : FlatString */;
val* var1029 /* : NativeArray[String] */;
static val* varonce1028;
static val* varonce1030;
val* var1031 /* : String */;
char* var1032 /* : NativeString */;
val* var1033 /* : FlatString */;
val* var1034 /* : String */;
val* var1036 /* : NativeArray[String] */;
static val* varonce1035;
static val* varonce1037;
val* var1038 /* : String */;
char* var1039 /* : NativeString */;
val* var1040 /* : FlatString */;
static val* varonce1041;
val* var1042 /* : String */;
char* var1043 /* : NativeString */;
val* var1044 /* : FlatString */;
val* var1045 /* : String */;
val* var1046 /* : String */;
short int var1047 /* : Bool */;
short int var1048 /* : Bool */;
short int var1050 /* : Bool */;
short int var1051 /* : Bool */;
val* var1053 /* : NativeArray[String] */;
static val* varonce1052;
static val* varonce1054;
val* var1055 /* : String */;
char* var1056 /* : NativeString */;
val* var1057 /* : FlatString */;
static val* varonce1058;
val* var1059 /* : String */;
char* var1060 /* : NativeString */;
val* var1061 /* : FlatString */;
val* var1062 /* : String */;
val* var1063 /* : String */;
static val* varonce1064;
val* var1065 /* : String */;
char* var1066 /* : NativeString */;
val* var1067 /* : FlatString */;
var_mclass = p0;
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nit__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 460);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mtype = var3;
{
var6 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_mclass);
}
var_c_name = var6;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var7;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var10 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_rta = var8;
if (var_rta == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_ = var15;
if (var15){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var22 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var20, var_mclass);
}
var24 = !var23;
var14 = var24;
} else {
var14 = var_;
}
var_25 = var14;
if (var14){
{
var26 = nit__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var27 = !var26;
var13 = var27;
} else {
var13 = var_25;
}
var_28 = var13;
if (var13){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var31 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce!=NULL)) {
var32 = varonce;
} else {
var33 = "NativeArray";
var34 = standard___standard__NativeString___to_s_with_length(var33, 11l);
var32 = var34;
varonce = var32;
}
{
{ /* Inline kernel#Object#!= (var29,var32) on <var29:String> */
var_other = var32;
{
var37 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var_other); /* == on <var29:String>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var12 = var35;
} else {
var12 = var_28;
}
var_39 = var12;
if (var12){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var42 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Pointer";
var46 = standard___standard__NativeString___to_s_with_length(var45, 7l);
var44 = var46;
varonce43 = var44;
}
{
{ /* Inline kernel#Object#!= (var40,var44) on <var40:String> */
var_other = var44;
{
var49 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var40, var_other); /* == on <var40:String>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var11 = var47;
} else {
var11 = var_39;
}
var_is_dead = var11;
if (unlikely(varonce51==NULL)) {
var52 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "/* runtime class ";
var56 = standard___standard__NativeString___to_s_with_length(var55, 17l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var52)->values[0]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = " */";
var60 = standard___standard__NativeString___to_s_with_length(var59, 3l);
var58 = var60;
varonce57 = var58;
}
((struct instance_standard__NativeArray*)var52)->values[2]=var58;
} else {
var52 = varonce51;
varonce51 = NULL;
}
((struct instance_standard__NativeArray*)var52)->values[1]=var_c_name;
{
var61 = ((val*(*)(val* self))(var52->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var62 = !var_is_dead;
if (var62){
if (unlikely(varonce63==NULL)) {
var64 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "class_";
var68 = standard___standard__NativeString___to_s_with_length(var67, 6l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var64)->values[0]=var66;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_standard__NativeArray*)var64)->values[1]=var_c_name;
{
var69 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
if (unlikely(varonce70==NULL)) {
var71 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "extern const struct class class_";
var75 = standard___standard__NativeString___to_s_with_length(var74, 32l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var71)->values[0]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = ";";
var79 = standard___standard__NativeString___to_s_with_length(var78, 1l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var71)->values[2]=var77;
} else {
var71 = varonce70;
varonce70 = NULL;
}
((struct instance_standard__NativeArray*)var71)->values[1]=var_c_name;
{
var80 = ((val*(*)(val* self))(var71->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
nit___nit__AbstractCompiler___provide_declaration(self, var69, var80); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce81==NULL)) {
var82 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "const struct class class_";
var86 = standard___standard__NativeString___to_s_with_length(var85, 25l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var82)->values[0]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = " = {";
var90 = standard___standard__NativeString___to_s_with_length(var89, 4l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var82)->values[2]=var88;
} else {
var82 = varonce81;
varonce81 = NULL;
}
((struct instance_standard__NativeArray*)var82)->values[1]=var_c_name;
{
var91 = ((val*(*)(val* self))(var82->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var91); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce92==NULL)) {
var93 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ", /* box_kind */";
var97 = standard___standard__NativeString___to_s_with_length(var96, 16l);
var95 = var97;
varonce94 = var95;
}
((struct instance_standard__NativeArray*)var93)->values[1]=var95;
} else {
var93 = varonce92;
varonce92 = NULL;
}
{
var98 = nit___nit__SeparateCompiler___box_kind_of(self, var_mclass);
}
var99 = standard__string___Int___Object__to_s(var98);
((struct instance_standard__NativeArray*)var93)->values[0]=var99;
{
var100 = ((val*(*)(val* self))(var93->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var100); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "{";
var104 = standard___standard__NativeString___to_s_with_length(var103, 1l);
var102 = var104;
varonce101 = var102;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var107 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1053);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = ((val*(*)(val* self, val* p0))((((long)var105&3)?class_info[((long)var105&3)]:var105->class)->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var105, var_mclass); /* get_or_null on <var105:Map[MClass, Array[nullable MPropDef]]>*/
}
var_vft = var108;
if (var_vft == NULL) {
var109 = 0; /* is null */
} else {
var109 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vft,((val*)NULL)) on <var_vft:nullable Array[nullable MPropDef]> */
var_other = ((val*)NULL);
{
var112 = ((short int(*)(val* self, val* p0))(var_vft->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_vft, var_other); /* == on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])>*/
}
var113 = !var112;
var110 = var113;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
var109 = var110;
}
if (var109){
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var116 = var_vft->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_117 = var114;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_117) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_117:Int> isa OTHER */
/* <var_117:Int> isa OTHER */
var120 = 1; /* easy <var_117:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var121 = var_i < var_117;
var118 = var121;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (var118){
{
var122 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var122;
if (var_mpropdef == NULL) {
var123 = 1; /* is null */
} else {
var123 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
var_other126 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other126) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var129 = var_mpropdef == var_other126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var124 = var127;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (var123){
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "NULL, /* empty */";
var133 = standard___standard__NativeString___to_s_with_length(var132, 17l);
var131 = var133;
varonce130 = var131;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var131); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype135 = type_nit__MMethodDef.color;
idtype136 = type_nit__MMethodDef.id;
if(cltype135 >= var_mpropdef->type->table_size) {
var134 = 0;
} else {
var134 = var_mpropdef->type->type_table[cltype135] == idtype136;
}
if (unlikely(!var134)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 838);
fatal_exit(1);
}
if (var_rta == NULL) {
var138 = 0; /* is null */
} else {
var138 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var141 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var142 = !var141;
var139 = var142;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
var138 = var139;
}
var_143 = var138;
if (var138){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var146 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 79);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var144, var_mpropdef);
}
var148 = !var147;
var137 = var148;
} else {
var137 = var_143;
}
if (var137){
if (unlikely(varonce149==NULL)) {
var150 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "NULL, /* DEAD ";
var154 = standard___standard__NativeString___to_s_with_length(var153, 14l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var150)->values[0]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = ":";
var158 = standard___standard__NativeString___to_s_with_length(var157, 1l);
var156 = var158;
varonce155 = var156;
}
((struct instance_standard__NativeArray*)var150)->values[2]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ":";
var162 = standard___standard__NativeString___to_s_with_length(var161, 1l);
var160 = var162;
varonce159 = var160;
}
((struct instance_standard__NativeArray*)var150)->values[4]=var160;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = " */";
var166 = standard___standard__NativeString___to_s_with_length(var165, 3l);
var164 = var166;
varonce163 = var164;
}
((struct instance_standard__NativeArray*)var150)->values[6]=var164;
} else {
var150 = varonce149;
varonce149 = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var169 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
var170 = ((val*(*)(val* self))(var167->class->vft[COLOR_standard__string__Object__to_s]))(var167); /* to_s on <var167:MModule>*/
}
((struct instance_standard__NativeArray*)var150)->values[1]=var170;
{
var171 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var150)->values[3]=var171;
{
var172 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var150)->values[5]=var172;
{
var173 = ((val*(*)(val* self))(var150->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var150); /* native_to_s on <var150:NativeArray[String]>*/
}
varonce149 = var150;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var173); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label;
} else {
}
{
var174 = nit__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var174;
{
var175 = nit___nit__AbstractRuntimeFunction___c_name(var_rf);
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var175); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce176==NULL)) {
var177 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "(nitmethod_t)";
var181 = standard___standard__NativeString___to_s_with_length(var180, 13l);
var179 = var181;
varonce178 = var179;
}
((struct instance_standard__NativeArray*)var177)->values[0]=var179;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = ", /* pointer to ";
var185 = standard___standard__NativeString___to_s_with_length(var184, 16l);
var183 = var185;
varonce182 = var183;
}
((struct instance_standard__NativeArray*)var177)->values[2]=var183;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = ":";
var189 = standard___standard__NativeString___to_s_with_length(var188, 1l);
var187 = var189;
varonce186 = var187;
}
((struct instance_standard__NativeArray*)var177)->values[4]=var187;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = ":";
var193 = standard___standard__NativeString___to_s_with_length(var192, 1l);
var191 = var193;
varonce190 = var191;
}
((struct instance_standard__NativeArray*)var177)->values[6]=var191;
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = " */";
var197 = standard___standard__NativeString___to_s_with_length(var196, 3l);
var195 = var197;
varonce194 = var195;
}
((struct instance_standard__NativeArray*)var177)->values[8]=var195;
} else {
var177 = varonce176;
varonce176 = NULL;
}
{
var198 = nit___nit__AbstractRuntimeFunction___c_name(var_rf);
}
((struct instance_standard__NativeArray*)var177)->values[1]=var198;
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var201 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
var202 = ((val*(*)(val* self))(var199->class->vft[COLOR_standard__string__Object__to_s]))(var199); /* to_s on <var199:MModule>*/
}
((struct instance_standard__NativeArray*)var177)->values[3]=var202;
{
var203 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var177)->values[5]=var203;
{
var204 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_standard__NativeArray*)var177)->values[7]=var204;
{
var205 = ((val*(*)(val* self))(var177->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var177); /* native_to_s on <var177:NativeArray[String]>*/
}
varonce176 = var177;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var205); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label: (void)0;
{
var206 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var206;
} else {
goto BREAK_label207;
}
}
BREAK_label207: (void)0;
} else {
}
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "}";
var211 = standard___standard__NativeString___to_s_with_length(var210, 1l);
var209 = var211;
varonce208 = var209;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var209); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "};";
var215 = standard___standard__NativeString___to_s_with_length(var214, 2l);
var213 = var215;
varonce212 = var213;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var213); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
{
var217 = nit__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var_218 = var217;
if (var217){
var216 = var_218;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var221 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline model#MClass#name (var219) on <var219:MClass> */
var224 = var219->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var219:MClass> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "Pointer";
var228 = standard___standard__NativeString___to_s_with_length(var227, 7l);
var226 = var228;
varonce225 = var226;
}
{
var229 = ((short int(*)(val* self, val* p0))(var222->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var222, var226); /* == on <var222:String>*/
}
var216 = var229;
}
if (var216){
{
{ /* Inline separate_compiler#MType#is_tagged (var_mtype) on <var_mtype:MClassType> */
var232 = var_mtype->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MClassType> */
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (var230){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var235 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (unlikely(varonce236==NULL)) {
var237 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "struct instance_";
var241 = standard___standard__NativeString___to_s_with_length(var240, 16l);
var239 = var241;
varonce238 = var239;
}
((struct instance_standard__NativeArray*)var237)->values[0]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = " {";
var245 = standard___standard__NativeString___to_s_with_length(var244, 2l);
var243 = var245;
varonce242 = var243;
}
((struct instance_standard__NativeArray*)var237)->values[2]=var243;
} else {
var237 = varonce236;
varonce236 = NULL;
}
((struct instance_standard__NativeArray*)var237)->values[1]=var_c_name;
{
var246 = ((val*(*)(val* self))(var237->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var237); /* native_to_s on <var237:NativeArray[String]>*/
}
varonce236 = var237;
{
nit___nit__CodeWriter___add_decl(var233, var246); /* Direct call abstract_compiler#CodeWriter#add_decl on <var233:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var249 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "const struct type *type;";
var253 = standard___standard__NativeString___to_s_with_length(var252, 24l);
var251 = var253;
varonce250 = var251;
}
{
nit___nit__CodeWriter___add_decl(var247, var251); /* Direct call abstract_compiler#CodeWriter#add_decl on <var247:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var256 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "const struct class *class;";
var260 = standard___standard__NativeString___to_s_with_length(var259, 26l);
var258 = var260;
varonce257 = var258;
}
{
nit___nit__CodeWriter___add_decl(var254, var258); /* Direct call abstract_compiler#CodeWriter#add_decl on <var254:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var263 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
if (unlikely(varonce264==NULL)) {
var265 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = " value;";
var269 = standard___standard__NativeString___to_s_with_length(var268, 7l);
var267 = var269;
varonce266 = var267;
}
((struct instance_standard__NativeArray*)var265)->values[1]=var267;
} else {
var265 = varonce264;
varonce264 = NULL;
}
{
var270 = nit__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_standard__NativeArray*)var265)->values[0]=var270;
{
var271 = ((val*(*)(val* self))(var265->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var265); /* native_to_s on <var265:NativeArray[String]>*/
}
varonce264 = var265;
{
nit___nit__CodeWriter___add_decl(var261, var271); /* Direct call abstract_compiler#CodeWriter#add_decl on <var261:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var274 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = "};";
var278 = standard___standard__NativeString___to_s_with_length(var277, 2l);
var276 = var278;
varonce275 = var276;
}
{
nit___nit__CodeWriter___add_decl(var272, var276); /* Direct call abstract_compiler#CodeWriter#add_decl on <var272:CodeWriter>*/
}
if (var_rta == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 864);
fatal_exit(1);
} else {
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var_rta) on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var_rta == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var282 = var_rta->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var_rta:nullable RapidTypeAnalysis> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__rapid_type_analysis, 60);
fatal_exit(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
var283 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var280, var_mtype);
}
var284 = !var283;
var_285 = var284;
if (var284){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var288 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var288 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var286 = var288;
RET_LABEL287:(void)0;
}
}
{
{ /* Inline model#MClass#name (var286) on <var286:MClass> */
var291 = var286->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var286:MClass> */
if (unlikely(var291 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var289 = var291;
RET_LABEL290:(void)0;
}
}
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = "Pointer";
var295 = standard___standard__NativeString___to_s_with_length(var294, 7l);
var293 = var295;
varonce292 = var293;
}
{
{ /* Inline kernel#Object#!= (var289,var293) on <var289:String> */
var_other = var293;
{
var298 = ((short int(*)(val* self, val* p0))(var289->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var289, var_other); /* == on <var289:String>*/
}
var299 = !var298;
var296 = var299;
goto RET_LABEL297;
RET_LABEL297:(void)0;
}
}
var279 = var296;
} else {
var279 = var_285;
}
if (var279){
goto RET_LABEL;
} else {
}
if (unlikely(varonce300==NULL)) {
var301 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "BOX_";
var305 = standard___standard__NativeString___to_s_with_length(var304, 4l);
var303 = var305;
varonce302 = var303;
}
((struct instance_standard__NativeArray*)var301)->values[0]=var303;
} else {
var301 = varonce300;
varonce300 = NULL;
}
((struct instance_standard__NativeArray*)var301)->values[1]=var_c_name;
{
var306 = ((val*(*)(val* self))(var301->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var301); /* native_to_s on <var301:NativeArray[String]>*/
}
varonce300 = var301;
if (unlikely(varonce307==NULL)) {
var308 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "val* BOX_";
var312 = standard___standard__NativeString___to_s_with_length(var311, 9l);
var310 = var312;
varonce309 = var310;
}
((struct instance_standard__NativeArray*)var308)->values[0]=var310;
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "(";
var316 = standard___standard__NativeString___to_s_with_length(var315, 1l);
var314 = var316;
varonce313 = var314;
}
((struct instance_standard__NativeArray*)var308)->values[2]=var314;
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = ");";
var320 = standard___standard__NativeString___to_s_with_length(var319, 2l);
var318 = var320;
varonce317 = var318;
}
((struct instance_standard__NativeArray*)var308)->values[4]=var318;
} else {
var308 = varonce307;
varonce307 = NULL;
}
((struct instance_standard__NativeArray*)var308)->values[1]=var_c_name;
{
var321 = nit__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_standard__NativeArray*)var308)->values[3]=var321;
{
var322 = ((val*(*)(val* self))(var308->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var308); /* native_to_s on <var308:NativeArray[String]>*/
}
varonce307 = var308;
{
nit___nit__AbstractCompiler___provide_declaration(self, var306, var322); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce323==NULL)) {
var324 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "/* allocate ";
var328 = standard___standard__NativeString___to_s_with_length(var327, 12l);
var326 = var328;
varonce325 = var326;
}
((struct instance_standard__NativeArray*)var324)->values[0]=var326;
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = " */";
var332 = standard___standard__NativeString___to_s_with_length(var331, 3l);
var330 = var332;
varonce329 = var330;
}
((struct instance_standard__NativeArray*)var324)->values[2]=var330;
} else {
var324 = varonce323;
varonce323 = NULL;
}
{
var333 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var324)->values[1]=var333;
{
var334 = ((val*(*)(val* self))(var324->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var324); /* native_to_s on <var324:NativeArray[String]>*/
}
varonce323 = var324;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var334); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce335==NULL)) {
var336 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "val* BOX_";
var340 = standard___standard__NativeString___to_s_with_length(var339, 9l);
var338 = var340;
varonce337 = var338;
}
((struct instance_standard__NativeArray*)var336)->values[0]=var338;
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "(";
var344 = standard___standard__NativeString___to_s_with_length(var343, 1l);
var342 = var344;
varonce341 = var342;
}
((struct instance_standard__NativeArray*)var336)->values[2]=var342;
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = " value) {";
var348 = standard___standard__NativeString___to_s_with_length(var347, 9l);
var346 = var348;
varonce345 = var346;
}
((struct instance_standard__NativeArray*)var336)->values[4]=var346;
} else {
var336 = varonce335;
varonce335 = NULL;
}
{
var349 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var336)->values[1]=var349;
{
var350 = nit__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_standard__NativeArray*)var336)->values[3]=var350;
{
var351 = ((val*(*)(val* self))(var336->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var336); /* native_to_s on <var336:NativeArray[String]>*/
}
varonce335 = var336;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var351); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce352==NULL)) {
var353 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce354!=NULL)) {
var355 = varonce354;
} else {
var356 = "struct instance_";
var357 = standard___standard__NativeString___to_s_with_length(var356, 16l);
var355 = var357;
varonce354 = var355;
}
((struct instance_standard__NativeArray*)var353)->values[0]=var355;
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = "*res = nit_alloc(sizeof(struct instance_";
var361 = standard___standard__NativeString___to_s_with_length(var360, 40l);
var359 = var361;
varonce358 = var359;
}
((struct instance_standard__NativeArray*)var353)->values[2]=var359;
if (likely(varonce362!=NULL)) {
var363 = varonce362;
} else {
var364 = "));";
var365 = standard___standard__NativeString___to_s_with_length(var364, 3l);
var363 = var365;
varonce362 = var363;
}
((struct instance_standard__NativeArray*)var353)->values[4]=var363;
} else {
var353 = varonce352;
varonce352 = NULL;
}
((struct instance_standard__NativeArray*)var353)->values[1]=var_c_name;
((struct instance_standard__NativeArray*)var353)->values[3]=var_c_name;
{
var366 = ((val*(*)(val* self))(var353->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var353); /* native_to_s on <var353:NativeArray[String]>*/
}
varonce352 = var353;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var366); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var369 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var369 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var367 = var369;
RET_LABEL368:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var367) on <var367:AbstractCompiler(SeparateCompiler)> */
var372 = var367->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var367:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 146);
fatal_exit(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var370&3)?class_info[((long)var370&3)]:var370->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var370, var_mtype); /* add on <var370:Set[MType]>*/
}
if (unlikely(varonce373==NULL)) {
var374 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce375!=NULL)) {
var376 = varonce375;
} else {
var377 = "type_";
var378 = standard___standard__NativeString___to_s_with_length(var377, 5l);
var376 = var378;
varonce375 = var376;
}
((struct instance_standard__NativeArray*)var374)->values[0]=var376;
} else {
var374 = varonce373;
varonce373 = NULL;
}
((struct instance_standard__NativeArray*)var374)->values[1]=var_c_name;
{
var379 = ((val*(*)(val* self))(var374->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var374); /* native_to_s on <var374:NativeArray[String]>*/
}
varonce373 = var374;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var379); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce380==NULL)) {
var381 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "res->type = &type_";
var385 = standard___standard__NativeString___to_s_with_length(var384, 18l);
var383 = var385;
varonce382 = var383;
}
((struct instance_standard__NativeArray*)var381)->values[0]=var383;
if (likely(varonce386!=NULL)) {
var387 = varonce386;
} else {
var388 = ";";
var389 = standard___standard__NativeString___to_s_with_length(var388, 1l);
var387 = var389;
varonce386 = var387;
}
((struct instance_standard__NativeArray*)var381)->values[2]=var387;
} else {
var381 = varonce380;
varonce380 = NULL;
}
((struct instance_standard__NativeArray*)var381)->values[1]=var_c_name;
{
var390 = ((val*(*)(val* self))(var381->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var381); /* native_to_s on <var381:NativeArray[String]>*/
}
varonce380 = var381;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var390); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce391==NULL)) {
var392 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "class_";
var396 = standard___standard__NativeString___to_s_with_length(var395, 6l);
var394 = var396;
varonce393 = var394;
}
((struct instance_standard__NativeArray*)var392)->values[0]=var394;
} else {
var392 = varonce391;
varonce391 = NULL;
}
((struct instance_standard__NativeArray*)var392)->values[1]=var_c_name;
{
var397 = ((val*(*)(val* self))(var392->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var392); /* native_to_s on <var392:NativeArray[String]>*/
}
varonce391 = var392;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var397); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce398==NULL)) {
var399 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = "res->class = &class_";
var403 = standard___standard__NativeString___to_s_with_length(var402, 20l);
var401 = var403;
varonce400 = var401;
}
((struct instance_standard__NativeArray*)var399)->values[0]=var401;
if (likely(varonce404!=NULL)) {
var405 = varonce404;
} else {
var406 = ";";
var407 = standard___standard__NativeString___to_s_with_length(var406, 1l);
var405 = var407;
varonce404 = var405;
}
((struct instance_standard__NativeArray*)var399)->values[2]=var405;
} else {
var399 = varonce398;
varonce398 = NULL;
}
((struct instance_standard__NativeArray*)var399)->values[1]=var_c_name;
{
var408 = ((val*(*)(val* self))(var399->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var399); /* native_to_s on <var399:NativeArray[String]>*/
}
varonce398 = var399;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var408); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = "res->value = value;";
var412 = standard___standard__NativeString___to_s_with_length(var411, 19l);
var410 = var412;
varonce409 = var410;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var410); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "return (val*)res;";
var416 = standard___standard__NativeString___to_s_with_length(var415, 17l);
var414 = var416;
varonce413 = var414;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var414); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "}";
var420 = standard___standard__NativeString___to_s_with_length(var419, 1l);
var418 = var420;
varonce417 = var418;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var418); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var423 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var423 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var421 = var423;
RET_LABEL422:(void)0;
}
}
{
{ /* Inline model#MClass#name (var421) on <var421:MClass> */
var426 = var421->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var421:MClass> */
if (unlikely(var426 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var424 = var426;
RET_LABEL425:(void)0;
}
}
if (likely(varonce427!=NULL)) {
var428 = varonce427;
} else {
var429 = "Pointer";
var430 = standard___standard__NativeString___to_s_with_length(var429, 7l);
var428 = var430;
varonce427 = var428;
}
{
{ /* Inline kernel#Object#!= (var424,var428) on <var424:String> */
var_other = var428;
{
var433 = ((short int(*)(val* self, val* p0))(var424->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var424, var_other); /* == on <var424:String>*/
}
var434 = !var433;
var431 = var434;
goto RET_LABEL432;
RET_LABEL432:(void)0;
}
}
if (var431){
goto RET_LABEL;
} else {
}
{
var435 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var435;
if (unlikely(varonce436==NULL)) {
var437 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce438!=NULL)) {
var439 = varonce438;
} else {
var440 = "NEW_";
var441 = standard___standard__NativeString___to_s_with_length(var440, 4l);
var439 = var441;
varonce438 = var439;
}
((struct instance_standard__NativeArray*)var437)->values[0]=var439;
} else {
var437 = varonce436;
varonce436 = NULL;
}
((struct instance_standard__NativeArray*)var437)->values[1]=var_c_name;
{
var442 = ((val*(*)(val* self))(var437->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var437); /* native_to_s on <var437:NativeArray[String]>*/
}
varonce436 = var437;
if (unlikely(varonce443==NULL)) {
var444 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = " NEW_";
var448 = standard___standard__NativeString___to_s_with_length(var447, 5l);
var446 = var448;
varonce445 = var446;
}
((struct instance_standard__NativeArray*)var444)->values[1]=var446;
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "(const struct type* type);";
var452 = standard___standard__NativeString___to_s_with_length(var451, 26l);
var450 = var452;
varonce449 = var450;
}
((struct instance_standard__NativeArray*)var444)->values[3]=var450;
} else {
var444 = varonce443;
varonce443 = NULL;
}
{
var453 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var444)->values[0]=var453;
((struct instance_standard__NativeArray*)var444)->values[2]=var_c_name;
{
var454 = ((val*(*)(val* self))(var444->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var444); /* native_to_s on <var444:NativeArray[String]>*/
}
varonce443 = var444;
{
nit___nit__AbstractCompiler___provide_declaration(self, var442, var454); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce455==NULL)) {
var456 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = "/* allocate ";
var460 = standard___standard__NativeString___to_s_with_length(var459, 12l);
var458 = var460;
varonce457 = var458;
}
((struct instance_standard__NativeArray*)var456)->values[0]=var458;
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = " */";
var464 = standard___standard__NativeString___to_s_with_length(var463, 3l);
var462 = var464;
varonce461 = var462;
}
((struct instance_standard__NativeArray*)var456)->values[2]=var462;
} else {
var456 = varonce455;
varonce455 = NULL;
}
{
var465 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var456)->values[1]=var465;
{
var466 = ((val*(*)(val* self))(var456->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var456); /* native_to_s on <var456:NativeArray[String]>*/
}
varonce455 = var456;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var466); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce467==NULL)) {
var468 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce469!=NULL)) {
var470 = varonce469;
} else {
var471 = " NEW_";
var472 = standard___standard__NativeString___to_s_with_length(var471, 5l);
var470 = var472;
varonce469 = var470;
}
((struct instance_standard__NativeArray*)var468)->values[1]=var470;
if (likely(varonce473!=NULL)) {
var474 = varonce473;
} else {
var475 = "(const struct type* type) {";
var476 = standard___standard__NativeString___to_s_with_length(var475, 27l);
var474 = var476;
varonce473 = var474;
}
((struct instance_standard__NativeArray*)var468)->values[3]=var474;
} else {
var468 = varonce467;
varonce467 = NULL;
}
{
var477 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var468)->values[0]=var477;
((struct instance_standard__NativeArray*)var468)->values[2]=var_c_name;
{
var478 = ((val*(*)(val* self))(var468->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var468); /* native_to_s on <var468:NativeArray[String]>*/
}
varonce467 = var468;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var478); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce479==NULL)) {
var480 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = " is DEAD";
var484 = standard___standard__NativeString___to_s_with_length(var483, 8l);
var482 = var484;
varonce481 = var482;
}
((struct instance_standard__NativeArray*)var480)->values[1]=var482;
} else {
var480 = varonce479;
varonce479 = NULL;
}
{
var485 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var480)->values[0]=var485;
{
var486 = ((val*(*)(val* self))(var480->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var480); /* native_to_s on <var480:NativeArray[String]>*/
}
varonce479 = var480;
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var486); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = "self";
var490 = standard___standard__NativeString___to_s_with_length(var489, 4l);
var488 = var490;
varonce487 = var488;
}
{
var491 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var488);
}
var_res = var491;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL492:(void)0;
}
}
if (unlikely(varonce493==NULL)) {
var494 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce495!=NULL)) {
var496 = varonce495;
} else {
var497 = " = nit_alloc(sizeof(struct instance_";
var498 = standard___standard__NativeString___to_s_with_length(var497, 36l);
var496 = var498;
varonce495 = var496;
}
((struct instance_standard__NativeArray*)var494)->values[1]=var496;
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = "));";
var502 = standard___standard__NativeString___to_s_with_length(var501, 3l);
var500 = var502;
varonce499 = var500;
}
((struct instance_standard__NativeArray*)var494)->values[3]=var500;
} else {
var494 = varonce493;
varonce493 = NULL;
}
{
var503 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var494)->values[0]=var503;
{
var504 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var494)->values[2]=var504;
{
var505 = ((val*(*)(val* self))(var494->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var494); /* native_to_s on <var494:NativeArray[String]>*/
}
varonce493 = var494;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var505); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce506==NULL)) {
var507 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce508!=NULL)) {
var509 = varonce508;
} else {
var510 = "->type = type;";
var511 = standard___standard__NativeString___to_s_with_length(var510, 14l);
var509 = var511;
varonce508 = var509;
}
((struct instance_standard__NativeArray*)var507)->values[1]=var509;
} else {
var507 = varonce506;
varonce506 = NULL;
}
{
var512 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var507)->values[0]=var512;
{
var513 = ((val*(*)(val* self))(var507->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var507); /* native_to_s on <var507:NativeArray[String]>*/
}
varonce506 = var507;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var513); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce514!=NULL)) {
var515 = varonce514;
} else {
var516 = "type";
var517 = standard___standard__NativeString___to_s_with_length(var516, 4l);
var515 = var517;
varonce514 = var515;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var515); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce518==NULL)) {
var519 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce520!=NULL)) {
var521 = varonce520;
} else {
var522 = "class_";
var523 = standard___standard__NativeString___to_s_with_length(var522, 6l);
var521 = var523;
varonce520 = var521;
}
((struct instance_standard__NativeArray*)var519)->values[0]=var521;
} else {
var519 = varonce518;
varonce518 = NULL;
}
((struct instance_standard__NativeArray*)var519)->values[1]=var_c_name;
{
var524 = ((val*(*)(val* self))(var519->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var519); /* native_to_s on <var519:NativeArray[String]>*/
}
varonce518 = var519;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var524); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce525==NULL)) {
var526 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce527!=NULL)) {
var528 = varonce527;
} else {
var529 = "->class = &class_";
var530 = standard___standard__NativeString___to_s_with_length(var529, 17l);
var528 = var530;
varonce527 = var528;
}
((struct instance_standard__NativeArray*)var526)->values[1]=var528;
if (likely(varonce531!=NULL)) {
var532 = varonce531;
} else {
var533 = ";";
var534 = standard___standard__NativeString___to_s_with_length(var533, 1l);
var532 = var534;
varonce531 = var532;
}
((struct instance_standard__NativeArray*)var526)->values[3]=var532;
} else {
var526 = varonce525;
varonce525 = NULL;
}
{
var535 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var526)->values[0]=var535;
((struct instance_standard__NativeArray*)var526)->values[2]=var_c_name;
{
var536 = ((val*(*)(val* self))(var526->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var526); /* native_to_s on <var526:NativeArray[String]>*/
}
varonce525 = var526;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var536); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce537==NULL)) {
var538 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce539!=NULL)) {
var540 = varonce539;
} else {
var541 = "((struct instance_";
var542 = standard___standard__NativeString___to_s_with_length(var541, 18l);
var540 = var542;
varonce539 = var540;
}
((struct instance_standard__NativeArray*)var538)->values[0]=var540;
if (likely(varonce543!=NULL)) {
var544 = varonce543;
} else {
var545 = "*)";
var546 = standard___standard__NativeString___to_s_with_length(var545, 2l);
var544 = var546;
varonce543 = var544;
}
((struct instance_standard__NativeArray*)var538)->values[2]=var544;
if (likely(varonce547!=NULL)) {
var548 = varonce547;
} else {
var549 = ")->value = NULL;";
var550 = standard___standard__NativeString___to_s_with_length(var549, 16l);
var548 = var550;
varonce547 = var548;
}
((struct instance_standard__NativeArray*)var538)->values[4]=var548;
} else {
var538 = varonce537;
varonce537 = NULL;
}
{
var551 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var538)->values[1]=var551;
{
var552 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var538)->values[3]=var552;
{
var553 = ((val*(*)(val* self))(var538->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var538); /* native_to_s on <var538:NativeArray[String]>*/
}
varonce537 = var538;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var553); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce554==NULL)) {
var555 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce556!=NULL)) {
var557 = varonce556;
} else {
var558 = "return ";
var559 = standard___standard__NativeString___to_s_with_length(var558, 7l);
var557 = var559;
varonce556 = var557;
}
((struct instance_standard__NativeArray*)var555)->values[0]=var557;
if (likely(varonce560!=NULL)) {
var561 = varonce560;
} else {
var562 = ";";
var563 = standard___standard__NativeString___to_s_with_length(var562, 1l);
var561 = var563;
varonce560 = var561;
}
((struct instance_standard__NativeArray*)var555)->values[2]=var561;
} else {
var555 = varonce554;
varonce554 = NULL;
}
{
var564 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var555)->values[1]=var564;
{
var565 = ((val*(*)(val* self))(var555->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var555); /* native_to_s on <var555:NativeArray[String]>*/
}
varonce554 = var555;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var565); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce566!=NULL)) {
var567 = varonce566;
} else {
var568 = "}";
var569 = standard___standard__NativeString___to_s_with_length(var568, 1l);
var567 = var569;
varonce566 = var567;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var567); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var572 = var_mclass->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var572 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var570 = var572;
RET_LABEL571:(void)0;
}
}
if (likely(varonce573!=NULL)) {
var574 = varonce573;
} else {
var575 = "NativeArray";
var576 = standard___standard__NativeString___to_s_with_length(var575, 11l);
var574 = var576;
varonce573 = var574;
}
{
var577 = ((short int(*)(val* self, val* p0))(var570->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var570, var574); /* == on <var570:String>*/
}
if (var577){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var580 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var580 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var578 = var580;
RET_LABEL579:(void)0;
}
}
if (unlikely(varonce581==NULL)) {
var582 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce583!=NULL)) {
var584 = varonce583;
} else {
var585 = "struct instance_";
var586 = standard___standard__NativeString___to_s_with_length(var585, 16l);
var584 = var586;
varonce583 = var584;
}
((struct instance_standard__NativeArray*)var582)->values[0]=var584;
if (likely(varonce587!=NULL)) {
var588 = varonce587;
} else {
var589 = " {";
var590 = standard___standard__NativeString___to_s_with_length(var589, 2l);
var588 = var590;
varonce587 = var588;
}
((struct instance_standard__NativeArray*)var582)->values[2]=var588;
} else {
var582 = varonce581;
varonce581 = NULL;
}
((struct instance_standard__NativeArray*)var582)->values[1]=var_c_name;
{
var591 = ((val*(*)(val* self))(var582->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var582); /* native_to_s on <var582:NativeArray[String]>*/
}
varonce581 = var582;
{
nit___nit__CodeWriter___add_decl(var578, var591); /* Direct call abstract_compiler#CodeWriter#add_decl on <var578:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var594 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var594 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var592 = var594;
RET_LABEL593:(void)0;
}
}
if (likely(varonce595!=NULL)) {
var596 = varonce595;
} else {
var597 = "const struct type *type;";
var598 = standard___standard__NativeString___to_s_with_length(var597, 24l);
var596 = var598;
varonce595 = var596;
}
{
nit___nit__CodeWriter___add_decl(var592, var596); /* Direct call abstract_compiler#CodeWriter#add_decl on <var592:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var601 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var601 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var599 = var601;
RET_LABEL600:(void)0;
}
}
if (likely(varonce602!=NULL)) {
var603 = varonce602;
} else {
var604 = "const struct class *class;";
var605 = standard___standard__NativeString___to_s_with_length(var604, 26l);
var603 = var605;
varonce602 = var603;
}
{
nit___nit__CodeWriter___add_decl(var599, var603); /* Direct call abstract_compiler#CodeWriter#add_decl on <var599:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var608 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var608 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var606 = var608;
RET_LABEL607:(void)0;
}
}
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = "int length;";
var612 = standard___standard__NativeString___to_s_with_length(var611, 11l);
var610 = var612;
varonce609 = var610;
}
{
nit___nit__CodeWriter___add_decl(var606, var610); /* Direct call abstract_compiler#CodeWriter#add_decl on <var606:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var615 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var615 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var613 = var615;
RET_LABEL614:(void)0;
}
}
if (likely(varonce616!=NULL)) {
var617 = varonce616;
} else {
var618 = "val* values[0];";
var619 = standard___standard__NativeString___to_s_with_length(var618, 15l);
var617 = var619;
varonce616 = var617;
}
{
nit___nit__CodeWriter___add_decl(var613, var617); /* Direct call abstract_compiler#CodeWriter#add_decl on <var613:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var622 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var622 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var620 = var622;
RET_LABEL621:(void)0;
}
}
if (likely(varonce623!=NULL)) {
var624 = varonce623;
} else {
var625 = "};";
var626 = standard___standard__NativeString___to_s_with_length(var625, 2l);
var624 = var626;
varonce623 = var624;
}
{
nit___nit__CodeWriter___add_decl(var620, var624); /* Direct call abstract_compiler#CodeWriter#add_decl on <var620:CodeWriter>*/
}
if (unlikely(varonce627==NULL)) {
var628 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce629!=NULL)) {
var630 = varonce629;
} else {
var631 = "NEW_";
var632 = standard___standard__NativeString___to_s_with_length(var631, 4l);
var630 = var632;
varonce629 = var630;
}
((struct instance_standard__NativeArray*)var628)->values[0]=var630;
} else {
var628 = varonce627;
varonce627 = NULL;
}
((struct instance_standard__NativeArray*)var628)->values[1]=var_c_name;
{
var633 = ((val*(*)(val* self))(var628->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var628); /* native_to_s on <var628:NativeArray[String]>*/
}
varonce627 = var628;
if (unlikely(varonce634==NULL)) {
var635 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce636!=NULL)) {
var637 = varonce636;
} else {
var638 = " NEW_";
var639 = standard___standard__NativeString___to_s_with_length(var638, 5l);
var637 = var639;
varonce636 = var637;
}
((struct instance_standard__NativeArray*)var635)->values[1]=var637;
if (likely(varonce640!=NULL)) {
var641 = varonce640;
} else {
var642 = "(int length, const struct type* type);";
var643 = standard___standard__NativeString___to_s_with_length(var642, 38l);
var641 = var643;
varonce640 = var641;
}
((struct instance_standard__NativeArray*)var635)->values[3]=var641;
} else {
var635 = varonce634;
varonce634 = NULL;
}
{
var644 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var635)->values[0]=var644;
((struct instance_standard__NativeArray*)var635)->values[2]=var_c_name;
{
var645 = ((val*(*)(val* self))(var635->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var635); /* native_to_s on <var635:NativeArray[String]>*/
}
varonce634 = var635;
{
nit___nit__AbstractCompiler___provide_declaration(self, var633, var645); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce646==NULL)) {
var647 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce648!=NULL)) {
var649 = varonce648;
} else {
var650 = "/* allocate ";
var651 = standard___standard__NativeString___to_s_with_length(var650, 12l);
var649 = var651;
varonce648 = var649;
}
((struct instance_standard__NativeArray*)var647)->values[0]=var649;
if (likely(varonce652!=NULL)) {
var653 = varonce652;
} else {
var654 = " */";
var655 = standard___standard__NativeString___to_s_with_length(var654, 3l);
var653 = var655;
varonce652 = var653;
}
((struct instance_standard__NativeArray*)var647)->values[2]=var653;
} else {
var647 = varonce646;
varonce646 = NULL;
}
{
var656 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var647)->values[1]=var656;
{
var657 = ((val*(*)(val* self))(var647->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var647); /* native_to_s on <var647:NativeArray[String]>*/
}
varonce646 = var647;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var657); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce658==NULL)) {
var659 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce660!=NULL)) {
var661 = varonce660;
} else {
var662 = " NEW_";
var663 = standard___standard__NativeString___to_s_with_length(var662, 5l);
var661 = var663;
varonce660 = var661;
}
((struct instance_standard__NativeArray*)var659)->values[1]=var661;
if (likely(varonce664!=NULL)) {
var665 = varonce664;
} else {
var666 = "(int length, const struct type* type) {";
var667 = standard___standard__NativeString___to_s_with_length(var666, 39l);
var665 = var667;
varonce664 = var665;
}
((struct instance_standard__NativeArray*)var659)->values[3]=var665;
} else {
var659 = varonce658;
varonce658 = NULL;
}
{
var668 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var659)->values[0]=var668;
((struct instance_standard__NativeArray*)var659)->values[2]=var_c_name;
{
var669 = ((val*(*)(val* self))(var659->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var659); /* native_to_s on <var659:NativeArray[String]>*/
}
varonce658 = var659;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var669); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce670!=NULL)) {
var671 = varonce670;
} else {
var672 = "self";
var673 = standard___standard__NativeString___to_s_with_length(var672, 4l);
var671 = var673;
varonce670 = var671;
}
{
var674 = nit___nit__AbstractCompilerVisitor___get_name(var_v, var671);
}
var_res675 = var674;
if (unlikely(varonce676==NULL)) {
var677 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce678!=NULL)) {
var679 = varonce678;
} else {
var680 = "struct instance_";
var681 = standard___standard__NativeString___to_s_with_length(var680, 16l);
var679 = var681;
varonce678 = var679;
}
((struct instance_standard__NativeArray*)var677)->values[0]=var679;
if (likely(varonce682!=NULL)) {
var683 = varonce682;
} else {
var684 = " *";
var685 = standard___standard__NativeString___to_s_with_length(var684, 2l);
var683 = var685;
varonce682 = var683;
}
((struct instance_standard__NativeArray*)var677)->values[2]=var683;
if (likely(varonce686!=NULL)) {
var687 = varonce686;
} else {
var688 = ";";
var689 = standard___standard__NativeString___to_s_with_length(var688, 1l);
var687 = var689;
varonce686 = var687;
}
((struct instance_standard__NativeArray*)var677)->values[4]=var687;
} else {
var677 = varonce676;
varonce676 = NULL;
}
((struct instance_standard__NativeArray*)var677)->values[1]=var_c_name;
((struct instance_standard__NativeArray*)var677)->values[3]=var_res675;
{
var690 = ((val*(*)(val* self))(var677->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var677); /* native_to_s on <var677:NativeArray[String]>*/
}
varonce676 = var677;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var690); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var691 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var692 = standard___standard__SequenceRead___Collection__first(var691);
}
var_mtype_elt = var692;
if (unlikely(varonce693==NULL)) {
var694 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce695!=NULL)) {
var696 = varonce695;
} else {
var697 = " = nit_alloc(sizeof(struct instance_";
var698 = standard___standard__NativeString___to_s_with_length(var697, 36l);
var696 = var698;
varonce695 = var696;
}
((struct instance_standard__NativeArray*)var694)->values[1]=var696;
if (likely(varonce699!=NULL)) {
var700 = varonce699;
} else {
var701 = ") + length*sizeof(";
var702 = standard___standard__NativeString___to_s_with_length(var701, 18l);
var700 = var702;
varonce699 = var700;
}
((struct instance_standard__NativeArray*)var694)->values[3]=var700;
if (likely(varonce703!=NULL)) {
var704 = varonce703;
} else {
var705 = "));";
var706 = standard___standard__NativeString___to_s_with_length(var705, 3l);
var704 = var706;
varonce703 = var704;
}
((struct instance_standard__NativeArray*)var694)->values[5]=var704;
} else {
var694 = varonce693;
varonce693 = NULL;
}
((struct instance_standard__NativeArray*)var694)->values[0]=var_res675;
((struct instance_standard__NativeArray*)var694)->values[2]=var_c_name;
{
var707 = ((val*(*)(val* self))(var_mtype_elt->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var_mtype_elt); /* ctype on <var_mtype_elt:MType>*/
}
((struct instance_standard__NativeArray*)var694)->values[4]=var707;
{
var708 = ((val*(*)(val* self))(var694->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var694); /* native_to_s on <var694:NativeArray[String]>*/
}
varonce693 = var694;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var708); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce709==NULL)) {
var710 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce711!=NULL)) {
var712 = varonce711;
} else {
var713 = "->type = type;";
var714 = standard___standard__NativeString___to_s_with_length(var713, 14l);
var712 = var714;
varonce711 = var712;
}
((struct instance_standard__NativeArray*)var710)->values[1]=var712;
} else {
var710 = varonce709;
varonce709 = NULL;
}
((struct instance_standard__NativeArray*)var710)->values[0]=var_res675;
{
var715 = ((val*(*)(val* self))(var710->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var710); /* native_to_s on <var710:NativeArray[String]>*/
}
varonce709 = var710;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var715); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce716!=NULL)) {
var717 = varonce716;
} else {
var718 = "type";
var719 = standard___standard__NativeString___to_s_with_length(var718, 4l);
var717 = var719;
varonce716 = var717;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var717); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce720==NULL)) {
var721 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce722!=NULL)) {
var723 = varonce722;
} else {
var724 = "class_";
var725 = standard___standard__NativeString___to_s_with_length(var724, 6l);
var723 = var725;
varonce722 = var723;
}
((struct instance_standard__NativeArray*)var721)->values[0]=var723;
} else {
var721 = varonce720;
varonce720 = NULL;
}
((struct instance_standard__NativeArray*)var721)->values[1]=var_c_name;
{
var726 = ((val*(*)(val* self))(var721->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var721); /* native_to_s on <var721:NativeArray[String]>*/
}
varonce720 = var721;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var726); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce727==NULL)) {
var728 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce729!=NULL)) {
var730 = varonce729;
} else {
var731 = "->class = &class_";
var732 = standard___standard__NativeString___to_s_with_length(var731, 17l);
var730 = var732;
varonce729 = var730;
}
((struct instance_standard__NativeArray*)var728)->values[1]=var730;
if (likely(varonce733!=NULL)) {
var734 = varonce733;
} else {
var735 = ";";
var736 = standard___standard__NativeString___to_s_with_length(var735, 1l);
var734 = var736;
varonce733 = var734;
}
((struct instance_standard__NativeArray*)var728)->values[3]=var734;
} else {
var728 = varonce727;
varonce727 = NULL;
}
((struct instance_standard__NativeArray*)var728)->values[0]=var_res675;
((struct instance_standard__NativeArray*)var728)->values[2]=var_c_name;
{
var737 = ((val*(*)(val* self))(var728->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var728); /* native_to_s on <var728:NativeArray[String]>*/
}
varonce727 = var728;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var737); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce738==NULL)) {
var739 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce740!=NULL)) {
var741 = varonce740;
} else {
var742 = "->length = length;";
var743 = standard___standard__NativeString___to_s_with_length(var742, 18l);
var741 = var743;
varonce740 = var741;
}
((struct instance_standard__NativeArray*)var739)->values[1]=var741;
} else {
var739 = varonce738;
varonce738 = NULL;
}
((struct instance_standard__NativeArray*)var739)->values[0]=var_res675;
{
var744 = ((val*(*)(val* self))(var739->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var739); /* native_to_s on <var739:NativeArray[String]>*/
}
varonce738 = var739;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var744); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce745==NULL)) {
var746 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce747!=NULL)) {
var748 = varonce747;
} else {
var749 = "return (val*)";
var750 = standard___standard__NativeString___to_s_with_length(var749, 13l);
var748 = var750;
varonce747 = var748;
}
((struct instance_standard__NativeArray*)var746)->values[0]=var748;
if (likely(varonce751!=NULL)) {
var752 = varonce751;
} else {
var753 = ";";
var754 = standard___standard__NativeString___to_s_with_length(var753, 1l);
var752 = var754;
varonce751 = var752;
}
((struct instance_standard__NativeArray*)var746)->values[2]=var752;
} else {
var746 = varonce745;
varonce745 = NULL;
}
((struct instance_standard__NativeArray*)var746)->values[1]=var_res675;
{
var755 = ((val*(*)(val* self))(var746->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var746); /* native_to_s on <var746:NativeArray[String]>*/
}
varonce745 = var746;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var755); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce756!=NULL)) {
var757 = varonce756;
} else {
var758 = "}";
var759 = standard___standard__NativeString___to_s_with_length(var758, 1l);
var757 = var759;
varonce756 = var757;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var757); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var763 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var763 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var761 = var763;
RET_LABEL762:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var761) on <var761:MClass> */
var766 = var761->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var761:MClass> */
if (unlikely(var766 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var764 = var766;
RET_LABEL765:(void)0;
}
}
var767 = glob_sys;
{
var768 = nit__model___standard__Sys___extern_kind(var767);
}
{
{ /* Inline kernel#Object#== (var764,var768) on <var764:MClassKind> */
var_other126 = var768;
{
{ /* Inline kernel#Object#is_same_instance (var764,var_other126) on <var764:MClassKind> */
var773 = var764 == var_other126;
var771 = var773;
goto RET_LABEL772;
RET_LABEL772:(void)0;
}
}
var769 = var771;
goto RET_LABEL770;
RET_LABEL770:(void)0;
}
}
var_774 = var769;
if (var769){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var777 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var777 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var775 = var777;
RET_LABEL776:(void)0;
}
}
{
{ /* Inline model#MClass#name (var775) on <var775:MClass> */
var780 = var775->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var775:MClass> */
if (unlikely(var780 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var778 = var780;
RET_LABEL779:(void)0;
}
}
if (likely(varonce781!=NULL)) {
var782 = varonce781;
} else {
var783 = "NativeString";
var784 = standard___standard__NativeString___to_s_with_length(var783, 12l);
var782 = var784;
varonce781 = var782;
}
{
{ /* Inline kernel#Object#!= (var778,var782) on <var778:String> */
var_other = var782;
{
var787 = ((short int(*)(val* self, val* p0))(var778->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var778, var_other); /* == on <var778:String>*/
}
var788 = !var787;
var785 = var788;
goto RET_LABEL786;
RET_LABEL786:(void)0;
}
}
var760 = var785;
} else {
var760 = var_774;
}
if (var760){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var791 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var791 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var789 = var791;
RET_LABEL790:(void)0;
}
}
{
var792 = nit__model___MModule___pointer_type(var789);
}
var_pointer_type = var792;
if (unlikely(varonce793==NULL)) {
var794 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce795!=NULL)) {
var796 = varonce795;
} else {
var797 = "NEW_";
var798 = standard___standard__NativeString___to_s_with_length(var797, 4l);
var796 = var798;
varonce795 = var796;
}
((struct instance_standard__NativeArray*)var794)->values[0]=var796;
} else {
var794 = varonce793;
varonce793 = NULL;
}
((struct instance_standard__NativeArray*)var794)->values[1]=var_c_name;
{
var799 = ((val*(*)(val* self))(var794->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var794); /* native_to_s on <var794:NativeArray[String]>*/
}
varonce793 = var794;
if (unlikely(varonce800==NULL)) {
var801 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce802!=NULL)) {
var803 = varonce802;
} else {
var804 = " NEW_";
var805 = standard___standard__NativeString___to_s_with_length(var804, 5l);
var803 = var805;
varonce802 = var803;
}
((struct instance_standard__NativeArray*)var801)->values[1]=var803;
if (likely(varonce806!=NULL)) {
var807 = varonce806;
} else {
var808 = "(const struct type* type);";
var809 = standard___standard__NativeString___to_s_with_length(var808, 26l);
var807 = var809;
varonce806 = var807;
}
((struct instance_standard__NativeArray*)var801)->values[3]=var807;
} else {
var801 = varonce800;
varonce800 = NULL;
}
{
var810 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var801)->values[0]=var810;
((struct instance_standard__NativeArray*)var801)->values[2]=var_c_name;
{
var811 = ((val*(*)(val* self))(var801->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var801); /* native_to_s on <var801:NativeArray[String]>*/
}
varonce800 = var801;
{
nit___nit__AbstractCompiler___provide_declaration(self, var799, var811); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce812==NULL)) {
var813 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce814!=NULL)) {
var815 = varonce814;
} else {
var816 = "/* allocate ";
var817 = standard___standard__NativeString___to_s_with_length(var816, 12l);
var815 = var817;
varonce814 = var815;
}
((struct instance_standard__NativeArray*)var813)->values[0]=var815;
if (likely(varonce818!=NULL)) {
var819 = varonce818;
} else {
var820 = " */";
var821 = standard___standard__NativeString___to_s_with_length(var820, 3l);
var819 = var821;
varonce818 = var819;
}
((struct instance_standard__NativeArray*)var813)->values[2]=var819;
} else {
var813 = varonce812;
varonce812 = NULL;
}
{
var822 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var813)->values[1]=var822;
{
var823 = ((val*(*)(val* self))(var813->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var813); /* native_to_s on <var813:NativeArray[String]>*/
}
varonce812 = var813;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var823); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce824==NULL)) {
var825 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce826!=NULL)) {
var827 = varonce826;
} else {
var828 = " NEW_";
var829 = standard___standard__NativeString___to_s_with_length(var828, 5l);
var827 = var829;
varonce826 = var827;
}
((struct instance_standard__NativeArray*)var825)->values[1]=var827;
if (likely(varonce830!=NULL)) {
var831 = varonce830;
} else {
var832 = "(const struct type* type) {";
var833 = standard___standard__NativeString___to_s_with_length(var832, 27l);
var831 = var833;
varonce830 = var831;
}
((struct instance_standard__NativeArray*)var825)->values[3]=var831;
} else {
var825 = varonce824;
varonce824 = NULL;
}
{
var834 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var825)->values[0]=var834;
((struct instance_standard__NativeArray*)var825)->values[2]=var_c_name;
{
var835 = ((val*(*)(val* self))(var825->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var825); /* native_to_s on <var825:NativeArray[String]>*/
}
varonce824 = var825;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var835); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce836==NULL)) {
var837 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce838!=NULL)) {
var839 = varonce838;
} else {
var840 = " is DEAD";
var841 = standard___standard__NativeString___to_s_with_length(var840, 8l);
var839 = var841;
varonce838 = var839;
}
((struct instance_standard__NativeArray*)var837)->values[1]=var839;
} else {
var837 = varonce836;
varonce836 = NULL;
}
{
var842 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var837)->values[0]=var842;
{
var843 = ((val*(*)(val* self))(var837->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var837); /* native_to_s on <var837:NativeArray[String]>*/
}
varonce836 = var837;
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var843); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce844!=NULL)) {
var845 = varonce844;
} else {
var846 = "self";
var847 = standard___standard__NativeString___to_s_with_length(var846, 4l);
var845 = var847;
varonce844 = var845;
}
{
var848 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var845);
}
var_res849 = var848;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res849,1) on <var_res849:RuntimeVariable> */
var_res849->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res849:RuntimeVariable> */
RET_LABEL850:(void)0;
}
}
if (unlikely(varonce851==NULL)) {
var852 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce853!=NULL)) {
var854 = varonce853;
} else {
var855 = " = nit_alloc(sizeof(struct instance_";
var856 = standard___standard__NativeString___to_s_with_length(var855, 36l);
var854 = var856;
varonce853 = var854;
}
((struct instance_standard__NativeArray*)var852)->values[1]=var854;
if (likely(varonce857!=NULL)) {
var858 = varonce857;
} else {
var859 = "));";
var860 = standard___standard__NativeString___to_s_with_length(var859, 3l);
var858 = var860;
varonce857 = var858;
}
((struct instance_standard__NativeArray*)var852)->values[3]=var858;
} else {
var852 = varonce851;
varonce851 = NULL;
}
{
var861 = ((val*(*)(val* self))(var_res849->class->vft[COLOR_standard__string__Object__to_s]))(var_res849); /* to_s on <var_res849:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var852)->values[0]=var861;
{
var862 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_standard__NativeArray*)var852)->values[2]=var862;
{
var863 = ((val*(*)(val* self))(var852->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var852); /* native_to_s on <var852:NativeArray[String]>*/
}
varonce851 = var852;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var863); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce864==NULL)) {
var865 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce866!=NULL)) {
var867 = varonce866;
} else {
var868 = "->type = type;";
var869 = standard___standard__NativeString___to_s_with_length(var868, 14l);
var867 = var869;
varonce866 = var867;
}
((struct instance_standard__NativeArray*)var865)->values[1]=var867;
} else {
var865 = varonce864;
varonce864 = NULL;
}
{
var870 = ((val*(*)(val* self))(var_res849->class->vft[COLOR_standard__string__Object__to_s]))(var_res849); /* to_s on <var_res849:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var865)->values[0]=var870;
{
var871 = ((val*(*)(val* self))(var865->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var865); /* native_to_s on <var865:NativeArray[String]>*/
}
varonce864 = var865;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var871); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce872!=NULL)) {
var873 = varonce872;
} else {
var874 = "type";
var875 = standard___standard__NativeString___to_s_with_length(var874, 4l);
var873 = var875;
varonce872 = var873;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var873); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce876==NULL)) {
var877 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce878!=NULL)) {
var879 = varonce878;
} else {
var880 = "class_";
var881 = standard___standard__NativeString___to_s_with_length(var880, 6l);
var879 = var881;
varonce878 = var879;
}
((struct instance_standard__NativeArray*)var877)->values[0]=var879;
} else {
var877 = varonce876;
varonce876 = NULL;
}
((struct instance_standard__NativeArray*)var877)->values[1]=var_c_name;
{
var882 = ((val*(*)(val* self))(var877->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var877); /* native_to_s on <var877:NativeArray[String]>*/
}
varonce876 = var877;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var882); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce883==NULL)) {
var884 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce885!=NULL)) {
var886 = varonce885;
} else {
var887 = "->class = &class_";
var888 = standard___standard__NativeString___to_s_with_length(var887, 17l);
var886 = var888;
varonce885 = var886;
}
((struct instance_standard__NativeArray*)var884)->values[1]=var886;
if (likely(varonce889!=NULL)) {
var890 = varonce889;
} else {
var891 = ";";
var892 = standard___standard__NativeString___to_s_with_length(var891, 1l);
var890 = var892;
varonce889 = var890;
}
((struct instance_standard__NativeArray*)var884)->values[3]=var890;
} else {
var884 = varonce883;
varonce883 = NULL;
}
{
var893 = ((val*(*)(val* self))(var_res849->class->vft[COLOR_standard__string__Object__to_s]))(var_res849); /* to_s on <var_res849:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var884)->values[0]=var893;
((struct instance_standard__NativeArray*)var884)->values[2]=var_c_name;
{
var894 = ((val*(*)(val* self))(var884->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var884); /* native_to_s on <var884:NativeArray[String]>*/
}
varonce883 = var884;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var894); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce895==NULL)) {
var896 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce897!=NULL)) {
var898 = varonce897;
} else {
var899 = "((struct instance_";
var900 = standard___standard__NativeString___to_s_with_length(var899, 18l);
var898 = var900;
varonce897 = var898;
}
((struct instance_standard__NativeArray*)var896)->values[0]=var898;
if (likely(varonce901!=NULL)) {
var902 = varonce901;
} else {
var903 = "*)";
var904 = standard___standard__NativeString___to_s_with_length(var903, 2l);
var902 = var904;
varonce901 = var902;
}
((struct instance_standard__NativeArray*)var896)->values[2]=var902;
if (likely(varonce905!=NULL)) {
var906 = varonce905;
} else {
var907 = ")->value = NULL;";
var908 = standard___standard__NativeString___to_s_with_length(var907, 16l);
var906 = var908;
varonce905 = var906;
}
((struct instance_standard__NativeArray*)var896)->values[4]=var906;
} else {
var896 = varonce895;
varonce895 = NULL;
}
{
var909 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nit__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_standard__NativeArray*)var896)->values[1]=var909;
{
var910 = ((val*(*)(val* self))(var_res849->class->vft[COLOR_standard__string__Object__to_s]))(var_res849); /* to_s on <var_res849:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var896)->values[3]=var910;
{
var911 = ((val*(*)(val* self))(var896->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var896); /* native_to_s on <var896:NativeArray[String]>*/
}
varonce895 = var896;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var911); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce912==NULL)) {
var913 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce914!=NULL)) {
var915 = varonce914;
} else {
var916 = "return ";
var917 = standard___standard__NativeString___to_s_with_length(var916, 7l);
var915 = var917;
varonce914 = var915;
}
((struct instance_standard__NativeArray*)var913)->values[0]=var915;
if (likely(varonce918!=NULL)) {
var919 = varonce918;
} else {
var920 = ";";
var921 = standard___standard__NativeString___to_s_with_length(var920, 1l);
var919 = var921;
varonce918 = var919;
}
((struct instance_standard__NativeArray*)var913)->values[2]=var919;
} else {
var913 = varonce912;
varonce912 = NULL;
}
{
var922 = ((val*(*)(val* self))(var_res849->class->vft[COLOR_standard__string__Object__to_s]))(var_res849); /* to_s on <var_res849:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var913)->values[1]=var922;
{
var923 = ((val*(*)(val* self))(var913->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var913); /* native_to_s on <var913:NativeArray[String]>*/
}
varonce912 = var913;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var923); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce924!=NULL)) {
var925 = varonce924;
} else {
var926 = "}";
var927 = standard___standard__NativeString___to_s_with_length(var926, 1l);
var925 = var927;
varonce924 = var925;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var925); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (unlikely(varonce928==NULL)) {
var929 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce930!=NULL)) {
var931 = varonce930;
} else {
var932 = "NEW_";
var933 = standard___standard__NativeString___to_s_with_length(var932, 4l);
var931 = var933;
varonce930 = var931;
}
((struct instance_standard__NativeArray*)var929)->values[0]=var931;
} else {
var929 = varonce928;
varonce928 = NULL;
}
((struct instance_standard__NativeArray*)var929)->values[1]=var_c_name;
{
var934 = ((val*(*)(val* self))(var929->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var929); /* native_to_s on <var929:NativeArray[String]>*/
}
varonce928 = var929;
if (unlikely(varonce935==NULL)) {
var936 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce937!=NULL)) {
var938 = varonce937;
} else {
var939 = " NEW_";
var940 = standard___standard__NativeString___to_s_with_length(var939, 5l);
var938 = var940;
varonce937 = var938;
}
((struct instance_standard__NativeArray*)var936)->values[1]=var938;
if (likely(varonce941!=NULL)) {
var942 = varonce941;
} else {
var943 = "(const struct type* type);";
var944 = standard___standard__NativeString___to_s_with_length(var943, 26l);
var942 = var944;
varonce941 = var942;
}
((struct instance_standard__NativeArray*)var936)->values[3]=var942;
} else {
var936 = varonce935;
varonce935 = NULL;
}
{
var945 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var936)->values[0]=var945;
((struct instance_standard__NativeArray*)var936)->values[2]=var_c_name;
{
var946 = ((val*(*)(val* self))(var936->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var936); /* native_to_s on <var936:NativeArray[String]>*/
}
varonce935 = var936;
{
nit___nit__AbstractCompiler___provide_declaration(self, var934, var946); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce947==NULL)) {
var948 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce949!=NULL)) {
var950 = varonce949;
} else {
var951 = "/* allocate ";
var952 = standard___standard__NativeString___to_s_with_length(var951, 12l);
var950 = var952;
varonce949 = var950;
}
((struct instance_standard__NativeArray*)var948)->values[0]=var950;
if (likely(varonce953!=NULL)) {
var954 = varonce953;
} else {
var955 = " */";
var956 = standard___standard__NativeString___to_s_with_length(var955, 3l);
var954 = var956;
varonce953 = var954;
}
((struct instance_standard__NativeArray*)var948)->values[2]=var954;
} else {
var948 = varonce947;
varonce947 = NULL;
}
{
var957 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_standard__NativeArray*)var948)->values[1]=var957;
{
var958 = ((val*(*)(val* self))(var948->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var948); /* native_to_s on <var948:NativeArray[String]>*/
}
varonce947 = var948;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var958); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce959==NULL)) {
var960 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce961!=NULL)) {
var962 = varonce961;
} else {
var963 = " NEW_";
var964 = standard___standard__NativeString___to_s_with_length(var963, 5l);
var962 = var964;
varonce961 = var962;
}
((struct instance_standard__NativeArray*)var960)->values[1]=var962;
if (likely(varonce965!=NULL)) {
var966 = varonce965;
} else {
var967 = "(const struct type* type) {";
var968 = standard___standard__NativeString___to_s_with_length(var967, 27l);
var966 = var968;
varonce965 = var966;
}
((struct instance_standard__NativeArray*)var960)->values[3]=var966;
} else {
var960 = varonce959;
varonce959 = NULL;
}
{
var969 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_standard__NativeArray*)var960)->values[0]=var969;
((struct instance_standard__NativeArray*)var960)->values[2]=var_c_name;
{
var970 = ((val*(*)(val* self))(var960->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var960); /* native_to_s on <var960:NativeArray[String]>*/
}
varonce959 = var960;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var970); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce971==NULL)) {
var972 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce973!=NULL)) {
var974 = varonce973;
} else {
var975 = " is DEAD";
var976 = standard___standard__NativeString___to_s_with_length(var975, 8l);
var974 = var976;
varonce973 = var974;
}
((struct instance_standard__NativeArray*)var972)->values[1]=var974;
} else {
var972 = varonce971;
varonce971 = NULL;
}
{
var977 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_standard__string__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_standard__NativeArray*)var972)->values[0]=var977;
{
var978 = ((val*(*)(val* self))(var972->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var972); /* native_to_s on <var972:NativeArray[String]>*/
}
varonce971 = var972;
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var978); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce979!=NULL)) {
var980 = varonce979;
} else {
var981 = "self";
var982 = standard___standard__NativeString___to_s_with_length(var981, 4l);
var980 = var982;
varonce979 = var980;
}
{
var983 = nit___nit__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var980);
}
var_res984 = var983;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res984,1) on <var_res984:RuntimeVariable> */
var_res984->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res984:RuntimeVariable> */
RET_LABEL985:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var988 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var988 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1054);
fatal_exit(1);
}
var986 = var988;
RET_LABEL987:(void)0;
}
}
{
var989 = ((val*(*)(val* self, val* p0))((((long)var986&3)?class_info[((long)var986&3)]:var986->class)->vft[COLOR_standard__abstract_collection__MapRead__get_or_null]))(var986, var_mclass); /* get_or_null on <var986:Map[MClass, Array[nullable MProperty]]>*/
}
var_attrs = var989;
if (var_attrs == NULL) {
var990 = 1; /* is null */
} else {
var990 = 0; /* arg is null but recv is not */
}
if (0) {
var991 = standard___standard__Array___standard__kernel__Object___61d_61d(var_attrs, ((val*)NULL));
var990 = var991;
}
if (var990){
if (unlikely(varonce992==NULL)) {
var993 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce994!=NULL)) {
var995 = varonce994;
} else {
var996 = " = nit_alloc(sizeof(struct instance));";
var997 = standard___standard__NativeString___to_s_with_length(var996, 38l);
var995 = var997;
varonce994 = var995;
}
((struct instance_standard__NativeArray*)var993)->values[1]=var995;
} else {
var993 = varonce992;
varonce992 = NULL;
}
{
var998 = ((val*(*)(val* self))(var_res984->class->vft[COLOR_standard__string__Object__to_s]))(var_res984); /* to_s on <var_res984:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var993)->values[0]=var998;
{
var999 = ((val*(*)(val* self))(var993->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var993); /* native_to_s on <var993:NativeArray[String]>*/
}
varonce992 = var993;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var999); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce1000==NULL)) {
var1001 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce1002!=NULL)) {
var1003 = varonce1002;
} else {
var1004 = " = nit_alloc(sizeof(struct instance) + ";
var1005 = standard___standard__NativeString___to_s_with_length(var1004, 39l);
var1003 = var1005;
varonce1002 = var1003;
}
((struct instance_standard__NativeArray*)var1001)->values[1]=var1003;
if (likely(varonce1006!=NULL)) {
var1007 = varonce1006;
} else {
var1008 = "*sizeof(nitattribute_t));";
var1009 = standard___standard__NativeString___to_s_with_length(var1008, 25l);
var1007 = var1009;
varonce1006 = var1007;
}
((struct instance_standard__NativeArray*)var1001)->values[3]=var1007;
} else {
var1001 = varonce1000;
varonce1000 = NULL;
}
{
var1010 = ((val*(*)(val* self))(var_res984->class->vft[COLOR_standard__string__Object__to_s]))(var_res984); /* to_s on <var_res984:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var1001)->values[0]=var1010;
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1013 = var_attrs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1011 = var1013;
RET_LABEL1012:(void)0;
}
}
var1014 = standard__string___Int___Object__to_s(var1011);
((struct instance_standard__NativeArray*)var1001)->values[2]=var1014;
{
var1015 = ((val*(*)(val* self))(var1001->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1001); /* native_to_s on <var1001:NativeArray[String]>*/
}
varonce1000 = var1001;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1015); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce1016==NULL)) {
var1017 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1018!=NULL)) {
var1019 = varonce1018;
} else {
var1020 = "->type = type;";
var1021 = standard___standard__NativeString___to_s_with_length(var1020, 14l);
var1019 = var1021;
varonce1018 = var1019;
}
((struct instance_standard__NativeArray*)var1017)->values[1]=var1019;
} else {
var1017 = varonce1016;
varonce1016 = NULL;
}
{
var1022 = ((val*(*)(val* self))(var_res984->class->vft[COLOR_standard__string__Object__to_s]))(var_res984); /* to_s on <var_res984:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var1017)->values[0]=var1022;
{
var1023 = ((val*(*)(val* self))(var1017->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1017); /* native_to_s on <var1017:NativeArray[String]>*/
}
varonce1016 = var1017;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1023); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1024!=NULL)) {
var1025 = varonce1024;
} else {
var1026 = "type";
var1027 = standard___standard__NativeString___to_s_with_length(var1026, 4l);
var1025 = var1027;
varonce1024 = var1025;
}
{
nit___nit__SeparateCompiler___hardening_live_type(self, var_v, var1025); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce1028==NULL)) {
var1029 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1030!=NULL)) {
var1031 = varonce1030;
} else {
var1032 = "class_";
var1033 = standard___standard__NativeString___to_s_with_length(var1032, 6l);
var1031 = var1033;
varonce1030 = var1031;
}
((struct instance_standard__NativeArray*)var1029)->values[0]=var1031;
} else {
var1029 = varonce1028;
varonce1028 = NULL;
}
((struct instance_standard__NativeArray*)var1029)->values[1]=var_c_name;
{
var1034 = ((val*(*)(val* self))(var1029->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1029); /* native_to_s on <var1029:NativeArray[String]>*/
}
varonce1028 = var1029;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var1034); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1035==NULL)) {
var1036 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce1037!=NULL)) {
var1038 = varonce1037;
} else {
var1039 = "->class = &class_";
var1040 = standard___standard__NativeString___to_s_with_length(var1039, 17l);
var1038 = var1040;
varonce1037 = var1038;
}
((struct instance_standard__NativeArray*)var1036)->values[1]=var1038;
if (likely(varonce1041!=NULL)) {
var1042 = varonce1041;
} else {
var1043 = ";";
var1044 = standard___standard__NativeString___to_s_with_length(var1043, 1l);
var1042 = var1044;
varonce1041 = var1042;
}
((struct instance_standard__NativeArray*)var1036)->values[3]=var1042;
} else {
var1036 = varonce1035;
varonce1035 = NULL;
}
{
var1045 = ((val*(*)(val* self))(var_res984->class->vft[COLOR_standard__string__Object__to_s]))(var_res984); /* to_s on <var_res984:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var1036)->values[0]=var1045;
((struct instance_standard__NativeArray*)var1036)->values[2]=var_c_name;
{
var1046 = ((val*(*)(val* self))(var1036->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1036); /* native_to_s on <var1036:NativeArray[String]>*/
}
varonce1035 = var1036;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1046); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (var_attrs == NULL) {
var1047 = 0; /* is null */
} else {
var1047 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_attrs,((val*)NULL)) on <var_attrs:nullable Array[nullable MProperty]> */
var_other = ((val*)NULL);
{
var1050 = ((short int(*)(val* self, val* p0))(var_attrs->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_attrs, var_other); /* == on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])>*/
}
var1051 = !var1050;
var1048 = var1051;
goto RET_LABEL1049;
RET_LABEL1049:(void)0;
}
var1047 = var1048;
}
if (var1047){
{
nit___nit__AbstractCompiler___generate_init_attr(self, var_v, var_res984, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateCompiler>*/
}
{
nit___nit__AbstractCompilerVisitor___set_finalizer(var_v, var_res984); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce1052==NULL)) {
var1053 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1054!=NULL)) {
var1055 = varonce1054;
} else {
var1056 = "return ";
var1057 = standard___standard__NativeString___to_s_with_length(var1056, 7l);
var1055 = var1057;
varonce1054 = var1055;
}
((struct instance_standard__NativeArray*)var1053)->values[0]=var1055;
if (likely(varonce1058!=NULL)) {
var1059 = varonce1058;
} else {
var1060 = ";";
var1061 = standard___standard__NativeString___to_s_with_length(var1060, 1l);
var1059 = var1061;
varonce1058 = var1059;
}
((struct instance_standard__NativeArray*)var1053)->values[2]=var1059;
} else {
var1053 = varonce1052;
varonce1052 = NULL;
}
{
var1062 = ((val*(*)(val* self))(var_res984->class->vft[COLOR_standard__string__Object__to_s]))(var_res984); /* to_s on <var_res984:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var1053)->values[1]=var1062;
{
var1063 = ((val*(*)(val* self))(var1053->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1053); /* native_to_s on <var1053:NativeArray[String]>*/
}
varonce1052 = var1053;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1063); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1064!=NULL)) {
var1065 = varonce1064;
} else {
var1066 = "}";
var1067 = standard___standard__NativeString___to_s_with_length(var1066, 1l);
var1065 = var1067;
varonce1064 = var1065;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var1065); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_infos for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___compile_class_infos(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Array[nullable MClass] */;
val* var_class_info /* var class_info: Array[nullable MClass] */;
val* var14 /* : HashMap[MClass, Int] */;
val* var16 /* : HashMap[MClass, Int] */;
val* var17 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[MClass] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MClass] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var22 /* : String */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
short int var36 /* : Bool */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
val* var45 /* : MClassType */;
val* var47 /* : MClassType */;
val* var50 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var_55 /* var : Array[nullable MClass] */;
val* var56 /* : ArrayIterator[nullable Object] */;
val* var_57 /* var : ArrayIterator[nullable MClass] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_t60 /* var t: nullable MClass */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var_s /* var s: String */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
val* var89 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : FlatString */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : FlatString */;
val* var_99 /* var : Array[nullable MClass] */;
val* var100 /* : ArrayIterator[nullable Object] */;
val* var_101 /* var : ArrayIterator[nullable MClass] */;
short int var102 /* : Bool */;
val* var103 /* : nullable Object */;
val* var_t104 /* var t: nullable MClass */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : FlatString */;
val* var116 /* : NativeArray[String] */;
static val* varonce115;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var_s123 /* var s: String */;
val* var124 /* : Set[MType] */;
val* var126 /* : Set[MType] */;
val* var127 /* : MClassType */;
val* var129 /* : MClassType */;
val* var131 /* : NativeArray[String] */;
static val* varonce130;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
val* var140 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 32);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
if (var12){
goto RET_LABEL;
} else {
}
var13 = NEW_standard__Array(&type_standard__Array__nullable__nit__MClass);
{
standard___standard__Array___filled_with(var13, ((val*)NULL), 4l); /* Direct call array#Array#filled_with on <var13:Array[nullable MClass]>*/
}
var_class_info = var13;
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var16 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 263);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead__keys(var14);
}
var_ = var17;
{
var18 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[MClass]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[MClass]>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[MClass]>*/
}
var_t = var21;
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var24 = var_t->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "Int";
var27 = standard___standard__NativeString___to_s_with_length(var26, 3l);
var25 = var27;
varonce = var25;
}
{
var28 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var25); /* == on <var22:String>*/
}
if (var28){
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_class_info, 1l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
} else {
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var31 = var_t->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Char";
var35 = standard___standard__NativeString___to_s_with_length(var34, 4l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var29, var33); /* == on <var29:String>*/
}
if (var36){
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_class_info, 2l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
} else {
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var39 = var_t->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Bool";
var43 = standard___standard__NativeString___to_s_with_length(var42, 4l);
var41 = var43;
varonce40 = var41;
}
{
var44 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var37, var41); /* == on <var37:String>*/
}
if (var44){
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_class_info, 3l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
} else {
goto BREAK_label;
}
}
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var47 = var_t->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#is_tagged= (var45,1) on <var45:MClassType> */
var45->attrs[COLOR_nit__separate_compiler__MType___is_tagged].s = 1; /* _is_tagged on <var45:MClassType> */
RET_LABEL48:(void)0;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[MClass]>*/
}
} else {
goto BREAK_label49;
}
}
BREAK_label49: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[MClass]>*/
}
{
var50 = ((val*(*)(val* self))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var50;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "const struct class *class_info[4] = {";
var54 = standard___standard__NativeString___to_s_with_length(var53, 37l);
var52 = var54;
varonce51 = var52;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_55 = var_class_info;
{
var56 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_55);
}
var_57 = var56;
for(;;) {
{
var58 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_57);
}
if (var58){
{
var59 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_57);
}
var_t60 = var59;
if (var_t60 == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t60,((val*)NULL)) on <var_t60:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t60,var_other) on <var_t60:nullable MClass(MClass)> */
var66 = var_t60 == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "NULL,";
var70 = standard___standard__NativeString___to_s_with_length(var69, 5l);
var68 = var70;
varonce67 = var68;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var68); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce71==NULL)) {
var72 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "class_";
var76 = standard___standard__NativeString___to_s_with_length(var75, 6l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var72)->values[0]=var74;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var77 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_t60);
}
((struct instance_standard__NativeArray*)var72)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var72->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
var_s = var78;
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce79==NULL)) {
var80 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "&";
var84 = standard___standard__NativeString___to_s_with_length(var83, 1l);
var82 = var84;
varonce81 = var82;
}
((struct instance_standard__NativeArray*)var80)->values[0]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ",";
var88 = standard___standard__NativeString___to_s_with_length(var87, 1l);
var86 = var88;
varonce85 = var86;
}
((struct instance_standard__NativeArray*)var80)->values[2]=var86;
} else {
var80 = varonce79;
varonce79 = NULL;
}
((struct instance_standard__NativeArray*)var80)->values[1]=var_s;
{
var89 = ((val*(*)(val* self))(var80->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var89); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_57); /* Direct call array#ArrayIterator#next on <var_57:ArrayIterator[nullable MClass]>*/
}
} else {
goto BREAK_label90;
}
}
BREAK_label90: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_57); /* Direct call array#ArrayIterator#finish on <var_57:ArrayIterator[nullable MClass]>*/
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "};";
var94 = standard___standard__NativeString___to_s_with_length(var93, 2l);
var92 = var94;
varonce91 = var92;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var92); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "const struct type *type_info[4] = {";
var98 = standard___standard__NativeString___to_s_with_length(var97, 35l);
var96 = var98;
varonce95 = var96;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_99 = var_class_info;
{
var100 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_99);
}
var_101 = var100;
for(;;) {
{
var102 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_101);
}
if (var102){
{
var103 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_101);
}
var_t104 = var103;
if (var_t104 == NULL) {
var105 = 1; /* is null */
} else {
var105 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t104,((val*)NULL)) on <var_t104:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t104,var_other) on <var_t104:nullable MClass(MClass)> */
var110 = var_t104 == var_other;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "NULL,";
var114 = standard___standard__NativeString___to_s_with_length(var113, 5l);
var112 = var114;
varonce111 = var112;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var112); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce115==NULL)) {
var116 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "type_";
var120 = standard___standard__NativeString___to_s_with_length(var119, 5l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var116)->values[0]=var118;
} else {
var116 = varonce115;
varonce115 = NULL;
}
{
var121 = nit___nit__MClass___nit__model_base__MEntity__c_name(var_t104);
}
((struct instance_standard__NativeArray*)var116)->values[1]=var121;
{
var122 = ((val*(*)(val* self))(var116->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
var_s123 = var122;
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (self) on <self:SeparateCompiler> */
var126 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <self:SeparateCompiler> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 146);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_t104) on <var_t104:nullable MClass(MClass)> */
var129 = var_t104->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_t104:nullable MClass(MClass)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var124&3)?class_info[((long)var124&3)]:var124->class)->vft[COLOR_standard__abstract_collection__SimpleCollection__add]))(var124, var127); /* add on <var124:Set[MType]>*/
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(var_v, var_s123); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce130==NULL)) {
var131 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "&";
var135 = standard___standard__NativeString___to_s_with_length(var134, 1l);
var133 = var135;
varonce132 = var133;
}
((struct instance_standard__NativeArray*)var131)->values[0]=var133;
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = ",";
var139 = standard___standard__NativeString___to_s_with_length(var138, 1l);
var137 = var139;
varonce136 = var137;
}
((struct instance_standard__NativeArray*)var131)->values[2]=var137;
} else {
var131 = varonce130;
varonce130 = NULL;
}
((struct instance_standard__NativeArray*)var131)->values[1]=var_s123;
{
var140 = ((val*(*)(val* self))(var131->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var131); /* native_to_s on <var131:NativeArray[String]>*/
}
varonce130 = var131;
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_101); /* Direct call array#ArrayIterator#next on <var_101:ArrayIterator[nullable MClass]>*/
}
} else {
goto BREAK_label141;
}
}
BREAK_label141: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_101); /* Direct call array#ArrayIterator#finish on <var_101:ArrayIterator[nullable MClass]>*/
}
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "};";
var145 = standard___standard__NativeString___to_s_with_length(var144, 2l);
var143 = var145;
varonce142 = var143;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(var_v, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: SeparateCompiler, SeparateCompilerVisitor, String) */
void nit___nit__SeparateCompiler___hardening_live_type(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var_t /* var t: String */;
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
short int var17 /* : Bool */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : FlatString */;
/* Covariant cast for argument 0 (v) <p0:SeparateCompilerVisitor> isa VISITOR */
/* <p0:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1034);
fatal_exit(1);
}
var_v = p0;
var_t = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 46);
fatal_exit(1);
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
var16 = (short int)((long)(var13)>>2);
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var18 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "if(";
var22 = standard___standard__NativeString___to_s_with_length(var21, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " == NULL) {";
var26 = standard___standard__NativeString___to_s_with_length(var25, 11l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var18)->values[1]=var_t;
{
var27 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "type null";
var31 = standard___standard__NativeString___to_s_with_length(var30, 9l);
var29 = var31;
varonce28 = var29;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = standard___standard__NativeString___to_s_with_length(var34, 1l);
var33 = var35;
varonce32 = var33;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "if(";
var41 = standard___standard__NativeString___to_s_with_length(var40, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "->table_size < 0) {";
var45 = standard___standard__NativeString___to_s_with_length(var44, 19l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_standard__NativeArray*)var37)->values[1]=var_t;
{
var46 = ((val*(*)(val* self))(var37->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce47==NULL)) {
var48 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "PRINT_ERROR(\"Insantiation of a dead type: %s\\n\", ";
var52 = standard___standard__NativeString___to_s_with_length(var51, 49l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var48)->values[0]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "->name);";
var56 = standard___standard__NativeString___to_s_with_length(var55, 8l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var48)->values[2]=var54;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_standard__NativeArray*)var48)->values[1]=var_t;
{
var57 = ((val*(*)(val* self))(var48->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "type dead";
var61 = standard___standard__NativeString___to_s_with_length(var60, 9l);
var59 = var61;
varonce58 = var59;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "}";
var65 = standard___standard__NativeString___to_s_with_length(var64, 1l);
var63 = var65;
varonce62 = var63;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: SeparateCompiler): SeparateCompilerVisitor */
val* nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nit__SeparateCompilerVisitor(&type_nit__SeparateCompilerVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self); /* compiler= on <var1:SeparateCompilerVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:SeparateCompilerVisitor>*/
}
/* <var1:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1047);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: SeparateCompiler): Map[MType, Array[nullable MType]] */
val* nit___nit__SeparateCompiler___type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1051);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: SeparateCompiler, Map[MType, Array[nullable MType]]) */
void nit___nit__SeparateCompiler___type_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val = p0; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: SeparateCompiler): Map[MClassType, Array[nullable MType]] */
val* nit___nit__SeparateCompiler___resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1052);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: SeparateCompiler, Map[MClassType, Array[nullable MType]]) */
void nit___nit__SeparateCompiler___resolution_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val = p0; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nit___nit__SeparateCompiler___method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1053);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nit___nit__SeparateCompiler___method_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val = p0; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MProperty]] */
val* nit___nit__SeparateCompiler___attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MProperty]] */;
val* var1 /* : Map[MClass, Array[nullable MProperty]] */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1054);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MProperty]]) */
void nit___nit__SeparateCompiler___attr_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val = p0; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var_tc /* var tc: ToolContext */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
val* var35 /* : ModelBuilder */;
val* var37 /* : ModelBuilder */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : ModelBuilder */;
val* var43 /* : ModelBuilder */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var50 /* : Int */;
val* var51 /* : ModelBuilder */;
val* var53 /* : ModelBuilder */;
long var54 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var_nb_invok_total /* var nb_invok_total: Int */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : ModelBuilder */;
val* var88 /* : ModelBuilder */;
long var89 /* : Int */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : Sys */;
val* var94 /* : ModelBuilder */;
val* var96 /* : ModelBuilder */;
long var97 /* : Int */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : FlatString */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : FlatString */;
val* var116 /* : ModelBuilder */;
val* var118 /* : ModelBuilder */;
long var119 /* : Int */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : Sys */;
val* var124 /* : ModelBuilder */;
val* var126 /* : ModelBuilder */;
long var127 /* : Int */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var133 /* : NativeArray[String] */;
static val* varonce132;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : FlatString */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : FlatString */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : FlatString */;
val* var146 /* : ModelBuilder */;
val* var148 /* : ModelBuilder */;
long var149 /* : Int */;
long var151 /* : Int */;
val* var152 /* : String */;
val* var153 /* : Sys */;
val* var154 /* : ModelBuilder */;
val* var156 /* : ModelBuilder */;
long var157 /* : Int */;
long var159 /* : Int */;
val* var160 /* : String */;
val* var161 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats]))(self); /* display_stats on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_tables_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nit__separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 60);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
if (var12){
{
((void(*)(val* self))(self->class->vft[COLOR_nit__separate_compiler__SeparateCompiler__display_sizes]))(self); /* display_sizes on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 64);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionBool> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionBool> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = (short int)((long)(var22)>>2);
if (var25){
{
nit___nit__SeparateCompiler___display_isset_checks(self); /* Direct call separate_compiler#SeparateCompiler#display_isset_checks on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var28 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_tc = var29;
if (likely(varonce!=NULL)) {
var32 = varonce;
} else {
var33 = "# implementation of method invocation";
var34 = standard___standard__NativeString___to_s_with_length(var33, 37l);
var32 = var34;
varonce = var32;
}
{
nit___nit__ToolContext___info(var_tc, var32, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var37 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var35) on <var35:ModelBuilder> */
var40 = var35->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var35:ModelBuilder> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var43 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var41) on <var41:ModelBuilder> */
var46 = var41->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var41:ModelBuilder> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var38,var44) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var49 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var50 = var38 + var44;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var53 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var51) on <var51:ModelBuilder> */
var56 = var51->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var51:ModelBuilder> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var47,var54) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var59 = 1; /* easy <var54:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var63 = var47 + var54;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_nb_invok_total = var57;
if (unlikely(varonce64==NULL)) {
var65 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "total number of invocations: ";
var69 = standard___standard__NativeString___to_s_with_length(var68, 29l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var65)->values[0]=var67;
} else {
var65 = varonce64;
varonce64 = NULL;
}
var70 = standard__string___Int___Object__to_s(var_nb_invok_total);
((struct instance_standard__NativeArray*)var65)->values[1]=var70;
{
var71 = ((val*(*)(val* self))(var65->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nit___nit__ToolContext___info(var_tc, var71, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce72==NULL)) {
var73 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "invocations by VFT send:     ";
var77 = standard___standard__NativeString___to_s_with_length(var76, 29l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var73)->values[0]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " (";
var81 = standard___standard__NativeString___to_s_with_length(var80, 2l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var73)->values[2]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "%)";
var85 = standard___standard__NativeString___to_s_with_length(var84, 2l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var73)->values[4]=var83;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var88 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var86) on <var86:ModelBuilder> */
var91 = var86->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var86:ModelBuilder> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = standard__string___Int___Object__to_s(var89);
((struct instance_standard__NativeArray*)var73)->values[1]=var92;
var93 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var96 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var94) on <var94:ModelBuilder> */
var99 = var94->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var94:ModelBuilder> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = counter___standard__Sys___div(var93, var97, var_nb_invok_total);
}
((struct instance_standard__NativeArray*)var73)->values[3]=var100;
{
var101 = ((val*(*)(val* self))(var73->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
nit___nit__ToolContext___info(var_tc, var101, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "invocations by direct call:  ";
var107 = standard___standard__NativeString___to_s_with_length(var106, 29l);
var105 = var107;
varonce104 = var105;
}
((struct instance_standard__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = " (";
var111 = standard___standard__NativeString___to_s_with_length(var110, 2l);
var109 = var111;
varonce108 = var109;
}
((struct instance_standard__NativeArray*)var103)->values[2]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "%)";
var115 = standard___standard__NativeString___to_s_with_length(var114, 2l);
var113 = var115;
varonce112 = var113;
}
((struct instance_standard__NativeArray*)var103)->values[4]=var113;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var118 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var116) on <var116:ModelBuilder> */
var121 = var116->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var116:ModelBuilder> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
var122 = standard__string___Int___Object__to_s(var119);
((struct instance_standard__NativeArray*)var103)->values[1]=var122;
var123 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var126 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var124) on <var124:ModelBuilder> */
var129 = var124->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var124:ModelBuilder> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = counter___standard__Sys___div(var123, var127, var_nb_invok_total);
}
((struct instance_standard__NativeArray*)var103)->values[3]=var130;
{
var131 = ((val*(*)(val* self))(var103->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nit___nit__ToolContext___info(var_tc, var131, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce132==NULL)) {
var133 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "invocations by inlining:     ";
var137 = standard___standard__NativeString___to_s_with_length(var136, 29l);
var135 = var137;
varonce134 = var135;
}
((struct instance_standard__NativeArray*)var133)->values[0]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " (";
var141 = standard___standard__NativeString___to_s_with_length(var140, 2l);
var139 = var141;
varonce138 = var139;
}
((struct instance_standard__NativeArray*)var133)->values[2]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "%)";
var145 = standard___standard__NativeString___to_s_with_length(var144, 2l);
var143 = var145;
varonce142 = var143;
}
((struct instance_standard__NativeArray*)var133)->values[4]=var143;
} else {
var133 = varonce132;
varonce132 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var148 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var146) on <var146:ModelBuilder> */
var151 = var146->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var146:ModelBuilder> */
var149 = var151;
RET_LABEL150:(void)0;
}
}
var152 = standard__string___Int___Object__to_s(var149);
((struct instance_standard__NativeArray*)var133)->values[1]=var152;
var153 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var156 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var154) on <var154:ModelBuilder> */
var159 = var154->attrs[COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var154:ModelBuilder> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = counter___standard__Sys___div(var153, var157, var_nb_invok_total);
}
((struct instance_standard__NativeArray*)var133)->values[3]=var160;
{
var161 = ((val*(*)(val* self))(var133->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nit___nit__ToolContext___info(var_tc, var161, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___display_sizes(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : Sys */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
long var_total /* var total: Int */;
long var_holes /* var holes: Int */;
val* var9 /* : Map[MType, Array[nullable MType]] */;
val* var11 /* : Map[MType, Array[nullable MType]] */;
val* var_ /* var : Map[MType, Array[nullable MType]] */;
val* var12 /* : MapIterator[nullable Object, nullable Object] */;
val* var_13 /* var : MapIterator[MType, Array[nullable MType]] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var16 /* : nullable Object */;
val* var_table /* var table: Array[nullable MType] */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
val* var_24 /* var : Array[nullable MType] */;
val* var25 /* : ArrayIterator[nullable Object] */;
val* var_26 /* var : ArrayIterator[nullable MType] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_e /* var e: nullable MType */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var44 /* : Sys */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : FlatString */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Sys */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
val* var63 /* : Sys */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : FlatString */;
val* var68 /* : Map[MClassType, Array[nullable MType]] */;
val* var70 /* : Map[MClassType, Array[nullable MType]] */;
val* var_71 /* var : Map[MClassType, Array[nullable MType]] */;
val* var72 /* : MapIterator[nullable Object, nullable Object] */;
val* var_73 /* var : MapIterator[MClassType, Array[nullable MType]] */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
val* var_t76 /* var t: MClassType */;
val* var77 /* : nullable Object */;
val* var_table78 /* var table: Array[nullable MType] */;
long var79 /* : Int */;
long var81 /* : Int */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
val* var_89 /* var : Array[nullable MType] */;
val* var90 /* : ArrayIterator[nullable Object] */;
val* var_91 /* var : ArrayIterator[nullable MType] */;
short int var92 /* : Bool */;
val* var93 /* : nullable Object */;
val* var_e94 /* var e: nullable MType */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
val* var111 /* : Sys */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : FlatString */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : FlatString */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : Sys */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : FlatString */;
val* var130 /* : Sys */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
val* var135 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var137 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_138 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var139 /* : MapIterator[nullable Object, nullable Object] */;
val* var_140 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var141 /* : Bool */;
val* var142 /* : nullable Object */;
val* var_t143 /* var t: MClass */;
val* var144 /* : nullable Object */;
val* var_table145 /* var table: Array[nullable MPropDef] */;
long var146 /* : Int */;
long var148 /* : Int */;
long var149 /* : Int */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
const char* var_class_name154;
long var155 /* : Int */;
val* var_156 /* var : Array[nullable MPropDef] */;
val* var157 /* : ArrayIterator[nullable Object] */;
val* var_158 /* var : ArrayIterator[nullable MPropDef] */;
short int var159 /* : Bool */;
val* var160 /* : nullable Object */;
val* var_e161 /* var e: nullable MPropDef */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
long var168 /* : Int */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
const char* var_class_name173;
long var174 /* : Int */;
val* var178 /* : Sys */;
val* var180 /* : NativeArray[String] */;
static val* varonce179;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : FlatString */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : FlatString */;
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var192 /* : Sys */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : FlatString */;
val* var197 /* : Sys */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : FlatString */;
val* var202 /* : Map[MClass, Array[nullable MProperty]] */;
val* var204 /* : Map[MClass, Array[nullable MProperty]] */;
val* var_205 /* var : Map[MClass, Array[nullable MProperty]] */;
val* var206 /* : MapIterator[nullable Object, nullable Object] */;
val* var_207 /* var : MapIterator[MClass, Array[nullable MProperty]] */;
short int var208 /* : Bool */;
val* var209 /* : nullable Object */;
val* var_t210 /* var t: MClass */;
val* var211 /* : nullable Object */;
val* var_table212 /* var table: Array[nullable MProperty] */;
long var213 /* : Int */;
long var215 /* : Int */;
long var216 /* : Int */;
short int var218 /* : Bool */;
int cltype219;
int idtype220;
const char* var_class_name221;
long var222 /* : Int */;
val* var_223 /* var : Array[nullable MProperty] */;
val* var224 /* : ArrayIterator[nullable Object] */;
val* var_225 /* var : ArrayIterator[nullable MProperty] */;
short int var226 /* : Bool */;
val* var227 /* : nullable Object */;
val* var_e228 /* var e: nullable MProperty */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
long var235 /* : Int */;
short int var237 /* : Bool */;
int cltype238;
int idtype239;
const char* var_class_name240;
long var241 /* : Int */;
val* var245 /* : Sys */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : FlatString */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : FlatString */;
val* var256 /* : String */;
val* var257 /* : String */;
val* var258 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# size of subtyping tables";
var3 = standard___standard__NativeString___to_s_with_length(var2, 26l);
var1 = var3;
varonce = var1;
}
{
standard__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
var4 = glob_sys;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\ttotal \tholes";
var8 = standard___standard__NativeString___to_s_with_length(var7, 13l);
var6 = var8;
varonce5 = var6;
}
{
standard__file___Sys___print(var4, var6); /* Direct call file#Sys#print on <var4:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var11 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1051);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[MType, Array[nullable MType]]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_13); /* is_ok on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_13); /* key on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
var_t = var15;
{
var16 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_13); /* item on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
var_table = var16;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var19 = var_table->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var17) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var23 = var_total + var17;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_total = var20;
var_24 = var_table;
{
var25 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_24);
}
var_26 = var25;
for(;;) {
{
var27 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_26);
}
if (var27){
{
var28 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_26);
}
var_e = var28;
if (var_e == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,((val*)NULL)) on <var_e:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MType(MType)> */
var34 = var_e == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var41 = var_holes + 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_holes = var35;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_26); /* Direct call array#ArrayIterator#next on <var_26:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_26); /* Direct call array#ArrayIterator#finish on <var_26:ArrayIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_13); /* next on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
} else {
goto BREAK_label42;
}
}
BREAK_label42: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_13) on <var_13:MapIterator[MType, Array[nullable MType]]> */
RET_LABEL43:(void)0;
}
}
var44 = glob_sys;
if (unlikely(varonce45==NULL)) {
var46 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\t";
var50 = standard___standard__NativeString___to_s_with_length(var49, 1l);
var48 = var50;
varonce47 = var48;
}
((struct instance_standard__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "\t";
var54 = standard___standard__NativeString___to_s_with_length(var53, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_standard__NativeArray*)var46)->values[2]=var52;
} else {
var46 = varonce45;
varonce45 = NULL;
}
var55 = standard__string___Int___Object__to_s(var_total);
((struct instance_standard__NativeArray*)var46)->values[1]=var55;
var56 = standard__string___Int___Object__to_s(var_holes);
((struct instance_standard__NativeArray*)var46)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var46->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
standard__file___Sys___print(var44, var57); /* Direct call file#Sys#print on <var44:Sys>*/
}
var58 = glob_sys;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "# size of resolution tables";
var62 = standard___standard__NativeString___to_s_with_length(var61, 27l);
var60 = var62;
varonce59 = var60;
}
{
standard__file___Sys___print(var58, var60); /* Direct call file#Sys#print on <var58:Sys>*/
}
var63 = glob_sys;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\ttotal \tholes";
var67 = standard___standard__NativeString___to_s_with_length(var66, 13l);
var65 = var67;
varonce64 = var65;
}
{
standard__file___Sys___print(var63, var65); /* Direct call file#Sys#print on <var63:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var70 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1052);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = ((val*(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_71); /* iterator on <var_71:Map[MClassType, Array[nullable MType]]>*/
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_73); /* is_ok on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
if (var74){
{
var75 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_73); /* key on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_t76 = var75;
{
var77 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_73); /* item on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_table78 = var77;
{
{ /* Inline array#AbstractArrayRead#length (var_table78) on <var_table78:Array[nullable MType]> */
var81 = var_table78->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table78:Array[nullable MType]> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var79) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var79:Int> isa OTHER */
/* <var79:Int> isa OTHER */
var84 = 1; /* easy <var79:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var88 = var_total + var79;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var_total = var82;
var_89 = var_table78;
{
var90 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_89);
}
var_91 = var90;
for(;;) {
{
var92 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_91);
}
if (var92){
{
var93 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_91);
}
var_e94 = var93;
if (var_e94 == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e94,((val*)NULL)) on <var_e94:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e94,var_other) on <var_e94:nullable MType(MType)> */
var100 = var_e94 == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var103 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var107 = var_holes + 1l;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var_holes = var101;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_91); /* Direct call array#ArrayIterator#next on <var_91:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label108;
}
}
BREAK_label108: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_91); /* Direct call array#ArrayIterator#finish on <var_91:ArrayIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_73); /* next on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
} else {
goto BREAK_label109;
}
}
BREAK_label109: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_73) on <var_73:MapIterator[MClassType, Array[nullable MType]]> */
RET_LABEL110:(void)0;
}
}
var111 = glob_sys;
if (unlikely(varonce112==NULL)) {
var113 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "\t";
var117 = standard___standard__NativeString___to_s_with_length(var116, 1l);
var115 = var117;
varonce114 = var115;
}
((struct instance_standard__NativeArray*)var113)->values[0]=var115;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "\t";
var121 = standard___standard__NativeString___to_s_with_length(var120, 1l);
var119 = var121;
varonce118 = var119;
}
((struct instance_standard__NativeArray*)var113)->values[2]=var119;
} else {
var113 = varonce112;
varonce112 = NULL;
}
var122 = standard__string___Int___Object__to_s(var_total);
((struct instance_standard__NativeArray*)var113)->values[1]=var122;
var123 = standard__string___Int___Object__to_s(var_holes);
((struct instance_standard__NativeArray*)var113)->values[3]=var123;
{
var124 = ((val*(*)(val* self))(var113->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
standard__file___Sys___print(var111, var124); /* Direct call file#Sys#print on <var111:Sys>*/
}
var125 = glob_sys;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "# size of methods tables";
var129 = standard___standard__NativeString___to_s_with_length(var128, 24l);
var127 = var129;
varonce126 = var127;
}
{
standard__file___Sys___print(var125, var127); /* Direct call file#Sys#print on <var125:Sys>*/
}
var130 = glob_sys;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "\ttotal \tholes";
var134 = standard___standard__NativeString___to_s_with_length(var133, 13l);
var132 = var134;
varonce131 = var132;
}
{
standard__file___Sys___print(var130, var132); /* Direct call file#Sys#print on <var130:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var137 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1053);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_138 = var135;
{
var139 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_138); /* iterator on <var_138:Map[MClass, Array[nullable MPropDef]]>*/
}
var_140 = var139;
for(;;) {
{
var141 = ((short int(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_140); /* is_ok on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var141){
{
var142 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_140); /* key on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t143 = var142;
{
var144 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_140); /* item on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table145 = var144;
{
{ /* Inline array#AbstractArrayRead#length (var_table145) on <var_table145:Array[nullable MPropDef]> */
var148 = var_table145->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table145:Array[nullable MPropDef]> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var146) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var146:Int> isa OTHER */
/* <var146:Int> isa OTHER */
var151 = 1; /* easy <var146:Int> isa OTHER*/
if (unlikely(!var151)) {
var_class_name154 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name154);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var155 = var_total + var146;
var149 = var155;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var_total = var149;
var_156 = var_table145;
{
var157 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_156);
}
var_158 = var157;
for(;;) {
{
var159 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_158);
}
if (var159){
{
var160 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_158);
}
var_e161 = var160;
if (var_e161 == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e161,((val*)NULL)) on <var_e161:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e161,var_other) on <var_e161:nullable MPropDef(MPropDef)> */
var167 = var_e161 == var_other;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
var162 = var163;
}
if (var162){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var170 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var170)) {
var_class_name173 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name173);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var174 = var_holes + 1l;
var168 = var174;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
var_holes = var168;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_158); /* Direct call array#ArrayIterator#next on <var_158:ArrayIterator[nullable MPropDef]>*/
}
} else {
goto BREAK_label175;
}
}
BREAK_label175: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_158); /* Direct call array#ArrayIterator#finish on <var_158:ArrayIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_140); /* next on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
} else {
goto BREAK_label176;
}
}
BREAK_label176: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_140) on <var_140:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL177:(void)0;
}
}
var178 = glob_sys;
if (unlikely(varonce179==NULL)) {
var180 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "\t";
var184 = standard___standard__NativeString___to_s_with_length(var183, 1l);
var182 = var184;
varonce181 = var182;
}
((struct instance_standard__NativeArray*)var180)->values[0]=var182;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "\t";
var188 = standard___standard__NativeString___to_s_with_length(var187, 1l);
var186 = var188;
varonce185 = var186;
}
((struct instance_standard__NativeArray*)var180)->values[2]=var186;
} else {
var180 = varonce179;
varonce179 = NULL;
}
var189 = standard__string___Int___Object__to_s(var_total);
((struct instance_standard__NativeArray*)var180)->values[1]=var189;
var190 = standard__string___Int___Object__to_s(var_holes);
((struct instance_standard__NativeArray*)var180)->values[3]=var190;
{
var191 = ((val*(*)(val* self))(var180->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
standard__file___Sys___print(var178, var191); /* Direct call file#Sys#print on <var178:Sys>*/
}
var192 = glob_sys;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "# size of attributes tables";
var196 = standard___standard__NativeString___to_s_with_length(var195, 27l);
var194 = var196;
varonce193 = var194;
}
{
standard__file___Sys___print(var192, var194); /* Direct call file#Sys#print on <var192:Sys>*/
}
var197 = glob_sys;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "\ttotal \tholes";
var201 = standard___standard__NativeString___to_s_with_length(var200, 13l);
var199 = var201;
varonce198 = var199;
}
{
standard__file___Sys___print(var197, var199); /* Direct call file#Sys#print on <var197:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var204 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1054);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_205 = var202;
{
var206 = ((val*(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_standard__abstract_collection__MapRead__iterator]))(var_205); /* iterator on <var_205:Map[MClass, Array[nullable MProperty]]>*/
}
var_207 = var206;
for(;;) {
{
var208 = ((short int(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_standard__abstract_collection__MapIterator__is_ok]))(var_207); /* is_ok on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
if (var208){
{
var209 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_standard__abstract_collection__MapIterator__key]))(var_207); /* key on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_t210 = var209;
{
var211 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_standard__abstract_collection__MapIterator__item]))(var_207); /* item on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_table212 = var211;
{
{ /* Inline array#AbstractArrayRead#length (var_table212) on <var_table212:Array[nullable MProperty]> */
var215 = var_table212->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_table212:Array[nullable MProperty]> */
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var213) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var213:Int> isa OTHER */
/* <var213:Int> isa OTHER */
var218 = 1; /* easy <var213:Int> isa OTHER*/
if (unlikely(!var218)) {
var_class_name221 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name221);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var222 = var_total + var213;
var216 = var222;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
var_total = var216;
var_223 = var_table212;
{
var224 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_223);
}
var_225 = var224;
for(;;) {
{
var226 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_225);
}
if (var226){
{
var227 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_225);
}
var_e228 = var227;
if (var_e228 == NULL) {
var229 = 1; /* is null */
} else {
var229 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e228,((val*)NULL)) on <var_e228:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e228,var_other) on <var_e228:nullable MProperty(MProperty)> */
var234 = var_e228 == var_other;
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
var230 = var232;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
var229 = var230;
}
if (var229){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var237 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var237)) {
var_class_name240 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name240);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var241 = var_holes + 1l;
var235 = var241;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
var_holes = var235;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_225); /* Direct call array#ArrayIterator#next on <var_225:ArrayIterator[nullable MProperty]>*/
}
} else {
goto BREAK_label242;
}
}
BREAK_label242: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_225); /* Direct call array#ArrayIterator#finish on <var_225:ArrayIterator[nullable MProperty]>*/
}
{
((void(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_standard__abstract_collection__MapIterator__next]))(var_207); /* next on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
} else {
goto BREAK_label243;
}
}
BREAK_label243: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_207) on <var_207:MapIterator[MClass, Array[nullable MProperty]]> */
RET_LABEL244:(void)0;
}
}
var245 = glob_sys;
if (unlikely(varonce246==NULL)) {
var247 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "\t";
var251 = standard___standard__NativeString___to_s_with_length(var250, 1l);
var249 = var251;
varonce248 = var249;
}
((struct instance_standard__NativeArray*)var247)->values[0]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "\t";
var255 = standard___standard__NativeString___to_s_with_length(var254, 1l);
var253 = var255;
varonce252 = var253;
}
((struct instance_standard__NativeArray*)var247)->values[2]=var253;
} else {
var247 = varonce246;
varonce246 = NULL;
}
var256 = standard__string___Int___Object__to_s(var_total);
((struct instance_standard__NativeArray*)var247)->values[1]=var256;
var257 = standard__string___Int___Object__to_s(var_holes);
((struct instance_standard__NativeArray*)var247)->values[3]=var257;
{
var258 = ((val*(*)(val* self))(var247->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
standard__file___Sys___print(var245, var258); /* Direct call file#Sys#print on <var245:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count for (self: SeparateCompiler): Int */
long nit___nit__SeparateCompiler___isset_checks_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count= for (self: SeparateCompiler, Int) */
void nit___nit__SeparateCompiler___isset_checks_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = p0; /* _isset_checks_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_read_count for (self: SeparateCompiler): Int */
long nit___nit__SeparateCompiler___attr_read_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_read_count= for (self: SeparateCompiler, Int) */
void nit___nit__SeparateCompiler___attr_read_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = p0; /* _attr_read_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_isset_checks for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___display_isset_checks(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : Sys */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
long var11 /* : Int */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Sys */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : Sys */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# total number of compiled attribute reads";
var3 = standard___standard__NativeString___to_s_with_length(var2, 42l);
var1 = var3;
varonce = var1;
}
{
standard__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
var4 = glob_sys;
if (unlikely(varonce5==NULL)) {
var6 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "\t";
var10 = standard___standard__NativeString___to_s_with_length(var9, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce5;
varonce5 = NULL;
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = standard__string___Int___Object__to_s(var11);
((struct instance_standard__NativeArray*)var6)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
{
standard__file___Sys___print(var4, var15); /* Direct call file#Sys#print on <var4:Sys>*/
}
var16 = glob_sys;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "# total number of compiled isset-checks";
var20 = standard___standard__NativeString___to_s_with_length(var19, 39l);
var18 = var20;
varonce17 = var18;
}
{
standard__file___Sys___print(var16, var18); /* Direct call file#Sys#print on <var16:Sys>*/
}
var21 = glob_sys;
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "\t";
var27 = standard___standard__NativeString___to_s_with_length(var26, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (self) on <self:SeparateCompiler> */
var30 = self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = standard__string___Int___Object__to_s(var28);
((struct instance_standard__NativeArray*)var23)->values[1]=var31;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
standard__file___Sys___print(var21, var32); /* Direct call file#Sys#print on <var21:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: SeparateCompiler) */
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 569);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "struct nitni_instance {\n\tstruct nitni_instance *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n\tstruct instance *value;\n};\n";
var5 = standard___standard__NativeString___to_s_with_length(var4, 210l);
var3 = var5;
varonce = var3;
}
{
nit___nit__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self); /* compile_nitni_structs on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: SeparateCompiler, MModule) */
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_old_module /* var old_module: MModule */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_old_module = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_mmodule) on <self:SeparateCompiler> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_mmodule; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module]))(self, p0); /* finalize_ffi_for_module on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var22 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var23 /* : MType */;
val* var25 /* : MType */;
val* var26 /* : String */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
val* var36 /* : String */;
short int var37 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var42 /* : MClassDef */;
val* var44 /* : MClassDef */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : MClassType */;
val* var50 /* : MClassType */;
val* var51 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var52 /* : Int */;
long var_ /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var56 /* : Bool */;
val* var57 /* : Array[MParameter] */;
val* var59 /* : Array[MParameter] */;
val* var60 /* : nullable Object */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var_t /* var t: MType */;
long var64 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
val* var77 /* : nullable Object */;
val* var78 /* : MType */;
val* var80 /* : MType */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
val* var95 /* : nullable Object */;
val* var96 /* : RuntimeVariable */;
long var97 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1157);
fatal_exit(1);
} else {
var21 = nit___nit__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
var22 = standard___standard__SequenceRead___Collection__first(var_args);
}
var_recv = var22;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var25 = var_recv->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_nit__abstract_compiler__MType__ctype]))(var23); /* ctype on <var23:MType>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nit__abstract_compiler___MClassType___MType__ctype(var33);
}
{
{ /* Inline kernel#Object#!= (var26,var36) on <var26:String> */
var_other = var36;
{
var39 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:String>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var44 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var42) on <var42:MClassDef> */
var47 = var42->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var42:MClassDef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var45:MClass> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var41, var48);
}
{
standard___standard__Sequence___first_61d(var_args, var51); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var52 = nit___nit__MSignature___arity(var_msignature);
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var55 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var56 = var_i < var_;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var59 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var57, var_i);
}
{
{ /* Inline model#MParameter#mtype (var60) on <var60:nullable Object(MParameter)> */
var63 = var60->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var60:nullable Object(MParameter)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_t = var61;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var66 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var64) on <var_i:Int> */
var69 = var_i == var64;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var76 = var_i + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
var77 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var70);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var77) on <var77:nullable Object(RuntimeVariable)> */
var80 = var77->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var77:nullable Object(RuntimeVariable)> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
var_t = var78;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var83 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var87 = var_i + 1l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var90 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var94 = var_i + 1l;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
var95 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var88);
}
{
var96 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var95, var_t);
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_args, var81, var96); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
{
var97 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var97;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_signature_extern for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var22 /* : Bool */;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClass */;
val* var39 /* : MClass */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var44 /* : Int */;
long var_45 /* var : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var49 /* : Bool */;
val* var50 /* : Array[MParameter] */;
val* var52 /* : Array[MParameter] */;
val* var53 /* : nullable Object */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_t /* var t: MType */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
val* var70 /* : nullable Object */;
val* var71 /* : MType */;
val* var73 /* : MType */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
val* var91 /* : nullable Object */;
val* var92 /* : RuntimeVariable */;
long var93 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1173);
fatal_exit(1);
} else {
var21 = nit___nit__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var25 = var_m->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var23) on <var23:MProperty(MMethod)> */
var28 = var23->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var23:MProperty(MMethod)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = !var26;
var_ = var29;
if (var29){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var32 = var_m->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var33 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var36 = var_m->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var37) on <var37:MClass> */
var42 = var37->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var37:MClass> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var33, var40); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
standard___standard__Sequence___first_61d(var_args, var43); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var44 = nit___nit__MSignature___arity(var_msignature);
}
var_45 = var44;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_45) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_45:Int> isa OTHER */
/* <var_45:Int> isa OTHER */
var48 = 1; /* easy <var_45:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var49 = var_i < var_45;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var52 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var50, var_i);
}
{
{ /* Inline model#MParameter#mtype (var53) on <var53:nullable Object(MParameter)> */
var56 = var53->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var53:nullable Object(MParameter)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_t = var54;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var59 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var57) on <var_i:Int> */
var62 = var_i == var57;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var69 = var_i + 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
var70 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var63);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var70) on <var70:nullable Object(RuntimeVariable)> */
var73 = var70->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var70:nullable Object(RuntimeVariable)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
var_t = var71;
} else {
}
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var76 = var_m->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (var74){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var83 = var_i + 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var86 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var90 = var_i + 1l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
var91 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var84);
}
{
var92 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var91, var_t); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(var_args, var77, var92); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
{
var93 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var93;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
