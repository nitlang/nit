#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: SeparateCompiler, MType) */
void nitc___nitc__SeparateCompiler___compile_type_resolution_table(val* self, val* p0) {
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
val* var6 /* : String */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : Map[MClassType, Array[nullable MType]] */;
val* var44 /* : Map[MClassType, Array[nullable MType]] */;
val* var45 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var46 /* : IndexedIterator[nullable Object] */;
val* var_47 /* var : IndexedIterator[nullable MType] */;
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
val* var59 /* : String */;
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
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : String */;
var_mtype = p0;
{
var = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
/* <var:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 781);
fatal_exit(1);
}
var_mclass_type = var;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "resolution_table_";
var6 = core__flat___NativeString___to_s_full(var5, 17l, 17l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
} else {
var2 = varonce;
varonce = NULL;
}
{
var7 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var2)->values[1]=var7;
{
var8 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "extern const struct types resolution_table_";
var14 = core__flat___NativeString___to_s_full(var13, 43l, 43l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ";";
var18 = core__flat___NativeString___to_s_full(var17, 1l, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce9;
varonce9 = NULL;
}
{
var19 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var8, var20); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "const struct types resolution_table_";
var27 = core__flat___NativeString___to_s_full(var26, 36l, 36l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " = {";
var31 = core__flat___NativeString___to_s_full(var30, 4l, 4l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var32 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var23)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "0, /* dummy */";
var37 = core__flat___NativeString___to_s_full(var36, 14l, 14l);
var35 = var37;
varonce34 = var35;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "{";
var41 = core__flat___NativeString___to_s_full(var40, 1l, 1l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var44 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1066);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self, val* p0))((((long)var42&3)?class_info[((long)var42&3)]:var42->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var42, var_mclass_type); /* [] on <var42:Map[MClassType, Array[nullable MType]]>*/
}
var_ = var45;
{
var46 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_47 = var46;
for(;;) {
{
var48 = ((short int(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_47); /* is_ok on <var_47:IndexedIterator[nullable MType]>*/
}
if (var48){
} else {
goto BREAK_label;
}
{
var49 = ((val*(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_47); /* item on <var_47:IndexedIterator[nullable MType]>*/
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
var59 = core__flat___NativeString___to_s_full(var58, 17l, 17l);
var57 = var59;
varonce56 = var57;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var62 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var60, 1); /* resolve_for on <var_t:nullable MType(MType)>*/
}
var_tv = var63;
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var66 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 149);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((short int(*)(val* self, val* p0))((((long)var64&3)?class_info[((long)var64&3)]:var64->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var64, var_tv); /* has_key on <var64:Map[MType, Int]>*/
}
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "type_";
var73 = core__flat___NativeString___to_s_full(var72, 5l, 5l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var74 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var69)->values[1]=var74;
{
var75 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "&type_";
var81 = core__flat___NativeString___to_s_full(var80, 6l, 6l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ", /* ";
var85 = core__flat___NativeString___to_s_full(var84, 5l, 5l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[2]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ": ";
var89 = core__flat___NativeString___to_s_full(var88, 2l, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[4]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " */";
var93 = core__flat___NativeString___to_s_full(var92, 3l, 3l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var77)->values[6]=var91;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var94 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var77)->values[1]=var94;
{
var95 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var77)->values[3]=var95;
{
var96 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var77)->values[5]=var96;
{
var97 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "NULL, /* empty (";
var103 = core__flat___NativeString___to_s_full(var102, 16l, 16l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ": ";
var107 = core__flat___NativeString___to_s_full(var106, 2l, 2l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = " not a live type) */";
var111 = core__flat___NativeString___to_s_full(var110, 20l, 20l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[4]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var112 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var99)->values[1]=var112;
{
var113 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var99)->values[3]=var113;
{
var114 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_47); /* next on <var_47:IndexedIterator[nullable MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_47); /* finish on <var_47:IndexedIterator[nullable MType]>*/
}
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "}";
var118 = core__flat___NativeString___to_s_full(var117, 1l, 1l);
var116 = var118;
varonce115 = var116;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var116); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "};";
var122 = core__flat___NativeString___to_s_full(var121, 2l, 2l);
var120 = var122;
varonce119 = var120;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void nitc___nitc__SeparateCompiler___compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : String */;
val* var_c_name /* var c_name: String */;
val* var10 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var11 /* : nullable RapidTypeAnalysis */;
val* var13 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
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
short int var_is_dead /* var is_dead: Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
val* var31 /* : MClassKind */;
val* var33 /* : MClassKind */;
val* var34 /* : Sys */;
val* var35 /* : MClassKind */;
short int var36 /* : Bool */;
val* var_other38 /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
val* var43 /* : MClassKind */;
val* var45 /* : MClassKind */;
val* var46 /* : Sys */;
val* var47 /* : MClassKind */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var_need_corpse /* var need_corpse: Bool */;
val* var53 /* : NativeArray[String] */;
static val* varonce;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : String */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var_80 /* var : Bool */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var100 /* : NativeArray[String] */;
static val* varonce99;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
long var116 /* : Int */;
val* var117 /* : String */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : String */;
val* var123 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var125 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var126 /* : nullable Object */;
val* var_vft /* var vft: nullable Array[nullable MPropDef] */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
long var_i /* var i: Int */;
long var132 /* : Int */;
long var134 /* : Int */;
long var_135 /* var : Int */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var139 /* : Bool */;
val* var140 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : String */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var_160 /* var : Bool */;
val* var161 /* : HashSet[MMethodDef] */;
val* var163 /* : HashSet[MMethodDef] */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var167 /* : NativeArray[String] */;
static val* varonce166;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : NativeString */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : String */;
val* var184 /* : MModule */;
val* var186 /* : MModule */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var190 /* : String */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var_197 /* var : Bool */;
val* var198 /* : nullable MSignature */;
val* var200 /* : nullable MSignature */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
short int var_207 /* var : Bool */;
val* var208 /* : MProperty */;
val* var210 /* : MProperty */;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
val* var215 /* : NativeArray[String] */;
static val* varonce214;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
val* var219 /* : String */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : NativeString */;
val* var223 /* : String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : NativeString */;
val* var227 /* : String */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : NativeString */;
val* var231 /* : String */;
val* var232 /* : MModule */;
val* var234 /* : MModule */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var238 /* : String */;
val* var239 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var240 /* : String */;
val* var242 /* : NativeArray[String] */;
static val* varonce241;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
val* var246 /* : String */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : NativeString */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
val* var258 /* : String */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : NativeString */;
val* var262 /* : String */;
val* var263 /* : String */;
val* var264 /* : MModule */;
val* var266 /* : MModule */;
val* var267 /* : String */;
val* var268 /* : String */;
val* var269 /* : String */;
val* var270 /* : String */;
long var271 /* : Int */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
val* var275 /* : String */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : NativeString */;
val* var279 /* : String */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
short int var_282 /* var : Bool */;
val* var283 /* : MClass */;
val* var285 /* : MClass */;
val* var286 /* : String */;
val* var288 /* : String */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : NativeString */;
val* var292 /* : String */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
short int var296 /* : Bool */;
val* var297 /* : CodeWriter */;
val* var299 /* : CodeWriter */;
val* var301 /* : NativeArray[String] */;
static val* varonce300;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
val* var305 /* : String */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : String */;
val* var310 /* : String */;
val* var311 /* : CodeWriter */;
val* var313 /* : CodeWriter */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : NativeString */;
val* var317 /* : String */;
val* var318 /* : CodeWriter */;
val* var320 /* : CodeWriter */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : NativeString */;
val* var324 /* : String */;
val* var325 /* : CodeWriter */;
val* var327 /* : CodeWriter */;
val* var329 /* : NativeArray[String] */;
static val* varonce328;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : NativeString */;
val* var333 /* : String */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : CodeWriter */;
val* var338 /* : CodeWriter */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
val* var342 /* : String */;
short int var343 /* : Bool */;
short int var_344 /* var : Bool */;
val* var345 /* : MClass */;
val* var347 /* : MClass */;
val* var348 /* : String */;
val* var350 /* : String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : NativeString */;
val* var354 /* : String */;
short int var355 /* : Bool */;
short int var357 /* : Bool */;
short int var358 /* : Bool */;
val* var360 /* : NativeArray[String] */;
static val* varonce359;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : NativeString */;
val* var364 /* : String */;
val* var365 /* : String */;
val* var367 /* : NativeArray[String] */;
static val* varonce366;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : NativeString */;
val* var371 /* : String */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : NativeString */;
val* var375 /* : String */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : NativeString */;
val* var379 /* : String */;
val* var380 /* : String */;
val* var381 /* : String */;
val* var383 /* : NativeArray[String] */;
static val* varonce382;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : NativeString */;
val* var387 /* : String */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : NativeString */;
val* var391 /* : String */;
val* var392 /* : String */;
val* var393 /* : String */;
val* var395 /* : NativeArray[String] */;
static val* varonce394;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : NativeString */;
val* var399 /* : String */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : NativeString */;
val* var403 /* : String */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : NativeString */;
val* var407 /* : String */;
val* var408 /* : String */;
val* var409 /* : String */;
val* var410 /* : String */;
val* var412 /* : NativeArray[String] */;
static val* varonce411;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : NativeString */;
val* var416 /* : String */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : NativeString */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : NativeString */;
val* var424 /* : String */;
val* var425 /* : String */;
val* var426 /* : AbstractCompiler */;
val* var428 /* : AbstractCompiler */;
val* var429 /* : Set[MType] */;
val* var431 /* : Set[MType] */;
val* var433 /* : NativeArray[String] */;
static val* varonce432;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : NativeString */;
val* var437 /* : String */;
val* var438 /* : String */;
val* var440 /* : NativeArray[String] */;
static val* varonce439;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : NativeString */;
val* var444 /* : String */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
val* var448 /* : String */;
val* var449 /* : String */;
val* var451 /* : NativeArray[String] */;
static val* varonce450;
static val* varonce452;
val* var453 /* : String */;
char* var454 /* : NativeString */;
val* var455 /* : String */;
val* var456 /* : String */;
val* var458 /* : NativeArray[String] */;
static val* varonce457;
static val* varonce459;
val* var460 /* : String */;
char* var461 /* : NativeString */;
val* var462 /* : String */;
static val* varonce463;
val* var464 /* : String */;
char* var465 /* : NativeString */;
val* var466 /* : String */;
val* var467 /* : String */;
static val* varonce468;
val* var469 /* : String */;
char* var470 /* : NativeString */;
val* var471 /* : String */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : NativeString */;
val* var475 /* : String */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : NativeString */;
val* var479 /* : String */;
val* var480 /* : MClass */;
val* var482 /* : MClass */;
val* var483 /* : String */;
val* var485 /* : String */;
static val* varonce486;
val* var487 /* : String */;
char* var488 /* : NativeString */;
val* var489 /* : String */;
short int var490 /* : Bool */;
short int var492 /* : Bool */;
short int var493 /* : Bool */;
val* var494 /* : AbstractCompilerVisitor */;
val* var496 /* : NativeArray[String] */;
static val* varonce495;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : NativeString */;
val* var500 /* : String */;
val* var501 /* : String */;
val* var503 /* : NativeArray[String] */;
static val* varonce502;
static val* varonce504;
val* var505 /* : String */;
char* var506 /* : NativeString */;
val* var507 /* : String */;
static val* varonce508;
val* var509 /* : String */;
char* var510 /* : NativeString */;
val* var511 /* : String */;
val* var512 /* : String */;
val* var513 /* : String */;
val* var515 /* : NativeArray[String] */;
static val* varonce514;
static val* varonce516;
val* var517 /* : String */;
char* var518 /* : NativeString */;
val* var519 /* : String */;
static val* varonce520;
val* var521 /* : String */;
char* var522 /* : NativeString */;
val* var523 /* : String */;
val* var524 /* : String */;
val* var525 /* : String */;
val* var527 /* : NativeArray[String] */;
static val* varonce526;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : NativeString */;
val* var531 /* : String */;
static val* varonce532;
val* var533 /* : String */;
char* var534 /* : NativeString */;
val* var535 /* : String */;
val* var536 /* : String */;
val* var537 /* : String */;
val* var539 /* : NativeArray[String] */;
static val* varonce538;
static val* varonce540;
val* var541 /* : String */;
char* var542 /* : NativeString */;
val* var543 /* : String */;
val* var544 /* : String */;
val* var545 /* : String */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : NativeString */;
val* var549 /* : String */;
val* var550 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var553 /* : NativeArray[String] */;
static val* varonce552;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : NativeString */;
val* var557 /* : String */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : NativeString */;
val* var561 /* : String */;
val* var562 /* : String */;
val* var563 /* : String */;
val* var564 /* : String */;
val* var566 /* : NativeArray[String] */;
static val* varonce565;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : NativeString */;
val* var570 /* : String */;
val* var571 /* : String */;
val* var572 /* : String */;
static val* varonce573;
val* var574 /* : String */;
char* var575 /* : NativeString */;
val* var576 /* : String */;
val* var578 /* : NativeArray[String] */;
static val* varonce577;
static val* varonce579;
val* var580 /* : String */;
char* var581 /* : NativeString */;
val* var582 /* : String */;
val* var583 /* : String */;
val* var585 /* : NativeArray[String] */;
static val* varonce584;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : NativeString */;
val* var589 /* : String */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : NativeString */;
val* var593 /* : String */;
val* var594 /* : String */;
val* var595 /* : String */;
val* var597 /* : NativeArray[String] */;
static val* varonce596;
static val* varonce598;
val* var599 /* : String */;
char* var600 /* : NativeString */;
val* var601 /* : String */;
static val* varonce602;
val* var603 /* : String */;
char* var604 /* : NativeString */;
val* var605 /* : String */;
static val* varonce606;
val* var607 /* : String */;
char* var608 /* : NativeString */;
val* var609 /* : String */;
val* var610 /* : String */;
val* var611 /* : String */;
val* var612 /* : String */;
val* var614 /* : NativeArray[String] */;
static val* varonce613;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : NativeString */;
val* var618 /* : String */;
static val* varonce619;
val* var620 /* : String */;
char* var621 /* : NativeString */;
val* var622 /* : String */;
val* var623 /* : String */;
val* var624 /* : String */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : NativeString */;
val* var628 /* : String */;
val* var629 /* : String */;
val* var631 /* : String */;
static val* varonce632;
val* var633 /* : String */;
char* var634 /* : NativeString */;
val* var635 /* : String */;
short int var636 /* : Bool */;
val* var637 /* : CodeWriter */;
val* var639 /* : CodeWriter */;
val* var641 /* : NativeArray[String] */;
static val* varonce640;
static val* varonce642;
val* var643 /* : String */;
char* var644 /* : NativeString */;
val* var645 /* : String */;
static val* varonce646;
val* var647 /* : String */;
char* var648 /* : NativeString */;
val* var649 /* : String */;
val* var650 /* : String */;
val* var651 /* : CodeWriter */;
val* var653 /* : CodeWriter */;
static val* varonce654;
val* var655 /* : String */;
char* var656 /* : NativeString */;
val* var657 /* : String */;
val* var658 /* : CodeWriter */;
val* var660 /* : CodeWriter */;
static val* varonce661;
val* var662 /* : String */;
char* var663 /* : NativeString */;
val* var664 /* : String */;
val* var665 /* : CodeWriter */;
val* var667 /* : CodeWriter */;
static val* varonce668;
val* var669 /* : String */;
char* var670 /* : NativeString */;
val* var671 /* : String */;
val* var672 /* : CodeWriter */;
val* var674 /* : CodeWriter */;
static val* varonce675;
val* var676 /* : String */;
char* var677 /* : NativeString */;
val* var678 /* : String */;
val* var679 /* : CodeWriter */;
val* var681 /* : CodeWriter */;
static val* varonce682;
val* var683 /* : String */;
char* var684 /* : NativeString */;
val* var685 /* : String */;
val* var687 /* : NativeArray[String] */;
static val* varonce686;
static val* varonce688;
val* var689 /* : String */;
char* var690 /* : NativeString */;
val* var691 /* : String */;
val* var692 /* : String */;
val* var694 /* : NativeArray[String] */;
static val* varonce693;
static val* varonce695;
val* var696 /* : String */;
char* var697 /* : NativeString */;
val* var698 /* : String */;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : NativeString */;
val* var702 /* : String */;
val* var703 /* : String */;
val* var704 /* : String */;
val* var706 /* : NativeArray[String] */;
static val* varonce705;
static val* varonce707;
val* var708 /* : String */;
char* var709 /* : NativeString */;
val* var710 /* : String */;
static val* varonce711;
val* var712 /* : String */;
char* var713 /* : NativeString */;
val* var714 /* : String */;
val* var715 /* : String */;
val* var716 /* : String */;
val* var718 /* : NativeArray[String] */;
static val* varonce717;
static val* varonce719;
val* var720 /* : String */;
char* var721 /* : NativeString */;
val* var722 /* : String */;
static val* varonce723;
val* var724 /* : String */;
char* var725 /* : NativeString */;
val* var726 /* : String */;
val* var727 /* : String */;
val* var728 /* : String */;
static val* varonce729;
val* var730 /* : String */;
char* var731 /* : NativeString */;
val* var732 /* : String */;
val* var733 /* : String */;
val* var_res734 /* var res: String */;
val* var736 /* : NativeArray[String] */;
static val* varonce735;
static val* varonce737;
val* var738 /* : String */;
char* var739 /* : NativeString */;
val* var740 /* : String */;
static val* varonce741;
val* var742 /* : String */;
char* var743 /* : NativeString */;
val* var744 /* : String */;
static val* varonce745;
val* var746 /* : String */;
char* var747 /* : NativeString */;
val* var748 /* : String */;
val* var749 /* : String */;
val* var750 /* : Array[MType] */;
val* var751 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
val* var753 /* : NativeArray[String] */;
static val* varonce752;
static val* varonce754;
val* var755 /* : String */;
char* var756 /* : NativeString */;
val* var757 /* : String */;
static val* varonce758;
val* var759 /* : String */;
char* var760 /* : NativeString */;
val* var761 /* : String */;
static val* varonce762;
val* var763 /* : String */;
char* var764 /* : NativeString */;
val* var765 /* : String */;
val* var766 /* : String */;
val* var767 /* : String */;
val* var769 /* : NativeArray[String] */;
static val* varonce768;
static val* varonce770;
val* var771 /* : String */;
char* var772 /* : NativeString */;
val* var773 /* : String */;
val* var774 /* : String */;
static val* varonce775;
val* var776 /* : String */;
char* var777 /* : NativeString */;
val* var778 /* : String */;
val* var780 /* : NativeArray[String] */;
static val* varonce779;
static val* varonce781;
val* var782 /* : String */;
char* var783 /* : NativeString */;
val* var784 /* : String */;
val* var785 /* : String */;
val* var787 /* : NativeArray[String] */;
static val* varonce786;
static val* varonce788;
val* var789 /* : String */;
char* var790 /* : NativeString */;
val* var791 /* : String */;
static val* varonce792;
val* var793 /* : String */;
char* var794 /* : NativeString */;
val* var795 /* : String */;
val* var796 /* : String */;
val* var798 /* : NativeArray[String] */;
static val* varonce797;
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : NativeString */;
val* var802 /* : String */;
val* var803 /* : String */;
val* var805 /* : NativeArray[String] */;
static val* varonce804;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : NativeString */;
val* var809 /* : String */;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : NativeString */;
val* var813 /* : String */;
val* var814 /* : String */;
static val* varonce815;
val* var816 /* : String */;
char* var817 /* : NativeString */;
val* var818 /* : String */;
short int var819 /* : Bool */;
val* var820 /* : MClass */;
val* var822 /* : MClass */;
val* var823 /* : MClassKind */;
val* var825 /* : MClassKind */;
val* var826 /* : Sys */;
val* var827 /* : MClassKind */;
short int var828 /* : Bool */;
short int var830 /* : Bool */;
short int var832 /* : Bool */;
short int var_833 /* var : Bool */;
val* var834 /* : MClass */;
val* var836 /* : MClass */;
val* var837 /* : String */;
val* var839 /* : String */;
static val* varonce840;
val* var841 /* : String */;
char* var842 /* : NativeString */;
val* var843 /* : String */;
short int var844 /* : Bool */;
short int var846 /* : Bool */;
short int var847 /* : Bool */;
val* var848 /* : MModule */;
val* var850 /* : MModule */;
val* var851 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var853 /* : NativeArray[String] */;
static val* varonce852;
static val* varonce854;
val* var855 /* : String */;
char* var856 /* : NativeString */;
val* var857 /* : String */;
val* var858 /* : String */;
val* var860 /* : NativeArray[String] */;
static val* varonce859;
static val* varonce861;
val* var862 /* : String */;
char* var863 /* : NativeString */;
val* var864 /* : String */;
static val* varonce865;
val* var866 /* : String */;
char* var867 /* : NativeString */;
val* var868 /* : String */;
val* var869 /* : String */;
val* var870 /* : String */;
val* var872 /* : NativeArray[String] */;
static val* varonce871;
static val* varonce873;
val* var874 /* : String */;
char* var875 /* : NativeString */;
val* var876 /* : String */;
static val* varonce877;
val* var878 /* : String */;
char* var879 /* : NativeString */;
val* var880 /* : String */;
val* var881 /* : String */;
val* var882 /* : String */;
val* var884 /* : NativeArray[String] */;
static val* varonce883;
static val* varonce885;
val* var886 /* : String */;
char* var887 /* : NativeString */;
val* var888 /* : String */;
static val* varonce889;
val* var890 /* : String */;
char* var891 /* : NativeString */;
val* var892 /* : String */;
val* var893 /* : String */;
val* var894 /* : String */;
val* var896 /* : NativeArray[String] */;
static val* varonce895;
static val* varonce897;
val* var898 /* : String */;
char* var899 /* : NativeString */;
val* var900 /* : String */;
val* var901 /* : String */;
val* var902 /* : String */;
static val* varonce903;
val* var904 /* : String */;
char* var905 /* : NativeString */;
val* var906 /* : String */;
val* var907 /* : RuntimeVariable */;
val* var_res908 /* var res: RuntimeVariable */;
val* var911 /* : NativeArray[String] */;
static val* varonce910;
static val* varonce912;
val* var913 /* : String */;
char* var914 /* : NativeString */;
val* var915 /* : String */;
static val* varonce916;
val* var917 /* : String */;
char* var918 /* : NativeString */;
val* var919 /* : String */;
val* var920 /* : String */;
val* var921 /* : String */;
val* var922 /* : String */;
val* var924 /* : NativeArray[String] */;
static val* varonce923;
static val* varonce925;
val* var926 /* : String */;
char* var927 /* : NativeString */;
val* var928 /* : String */;
val* var929 /* : String */;
val* var930 /* : String */;
static val* varonce931;
val* var932 /* : String */;
char* var933 /* : NativeString */;
val* var934 /* : String */;
val* var936 /* : NativeArray[String] */;
static val* varonce935;
static val* varonce937;
val* var938 /* : String */;
char* var939 /* : NativeString */;
val* var940 /* : String */;
val* var941 /* : String */;
val* var943 /* : NativeArray[String] */;
static val* varonce942;
static val* varonce944;
val* var945 /* : String */;
char* var946 /* : NativeString */;
val* var947 /* : String */;
static val* varonce948;
val* var949 /* : String */;
char* var950 /* : NativeString */;
val* var951 /* : String */;
val* var952 /* : String */;
val* var953 /* : String */;
val* var955 /* : NativeArray[String] */;
static val* varonce954;
static val* varonce956;
val* var957 /* : String */;
char* var958 /* : NativeString */;
val* var959 /* : String */;
static val* varonce960;
val* var961 /* : String */;
char* var962 /* : NativeString */;
val* var963 /* : String */;
static val* varonce964;
val* var965 /* : String */;
char* var966 /* : NativeString */;
val* var967 /* : String */;
val* var968 /* : String */;
val* var969 /* : String */;
val* var970 /* : String */;
val* var972 /* : NativeArray[String] */;
static val* varonce971;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : NativeString */;
val* var976 /* : String */;
static val* varonce977;
val* var978 /* : String */;
char* var979 /* : NativeString */;
val* var980 /* : String */;
val* var981 /* : String */;
val* var982 /* : String */;
static val* varonce983;
val* var984 /* : String */;
char* var985 /* : NativeString */;
val* var986 /* : String */;
val* var988 /* : NativeArray[String] */;
static val* varonce987;
static val* varonce989;
val* var990 /* : String */;
char* var991 /* : NativeString */;
val* var992 /* : String */;
val* var993 /* : String */;
val* var995 /* : NativeArray[String] */;
static val* varonce994;
static val* varonce996;
val* var997 /* : String */;
char* var998 /* : NativeString */;
val* var999 /* : String */;
static val* varonce1000;
val* var1001 /* : String */;
char* var1002 /* : NativeString */;
val* var1003 /* : String */;
val* var1004 /* : String */;
val* var1005 /* : String */;
val* var1007 /* : NativeArray[String] */;
static val* varonce1006;
static val* varonce1008;
val* var1009 /* : String */;
char* var1010 /* : NativeString */;
val* var1011 /* : String */;
static val* varonce1012;
val* var1013 /* : String */;
char* var1014 /* : NativeString */;
val* var1015 /* : String */;
val* var1016 /* : String */;
val* var1017 /* : String */;
val* var1019 /* : NativeArray[String] */;
static val* varonce1018;
static val* varonce1020;
val* var1021 /* : String */;
char* var1022 /* : NativeString */;
val* var1023 /* : String */;
static val* varonce1024;
val* var1025 /* : String */;
char* var1026 /* : NativeString */;
val* var1027 /* : String */;
val* var1028 /* : String */;
val* var1029 /* : String */;
val* var1031 /* : NativeArray[String] */;
static val* varonce1030;
static val* varonce1032;
val* var1033 /* : String */;
char* var1034 /* : NativeString */;
val* var1035 /* : String */;
val* var1036 /* : String */;
val* var1037 /* : String */;
static val* varonce1038;
val* var1039 /* : String */;
char* var1040 /* : NativeString */;
val* var1041 /* : String */;
val* var1042 /* : RuntimeVariable */;
val* var_res1043 /* var res: RuntimeVariable */;
val* var1045 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1047 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1048 /* : nullable Object */;
val* var_attrs /* var attrs: nullable Array[nullable MProperty] */;
short int var1049 /* : Bool */;
short int var1050 /* : Bool */;
val* var1052 /* : NativeArray[String] */;
static val* varonce1051;
static val* varonce1053;
val* var1054 /* : String */;
char* var1055 /* : NativeString */;
val* var1056 /* : String */;
val* var1057 /* : String */;
val* var1058 /* : String */;
val* var1060 /* : NativeArray[String] */;
static val* varonce1059;
static val* varonce1061;
val* var1062 /* : String */;
char* var1063 /* : NativeString */;
val* var1064 /* : String */;
static val* varonce1065;
val* var1066 /* : String */;
char* var1067 /* : NativeString */;
val* var1068 /* : String */;
val* var1069 /* : String */;
long var1070 /* : Int */;
long var1072 /* : Int */;
val* var1073 /* : String */;
val* var1074 /* : String */;
val* var1076 /* : NativeArray[String] */;
static val* varonce1075;
static val* varonce1077;
val* var1078 /* : String */;
char* var1079 /* : NativeString */;
val* var1080 /* : String */;
val* var1081 /* : String */;
val* var1082 /* : String */;
static val* varonce1083;
val* var1084 /* : String */;
char* var1085 /* : NativeString */;
val* var1086 /* : String */;
val* var1088 /* : NativeArray[String] */;
static val* varonce1087;
static val* varonce1089;
val* var1090 /* : String */;
char* var1091 /* : NativeString */;
val* var1092 /* : String */;
val* var1093 /* : String */;
val* var1095 /* : NativeArray[String] */;
static val* varonce1094;
static val* varonce1096;
val* var1097 /* : String */;
char* var1098 /* : NativeString */;
val* var1099 /* : String */;
static val* varonce1100;
val* var1101 /* : String */;
char* var1102 /* : NativeString */;
val* var1103 /* : String */;
val* var1104 /* : String */;
val* var1105 /* : String */;
short int var1106 /* : Bool */;
short int var1107 /* : Bool */;
short int var1109 /* : Bool */;
short int var1110 /* : Bool */;
val* var1112 /* : NativeArray[String] */;
static val* varonce1111;
static val* varonce1113;
val* var1114 /* : String */;
char* var1115 /* : NativeString */;
val* var1116 /* : String */;
static val* varonce1117;
val* var1118 /* : String */;
char* var1119 /* : NativeString */;
val* var1120 /* : String */;
val* var1121 /* : String */;
val* var1122 /* : String */;
static val* varonce1123;
val* var1124 /* : String */;
char* var1125 /* : NativeString */;
val* var1126 /* : String */;
var_mclass = p0;
{
{ /* Inline model_base#MEntity#is_broken (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mclass:MClass> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var5 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 483);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mtype = var6;
{
var9 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
var_c_name = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_rta = var11;
if (var_rta == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
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
var22 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashSet___core__abstract_collection__Collection__has(var20, var_mclass);
}
var24 = !var23;
var14 = var24;
} else {
var14 = var_;
}
var_is_dead = var14;
var_28 = var_is_dead;
if (var_is_dead){
{
var29 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var27 = var29;
} else {
var27 = var_28;
}
var_30 = var27;
if (var27){
var26 = var_30;
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var33 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = glob_sys;
{
var35 = nitc__model___core__Sys___extern_kind(var34);
}
{
{ /* Inline kernel#Object#== (var31,var35) on <var31:MClassKind> */
var_other38 = var35;
{
{ /* Inline kernel#Object#is_same_instance (var31,var_other38) on <var31:MClassKind> */
var41 = var31 == var_other38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var26 = var36;
}
var_42 = var26;
if (var26){
var25 = var_42;
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var45 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = glob_sys;
{
var47 = nitc__model___core__Sys___enum_kind(var46);
}
{
{ /* Inline kernel#Object#== (var43,var47) on <var43:MClassKind> */
var_other38 = var47;
{
{ /* Inline kernel#Object#is_same_instance (var43,var_other38) on <var43:MClassKind> */
var52 = var43 == var_other38;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var25 = var48;
}
var_need_corpse = var25;
if (unlikely(varonce==NULL)) {
var53 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "/* runtime class ";
var57 = core__flat___NativeString___to_s_full(var56, 17l, 17l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ": ";
var61 = core__flat___NativeString___to_s_full(var60, 2l, 2l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var53)->values[2]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " (dead=";
var65 = core__flat___NativeString___to_s_full(var64, 7l, 7l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[4]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "; need_corpse=";
var69 = core__flat___NativeString___to_s_full(var68, 14l, 14l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var53)->values[6]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ")*/";
var73 = core__flat___NativeString___to_s_full(var72, 3l, 3l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var53)->values[8]=var71;
} else {
var53 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var53)->values[1]=var_c_name;
{
var74 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var53)->values[3]=var74;
var75 = core__abstract_text___Bool___Object__to_s(var_is_dead);
((struct instance_core__NativeArray*)var53)->values[5]=var75;
var76 = core__abstract_text___Bool___Object__to_s(var_need_corpse);
((struct instance_core__NativeArray*)var53)->values[7]=var76;
{
var77 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce = var53;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var77); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var79 = !var_is_dead;
var_80 = var79;
if (var79){
var78 = var_80;
} else {
var78 = var_need_corpse;
}
if (var78){
if (unlikely(varonce81==NULL)) {
var82 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "class_";
var86 = core__flat___NativeString___to_s_full(var85, 6l, 6l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[0]=var84;
} else {
var82 = varonce81;
varonce81 = NULL;
}
((struct instance_core__NativeArray*)var82)->values[1]=var_c_name;
{
var87 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "extern const struct class class_";
var93 = core__flat___NativeString___to_s_full(var92, 32l, 32l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ";";
var97 = core__flat___NativeString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var89)->values[2]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
((struct instance_core__NativeArray*)var89)->values[1]=var_c_name;
{
var98 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var87, var98); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce99==NULL)) {
var100 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "const struct class class_";
var104 = core__flat___NativeString___to_s_full(var103, 25l, 25l);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var100)->values[0]=var102;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = " = {";
var108 = core__flat___NativeString___to_s_full(var107, 4l, 4l);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var100)->values[2]=var106;
} else {
var100 = varonce99;
varonce99 = NULL;
}
((struct instance_core__NativeArray*)var100)->values[1]=var_c_name;
{
var109 = ((val*(*)(val* self))(var100->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var100); /* native_to_s on <var100:NativeArray[String]>*/
}
varonce99 = var100;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var109); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce110==NULL)) {
var111 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ", /* box_kind */";
var115 = core__flat___NativeString___to_s_full(var114, 16l, 16l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[1]=var113;
} else {
var111 = varonce110;
varonce110 = NULL;
}
{
var116 = nitc___nitc__SeparateCompiler___box_kind_of(self, var_mclass);
}
var117 = core__flat___Int___core__abstract_text__Object__to_s(var116);
((struct instance_core__NativeArray*)var111)->values[0]=var117;
{
var118 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var118); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "{";
var122 = core__flat___NativeString___to_s_full(var121, 1l, 1l);
var120 = var122;
varonce119 = var120;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var125 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1067);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = ((val*(*)(val* self, val* p0))((((long)var123&3)?class_info[((long)var123&3)]:var123->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var123, var_mclass); /* get_or_null on <var123:Map[MClass, Array[nullable MPropDef]]>*/
}
var_vft = var126;
if (var_vft == NULL) {
var127 = 0; /* is null */
} else {
var127 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vft,((val*)NULL)) on <var_vft:nullable Array[nullable MPropDef]> */
var_other = ((val*)NULL);
{
var130 = ((short int(*)(val* self, val* p0))(var_vft->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vft, var_other); /* == on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])>*/
}
var131 = !var130;
var128 = var131;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
var127 = var128;
}
if (var127){
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var134 = var_vft->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
var_135 = var132;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_135) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_135:Int> isa OTHER */
/* <var_135:Int> isa OTHER */
var138 = 1; /* easy <var_135:Int> isa OTHER*/
if (unlikely(!var138)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var139 = var_i < var_135;
var136 = var139;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
} else {
goto BREAK_label;
}
{
var140 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var140;
if (var_mpropdef == NULL) {
var141 = 1; /* is null */
} else {
var141 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
var_other38 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other38) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var146 = var_mpropdef == var_other38;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "NULL, /* empty */";
var150 = core__flat___NativeString___to_s_full(var149, 17l, 17l);
var148 = var150;
varonce147 = var148;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype152 = type_nitc__MMethodDef.color;
idtype153 = type_nitc__MMethodDef.id;
if(cltype152 >= var_mpropdef->type->table_size) {
var151 = 0;
} else {
var151 = var_mpropdef->type->type_table[cltype152] == idtype153;
}
if (unlikely(!var151)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 844);
fatal_exit(1);
}
if (var_rta == NULL) {
var155 = 0; /* is null */
} else {
var155 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var158 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var159 = !var158;
var156 = var159;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
var_160 = var155;
if (var155){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var163 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = core___core__HashSet___core__abstract_collection__Collection__has(var161, var_mpropdef);
}
var165 = !var164;
var154 = var165;
} else {
var154 = var_160;
}
if (var154){
if (unlikely(varonce166==NULL)) {
var167 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "NULL, /* DEAD ";
var171 = core__flat___NativeString___to_s_full(var170, 14l, 14l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var167)->values[0]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = ":";
var175 = core__flat___NativeString___to_s_full(var174, 1l, 1l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var167)->values[2]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = ":";
var179 = core__flat___NativeString___to_s_full(var178, 1l, 1l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var167)->values[4]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = " */";
var183 = core__flat___NativeString___to_s_full(var182, 3l, 3l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var167)->values[6]=var181;
} else {
var167 = varonce166;
varonce166 = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var186 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__Object__to_s]))(var184); /* to_s on <var184:MModule>*/
}
((struct instance_core__NativeArray*)var167)->values[1]=var187;
{
var188 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var167)->values[3]=var188;
{
var189 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var167)->values[5]=var189;
{
var190 = ((val*(*)(val* self))(var167->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var167); /* native_to_s on <var167:NativeArray[String]>*/
}
varonce166 = var167;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label191;
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var196 = var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var194 = var196;
RET_LABEL195:(void)0;
}
}
var_197 = var194;
if (var194){
var193 = var_197;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var200 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
if (var198 == NULL) {
var201 = 1; /* is null */
} else {
var201 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var198,((val*)NULL)) on <var198:nullable MSignature> */
var_other38 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var198,var_other38) on <var198:nullable MSignature(MSignature)> */
var206 = var198 == var_other38;
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
var202 = var204;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
var201 = var202;
}
var193 = var201;
}
var_207 = var193;
if (var193){
var192 = var_207;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var210 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken (var208) on <var208:MProperty(MMethod)> */
var213 = var208->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var208:MProperty(MMethod)> */
var211 = var213;
RET_LABEL212:(void)0;
}
}
var192 = var211;
}
if (var192){
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "NULL, /* DEAD (BROKEN) ";
var219 = core__flat___NativeString___to_s_full(var218, 23l, 23l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[0]=var217;
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = ":";
var223 = core__flat___NativeString___to_s_full(var222, 1l, 1l);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var215)->values[2]=var221;
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = ":";
var227 = core__flat___NativeString___to_s_full(var226, 1l, 1l);
var225 = var227;
varonce224 = var225;
}
((struct instance_core__NativeArray*)var215)->values[4]=var225;
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = " */";
var231 = core__flat___NativeString___to_s_full(var230, 3l, 3l);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var215)->values[6]=var229;
} else {
var215 = varonce214;
varonce214 = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var234 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
var235 = ((val*(*)(val* self))(var232->class->vft[COLOR_core__abstract_text__Object__to_s]))(var232); /* to_s on <var232:MModule>*/
}
((struct instance_core__NativeArray*)var215)->values[1]=var235;
{
var236 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var215)->values[3]=var236;
{
var237 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var215)->values[5]=var237;
{
var238 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label191;
} else {
}
}
{
var239 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var239;
{
var240 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var240); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce241==NULL)) {
var242 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "(nitmethod_t)";
var246 = core__flat___NativeString___to_s_full(var245, 13l, 13l);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var242)->values[0]=var244;
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = ", /* pointer to ";
var250 = core__flat___NativeString___to_s_full(var249, 16l, 16l);
var248 = var250;
varonce247 = var248;
}
((struct instance_core__NativeArray*)var242)->values[2]=var248;
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = ":";
var254 = core__flat___NativeString___to_s_full(var253, 1l, 1l);
var252 = var254;
varonce251 = var252;
}
((struct instance_core__NativeArray*)var242)->values[4]=var252;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = ":";
var258 = core__flat___NativeString___to_s_full(var257, 1l, 1l);
var256 = var258;
varonce255 = var256;
}
((struct instance_core__NativeArray*)var242)->values[6]=var256;
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = " */";
var262 = core__flat___NativeString___to_s_full(var261, 3l, 3l);
var260 = var262;
varonce259 = var260;
}
((struct instance_core__NativeArray*)var242)->values[8]=var260;
} else {
var242 = varonce241;
varonce241 = NULL;
}
{
var263 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
((struct instance_core__NativeArray*)var242)->values[1]=var263;
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var266 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 380);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
var267 = ((val*(*)(val* self))(var264->class->vft[COLOR_core__abstract_text__Object__to_s]))(var264); /* to_s on <var264:MModule>*/
}
((struct instance_core__NativeArray*)var242)->values[3]=var267;
{
var268 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var242)->values[5]=var268;
{
var269 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var242)->values[7]=var269;
{
var270 = ((val*(*)(val* self))(var242->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var242); /* native_to_s on <var242:NativeArray[String]>*/
}
varonce241 = var242;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var270); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label191: (void)0;
{
var271 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var271;
}
BREAK_label: (void)0;
} else {
}
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "}";
var275 = core__flat___NativeString___to_s_full(var274, 1l, 1l);
var273 = var275;
varonce272 = var273;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var273); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = "};";
var279 = core__flat___NativeString___to_s_full(var278, 2l, 2l);
var277 = var279;
varonce276 = var277;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var277); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
{
var281 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var_282 = var281;
if (var281){
var280 = var_282;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var285 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
{ /* Inline model#MClass#name (var283) on <var283:MClass> */
var288 = var283->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var283:MClass> */
if (unlikely(var288 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var286 = var288;
RET_LABEL287:(void)0;
}
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "Pointer";
var292 = core__flat___NativeString___to_s_full(var291, 7l, 7l);
var290 = var292;
varonce289 = var290;
}
{
var293 = ((short int(*)(val* self, val* p0))(var286->class->vft[COLOR_core__kernel__Object___61d_61d]))(var286, var290); /* == on <var286:String>*/
}
var280 = var293;
}
if (var280){
{
{ /* Inline separate_compiler#MType#is_tagged (var_mtype) on <var_mtype:MClassType> */
var296 = var_mtype->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MClassType> */
var294 = var296;
RET_LABEL295:(void)0;
}
}
if (var294){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var299 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var297 = var299;
RET_LABEL298:(void)0;
}
}
if (unlikely(varonce300==NULL)) {
var301 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "struct instance_";
var305 = core__flat___NativeString___to_s_full(var304, 16l, 16l);
var303 = var305;
varonce302 = var303;
}
((struct instance_core__NativeArray*)var301)->values[0]=var303;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = " {";
var309 = core__flat___NativeString___to_s_full(var308, 2l, 2l);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var301)->values[2]=var307;
} else {
var301 = varonce300;
varonce300 = NULL;
}
((struct instance_core__NativeArray*)var301)->values[1]=var_c_name;
{
var310 = ((val*(*)(val* self))(var301->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var301); /* native_to_s on <var301:NativeArray[String]>*/
}
varonce300 = var301;
{
nitc___nitc__CodeWriter___add_decl(var297, var310); /* Direct call abstract_compiler#CodeWriter#add_decl on <var297:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var313 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "const struct type *type;";
var317 = core__flat___NativeString___to_s_full(var316, 24l, 24l);
var315 = var317;
varonce314 = var315;
}
{
nitc___nitc__CodeWriter___add_decl(var311, var315); /* Direct call abstract_compiler#CodeWriter#add_decl on <var311:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var320 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "const struct class *class;";
var324 = core__flat___NativeString___to_s_full(var323, 26l, 26l);
var322 = var324;
varonce321 = var322;
}
{
nitc___nitc__CodeWriter___add_decl(var318, var322); /* Direct call abstract_compiler#CodeWriter#add_decl on <var318:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var327 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
if (unlikely(varonce328==NULL)) {
var329 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = " value;";
var333 = core__flat___NativeString___to_s_full(var332, 7l, 7l);
var331 = var333;
varonce330 = var331;
}
((struct instance_core__NativeArray*)var329)->values[1]=var331;
} else {
var329 = varonce328;
varonce328 = NULL;
}
{
var334 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var329)->values[0]=var334;
{
var335 = ((val*(*)(val* self))(var329->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var329); /* native_to_s on <var329:NativeArray[String]>*/
}
varonce328 = var329;
{
nitc___nitc__CodeWriter___add_decl(var325, var335); /* Direct call abstract_compiler#CodeWriter#add_decl on <var325:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var338 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "};";
var342 = core__flat___NativeString___to_s_full(var341, 2l, 2l);
var340 = var342;
varonce339 = var340;
}
{
nitc___nitc__CodeWriter___add_decl(var336, var340); /* Direct call abstract_compiler#CodeWriter#add_decl on <var336:CodeWriter>*/
}
var_344 = var_is_dead;
if (var_is_dead){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var347 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var347 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var345 = var347;
RET_LABEL346:(void)0;
}
}
{
{ /* Inline model#MClass#name (var345) on <var345:MClass> */
var350 = var345->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var345:MClass> */
if (unlikely(var350 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var348 = var350;
RET_LABEL349:(void)0;
}
}
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "Pointer";
var354 = core__flat___NativeString___to_s_full(var353, 7l, 7l);
var352 = var354;
varonce351 = var352;
}
{
{ /* Inline kernel#Object#!= (var348,var352) on <var348:String> */
var_other = var352;
{
var357 = ((short int(*)(val* self, val* p0))(var348->class->vft[COLOR_core__kernel__Object___61d_61d]))(var348, var_other); /* == on <var348:String>*/
}
var358 = !var357;
var355 = var358;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
var343 = var355;
} else {
var343 = var_344;
}
if (var343){
goto RET_LABEL;
} else {
}
if (unlikely(varonce359==NULL)) {
var360 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "BOX_";
var364 = core__flat___NativeString___to_s_full(var363, 4l, 4l);
var362 = var364;
varonce361 = var362;
}
((struct instance_core__NativeArray*)var360)->values[0]=var362;
} else {
var360 = varonce359;
varonce359 = NULL;
}
((struct instance_core__NativeArray*)var360)->values[1]=var_c_name;
{
var365 = ((val*(*)(val* self))(var360->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var360); /* native_to_s on <var360:NativeArray[String]>*/
}
varonce359 = var360;
if (unlikely(varonce366==NULL)) {
var367 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = "val* BOX_";
var371 = core__flat___NativeString___to_s_full(var370, 9l, 9l);
var369 = var371;
varonce368 = var369;
}
((struct instance_core__NativeArray*)var367)->values[0]=var369;
if (likely(varonce372!=NULL)) {
var373 = varonce372;
} else {
var374 = "(";
var375 = core__flat___NativeString___to_s_full(var374, 1l, 1l);
var373 = var375;
varonce372 = var373;
}
((struct instance_core__NativeArray*)var367)->values[2]=var373;
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = ");";
var379 = core__flat___NativeString___to_s_full(var378, 2l, 2l);
var377 = var379;
varonce376 = var377;
}
((struct instance_core__NativeArray*)var367)->values[4]=var377;
} else {
var367 = varonce366;
varonce366 = NULL;
}
((struct instance_core__NativeArray*)var367)->values[1]=var_c_name;
{
var380 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var367)->values[3]=var380;
{
var381 = ((val*(*)(val* self))(var367->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var367); /* native_to_s on <var367:NativeArray[String]>*/
}
varonce366 = var367;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var365, var381); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce382==NULL)) {
var383 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = "/* allocate ";
var387 = core__flat___NativeString___to_s_full(var386, 12l, 12l);
var385 = var387;
varonce384 = var385;
}
((struct instance_core__NativeArray*)var383)->values[0]=var385;
if (likely(varonce388!=NULL)) {
var389 = varonce388;
} else {
var390 = " */";
var391 = core__flat___NativeString___to_s_full(var390, 3l, 3l);
var389 = var391;
varonce388 = var389;
}
((struct instance_core__NativeArray*)var383)->values[2]=var389;
} else {
var383 = varonce382;
varonce382 = NULL;
}
{
var392 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var383)->values[1]=var392;
{
var393 = ((val*(*)(val* self))(var383->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var383); /* native_to_s on <var383:NativeArray[String]>*/
}
varonce382 = var383;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var393); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce394==NULL)) {
var395 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce396!=NULL)) {
var397 = varonce396;
} else {
var398 = "val* BOX_";
var399 = core__flat___NativeString___to_s_full(var398, 9l, 9l);
var397 = var399;
varonce396 = var397;
}
((struct instance_core__NativeArray*)var395)->values[0]=var397;
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = "(";
var403 = core__flat___NativeString___to_s_full(var402, 1l, 1l);
var401 = var403;
varonce400 = var401;
}
((struct instance_core__NativeArray*)var395)->values[2]=var401;
if (likely(varonce404!=NULL)) {
var405 = varonce404;
} else {
var406 = " value) {";
var407 = core__flat___NativeString___to_s_full(var406, 9l, 9l);
var405 = var407;
varonce404 = var405;
}
((struct instance_core__NativeArray*)var395)->values[4]=var405;
} else {
var395 = varonce394;
varonce394 = NULL;
}
{
var408 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var395)->values[1]=var408;
{
var409 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var395)->values[3]=var409;
{
var410 = ((val*(*)(val* self))(var395->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var395); /* native_to_s on <var395:NativeArray[String]>*/
}
varonce394 = var395;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var410); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce411==NULL)) {
var412 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "struct instance_";
var416 = core__flat___NativeString___to_s_full(var415, 16l, 16l);
var414 = var416;
varonce413 = var414;
}
((struct instance_core__NativeArray*)var412)->values[0]=var414;
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "*res = nit_alloc(sizeof(struct instance_";
var420 = core__flat___NativeString___to_s_full(var419, 40l, 40l);
var418 = var420;
varonce417 = var418;
}
((struct instance_core__NativeArray*)var412)->values[2]=var418;
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "));";
var424 = core__flat___NativeString___to_s_full(var423, 3l, 3l);
var422 = var424;
varonce421 = var422;
}
((struct instance_core__NativeArray*)var412)->values[4]=var422;
} else {
var412 = varonce411;
varonce411 = NULL;
}
((struct instance_core__NativeArray*)var412)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var412)->values[3]=var_c_name;
{
var425 = ((val*(*)(val* self))(var412->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var412); /* native_to_s on <var412:NativeArray[String]>*/
}
varonce411 = var412;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var425); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var428 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var428 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var426 = var428;
RET_LABEL427:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var426) on <var426:AbstractCompiler(SeparateCompiler)> */
var431 = var426->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var426:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var431 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var429 = var431;
RET_LABEL430:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var429&3)?class_info[((long)var429&3)]:var429->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var429, var_mtype); /* add on <var429:Set[MType]>*/
}
if (unlikely(varonce432==NULL)) {
var433 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce434!=NULL)) {
var435 = varonce434;
} else {
var436 = "type_";
var437 = core__flat___NativeString___to_s_full(var436, 5l, 5l);
var435 = var437;
varonce434 = var435;
}
((struct instance_core__NativeArray*)var433)->values[0]=var435;
} else {
var433 = varonce432;
varonce432 = NULL;
}
((struct instance_core__NativeArray*)var433)->values[1]=var_c_name;
{
var438 = ((val*(*)(val* self))(var433->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var433); /* native_to_s on <var433:NativeArray[String]>*/
}
varonce432 = var433;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce439==NULL)) {
var440 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "res->type = &type_";
var444 = core__flat___NativeString___to_s_full(var443, 18l, 18l);
var442 = var444;
varonce441 = var442;
}
((struct instance_core__NativeArray*)var440)->values[0]=var442;
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = ";";
var448 = core__flat___NativeString___to_s_full(var447, 1l, 1l);
var446 = var448;
varonce445 = var446;
}
((struct instance_core__NativeArray*)var440)->values[2]=var446;
} else {
var440 = varonce439;
varonce439 = NULL;
}
((struct instance_core__NativeArray*)var440)->values[1]=var_c_name;
{
var449 = ((val*(*)(val* self))(var440->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var440); /* native_to_s on <var440:NativeArray[String]>*/
}
varonce439 = var440;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var449); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce450==NULL)) {
var451 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce452!=NULL)) {
var453 = varonce452;
} else {
var454 = "class_";
var455 = core__flat___NativeString___to_s_full(var454, 6l, 6l);
var453 = var455;
varonce452 = var453;
}
((struct instance_core__NativeArray*)var451)->values[0]=var453;
} else {
var451 = varonce450;
varonce450 = NULL;
}
((struct instance_core__NativeArray*)var451)->values[1]=var_c_name;
{
var456 = ((val*(*)(val* self))(var451->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var451); /* native_to_s on <var451:NativeArray[String]>*/
}
varonce450 = var451;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var456); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce457==NULL)) {
var458 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce459!=NULL)) {
var460 = varonce459;
} else {
var461 = "res->class = &class_";
var462 = core__flat___NativeString___to_s_full(var461, 20l, 20l);
var460 = var462;
varonce459 = var460;
}
((struct instance_core__NativeArray*)var458)->values[0]=var460;
if (likely(varonce463!=NULL)) {
var464 = varonce463;
} else {
var465 = ";";
var466 = core__flat___NativeString___to_s_full(var465, 1l, 1l);
var464 = var466;
varonce463 = var464;
}
((struct instance_core__NativeArray*)var458)->values[2]=var464;
} else {
var458 = varonce457;
varonce457 = NULL;
}
((struct instance_core__NativeArray*)var458)->values[1]=var_c_name;
{
var467 = ((val*(*)(val* self))(var458->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var458); /* native_to_s on <var458:NativeArray[String]>*/
}
varonce457 = var458;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var467); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce468!=NULL)) {
var469 = varonce468;
} else {
var470 = "res->value = value;";
var471 = core__flat___NativeString___to_s_full(var470, 19l, 19l);
var469 = var471;
varonce468 = var469;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var469); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "return (val*)res;";
var475 = core__flat___NativeString___to_s_full(var474, 17l, 17l);
var473 = var475;
varonce472 = var473;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var473); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce476!=NULL)) {
var477 = varonce476;
} else {
var478 = "}";
var479 = core__flat___NativeString___to_s_full(var478, 1l, 1l);
var477 = var479;
varonce476 = var477;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var477); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var482 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var482 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var480 = var482;
RET_LABEL481:(void)0;
}
}
{
{ /* Inline model#MClass#name (var480) on <var480:MClass> */
var485 = var480->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var480:MClass> */
if (unlikely(var485 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var483 = var485;
RET_LABEL484:(void)0;
}
}
if (likely(varonce486!=NULL)) {
var487 = varonce486;
} else {
var488 = "Pointer";
var489 = core__flat___NativeString___to_s_full(var488, 7l, 7l);
var487 = var489;
varonce486 = var487;
}
{
{ /* Inline kernel#Object#!= (var483,var487) on <var483:String> */
var_other = var487;
{
var492 = ((short int(*)(val* self, val* p0))(var483->class->vft[COLOR_core__kernel__Object___61d_61d]))(var483, var_other); /* == on <var483:String>*/
}
var493 = !var492;
var490 = var493;
goto RET_LABEL491;
RET_LABEL491:(void)0;
}
}
if (var490){
goto RET_LABEL;
} else {
}
{
var494 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var494;
if (unlikely(varonce495==NULL)) {
var496 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce497!=NULL)) {
var498 = varonce497;
} else {
var499 = "NEW_";
var500 = core__flat___NativeString___to_s_full(var499, 4l, 4l);
var498 = var500;
varonce497 = var498;
}
((struct instance_core__NativeArray*)var496)->values[0]=var498;
} else {
var496 = varonce495;
varonce495 = NULL;
}
((struct instance_core__NativeArray*)var496)->values[1]=var_c_name;
{
var501 = ((val*(*)(val* self))(var496->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var496); /* native_to_s on <var496:NativeArray[String]>*/
}
varonce495 = var496;
if (unlikely(varonce502==NULL)) {
var503 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce504!=NULL)) {
var505 = varonce504;
} else {
var506 = " NEW_";
var507 = core__flat___NativeString___to_s_full(var506, 5l, 5l);
var505 = var507;
varonce504 = var505;
}
((struct instance_core__NativeArray*)var503)->values[1]=var505;
if (likely(varonce508!=NULL)) {
var509 = varonce508;
} else {
var510 = "(const struct type* type);";
var511 = core__flat___NativeString___to_s_full(var510, 26l, 26l);
var509 = var511;
varonce508 = var509;
}
((struct instance_core__NativeArray*)var503)->values[3]=var509;
} else {
var503 = varonce502;
varonce502 = NULL;
}
{
var512 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var503)->values[0]=var512;
((struct instance_core__NativeArray*)var503)->values[2]=var_c_name;
{
var513 = ((val*(*)(val* self))(var503->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var503); /* native_to_s on <var503:NativeArray[String]>*/
}
varonce502 = var503;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var501, var513); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce514==NULL)) {
var515 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce516!=NULL)) {
var517 = varonce516;
} else {
var518 = "/* allocate ";
var519 = core__flat___NativeString___to_s_full(var518, 12l, 12l);
var517 = var519;
varonce516 = var517;
}
((struct instance_core__NativeArray*)var515)->values[0]=var517;
if (likely(varonce520!=NULL)) {
var521 = varonce520;
} else {
var522 = " */";
var523 = core__flat___NativeString___to_s_full(var522, 3l, 3l);
var521 = var523;
varonce520 = var521;
}
((struct instance_core__NativeArray*)var515)->values[2]=var521;
} else {
var515 = varonce514;
varonce514 = NULL;
}
{
var524 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var515)->values[1]=var524;
{
var525 = ((val*(*)(val* self))(var515->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var515); /* native_to_s on <var515:NativeArray[String]>*/
}
varonce514 = var515;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var525); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce526==NULL)) {
var527 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce528!=NULL)) {
var529 = varonce528;
} else {
var530 = " NEW_";
var531 = core__flat___NativeString___to_s_full(var530, 5l, 5l);
var529 = var531;
varonce528 = var529;
}
((struct instance_core__NativeArray*)var527)->values[1]=var529;
if (likely(varonce532!=NULL)) {
var533 = varonce532;
} else {
var534 = "(const struct type* type) {";
var535 = core__flat___NativeString___to_s_full(var534, 27l, 27l);
var533 = var535;
varonce532 = var533;
}
((struct instance_core__NativeArray*)var527)->values[3]=var533;
} else {
var527 = varonce526;
varonce526 = NULL;
}
{
var536 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var527)->values[0]=var536;
((struct instance_core__NativeArray*)var527)->values[2]=var_c_name;
{
var537 = ((val*(*)(val* self))(var527->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var527); /* native_to_s on <var527:NativeArray[String]>*/
}
varonce526 = var527;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var537); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce538==NULL)) {
var539 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce540!=NULL)) {
var541 = varonce540;
} else {
var542 = " is DEAD";
var543 = core__flat___NativeString___to_s_full(var542, 8l, 8l);
var541 = var543;
varonce540 = var541;
}
((struct instance_core__NativeArray*)var539)->values[1]=var541;
} else {
var539 = varonce538;
varonce538 = NULL;
}
{
var544 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var539)->values[0]=var544;
{
var545 = ((val*(*)(val* self))(var539->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var539); /* native_to_s on <var539:NativeArray[String]>*/
}
varonce538 = var539;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var545); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce546!=NULL)) {
var547 = varonce546;
} else {
var548 = "self";
var549 = core__flat___NativeString___to_s_full(var548, 4l, 4l);
var547 = var549;
varonce546 = var547;
}
{
var550 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var547);
}
var_res = var550;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL551:(void)0;
}
}
if (unlikely(varonce552==NULL)) {
var553 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce554!=NULL)) {
var555 = varonce554;
} else {
var556 = " = nit_alloc(sizeof(struct instance_";
var557 = core__flat___NativeString___to_s_full(var556, 36l, 36l);
var555 = var557;
varonce554 = var555;
}
((struct instance_core__NativeArray*)var553)->values[1]=var555;
if (likely(varonce558!=NULL)) {
var559 = varonce558;
} else {
var560 = "));";
var561 = core__flat___NativeString___to_s_full(var560, 3l, 3l);
var559 = var561;
varonce558 = var559;
}
((struct instance_core__NativeArray*)var553)->values[3]=var559;
} else {
var553 = varonce552;
varonce552 = NULL;
}
{
var562 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var553)->values[0]=var562;
{
var563 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var553)->values[2]=var563;
{
var564 = ((val*(*)(val* self))(var553->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var553); /* native_to_s on <var553:NativeArray[String]>*/
}
varonce552 = var553;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var564); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce565==NULL)) {
var566 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce567!=NULL)) {
var568 = varonce567;
} else {
var569 = "->type = type;";
var570 = core__flat___NativeString___to_s_full(var569, 14l, 14l);
var568 = var570;
varonce567 = var568;
}
((struct instance_core__NativeArray*)var566)->values[1]=var568;
} else {
var566 = varonce565;
varonce565 = NULL;
}
{
var571 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var566)->values[0]=var571;
{
var572 = ((val*(*)(val* self))(var566->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var566); /* native_to_s on <var566:NativeArray[String]>*/
}
varonce565 = var566;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var572); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce573!=NULL)) {
var574 = varonce573;
} else {
var575 = "type";
var576 = core__flat___NativeString___to_s_full(var575, 4l, 4l);
var574 = var576;
varonce573 = var574;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var574); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce577==NULL)) {
var578 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce579!=NULL)) {
var580 = varonce579;
} else {
var581 = "class_";
var582 = core__flat___NativeString___to_s_full(var581, 6l, 6l);
var580 = var582;
varonce579 = var580;
}
((struct instance_core__NativeArray*)var578)->values[0]=var580;
} else {
var578 = varonce577;
varonce577 = NULL;
}
((struct instance_core__NativeArray*)var578)->values[1]=var_c_name;
{
var583 = ((val*(*)(val* self))(var578->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var578); /* native_to_s on <var578:NativeArray[String]>*/
}
varonce577 = var578;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var583); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce584==NULL)) {
var585 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce586!=NULL)) {
var587 = varonce586;
} else {
var588 = "->class = &class_";
var589 = core__flat___NativeString___to_s_full(var588, 17l, 17l);
var587 = var589;
varonce586 = var587;
}
((struct instance_core__NativeArray*)var585)->values[1]=var587;
if (likely(varonce590!=NULL)) {
var591 = varonce590;
} else {
var592 = ";";
var593 = core__flat___NativeString___to_s_full(var592, 1l, 1l);
var591 = var593;
varonce590 = var591;
}
((struct instance_core__NativeArray*)var585)->values[3]=var591;
} else {
var585 = varonce584;
varonce584 = NULL;
}
{
var594 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var585)->values[0]=var594;
((struct instance_core__NativeArray*)var585)->values[2]=var_c_name;
{
var595 = ((val*(*)(val* self))(var585->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var585); /* native_to_s on <var585:NativeArray[String]>*/
}
varonce584 = var585;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var595); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce596==NULL)) {
var597 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce598!=NULL)) {
var599 = varonce598;
} else {
var600 = "((struct instance_";
var601 = core__flat___NativeString___to_s_full(var600, 18l, 18l);
var599 = var601;
varonce598 = var599;
}
((struct instance_core__NativeArray*)var597)->values[0]=var599;
if (likely(varonce602!=NULL)) {
var603 = varonce602;
} else {
var604 = "*)";
var605 = core__flat___NativeString___to_s_full(var604, 2l, 2l);
var603 = var605;
varonce602 = var603;
}
((struct instance_core__NativeArray*)var597)->values[2]=var603;
if (likely(varonce606!=NULL)) {
var607 = varonce606;
} else {
var608 = ")->value = NULL;";
var609 = core__flat___NativeString___to_s_full(var608, 16l, 16l);
var607 = var609;
varonce606 = var607;
}
((struct instance_core__NativeArray*)var597)->values[4]=var607;
} else {
var597 = varonce596;
varonce596 = NULL;
}
{
var610 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var597)->values[1]=var610;
{
var611 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var597)->values[3]=var611;
{
var612 = ((val*(*)(val* self))(var597->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var597); /* native_to_s on <var597:NativeArray[String]>*/
}
varonce596 = var597;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var612); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce613==NULL)) {
var614 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce615!=NULL)) {
var616 = varonce615;
} else {
var617 = "return ";
var618 = core__flat___NativeString___to_s_full(var617, 7l, 7l);
var616 = var618;
varonce615 = var616;
}
((struct instance_core__NativeArray*)var614)->values[0]=var616;
if (likely(varonce619!=NULL)) {
var620 = varonce619;
} else {
var621 = ";";
var622 = core__flat___NativeString___to_s_full(var621, 1l, 1l);
var620 = var622;
varonce619 = var620;
}
((struct instance_core__NativeArray*)var614)->values[2]=var620;
} else {
var614 = varonce613;
varonce613 = NULL;
}
{
var623 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var614)->values[1]=var623;
{
var624 = ((val*(*)(val* self))(var614->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var614); /* native_to_s on <var614:NativeArray[String]>*/
}
varonce613 = var614;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var624); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce625!=NULL)) {
var626 = varonce625;
} else {
var627 = "}";
var628 = core__flat___NativeString___to_s_full(var627, 1l, 1l);
var626 = var628;
varonce625 = var626;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var626); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var631 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var631 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var629 = var631;
RET_LABEL630:(void)0;
}
}
if (likely(varonce632!=NULL)) {
var633 = varonce632;
} else {
var634 = "NativeArray";
var635 = core__flat___NativeString___to_s_full(var634, 11l, 11l);
var633 = var635;
varonce632 = var633;
}
{
var636 = ((short int(*)(val* self, val* p0))(var629->class->vft[COLOR_core__kernel__Object___61d_61d]))(var629, var633); /* == on <var629:String>*/
}
if (var636){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var639 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var639 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var637 = var639;
RET_LABEL638:(void)0;
}
}
if (unlikely(varonce640==NULL)) {
var641 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce642!=NULL)) {
var643 = varonce642;
} else {
var644 = "struct instance_";
var645 = core__flat___NativeString___to_s_full(var644, 16l, 16l);
var643 = var645;
varonce642 = var643;
}
((struct instance_core__NativeArray*)var641)->values[0]=var643;
if (likely(varonce646!=NULL)) {
var647 = varonce646;
} else {
var648 = " {";
var649 = core__flat___NativeString___to_s_full(var648, 2l, 2l);
var647 = var649;
varonce646 = var647;
}
((struct instance_core__NativeArray*)var641)->values[2]=var647;
} else {
var641 = varonce640;
varonce640 = NULL;
}
((struct instance_core__NativeArray*)var641)->values[1]=var_c_name;
{
var650 = ((val*(*)(val* self))(var641->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var641); /* native_to_s on <var641:NativeArray[String]>*/
}
varonce640 = var641;
{
nitc___nitc__CodeWriter___add_decl(var637, var650); /* Direct call abstract_compiler#CodeWriter#add_decl on <var637:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var653 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var653 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var651 = var653;
RET_LABEL652:(void)0;
}
}
if (likely(varonce654!=NULL)) {
var655 = varonce654;
} else {
var656 = "const struct type *type;";
var657 = core__flat___NativeString___to_s_full(var656, 24l, 24l);
var655 = var657;
varonce654 = var655;
}
{
nitc___nitc__CodeWriter___add_decl(var651, var655); /* Direct call abstract_compiler#CodeWriter#add_decl on <var651:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var660 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var660 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var658 = var660;
RET_LABEL659:(void)0;
}
}
if (likely(varonce661!=NULL)) {
var662 = varonce661;
} else {
var663 = "const struct class *class;";
var664 = core__flat___NativeString___to_s_full(var663, 26l, 26l);
var662 = var664;
varonce661 = var662;
}
{
nitc___nitc__CodeWriter___add_decl(var658, var662); /* Direct call abstract_compiler#CodeWriter#add_decl on <var658:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var667 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var667 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var665 = var667;
RET_LABEL666:(void)0;
}
}
if (likely(varonce668!=NULL)) {
var669 = varonce668;
} else {
var670 = "int length;";
var671 = core__flat___NativeString___to_s_full(var670, 11l, 11l);
var669 = var671;
varonce668 = var669;
}
{
nitc___nitc__CodeWriter___add_decl(var665, var669); /* Direct call abstract_compiler#CodeWriter#add_decl on <var665:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var674 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var674 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var672 = var674;
RET_LABEL673:(void)0;
}
}
if (likely(varonce675!=NULL)) {
var676 = varonce675;
} else {
var677 = "val* values[0];";
var678 = core__flat___NativeString___to_s_full(var677, 15l, 15l);
var676 = var678;
varonce675 = var676;
}
{
nitc___nitc__CodeWriter___add_decl(var672, var676); /* Direct call abstract_compiler#CodeWriter#add_decl on <var672:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var681 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var681 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var679 = var681;
RET_LABEL680:(void)0;
}
}
if (likely(varonce682!=NULL)) {
var683 = varonce682;
} else {
var684 = "};";
var685 = core__flat___NativeString___to_s_full(var684, 2l, 2l);
var683 = var685;
varonce682 = var683;
}
{
nitc___nitc__CodeWriter___add_decl(var679, var683); /* Direct call abstract_compiler#CodeWriter#add_decl on <var679:CodeWriter>*/
}
if (unlikely(varonce686==NULL)) {
var687 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce688!=NULL)) {
var689 = varonce688;
} else {
var690 = "NEW_";
var691 = core__flat___NativeString___to_s_full(var690, 4l, 4l);
var689 = var691;
varonce688 = var689;
}
((struct instance_core__NativeArray*)var687)->values[0]=var689;
} else {
var687 = varonce686;
varonce686 = NULL;
}
((struct instance_core__NativeArray*)var687)->values[1]=var_c_name;
{
var692 = ((val*(*)(val* self))(var687->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var687); /* native_to_s on <var687:NativeArray[String]>*/
}
varonce686 = var687;
if (unlikely(varonce693==NULL)) {
var694 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce695!=NULL)) {
var696 = varonce695;
} else {
var697 = " NEW_";
var698 = core__flat___NativeString___to_s_full(var697, 5l, 5l);
var696 = var698;
varonce695 = var696;
}
((struct instance_core__NativeArray*)var694)->values[1]=var696;
if (likely(varonce699!=NULL)) {
var700 = varonce699;
} else {
var701 = "(int length, const struct type* type);";
var702 = core__flat___NativeString___to_s_full(var701, 38l, 38l);
var700 = var702;
varonce699 = var700;
}
((struct instance_core__NativeArray*)var694)->values[3]=var700;
} else {
var694 = varonce693;
varonce693 = NULL;
}
{
var703 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var694)->values[0]=var703;
((struct instance_core__NativeArray*)var694)->values[2]=var_c_name;
{
var704 = ((val*(*)(val* self))(var694->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var694); /* native_to_s on <var694:NativeArray[String]>*/
}
varonce693 = var694;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var692, var704); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce705==NULL)) {
var706 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce707!=NULL)) {
var708 = varonce707;
} else {
var709 = "/* allocate ";
var710 = core__flat___NativeString___to_s_full(var709, 12l, 12l);
var708 = var710;
varonce707 = var708;
}
((struct instance_core__NativeArray*)var706)->values[0]=var708;
if (likely(varonce711!=NULL)) {
var712 = varonce711;
} else {
var713 = " */";
var714 = core__flat___NativeString___to_s_full(var713, 3l, 3l);
var712 = var714;
varonce711 = var712;
}
((struct instance_core__NativeArray*)var706)->values[2]=var712;
} else {
var706 = varonce705;
varonce705 = NULL;
}
{
var715 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var706)->values[1]=var715;
{
var716 = ((val*(*)(val* self))(var706->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var706); /* native_to_s on <var706:NativeArray[String]>*/
}
varonce705 = var706;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var716); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce717==NULL)) {
var718 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce719!=NULL)) {
var720 = varonce719;
} else {
var721 = " NEW_";
var722 = core__flat___NativeString___to_s_full(var721, 5l, 5l);
var720 = var722;
varonce719 = var720;
}
((struct instance_core__NativeArray*)var718)->values[1]=var720;
if (likely(varonce723!=NULL)) {
var724 = varonce723;
} else {
var725 = "(int length, const struct type* type) {";
var726 = core__flat___NativeString___to_s_full(var725, 39l, 39l);
var724 = var726;
varonce723 = var724;
}
((struct instance_core__NativeArray*)var718)->values[3]=var724;
} else {
var718 = varonce717;
varonce717 = NULL;
}
{
var727 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var718)->values[0]=var727;
((struct instance_core__NativeArray*)var718)->values[2]=var_c_name;
{
var728 = ((val*(*)(val* self))(var718->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var718); /* native_to_s on <var718:NativeArray[String]>*/
}
varonce717 = var718;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var728); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce729!=NULL)) {
var730 = varonce729;
} else {
var731 = "self";
var732 = core__flat___NativeString___to_s_full(var731, 4l, 4l);
var730 = var732;
varonce729 = var730;
}
{
var733 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var730);
}
var_res734 = var733;
if (unlikely(varonce735==NULL)) {
var736 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce737!=NULL)) {
var738 = varonce737;
} else {
var739 = "struct instance_";
var740 = core__flat___NativeString___to_s_full(var739, 16l, 16l);
var738 = var740;
varonce737 = var738;
}
((struct instance_core__NativeArray*)var736)->values[0]=var738;
if (likely(varonce741!=NULL)) {
var742 = varonce741;
} else {
var743 = " *";
var744 = core__flat___NativeString___to_s_full(var743, 2l, 2l);
var742 = var744;
varonce741 = var742;
}
((struct instance_core__NativeArray*)var736)->values[2]=var742;
if (likely(varonce745!=NULL)) {
var746 = varonce745;
} else {
var747 = ";";
var748 = core__flat___NativeString___to_s_full(var747, 1l, 1l);
var746 = var748;
varonce745 = var746;
}
((struct instance_core__NativeArray*)var736)->values[4]=var746;
} else {
var736 = varonce735;
varonce735 = NULL;
}
((struct instance_core__NativeArray*)var736)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var736)->values[3]=var_res734;
{
var749 = ((val*(*)(val* self))(var736->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var736); /* native_to_s on <var736:NativeArray[String]>*/
}
varonce735 = var736;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var749); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var750 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var751 = core___core__SequenceRead___Collection__first(var750);
}
var_mtype_elt = var751;
if (unlikely(varonce752==NULL)) {
var753 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce754!=NULL)) {
var755 = varonce754;
} else {
var756 = " = nit_alloc(sizeof(struct instance_";
var757 = core__flat___NativeString___to_s_full(var756, 36l, 36l);
var755 = var757;
varonce754 = var755;
}
((struct instance_core__NativeArray*)var753)->values[1]=var755;
if (likely(varonce758!=NULL)) {
var759 = varonce758;
} else {
var760 = ") + length*sizeof(";
var761 = core__flat___NativeString___to_s_full(var760, 18l, 18l);
var759 = var761;
varonce758 = var759;
}
((struct instance_core__NativeArray*)var753)->values[3]=var759;
if (likely(varonce762!=NULL)) {
var763 = varonce762;
} else {
var764 = "));";
var765 = core__flat___NativeString___to_s_full(var764, 3l, 3l);
var763 = var765;
varonce762 = var763;
}
((struct instance_core__NativeArray*)var753)->values[5]=var763;
} else {
var753 = varonce752;
varonce752 = NULL;
}
((struct instance_core__NativeArray*)var753)->values[0]=var_res734;
((struct instance_core__NativeArray*)var753)->values[2]=var_c_name;
{
var766 = ((val*(*)(val* self))(var_mtype_elt->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype_elt); /* ctype on <var_mtype_elt:MType>*/
}
((struct instance_core__NativeArray*)var753)->values[4]=var766;
{
var767 = ((val*(*)(val* self))(var753->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var753); /* native_to_s on <var753:NativeArray[String]>*/
}
varonce752 = var753;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var767); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce768==NULL)) {
var769 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce770!=NULL)) {
var771 = varonce770;
} else {
var772 = "->type = type;";
var773 = core__flat___NativeString___to_s_full(var772, 14l, 14l);
var771 = var773;
varonce770 = var771;
}
((struct instance_core__NativeArray*)var769)->values[1]=var771;
} else {
var769 = varonce768;
varonce768 = NULL;
}
((struct instance_core__NativeArray*)var769)->values[0]=var_res734;
{
var774 = ((val*(*)(val* self))(var769->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var769); /* native_to_s on <var769:NativeArray[String]>*/
}
varonce768 = var769;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var774); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce775!=NULL)) {
var776 = varonce775;
} else {
var777 = "type";
var778 = core__flat___NativeString___to_s_full(var777, 4l, 4l);
var776 = var778;
varonce775 = var776;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var776); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce779==NULL)) {
var780 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce781!=NULL)) {
var782 = varonce781;
} else {
var783 = "class_";
var784 = core__flat___NativeString___to_s_full(var783, 6l, 6l);
var782 = var784;
varonce781 = var782;
}
((struct instance_core__NativeArray*)var780)->values[0]=var782;
} else {
var780 = varonce779;
varonce779 = NULL;
}
((struct instance_core__NativeArray*)var780)->values[1]=var_c_name;
{
var785 = ((val*(*)(val* self))(var780->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var780); /* native_to_s on <var780:NativeArray[String]>*/
}
varonce779 = var780;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var785); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce786==NULL)) {
var787 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce788!=NULL)) {
var789 = varonce788;
} else {
var790 = "->class = &class_";
var791 = core__flat___NativeString___to_s_full(var790, 17l, 17l);
var789 = var791;
varonce788 = var789;
}
((struct instance_core__NativeArray*)var787)->values[1]=var789;
if (likely(varonce792!=NULL)) {
var793 = varonce792;
} else {
var794 = ";";
var795 = core__flat___NativeString___to_s_full(var794, 1l, 1l);
var793 = var795;
varonce792 = var793;
}
((struct instance_core__NativeArray*)var787)->values[3]=var793;
} else {
var787 = varonce786;
varonce786 = NULL;
}
((struct instance_core__NativeArray*)var787)->values[0]=var_res734;
((struct instance_core__NativeArray*)var787)->values[2]=var_c_name;
{
var796 = ((val*(*)(val* self))(var787->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var787); /* native_to_s on <var787:NativeArray[String]>*/
}
varonce786 = var787;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var796); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce797==NULL)) {
var798 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce799!=NULL)) {
var800 = varonce799;
} else {
var801 = "->length = length;";
var802 = core__flat___NativeString___to_s_full(var801, 18l, 18l);
var800 = var802;
varonce799 = var800;
}
((struct instance_core__NativeArray*)var798)->values[1]=var800;
} else {
var798 = varonce797;
varonce797 = NULL;
}
((struct instance_core__NativeArray*)var798)->values[0]=var_res734;
{
var803 = ((val*(*)(val* self))(var798->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var798); /* native_to_s on <var798:NativeArray[String]>*/
}
varonce797 = var798;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var803); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce804==NULL)) {
var805 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce806!=NULL)) {
var807 = varonce806;
} else {
var808 = "return (val*)";
var809 = core__flat___NativeString___to_s_full(var808, 13l, 13l);
var807 = var809;
varonce806 = var807;
}
((struct instance_core__NativeArray*)var805)->values[0]=var807;
if (likely(varonce810!=NULL)) {
var811 = varonce810;
} else {
var812 = ";";
var813 = core__flat___NativeString___to_s_full(var812, 1l, 1l);
var811 = var813;
varonce810 = var811;
}
((struct instance_core__NativeArray*)var805)->values[2]=var811;
} else {
var805 = varonce804;
varonce804 = NULL;
}
((struct instance_core__NativeArray*)var805)->values[1]=var_res734;
{
var814 = ((val*(*)(val* self))(var805->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var805); /* native_to_s on <var805:NativeArray[String]>*/
}
varonce804 = var805;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var814); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce815!=NULL)) {
var816 = varonce815;
} else {
var817 = "}";
var818 = core__flat___NativeString___to_s_full(var817, 1l, 1l);
var816 = var818;
varonce815 = var816;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var816); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var822 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var822 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var820 = var822;
RET_LABEL821:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var820) on <var820:MClass> */
var825 = var820->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var820:MClass> */
if (unlikely(var825 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 459);
fatal_exit(1);
}
var823 = var825;
RET_LABEL824:(void)0;
}
}
var826 = glob_sys;
{
var827 = nitc__model___core__Sys___extern_kind(var826);
}
{
{ /* Inline kernel#Object#== (var823,var827) on <var823:MClassKind> */
var_other38 = var827;
{
{ /* Inline kernel#Object#is_same_instance (var823,var_other38) on <var823:MClassKind> */
var832 = var823 == var_other38;
var830 = var832;
goto RET_LABEL831;
RET_LABEL831:(void)0;
}
}
var828 = var830;
goto RET_LABEL829;
RET_LABEL829:(void)0;
}
}
var_833 = var828;
if (var828){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var836 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var836 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1163);
fatal_exit(1);
}
var834 = var836;
RET_LABEL835:(void)0;
}
}
{
{ /* Inline model#MClass#name (var834) on <var834:MClass> */
var839 = var834->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var834:MClass> */
if (unlikely(var839 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var837 = var839;
RET_LABEL838:(void)0;
}
}
if (likely(varonce840!=NULL)) {
var841 = varonce840;
} else {
var842 = "NativeString";
var843 = core__flat___NativeString___to_s_full(var842, 12l, 12l);
var841 = var843;
varonce840 = var841;
}
{
{ /* Inline kernel#Object#!= (var837,var841) on <var837:String> */
var_other = var841;
{
var846 = ((short int(*)(val* self, val* p0))(var837->class->vft[COLOR_core__kernel__Object___61d_61d]))(var837, var_other); /* == on <var837:String>*/
}
var847 = !var846;
var844 = var847;
goto RET_LABEL845;
RET_LABEL845:(void)0;
}
}
var819 = var844;
} else {
var819 = var_833;
}
if (var819){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var850 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var850 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var848 = var850;
RET_LABEL849:(void)0;
}
}
{
var851 = nitc__model___MModule___pointer_type(var848);
}
var_pointer_type = var851;
if (unlikely(varonce852==NULL)) {
var853 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce854!=NULL)) {
var855 = varonce854;
} else {
var856 = "NEW_";
var857 = core__flat___NativeString___to_s_full(var856, 4l, 4l);
var855 = var857;
varonce854 = var855;
}
((struct instance_core__NativeArray*)var853)->values[0]=var855;
} else {
var853 = varonce852;
varonce852 = NULL;
}
((struct instance_core__NativeArray*)var853)->values[1]=var_c_name;
{
var858 = ((val*(*)(val* self))(var853->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var853); /* native_to_s on <var853:NativeArray[String]>*/
}
varonce852 = var853;
if (unlikely(varonce859==NULL)) {
var860 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce861!=NULL)) {
var862 = varonce861;
} else {
var863 = " NEW_";
var864 = core__flat___NativeString___to_s_full(var863, 5l, 5l);
var862 = var864;
varonce861 = var862;
}
((struct instance_core__NativeArray*)var860)->values[1]=var862;
if (likely(varonce865!=NULL)) {
var866 = varonce865;
} else {
var867 = "(const struct type* type);";
var868 = core__flat___NativeString___to_s_full(var867, 26l, 26l);
var866 = var868;
varonce865 = var866;
}
((struct instance_core__NativeArray*)var860)->values[3]=var866;
} else {
var860 = varonce859;
varonce859 = NULL;
}
{
var869 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var860)->values[0]=var869;
((struct instance_core__NativeArray*)var860)->values[2]=var_c_name;
{
var870 = ((val*(*)(val* self))(var860->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var860); /* native_to_s on <var860:NativeArray[String]>*/
}
varonce859 = var860;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var858, var870); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce871==NULL)) {
var872 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce873!=NULL)) {
var874 = varonce873;
} else {
var875 = "/* allocate extern ";
var876 = core__flat___NativeString___to_s_full(var875, 19l, 19l);
var874 = var876;
varonce873 = var874;
}
((struct instance_core__NativeArray*)var872)->values[0]=var874;
if (likely(varonce877!=NULL)) {
var878 = varonce877;
} else {
var879 = " */";
var880 = core__flat___NativeString___to_s_full(var879, 3l, 3l);
var878 = var880;
varonce877 = var878;
}
((struct instance_core__NativeArray*)var872)->values[2]=var878;
} else {
var872 = varonce871;
varonce871 = NULL;
}
{
var881 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var872)->values[1]=var881;
{
var882 = ((val*(*)(val* self))(var872->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var872); /* native_to_s on <var872:NativeArray[String]>*/
}
varonce871 = var872;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var882); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce883==NULL)) {
var884 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce885!=NULL)) {
var886 = varonce885;
} else {
var887 = " NEW_";
var888 = core__flat___NativeString___to_s_full(var887, 5l, 5l);
var886 = var888;
varonce885 = var886;
}
((struct instance_core__NativeArray*)var884)->values[1]=var886;
if (likely(varonce889!=NULL)) {
var890 = varonce889;
} else {
var891 = "(const struct type* type) {";
var892 = core__flat___NativeString___to_s_full(var891, 27l, 27l);
var890 = var892;
varonce889 = var890;
}
((struct instance_core__NativeArray*)var884)->values[3]=var890;
} else {
var884 = varonce883;
varonce883 = NULL;
}
{
var893 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var884)->values[0]=var893;
((struct instance_core__NativeArray*)var884)->values[2]=var_c_name;
{
var894 = ((val*(*)(val* self))(var884->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var884); /* native_to_s on <var884:NativeArray[String]>*/
}
varonce883 = var884;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var894); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce895==NULL)) {
var896 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce897!=NULL)) {
var898 = varonce897;
} else {
var899 = " is DEAD";
var900 = core__flat___NativeString___to_s_full(var899, 8l, 8l);
var898 = var900;
varonce897 = var898;
}
((struct instance_core__NativeArray*)var896)->values[1]=var898;
} else {
var896 = varonce895;
varonce895 = NULL;
}
{
var901 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var896)->values[0]=var901;
{
var902 = ((val*(*)(val* self))(var896->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var896); /* native_to_s on <var896:NativeArray[String]>*/
}
varonce895 = var896;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var902); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce903!=NULL)) {
var904 = varonce903;
} else {
var905 = "self";
var906 = core__flat___NativeString___to_s_full(var905, 4l, 4l);
var904 = var906;
varonce903 = var904;
}
{
var907 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var904);
}
var_res908 = var907;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res908,1) on <var_res908:RuntimeVariable> */
var_res908->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res908:RuntimeVariable> */
RET_LABEL909:(void)0;
}
}
if (unlikely(varonce910==NULL)) {
var911 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce912!=NULL)) {
var913 = varonce912;
} else {
var914 = " = nit_alloc(sizeof(struct instance_";
var915 = core__flat___NativeString___to_s_full(var914, 36l, 36l);
var913 = var915;
varonce912 = var913;
}
((struct instance_core__NativeArray*)var911)->values[1]=var913;
if (likely(varonce916!=NULL)) {
var917 = varonce916;
} else {
var918 = "));";
var919 = core__flat___NativeString___to_s_full(var918, 3l, 3l);
var917 = var919;
varonce916 = var917;
}
((struct instance_core__NativeArray*)var911)->values[3]=var917;
} else {
var911 = varonce910;
varonce910 = NULL;
}
{
var920 = ((val*(*)(val* self))(var_res908->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res908); /* to_s on <var_res908:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var911)->values[0]=var920;
{
var921 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var911)->values[2]=var921;
{
var922 = ((val*(*)(val* self))(var911->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var911); /* native_to_s on <var911:NativeArray[String]>*/
}
varonce910 = var911;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var922); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce923==NULL)) {
var924 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce925!=NULL)) {
var926 = varonce925;
} else {
var927 = "->type = type;";
var928 = core__flat___NativeString___to_s_full(var927, 14l, 14l);
var926 = var928;
varonce925 = var926;
}
((struct instance_core__NativeArray*)var924)->values[1]=var926;
} else {
var924 = varonce923;
varonce923 = NULL;
}
{
var929 = ((val*(*)(val* self))(var_res908->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res908); /* to_s on <var_res908:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var924)->values[0]=var929;
{
var930 = ((val*(*)(val* self))(var924->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var924); /* native_to_s on <var924:NativeArray[String]>*/
}
varonce923 = var924;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var930); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce931!=NULL)) {
var932 = varonce931;
} else {
var933 = "type";
var934 = core__flat___NativeString___to_s_full(var933, 4l, 4l);
var932 = var934;
varonce931 = var932;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var932); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce935==NULL)) {
var936 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce937!=NULL)) {
var938 = varonce937;
} else {
var939 = "class_";
var940 = core__flat___NativeString___to_s_full(var939, 6l, 6l);
var938 = var940;
varonce937 = var938;
}
((struct instance_core__NativeArray*)var936)->values[0]=var938;
} else {
var936 = varonce935;
varonce935 = NULL;
}
((struct instance_core__NativeArray*)var936)->values[1]=var_c_name;
{
var941 = ((val*(*)(val* self))(var936->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var936); /* native_to_s on <var936:NativeArray[String]>*/
}
varonce935 = var936;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var941); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce942==NULL)) {
var943 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce944!=NULL)) {
var945 = varonce944;
} else {
var946 = "->class = &class_";
var947 = core__flat___NativeString___to_s_full(var946, 17l, 17l);
var945 = var947;
varonce944 = var945;
}
((struct instance_core__NativeArray*)var943)->values[1]=var945;
if (likely(varonce948!=NULL)) {
var949 = varonce948;
} else {
var950 = ";";
var951 = core__flat___NativeString___to_s_full(var950, 1l, 1l);
var949 = var951;
varonce948 = var949;
}
((struct instance_core__NativeArray*)var943)->values[3]=var949;
} else {
var943 = varonce942;
varonce942 = NULL;
}
{
var952 = ((val*(*)(val* self))(var_res908->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res908); /* to_s on <var_res908:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var943)->values[0]=var952;
((struct instance_core__NativeArray*)var943)->values[2]=var_c_name;
{
var953 = ((val*(*)(val* self))(var943->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var943); /* native_to_s on <var943:NativeArray[String]>*/
}
varonce942 = var943;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var953); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce954==NULL)) {
var955 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce956!=NULL)) {
var957 = varonce956;
} else {
var958 = "((struct instance_";
var959 = core__flat___NativeString___to_s_full(var958, 18l, 18l);
var957 = var959;
varonce956 = var957;
}
((struct instance_core__NativeArray*)var955)->values[0]=var957;
if (likely(varonce960!=NULL)) {
var961 = varonce960;
} else {
var962 = "*)";
var963 = core__flat___NativeString___to_s_full(var962, 2l, 2l);
var961 = var963;
varonce960 = var961;
}
((struct instance_core__NativeArray*)var955)->values[2]=var961;
if (likely(varonce964!=NULL)) {
var965 = varonce964;
} else {
var966 = ")->value = NULL;";
var967 = core__flat___NativeString___to_s_full(var966, 16l, 16l);
var965 = var967;
varonce964 = var965;
}
((struct instance_core__NativeArray*)var955)->values[4]=var965;
} else {
var955 = varonce954;
varonce954 = NULL;
}
{
var968 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var955)->values[1]=var968;
{
var969 = ((val*(*)(val* self))(var_res908->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res908); /* to_s on <var_res908:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var955)->values[3]=var969;
{
var970 = ((val*(*)(val* self))(var955->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var955); /* native_to_s on <var955:NativeArray[String]>*/
}
varonce954 = var955;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var970); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce971==NULL)) {
var972 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce973!=NULL)) {
var974 = varonce973;
} else {
var975 = "return ";
var976 = core__flat___NativeString___to_s_full(var975, 7l, 7l);
var974 = var976;
varonce973 = var974;
}
((struct instance_core__NativeArray*)var972)->values[0]=var974;
if (likely(varonce977!=NULL)) {
var978 = varonce977;
} else {
var979 = ";";
var980 = core__flat___NativeString___to_s_full(var979, 1l, 1l);
var978 = var980;
varonce977 = var978;
}
((struct instance_core__NativeArray*)var972)->values[2]=var978;
} else {
var972 = varonce971;
varonce971 = NULL;
}
{
var981 = ((val*(*)(val* self))(var_res908->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res908); /* to_s on <var_res908:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var972)->values[1]=var981;
{
var982 = ((val*(*)(val* self))(var972->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var972); /* native_to_s on <var972:NativeArray[String]>*/
}
varonce971 = var972;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var982); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce983!=NULL)) {
var984 = varonce983;
} else {
var985 = "}";
var986 = core__flat___NativeString___to_s_full(var985, 1l, 1l);
var984 = var986;
varonce983 = var984;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var984); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (unlikely(varonce987==NULL)) {
var988 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce989!=NULL)) {
var990 = varonce989;
} else {
var991 = "NEW_";
var992 = core__flat___NativeString___to_s_full(var991, 4l, 4l);
var990 = var992;
varonce989 = var990;
}
((struct instance_core__NativeArray*)var988)->values[0]=var990;
} else {
var988 = varonce987;
varonce987 = NULL;
}
((struct instance_core__NativeArray*)var988)->values[1]=var_c_name;
{
var993 = ((val*(*)(val* self))(var988->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var988); /* native_to_s on <var988:NativeArray[String]>*/
}
varonce987 = var988;
if (unlikely(varonce994==NULL)) {
var995 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce996!=NULL)) {
var997 = varonce996;
} else {
var998 = " NEW_";
var999 = core__flat___NativeString___to_s_full(var998, 5l, 5l);
var997 = var999;
varonce996 = var997;
}
((struct instance_core__NativeArray*)var995)->values[1]=var997;
if (likely(varonce1000!=NULL)) {
var1001 = varonce1000;
} else {
var1002 = "(const struct type* type);";
var1003 = core__flat___NativeString___to_s_full(var1002, 26l, 26l);
var1001 = var1003;
varonce1000 = var1001;
}
((struct instance_core__NativeArray*)var995)->values[3]=var1001;
} else {
var995 = varonce994;
varonce994 = NULL;
}
{
var1004 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var995)->values[0]=var1004;
((struct instance_core__NativeArray*)var995)->values[2]=var_c_name;
{
var1005 = ((val*(*)(val* self))(var995->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var995); /* native_to_s on <var995:NativeArray[String]>*/
}
varonce994 = var995;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var993, var1005); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce1006==NULL)) {
var1007 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1008!=NULL)) {
var1009 = varonce1008;
} else {
var1010 = "/* allocate ";
var1011 = core__flat___NativeString___to_s_full(var1010, 12l, 12l);
var1009 = var1011;
varonce1008 = var1009;
}
((struct instance_core__NativeArray*)var1007)->values[0]=var1009;
if (likely(varonce1012!=NULL)) {
var1013 = varonce1012;
} else {
var1014 = " */";
var1015 = core__flat___NativeString___to_s_full(var1014, 3l, 3l);
var1013 = var1015;
varonce1012 = var1013;
}
((struct instance_core__NativeArray*)var1007)->values[2]=var1013;
} else {
var1007 = varonce1006;
varonce1006 = NULL;
}
{
var1016 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1007)->values[1]=var1016;
{
var1017 = ((val*(*)(val* self))(var1007->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1007); /* native_to_s on <var1007:NativeArray[String]>*/
}
varonce1006 = var1007;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1017); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1018==NULL)) {
var1019 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1020!=NULL)) {
var1021 = varonce1020;
} else {
var1022 = " NEW_";
var1023 = core__flat___NativeString___to_s_full(var1022, 5l, 5l);
var1021 = var1023;
varonce1020 = var1021;
}
((struct instance_core__NativeArray*)var1019)->values[1]=var1021;
if (likely(varonce1024!=NULL)) {
var1025 = varonce1024;
} else {
var1026 = "(const struct type* type) {";
var1027 = core__flat___NativeString___to_s_full(var1026, 27l, 27l);
var1025 = var1027;
varonce1024 = var1025;
}
((struct instance_core__NativeArray*)var1019)->values[3]=var1025;
} else {
var1019 = varonce1018;
varonce1018 = NULL;
}
{
var1028 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1019)->values[0]=var1028;
((struct instance_core__NativeArray*)var1019)->values[2]=var_c_name;
{
var1029 = ((val*(*)(val* self))(var1019->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1019); /* native_to_s on <var1019:NativeArray[String]>*/
}
varonce1018 = var1019;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1029); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce1030==NULL)) {
var1031 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1032!=NULL)) {
var1033 = varonce1032;
} else {
var1034 = " is DEAD";
var1035 = core__flat___NativeString___to_s_full(var1034, 8l, 8l);
var1033 = var1035;
varonce1032 = var1033;
}
((struct instance_core__NativeArray*)var1031)->values[1]=var1033;
} else {
var1031 = varonce1030;
varonce1030 = NULL;
}
{
var1036 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var1031)->values[0]=var1036;
{
var1037 = ((val*(*)(val* self))(var1031->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1031); /* native_to_s on <var1031:NativeArray[String]>*/
}
varonce1030 = var1031;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var1037); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce1038!=NULL)) {
var1039 = varonce1038;
} else {
var1040 = "self";
var1041 = core__flat___NativeString___to_s_full(var1040, 4l, 4l);
var1039 = var1041;
varonce1038 = var1039;
}
{
var1042 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1039);
}
var_res1043 = var1042;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1043,1) on <var_res1043:RuntimeVariable> */
var_res1043->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res1043:RuntimeVariable> */
RET_LABEL1044:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var1047 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1047 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1068);
fatal_exit(1);
}
var1045 = var1047;
RET_LABEL1046:(void)0;
}
}
{
var1048 = ((val*(*)(val* self, val* p0))((((long)var1045&3)?class_info[((long)var1045&3)]:var1045->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var1045, var_mclass); /* get_or_null on <var1045:Map[MClass, Array[nullable MProperty]]>*/
}
var_attrs = var1048;
if (var_attrs == NULL) {
var1049 = 1; /* is null */
} else {
var1049 = 0; /* arg is null but recv is not */
}
if (0) {
var1050 = core___core__Array___core__kernel__Object___61d_61d(var_attrs, ((val*)NULL));
var1049 = var1050;
}
if (var1049){
if (unlikely(varonce1051==NULL)) {
var1052 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1053!=NULL)) {
var1054 = varonce1053;
} else {
var1055 = " = nit_alloc(sizeof(struct instance));";
var1056 = core__flat___NativeString___to_s_full(var1055, 38l, 38l);
var1054 = var1056;
varonce1053 = var1054;
}
((struct instance_core__NativeArray*)var1052)->values[1]=var1054;
} else {
var1052 = varonce1051;
varonce1051 = NULL;
}
{
var1057 = ((val*(*)(val* self))(var_res1043->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1043); /* to_s on <var_res1043:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1052)->values[0]=var1057;
{
var1058 = ((val*(*)(val* self))(var1052->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1052); /* native_to_s on <var1052:NativeArray[String]>*/
}
varonce1051 = var1052;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1058); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce1059==NULL)) {
var1060 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1061!=NULL)) {
var1062 = varonce1061;
} else {
var1063 = " = nit_alloc(sizeof(struct instance) + ";
var1064 = core__flat___NativeString___to_s_full(var1063, 39l, 39l);
var1062 = var1064;
varonce1061 = var1062;
}
((struct instance_core__NativeArray*)var1060)->values[1]=var1062;
if (likely(varonce1065!=NULL)) {
var1066 = varonce1065;
} else {
var1067 = "*sizeof(nitattribute_t));";
var1068 = core__flat___NativeString___to_s_full(var1067, 25l, 25l);
var1066 = var1068;
varonce1065 = var1066;
}
((struct instance_core__NativeArray*)var1060)->values[3]=var1066;
} else {
var1060 = varonce1059;
varonce1059 = NULL;
}
{
var1069 = ((val*(*)(val* self))(var_res1043->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1043); /* to_s on <var_res1043:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1060)->values[0]=var1069;
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1072 = var_attrs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1070 = var1072;
RET_LABEL1071:(void)0;
}
}
var1073 = core__flat___Int___core__abstract_text__Object__to_s(var1070);
((struct instance_core__NativeArray*)var1060)->values[2]=var1073;
{
var1074 = ((val*(*)(val* self))(var1060->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1060); /* native_to_s on <var1060:NativeArray[String]>*/
}
varonce1059 = var1060;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1074); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce1075==NULL)) {
var1076 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1077!=NULL)) {
var1078 = varonce1077;
} else {
var1079 = "->type = type;";
var1080 = core__flat___NativeString___to_s_full(var1079, 14l, 14l);
var1078 = var1080;
varonce1077 = var1078;
}
((struct instance_core__NativeArray*)var1076)->values[1]=var1078;
} else {
var1076 = varonce1075;
varonce1075 = NULL;
}
{
var1081 = ((val*(*)(val* self))(var_res1043->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1043); /* to_s on <var_res1043:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1076)->values[0]=var1081;
{
var1082 = ((val*(*)(val* self))(var1076->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1076); /* native_to_s on <var1076:NativeArray[String]>*/
}
varonce1075 = var1076;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1082); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1083!=NULL)) {
var1084 = varonce1083;
} else {
var1085 = "type";
var1086 = core__flat___NativeString___to_s_full(var1085, 4l, 4l);
var1084 = var1086;
varonce1083 = var1084;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var1084); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce1087==NULL)) {
var1088 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1089!=NULL)) {
var1090 = varonce1089;
} else {
var1091 = "class_";
var1092 = core__flat___NativeString___to_s_full(var1091, 6l, 6l);
var1090 = var1092;
varonce1089 = var1090;
}
((struct instance_core__NativeArray*)var1088)->values[0]=var1090;
} else {
var1088 = varonce1087;
varonce1087 = NULL;
}
((struct instance_core__NativeArray*)var1088)->values[1]=var_c_name;
{
var1093 = ((val*(*)(val* self))(var1088->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1088); /* native_to_s on <var1088:NativeArray[String]>*/
}
varonce1087 = var1088;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1093); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1094==NULL)) {
var1095 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1096!=NULL)) {
var1097 = varonce1096;
} else {
var1098 = "->class = &class_";
var1099 = core__flat___NativeString___to_s_full(var1098, 17l, 17l);
var1097 = var1099;
varonce1096 = var1097;
}
((struct instance_core__NativeArray*)var1095)->values[1]=var1097;
if (likely(varonce1100!=NULL)) {
var1101 = varonce1100;
} else {
var1102 = ";";
var1103 = core__flat___NativeString___to_s_full(var1102, 1l, 1l);
var1101 = var1103;
varonce1100 = var1101;
}
((struct instance_core__NativeArray*)var1095)->values[3]=var1101;
} else {
var1095 = varonce1094;
varonce1094 = NULL;
}
{
var1104 = ((val*(*)(val* self))(var_res1043->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1043); /* to_s on <var_res1043:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1095)->values[0]=var1104;
((struct instance_core__NativeArray*)var1095)->values[2]=var_c_name;
{
var1105 = ((val*(*)(val* self))(var1095->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1095); /* native_to_s on <var1095:NativeArray[String]>*/
}
varonce1094 = var1095;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1105); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (var_attrs == NULL) {
var1106 = 0; /* is null */
} else {
var1106 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_attrs,((val*)NULL)) on <var_attrs:nullable Array[nullable MProperty]> */
var_other = ((val*)NULL);
{
var1109 = ((short int(*)(val* self, val* p0))(var_attrs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_attrs, var_other); /* == on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])>*/
}
var1110 = !var1109;
var1107 = var1110;
goto RET_LABEL1108;
RET_LABEL1108:(void)0;
}
var1106 = var1107;
}
if (var1106){
{
nitc___nitc__AbstractCompiler___generate_init_attr(self, var_v, var_res1043, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___set_finalizer(var_v, var_res1043); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce1111==NULL)) {
var1112 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1113!=NULL)) {
var1114 = varonce1113;
} else {
var1115 = "return ";
var1116 = core__flat___NativeString___to_s_full(var1115, 7l, 7l);
var1114 = var1116;
varonce1113 = var1114;
}
((struct instance_core__NativeArray*)var1112)->values[0]=var1114;
if (likely(varonce1117!=NULL)) {
var1118 = varonce1117;
} else {
var1119 = ";";
var1120 = core__flat___NativeString___to_s_full(var1119, 1l, 1l);
var1118 = var1120;
varonce1117 = var1118;
}
((struct instance_core__NativeArray*)var1112)->values[2]=var1118;
} else {
var1112 = varonce1111;
varonce1111 = NULL;
}
{
var1121 = ((val*(*)(val* self))(var_res1043->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1043); /* to_s on <var_res1043:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1112)->values[1]=var1121;
{
var1122 = ((val*(*)(val* self))(var1112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1112); /* native_to_s on <var1112:NativeArray[String]>*/
}
varonce1111 = var1112;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1122); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1123!=NULL)) {
var1124 = varonce1123;
} else {
var1125 = "}";
var1126 = core__flat___NativeString___to_s_full(var1125, 1l, 1l);
var1124 = var1126;
varonce1123 = var1124;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1124); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_infos for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___compile_class_infos(val* self) {
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
val* var27 /* : String */;
short int var28 /* : Bool */;
val* var29 /* : MClassType */;
val* var31 /* : MClassType */;
val* var33 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
short int var40 /* : Bool */;
val* var41 /* : MClassType */;
val* var43 /* : MClassType */;
val* var45 /* : String */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
short int var52 /* : Bool */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var58 /* : MClassType */;
val* var60 /* : MClassType */;
val* var62 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
val* var_67 /* var : Array[nullable MClass] */;
val* var68 /* : IndexedIterator[nullable Object] */;
val* var_69 /* var : IndexedIterator[nullable MClass] */;
short int var70 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_t73 /* var t: nullable MClass */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var_s /* var s: String */;
val* var93 /* : NativeArray[String] */;
static val* varonce92;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
val* var101 /* : String */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
val* var110 /* : String */;
val* var_111 /* var : Array[nullable MClass] */;
val* var112 /* : IndexedIterator[nullable Object] */;
val* var_113 /* var : IndexedIterator[nullable MClass] */;
short int var114 /* : Bool */;
val* var116 /* : nullable Object */;
val* var_t117 /* var t: nullable MClass */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : String */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var135 /* : String */;
val* var_s136 /* var s: String */;
val* var137 /* : Set[MType] */;
val* var139 /* : Set[MType] */;
val* var140 /* : MClassType */;
val* var142 /* : MClassType */;
val* var144 /* : NativeArray[String] */;
static val* varonce143;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : NativeString */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
val* var152 /* : String */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : NativeString */;
val* var157 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
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
var13 = NEW_core__Array(&type_core__Array__nullable__nitc__MClass);
{
core___core__Array___filled_with(var13, ((val*)NULL), 4l); /* Direct call array#Array#filled_with on <var13:Array[nullable MClass]>*/
}
var_class_info = var13;
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var16 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 264);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashMap___core__abstract_collection__MapRead__keys(var14);
}
var_ = var17;
{
var18 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[MClass]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[MClass]>*/
}
if (var20){
} else {
goto BREAK_label;
}
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[MClass]>*/
}
var_t = var21;
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var24 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
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
var27 = core__flat___NativeString___to_s_full(var26, 3l, 3l);
var25 = var27;
varonce = var25;
}
{
var28 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var25); /* == on <var22:String>*/
}
if (var28){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 1l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var31 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#tag_value= (var29,1l) on <var29:MClassType> */
var29->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 1l; /* _tag_value on <var29:MClassType> */
RET_LABEL32:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var35 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Char";
var39 = core__flat___NativeString___to_s_full(var38, 4l, 4l);
var37 = var39;
varonce36 = var37;
}
{
var40 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_core__kernel__Object___61d_61d]))(var33, var37); /* == on <var33:String>*/
}
if (var40){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 2l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var43 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#tag_value= (var41,2l) on <var41:MClassType> */
var41->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 2l; /* _tag_value on <var41:MClassType> */
RET_LABEL44:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var47 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 385);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Bool";
var51 = core__flat___NativeString___to_s_full(var50, 4l, 4l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((short int(*)(val* self, val* p0))(var45->class->vft[COLOR_core__kernel__Object___61d_61d]))(var45, var49); /* == on <var45:String>*/
}
if (var52){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 3l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var55 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#tag_value= (var53,3l) on <var53:MClassType> */
var53->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 3l; /* _tag_value on <var53:MClassType> */
RET_LABEL56:(void)0;
}
}
} else {
goto BREAK_label57;
}
}
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var60 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#is_tagged= (var58,1) on <var58:MClassType> */
var58->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 1; /* _is_tagged on <var58:MClassType> */
RET_LABEL61:(void)0;
}
}
BREAK_label57: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[MClass]>*/
}
{
var62 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var62;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "const struct class *class_info[4] = {";
var66 = core__flat___NativeString___to_s_full(var65, 37l, 37l);
var64 = var66;
varonce63 = var64;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_67 = var_class_info;
{
var68 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_67);
}
var_69 = var68;
for(;;) {
{
var70 = ((short int(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_69); /* is_ok on <var_69:IndexedIterator[nullable MClass]>*/
}
if (var70){
} else {
goto BREAK_label71;
}
{
var72 = ((val*(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_69); /* item on <var_69:IndexedIterator[nullable MClass]>*/
}
var_t73 = var72;
if (var_t73 == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t73,((val*)NULL)) on <var_t73:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t73,var_other) on <var_t73:nullable MClass(MClass)> */
var79 = var_t73 == var_other;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "NULL,";
var83 = core__flat___NativeString___to_s_full(var82, 5l, 5l);
var81 = var83;
varonce80 = var81;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "class_";
var89 = core__flat___NativeString___to_s_full(var88, 6l, 6l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[0]=var87;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
var90 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t73);
}
((struct instance_core__NativeArray*)var85)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
var_s = var91;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce92==NULL)) {
var93 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "&";
var97 = core__flat___NativeString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var93)->values[0]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ",";
var101 = core__flat___NativeString___to_s_full(var100, 1l, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var93)->values[2]=var99;
} else {
var93 = varonce92;
varonce92 = NULL;
}
((struct instance_core__NativeArray*)var93)->values[1]=var_s;
{
var102 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_69); /* next on <var_69:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label71: (void)0;
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_69); /* finish on <var_69:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "};";
var106 = core__flat___NativeString___to_s_full(var105, 2l, 2l);
var104 = var106;
varonce103 = var104;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "const struct type *type_info[4] = {";
var110 = core__flat___NativeString___to_s_full(var109, 35l, 35l);
var108 = var110;
varonce107 = var108;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_111 = var_class_info;
{
var112 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_111);
}
var_113 = var112;
for(;;) {
{
var114 = ((short int(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_113); /* is_ok on <var_113:IndexedIterator[nullable MClass]>*/
}
if (var114){
} else {
goto BREAK_label115;
}
{
var116 = ((val*(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_113); /* item on <var_113:IndexedIterator[nullable MClass]>*/
}
var_t117 = var116;
if (var_t117 == NULL) {
var118 = 1; /* is null */
} else {
var118 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t117,((val*)NULL)) on <var_t117:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t117,var_other) on <var_t117:nullable MClass(MClass)> */
var123 = var_t117 == var_other;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "NULL,";
var127 = core__flat___NativeString___to_s_full(var126, 5l, 5l);
var125 = var127;
varonce124 = var125;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var125); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "type_";
var133 = core__flat___NativeString___to_s_full(var132, 5l, 5l);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
var134 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t117);
}
((struct instance_core__NativeArray*)var129)->values[1]=var134;
{
var135 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
var_s136 = var135;
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (self) on <self:SeparateCompiler> */
var139 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <self:SeparateCompiler> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_t117) on <var_t117:nullable MClass(MClass)> */
var142 = var_t117->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t117:nullable MClass(MClass)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var137&3)?class_info[((long)var137&3)]:var137->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var137, var140); /* add on <var137:Set[MType]>*/
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var_s136); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce143==NULL)) {
var144 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "&";
var148 = core__flat___NativeString___to_s_full(var147, 1l, 1l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var144)->values[0]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = ",";
var152 = core__flat___NativeString___to_s_full(var151, 1l, 1l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var144)->values[2]=var150;
} else {
var144 = varonce143;
varonce143 = NULL;
}
((struct instance_core__NativeArray*)var144)->values[1]=var_s136;
{
var153 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var153); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_113); /* next on <var_113:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label115: (void)0;
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_113); /* finish on <var_113:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "};";
var157 = core__flat___NativeString___to_s_full(var156, 2l, 2l);
var155 = var157;
varonce154 = var155;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var155); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: SeparateCompiler, SeparateCompilerVisitor, String) */
void nitc___nitc__SeparateCompiler___hardening_live_type(val* self, val* p0, val* p1) {
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
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
/* Covariant cast for argument 0 (v) <p0:SeparateCompilerVisitor> isa VISITOR */
/* <p0:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1048);
fatal_exit(1);
}
var_v = p0;
var_t = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1133);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
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
var18 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "if(";
var22 = core__flat___NativeString___to_s_full(var21, 3l, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " == NULL) {";
var26 = core__flat___NativeString___to_s_full(var25, 11l, 11l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var18)->values[1]=var_t;
{
var27 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "type null";
var31 = core__flat___NativeString___to_s_full(var30, 9l, 9l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__flat___NativeString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "if(";
var41 = core__flat___NativeString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "->table_size < 0) {";
var45 = core__flat___NativeString___to_s_full(var44, 19l, 19l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_core__NativeArray*)var37)->values[1]=var_t;
{
var46 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "PRINT_ERROR(\"Instantiation of a dead type: %s\\n\", ";
var52 = core__flat___NativeString___to_s_full(var51, 50l, 50l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var48)->values[0]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "->name);";
var56 = core__flat___NativeString___to_s_full(var55, 8l, 8l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var48)->values[2]=var54;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_core__NativeArray*)var48)->values[1]=var_t;
{
var57 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "type dead";
var61 = core__flat___NativeString___to_s_full(var60, 9l, 9l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "}";
var65 = core__flat___NativeString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: SeparateCompiler): SeparateCompilerVisitor */
val* nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nitc__SeparateCompilerVisitor(&type_nitc__SeparateCompilerVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self); /* compiler= on <var1:SeparateCompilerVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:SeparateCompilerVisitor>*/
}
/* <var1:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1061);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: SeparateCompiler): Map[MType, Array[nullable MType]] */
val* nitc___nitc__SeparateCompiler___type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1065);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: SeparateCompiler, Map[MType, Array[nullable MType]]) */
void nitc___nitc__SeparateCompiler___type_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val = p0; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: SeparateCompiler): Map[MClassType, Array[nullable MType]] */
val* nitc___nitc__SeparateCompiler___resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1066);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: SeparateCompiler, Map[MClassType, Array[nullable MType]]) */
void nitc___nitc__SeparateCompiler___resolution_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val = p0; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nitc___nitc__SeparateCompiler___method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1067);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nitc___nitc__SeparateCompiler___method_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val = p0; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MProperty]] */
val* nitc___nitc__SeparateCompiler___attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MProperty]] */;
val* var1 /* : Map[MClass, Array[nullable MProperty]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1068);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MProperty]]) */
void nitc___nitc__SeparateCompiler___attr_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val = p0; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats(val* self) {
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
val* var34 /* : String */;
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
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
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
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
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
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
val* var145 /* : String */;
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
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats]))(self); /* display_stats on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_tables_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 60);
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
((void(*)(val* self))(self->class->vft[COLOR_nitc__separate_compiler__SeparateCompiler__display_sizes]))(self); /* display_sizes on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
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
nitc___nitc__SeparateCompiler___display_isset_checks(self); /* Direct call separate_compiler#SeparateCompiler#display_isset_checks on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
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
var34 = core__flat___NativeString___to_s_full(var33, 37l, 37l);
var32 = var34;
varonce = var32;
}
{
nitc___nitc__ToolContext___info(var_tc, var32, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var37 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var35) on <var35:ModelBuilder> */
var40 = var35->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var35:ModelBuilder> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var43 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var41) on <var41:ModelBuilder> */
var46 = var41->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var41:ModelBuilder> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
var53 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var51) on <var51:ModelBuilder> */
var56 = var51->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var51:ModelBuilder> */
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
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
var65 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "total number of invocations: ";
var69 = core__flat___NativeString___to_s_full(var68, 29l, 29l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[0]=var67;
} else {
var65 = varonce64;
varonce64 = NULL;
}
var70 = core__flat___Int___core__abstract_text__Object__to_s(var_nb_invok_total);
((struct instance_core__NativeArray*)var65)->values[1]=var70;
{
var71 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nitc___nitc__ToolContext___info(var_tc, var71, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce72==NULL)) {
var73 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "invocations by VFT send:     ";
var77 = core__flat___NativeString___to_s_full(var76, 29l, 29l);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var73)->values[0]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " (";
var81 = core__flat___NativeString___to_s_full(var80, 2l, 2l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var73)->values[2]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "%)";
var85 = core__flat___NativeString___to_s_full(var84, 2l, 2l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var73)->values[4]=var83;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var88 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var86) on <var86:ModelBuilder> */
var91 = var86->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var86:ModelBuilder> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = core__flat___Int___core__abstract_text__Object__to_s(var89);
((struct instance_core__NativeArray*)var73)->values[1]=var92;
var93 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var96 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var94) on <var94:ModelBuilder> */
var99 = var94->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var94:ModelBuilder> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = counter___core__Sys___div(var93, var97, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var73)->values[3]=var100;
{
var101 = ((val*(*)(val* self))(var73->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
nitc___nitc__ToolContext___info(var_tc, var101, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "invocations by direct call:  ";
var107 = core__flat___NativeString___to_s_full(var106, 29l, 29l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = " (";
var111 = core__flat___NativeString___to_s_full(var110, 2l, 2l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var103)->values[2]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "%)";
var115 = core__flat___NativeString___to_s_full(var114, 2l, 2l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var103)->values[4]=var113;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var118 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var116) on <var116:ModelBuilder> */
var121 = var116->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var116:ModelBuilder> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
var122 = core__flat___Int___core__abstract_text__Object__to_s(var119);
((struct instance_core__NativeArray*)var103)->values[1]=var122;
var123 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var126 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var124) on <var124:ModelBuilder> */
var129 = var124->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var124:ModelBuilder> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = counter___core__Sys___div(var123, var127, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var103)->values[3]=var130;
{
var131 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__ToolContext___info(var_tc, var131, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce132==NULL)) {
var133 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "invocations by inlining:     ";
var137 = core__flat___NativeString___to_s_full(var136, 29l, 29l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var133)->values[0]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " (";
var141 = core__flat___NativeString___to_s_full(var140, 2l, 2l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var133)->values[2]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "%)";
var145 = core__flat___NativeString___to_s_full(var144, 2l, 2l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var133)->values[4]=var143;
} else {
var133 = varonce132;
varonce132 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var148 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var146) on <var146:ModelBuilder> */
var151 = var146->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var146:ModelBuilder> */
var149 = var151;
RET_LABEL150:(void)0;
}
}
var152 = core__flat___Int___core__abstract_text__Object__to_s(var149);
((struct instance_core__NativeArray*)var133)->values[1]=var152;
var153 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var156 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var154) on <var154:ModelBuilder> */
var159 = var154->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var154:ModelBuilder> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = counter___core__Sys___div(var153, var157, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var133)->values[3]=var160;
{
var161 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nitc___nitc__ToolContext___info(var_tc, var161, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___display_sizes(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Sys */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
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
val* var25 /* : IndexedIterator[nullable Object] */;
val* var_26 /* var : IndexedIterator[nullable MType] */;
short int var27 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_e /* var e: nullable MType */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
val* var44 /* : Sys */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Sys */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
val* var63 /* : Sys */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
val* var67 /* : String */;
val* var68 /* : Map[MClassType, Array[nullable MType]] */;
val* var70 /* : Map[MClassType, Array[nullable MType]] */;
val* var_71 /* var : Map[MClassType, Array[nullable MType]] */;
val* var72 /* : MapIterator[nullable Object, nullable Object] */;
val* var_73 /* var : MapIterator[MClassType, Array[nullable MType]] */;
short int var74 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_t77 /* var t: MClassType */;
val* var78 /* : nullable Object */;
val* var_table79 /* var table: Array[nullable MType] */;
long var80 /* : Int */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
val* var_90 /* var : Array[nullable MType] */;
val* var91 /* : IndexedIterator[nullable Object] */;
val* var_92 /* var : IndexedIterator[nullable MType] */;
short int var93 /* : Bool */;
val* var95 /* : nullable Object */;
val* var_e96 /* var e: nullable MType */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
val* var111 /* : Sys */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : Sys */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
val* var129 /* : String */;
val* var130 /* : Sys */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : String */;
val* var135 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var137 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_138 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var139 /* : MapIterator[nullable Object, nullable Object] */;
val* var_140 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var141 /* : Bool */;
val* var143 /* : nullable Object */;
val* var_t144 /* var t: MClass */;
val* var145 /* : nullable Object */;
val* var_table146 /* var table: Array[nullable MPropDef] */;
long var147 /* : Int */;
long var149 /* : Int */;
long var150 /* : Int */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
long var156 /* : Int */;
val* var_157 /* var : Array[nullable MPropDef] */;
val* var158 /* : IndexedIterator[nullable Object] */;
val* var_159 /* var : IndexedIterator[nullable MPropDef] */;
short int var160 /* : Bool */;
val* var162 /* : nullable Object */;
val* var_e163 /* var e: nullable MPropDef */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
long var170 /* : Int */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
long var176 /* : Int */;
val* var178 /* : Sys */;
val* var180 /* : NativeArray[String] */;
static val* varonce179;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : NativeString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var192 /* : Sys */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : String */;
val* var197 /* : Sys */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : NativeString */;
val* var201 /* : String */;
val* var202 /* : Map[MClass, Array[nullable MProperty]] */;
val* var204 /* : Map[MClass, Array[nullable MProperty]] */;
val* var_205 /* var : Map[MClass, Array[nullable MProperty]] */;
val* var206 /* : MapIterator[nullable Object, nullable Object] */;
val* var_207 /* var : MapIterator[MClass, Array[nullable MProperty]] */;
short int var208 /* : Bool */;
val* var210 /* : nullable Object */;
val* var_t211 /* var t: MClass */;
val* var212 /* : nullable Object */;
val* var_table213 /* var table: Array[nullable MProperty] */;
long var214 /* : Int */;
long var216 /* : Int */;
long var217 /* : Int */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
long var223 /* : Int */;
val* var_224 /* var : Array[nullable MProperty] */;
val* var225 /* : IndexedIterator[nullable Object] */;
val* var_226 /* var : IndexedIterator[nullable MProperty] */;
short int var227 /* : Bool */;
val* var229 /* : nullable Object */;
val* var_e230 /* var e: nullable MProperty */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
long var237 /* : Int */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
long var243 /* : Int */;
val* var245 /* : Sys */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
val* var255 /* : String */;
val* var256 /* : String */;
val* var257 /* : String */;
val* var258 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# size of subtyping tables";
var3 = core__flat___NativeString___to_s_full(var2, 26l, 26l);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
var4 = glob_sys;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\ttotal \tholes";
var8 = core__flat___NativeString___to_s_full(var7, 13l, 13l);
var6 = var8;
varonce5 = var6;
}
{
core__file___Sys___print(var4, var6); /* Direct call file#Sys#print on <var4:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var11 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1065);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[MType, Array[nullable MType]]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_13); /* is_ok on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_13); /* key on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
var_t = var15;
{
var16 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_13); /* item on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
var_table = var16;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var19 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
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
var25 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_24);
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:IndexedIterator[nullable MType]>*/
}
if (var27){
} else {
goto BREAK_label28;
}
{
var29 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:IndexedIterator[nullable MType]>*/
}
var_e = var29;
if (var_e == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,((val*)NULL)) on <var_e:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MType(MType)> */
var35 = var_e == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_holes + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_holes = var36;
} else {
}
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:IndexedIterator[nullable MType]>*/
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:IndexedIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_13); /* next on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_13) on <var_13:MapIterator[MType, Array[nullable MType]]> */
RET_LABEL43:(void)0;
}
}
var44 = glob_sys;
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\t";
var50 = core__flat___NativeString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "\t";
var54 = core__flat___NativeString___to_s_full(var53, 1l, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var46)->values[2]=var52;
} else {
var46 = varonce45;
varonce45 = NULL;
}
var55 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var46)->values[1]=var55;
var56 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var46)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
core__file___Sys___print(var44, var57); /* Direct call file#Sys#print on <var44:Sys>*/
}
var58 = glob_sys;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "# size of resolution tables";
var62 = core__flat___NativeString___to_s_full(var61, 27l, 27l);
var60 = var62;
varonce59 = var60;
}
{
core__file___Sys___print(var58, var60); /* Direct call file#Sys#print on <var58:Sys>*/
}
var63 = glob_sys;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\ttotal \tholes";
var67 = core__flat___NativeString___to_s_full(var66, 13l, 13l);
var65 = var67;
varonce64 = var65;
}
{
core__file___Sys___print(var63, var65); /* Direct call file#Sys#print on <var63:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var70 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1066);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = ((val*(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_71); /* iterator on <var_71:Map[MClassType, Array[nullable MType]]>*/
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_73); /* is_ok on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
if (var74){
} else {
goto BREAK_label75;
}
{
var76 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_73); /* key on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_t77 = var76;
{
var78 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_73); /* item on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_table79 = var78;
{
{ /* Inline array#AbstractArrayRead#length (var_table79) on <var_table79:Array[nullable MType]> */
var82 = var_table79->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table79:Array[nullable MType]> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var80) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var85 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var89 = var_total + var80;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var_total = var83;
var_90 = var_table79;
{
var91 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_90);
}
var_92 = var91;
for(;;) {
{
var93 = ((short int(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_92); /* is_ok on <var_92:IndexedIterator[nullable MType]>*/
}
if (var93){
} else {
goto BREAK_label94;
}
{
var95 = ((val*(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_92); /* item on <var_92:IndexedIterator[nullable MType]>*/
}
var_e96 = var95;
if (var_e96 == NULL) {
var97 = 1; /* is null */
} else {
var97 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e96,((val*)NULL)) on <var_e96:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e96,var_other) on <var_e96:nullable MType(MType)> */
var102 = var_e96 == var_other;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var109 = var_holes + 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_holes = var103;
} else {
}
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_92); /* next on <var_92:IndexedIterator[nullable MType]>*/
}
}
BREAK_label94: (void)0;
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_92); /* finish on <var_92:IndexedIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_73); /* next on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
}
BREAK_label75: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_73) on <var_73:MapIterator[MClassType, Array[nullable MType]]> */
RET_LABEL110:(void)0;
}
}
var111 = glob_sys;
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "\t";
var117 = core__flat___NativeString___to_s_full(var116, 1l, 1l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[0]=var115;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "\t";
var121 = core__flat___NativeString___to_s_full(var120, 1l, 1l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var113)->values[2]=var119;
} else {
var113 = varonce112;
varonce112 = NULL;
}
var122 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var113)->values[1]=var122;
var123 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var113)->values[3]=var123;
{
var124 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
core__file___Sys___print(var111, var124); /* Direct call file#Sys#print on <var111:Sys>*/
}
var125 = glob_sys;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "# size of methods tables";
var129 = core__flat___NativeString___to_s_full(var128, 24l, 24l);
var127 = var129;
varonce126 = var127;
}
{
core__file___Sys___print(var125, var127); /* Direct call file#Sys#print on <var125:Sys>*/
}
var130 = glob_sys;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "\ttotal \tholes";
var134 = core__flat___NativeString___to_s_full(var133, 13l, 13l);
var132 = var134;
varonce131 = var132;
}
{
core__file___Sys___print(var130, var132); /* Direct call file#Sys#print on <var130:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var137 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1067);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_138 = var135;
{
var139 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_138); /* iterator on <var_138:Map[MClass, Array[nullable MPropDef]]>*/
}
var_140 = var139;
for(;;) {
{
var141 = ((short int(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_140); /* is_ok on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var141){
} else {
goto BREAK_label142;
}
{
var143 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_140); /* key on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t144 = var143;
{
var145 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_140); /* item on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table146 = var145;
{
{ /* Inline array#AbstractArrayRead#length (var_table146) on <var_table146:Array[nullable MPropDef]> */
var149 = var_table146->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table146:Array[nullable MPropDef]> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var147) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var147:Int> isa OTHER */
/* <var147:Int> isa OTHER */
var152 = 1; /* easy <var147:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var156 = var_total + var147;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var_total = var150;
var_157 = var_table146;
{
var158 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_157);
}
var_159 = var158;
for(;;) {
{
var160 = ((short int(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_159); /* is_ok on <var_159:IndexedIterator[nullable MPropDef]>*/
}
if (var160){
} else {
goto BREAK_label161;
}
{
var162 = ((val*(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_159); /* item on <var_159:IndexedIterator[nullable MPropDef]>*/
}
var_e163 = var162;
if (var_e163 == NULL) {
var164 = 1; /* is null */
} else {
var164 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e163,((val*)NULL)) on <var_e163:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e163,var_other) on <var_e163:nullable MPropDef(MPropDef)> */
var169 = var_e163 == var_other;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var172 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var176 = var_holes + 1l;
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
var_holes = var170;
} else {
}
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_159); /* next on <var_159:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label161: (void)0;
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_159); /* finish on <var_159:IndexedIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_140); /* next on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
}
BREAK_label142: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_140) on <var_140:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL177:(void)0;
}
}
var178 = glob_sys;
if (unlikely(varonce179==NULL)) {
var180 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "\t";
var184 = core__flat___NativeString___to_s_full(var183, 1l, 1l);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var180)->values[0]=var182;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "\t";
var188 = core__flat___NativeString___to_s_full(var187, 1l, 1l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var180)->values[2]=var186;
} else {
var180 = varonce179;
varonce179 = NULL;
}
var189 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var180)->values[1]=var189;
var190 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var180)->values[3]=var190;
{
var191 = ((val*(*)(val* self))(var180->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
core__file___Sys___print(var178, var191); /* Direct call file#Sys#print on <var178:Sys>*/
}
var192 = glob_sys;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "# size of attributes tables";
var196 = core__flat___NativeString___to_s_full(var195, 27l, 27l);
var194 = var196;
varonce193 = var194;
}
{
core__file___Sys___print(var192, var194); /* Direct call file#Sys#print on <var192:Sys>*/
}
var197 = glob_sys;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "\ttotal \tholes";
var201 = core__flat___NativeString___to_s_full(var200, 13l, 13l);
var199 = var201;
varonce198 = var199;
}
{
core__file___Sys___print(var197, var199); /* Direct call file#Sys#print on <var197:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var204 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1068);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_205 = var202;
{
var206 = ((val*(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_205); /* iterator on <var_205:Map[MClass, Array[nullable MProperty]]>*/
}
var_207 = var206;
for(;;) {
{
var208 = ((short int(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_207); /* is_ok on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
if (var208){
} else {
goto BREAK_label209;
}
{
var210 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_207); /* key on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_t211 = var210;
{
var212 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_207); /* item on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_table213 = var212;
{
{ /* Inline array#AbstractArrayRead#length (var_table213) on <var_table213:Array[nullable MProperty]> */
var216 = var_table213->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table213:Array[nullable MProperty]> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var214) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var214:Int> isa OTHER */
/* <var214:Int> isa OTHER */
var219 = 1; /* easy <var214:Int> isa OTHER*/
if (unlikely(!var219)) {
var_class_name222 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var223 = var_total + var214;
var217 = var223;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
var_total = var217;
var_224 = var_table213;
{
var225 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_224);
}
var_226 = var225;
for(;;) {
{
var227 = ((short int(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_226); /* is_ok on <var_226:IndexedIterator[nullable MProperty]>*/
}
if (var227){
} else {
goto BREAK_label228;
}
{
var229 = ((val*(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_226); /* item on <var_226:IndexedIterator[nullable MProperty]>*/
}
var_e230 = var229;
if (var_e230 == NULL) {
var231 = 1; /* is null */
} else {
var231 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e230,((val*)NULL)) on <var_e230:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e230,var_other) on <var_e230:nullable MProperty(MProperty)> */
var236 = var_e230 == var_other;
var234 = var236;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (var231){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var239 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var243 = var_holes + 1l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_holes = var237;
} else {
}
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_226); /* next on <var_226:IndexedIterator[nullable MProperty]>*/
}
}
BREAK_label228: (void)0;
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_226); /* finish on <var_226:IndexedIterator[nullable MProperty]>*/
}
{
((void(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_207); /* next on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
}
BREAK_label209: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_207) on <var_207:MapIterator[MClass, Array[nullable MProperty]]> */
RET_LABEL244:(void)0;
}
}
var245 = glob_sys;
if (unlikely(varonce246==NULL)) {
var247 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "\t";
var251 = core__flat___NativeString___to_s_full(var250, 1l, 1l);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var247)->values[0]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "\t";
var255 = core__flat___NativeString___to_s_full(var254, 1l, 1l);
var253 = var255;
varonce252 = var253;
}
((struct instance_core__NativeArray*)var247)->values[2]=var253;
} else {
var247 = varonce246;
varonce246 = NULL;
}
var256 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var247)->values[1]=var256;
var257 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var247)->values[3]=var257;
{
var258 = ((val*(*)(val* self))(var247->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
core__file___Sys___print(var245, var258); /* Direct call file#Sys#print on <var245:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count for (self: SeparateCompiler): Int */
long nitc___nitc__SeparateCompiler___isset_checks_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count= for (self: SeparateCompiler, Int) */
void nitc___nitc__SeparateCompiler___isset_checks_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l = p0; /* _isset_checks_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_read_count for (self: SeparateCompiler): Int */
long nitc___nitc__SeparateCompiler___attr_read_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_read_count= for (self: SeparateCompiler, Int) */
void nitc___nitc__SeparateCompiler___attr_read_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l = p0; /* _attr_read_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_isset_checks for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___display_isset_checks(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Sys */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
long var11 /* : Int */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Sys */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : Sys */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# total number of compiled attribute reads";
var3 = core__flat___NativeString___to_s_full(var2, 42l, 42l);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
var4 = glob_sys;
if (unlikely(varonce5==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "\t";
var10 = core__flat___NativeString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce5;
varonce5 = NULL;
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = core__flat___Int___core__abstract_text__Object__to_s(var11);
((struct instance_core__NativeArray*)var6)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
{
core__file___Sys___print(var4, var15); /* Direct call file#Sys#print on <var4:Sys>*/
}
var16 = glob_sys;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "# total number of compiled isset-checks";
var20 = core__flat___NativeString___to_s_full(var19, 39l, 39l);
var18 = var20;
varonce17 = var18;
}
{
core__file___Sys___print(var16, var18); /* Direct call file#Sys#print on <var16:Sys>*/
}
var21 = glob_sys;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "\t";
var27 = core__flat___NativeString___to_s_full(var26, 1l, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (self) on <self:SeparateCompiler> */
var30 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = core__flat___Int___core__abstract_text__Object__to_s(var28);
((struct instance_core__NativeArray*)var23)->values[1]=var31;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
core__file___Sys___print(var21, var32); /* Direct call file#Sys#print on <var21:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
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
var5 = core__flat___NativeString___to_s_full(var4, 210l, 210l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self); /* compile_nitni_structs on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: SeparateCompiler, MModule) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_old_module /* var old_module: MModule */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_old_module = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_mmodule) on <self:SeparateCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_mmodule; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module]))(self, p0); /* finalize_ffi_for_module on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
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
val* var_mp /* var mp: MParameter */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var_t /* var t: MType */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
val* var74 /* : nullable Object */;
val* var75 /* : MType */;
val* var77 /* : MType */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
val* var92 /* : nullable Object */;
val* var93 /* : RuntimeVariable */;
long var94 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1171);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
var22 = core___core__SequenceRead___Collection__first(var_args);
}
var_recv = var22;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var25 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var23); /* ctype on <var23:MType>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nitc__abstract_compiler___MClassType___MType__ctype(var33);
}
{
{ /* Inline kernel#Object#!= (var26,var36) on <var26:String> */
var_other = var36;
{
var39 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:String>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var44 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var42) on <var42:MClassDef> */
var47 = var42->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var42:MClassDef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var45:MClass> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var41, var48);
}
{
core___core__Sequence___first_61d(var_args, var51); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var52 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var55 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_i < var_;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var59 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var57, var_i);
}
var_mp = var60;
{
{ /* Inline model#MParameter#mtype (var_mp) on <var_mp:MParameter> */
var63 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_t = var61;
{
{ /* Inline model#MParameter#is_vararg (var_mp) on <var_mp:MParameter> */
var66 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var73 = var_i + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var74 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var67);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var74) on <var74:nullable Object(RuntimeVariable)> */
var77 = var74->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var74:nullable Object(RuntimeVariable)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_t = var75;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var84 = var_i + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var91 = var_i + 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
var92 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var85);
}
{
var93 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var92, var_t);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var78, var93); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
{
var94 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var94;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_signature_extern for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
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
val* var_mp /* var mp: MParameter */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_t /* var t: MType */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
val* var67 /* : nullable Object */;
val* var68 /* : MType */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
long var74 /* : Int */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
val* var88 /* : nullable Object */;
val* var89 /* : RuntimeVariable */;
long var90 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1188);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var25 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var23) on <var23:MProperty(MMethod)> */
var28 = var23->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var23:MProperty(MMethod)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = !var26;
var_ = var29;
if (var29){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var32 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
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
var33 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var36 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var37) on <var37:MClass> */
var42 = var37->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var37:MClass> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var33, var40); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Sequence___first_61d(var_args, var43); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var44 = nitc___nitc__MSignature___arity(var_msignature);
}
var_45 = var44;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_45) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_45:Int> isa OTHER */
/* <var_45:Int> isa OTHER */
var48 = 1; /* easy <var_45:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var49 = var_i < var_45;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var52 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var50, var_i);
}
var_mp = var53;
{
{ /* Inline model#MParameter#mtype (var_mp) on <var_mp:MParameter> */
var56 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_t = var54;
{
{ /* Inline model#MParameter#is_vararg (var_mp) on <var_mp:MParameter> */
var59 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var66 = var_i + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var60);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var67) on <var67:nullable Object(RuntimeVariable)> */
var70 = var67->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var67:nullable Object(RuntimeVariable)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1870);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_t = var68;
} else {
}
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var73 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var76 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var80 = var_i + 1l;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var83 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var87 = var_i + 1l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
var88 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var81);
}
{
var89 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var88, var_t); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var74, var89); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
{
var90 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var90;
}
BREAK_label: (void)0;
RET_LABEL:;
}
