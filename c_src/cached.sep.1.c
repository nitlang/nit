#include "cached.sep.0.h"
/* method cached#ToolContext#cached_phase for (self: ToolContext): Phase */
val* cached__ToolContext__cached_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_cached__ToolContext___64dcached_phase].val; /* @cached_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @cached_phase");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cached#ToolContext#cached_phase for (self: Object): Phase */
val* VIRTUAL_cached__ToolContext__cached_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = cached__ToolContext__cached_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method cached#ToolContext#cached_phase= for (self: ToolContext, Phase) */
void cached__ToolContext__cached_phase_61d(val* self, val* p0) {
self->attrs[COLOR_cached__ToolContext___64dcached_phase].val = p0; /* @cached_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method cached#ToolContext#cached_phase= for (self: Object, Phase) */
void VIRTUAL_cached__ToolContext__cached_phase_61d(val* self, val* p0) {
cached__ToolContext__cached_phase_61d(self, p0);
RET_LABEL:;
}
/* method cached#CachedPhase#init for (self: CachedPhase, ToolContext, nullable Collection[Phase]) */
void cached__CachedPhase__init(val* self, val* p0, val* p1) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_depends /* var depends: nullable Collection[Phase] */;
val* var /* : POSet[Phase] */;
val* var1 /* : Phase */;
var_toolcontext = p0;
var_depends = p1;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_phase__Phase__init]))(self, p0, p1) /* init on <self:CachedPhase>*/;
var = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_phase__ToolContext__phases]))(var_toolcontext) /* phases on <var_toolcontext:ToolContext>*/;
var1 = ((val* (*)(val*))(var_toolcontext->class->vft[COLOR_simple_misc_analysis__ToolContext__simple_misc_analysis_phase]))(var_toolcontext) /* simple_misc_analysis_phase on <var_toolcontext:ToolContext>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_poset__POSet__add_edge]))(var, var1, self) /* add_edge on <var:POSet[Phase]>*/;
RET_LABEL:;
}
/* method cached#CachedPhase#init for (self: Object, ToolContext, nullable Collection[Phase]) */
void VIRTUAL_cached__CachedPhase__init(val* self, val* p0, val* p1) {
cached__CachedPhase__init(self, p0, p1);
RET_LABEL:;
}
/* method cached#CachedPhase#process_annotated_node for (self: CachedPhase, ANode, AAnnotation) */
void cached__CachedPhase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_npropdef /* var npropdef: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var1 /* : Token */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var18 /* : nullable MSignature */;
val* var19 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var20 /* : null */;
short int var21 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : nullable ASignature */;
val* var28 /* : ANodes[AParam] */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : Location */;
val* var_location /* var location: Location */;
val* var37 /* : MProperty */;
val* var38 /* : String */;
val* var_name /* var name: String */;
val* var39 /* : nullable ANode */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name;
val* var_nclassdef /* var nclassdef: AStdClassdef */;
val* var43 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var44 /* : MAttributeDef */;
val* var45 /* : MAttribute */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : MVisibility */;
val* var_cache_mpropdef /* var cache_mpropdef: MAttributeDef */;
val* var60 /* : MType */;
val* var61 /* : MAttributeDef */;
val* var62 /* : MAttribute */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var_65 /* var : Array[Object] */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : MVisibility */;
val* var_is_cached_mpropdef /* var is_cached_mpropdef: MAttributeDef */;
val* var78 /* : MModule */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : MClass */;
val* var85 /* : MClassType */;
val* var86 /* : ToolContext */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : String */;
val* var92 /* : APropdef */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
val* var_is_cached_npropdef /* var is_cached_npropdef: AAttrPropdef */;
val* var97 /* : MMethodDef */;
val* var98 /* : MMethod */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var_101 /* var : Array[Object] */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : MVisibility */;
val* var_real_mpropdef /* var real_mpropdef: MMethodDef */;
val* var114 /* : nullable MSignature */;
val* var115 /* : ToolContext */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : String */;
val* var121 /* : APropdef */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
val* var_real_npropdef /* var real_npropdef: AConcreteMethPropdef */;
val* var126 /* : nullable AExpr */;
val* var_real_body /* var real_body: AExpr */;
val* var127 /* : ToolContext */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : String */;
val* var133 /* : AExpr */;
val* var_proxy_body /* var proxy_body: AExpr */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : String */;
val* var139 /* : Array[Token] */;
val* var140 /* : nullable Object */;
val* var141 /* : MProperty */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : String */;
val* var148 /* : Array[Token] */;
val* var149 /* : nullable Object */;
val* var150 /* : MProperty */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
val* var157 /* : Array[Token] */;
val* var158 /* : nullable Object */;
val* var159 /* : MProperty */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : NativeString */;
long var164 /* : Int */;
val* var165 /* : String */;
val* var166 /* : Array[Token] */;
val* var167 /* : nullable Object */;
val* var168 /* : MProperty */;
val* var169 /* : String */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
long var173 /* : Int */;
val* var174 /* : String */;
val* var175 /* : Array[Token] */;
val* var176 /* : nullable Object */;
val* var177 /* : MProperty */;
val* var178 /* : String */;
val* var179 /* : nullable AExpr */;
var_npropdef = p0;
var_nat = p1;
var = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_atid]))(var_nat) /* n_atid on <var_nat:AAnnotation>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__AAtid__n_id]))(var) /* n_id on <var:AAtid>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:Token>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "cached";
var5 = 6;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___33d_61d]))(var2, var3) /* != on <var2:String>*/;
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var8) /* modelbuilder on <var8:ToolContext>*/;
var_modelbuilder = var9;
/* <var_npropdef:ANode> isa AConcreteMethPropdef */
cltype = type_parser_nodes__AConcreteMethPropdef.color;
idtype = type_parser_nodes__AConcreteMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var10 = 0;
} else {
var10 = var_npropdef->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "Syntax error: only a function can be cached.";
var15 = 44;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_npropdef, var13) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var17 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:ANode(AConcreteMethPropdef)>*/;
if (var17 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 54);
show_backtrace(1);
}
var_mpropdef = var17;
var18 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 56);
show_backtrace(1);
} else {
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_model__MSignature__return_mtype]))(var18) /* return_mtype on <var18:nullable MSignature>*/;
}
var_mtype = var19;
var20 = NULL;
if (var_mtype == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (var21){
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Syntax error: only a function can be cached.";
var25 = 44;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_npropdef, var23) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var27 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(var_npropdef) /* n_signature on <var_npropdef:ANode(AConcreteMethPropdef)>*/;
if (var27 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 62);
show_backtrace(1);
} else {
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var27) /* n_params on <var27:nullable ASignature>*/;
}
var29 = ((short int (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var28) /* is_empty on <var28:ANodes[AParam]>*/;
var30 = !var29;
if (var30){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "Syntax error: only a function without arguments can be cached.";
var34 = 62;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_npropdef, var32) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var36 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_npropdef) /* location on <var_npropdef:ANode(AConcreteMethPropdef)>*/;
var_location = var36;
var37 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MMethodDef>*/;
var38 = ((val* (*)(val*))(var37->class->vft[COLOR_model__MProperty__name]))(var37) /* name on <var37:MProperty(MMethod)>*/;
var_name = var38;
var39 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_npropdef) /* parent on <var_npropdef:ANode(AConcreteMethPropdef)>*/;
/* <var39:nullable ANode> isa AStdClassdef */
cltype41 = type_parser_nodes__AStdClassdef.color;
idtype42 = type_parser_nodes__AStdClassdef.id;
if(var39 == NULL) {
var40 = 0;
} else {
if(cltype41 >= var39->type->table_size) {
var40 = 0;
} else {
var40 = var39->type->type_table[cltype41] == idtype42;
}
}
if (!var40) {
var_class_name = var39 == NULL ? "null" : var39->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AStdClassdef", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 71);
show_backtrace(1);
}
var_nclassdef = var39;
var43 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AStdClassdef>*/;
if (var43 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 72);
show_backtrace(1);
}
var_mclassdef = var43;
var44 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
var45 = NEW_model__MAttribute(&type_model__MAttribute);
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
var47 = 3;
((void (*)(val*, long))(var46->class->vft[COLOR_array__Array__with_capacity]))(var46, var47) /* with_capacity on <var46:Array[Object]>*/;
var_ = var46;
if (varonce48) {
var49 = varonce48;
} else {
var50 = "@";
var51 = 1;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var49) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_name) /* add on <var_:Array[Object]>*/;
if (varonce53) {
var54 = varonce53;
} else {
var55 = "<cache>";
var56 = 7;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var54) /* add on <var_:Array[Object]>*/;
var58 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var59 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:CachedPhase>*/;
((void (*)(val*, val*, val*, val*))(var45->class->vft[COLOR_model__MAttribute__init]))(var45, var_mclassdef, var58, var59) /* init on <var45:MAttribute>*/;
((void (*)(val*, val*, val*, val*))(var44->class->vft[COLOR_model__MAttributeDef__init]))(var44, var_mclassdef, var45, var_location) /* init on <var44:MAttributeDef>*/;
var_cache_mpropdef = var44;
var60 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_nullable]))(var_mtype) /* as_nullable on <var_mtype:nullable MType(MType)>*/;
((void (*)(val*, val*))(var_cache_mpropdef->class->vft[COLOR_model__MAttributeDef__static_mtype_61d]))(var_cache_mpropdef, var60) /* static_mtype= on <var_cache_mpropdef:MAttributeDef>*/;
var61 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
var62 = NEW_model__MAttribute(&type_model__MAttribute);
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
var64 = 3;
((void (*)(val*, long))(var63->class->vft[COLOR_array__Array__with_capacity]))(var63, var64) /* with_capacity on <var63:Array[Object]>*/;
var_65 = var63;
if (varonce66) {
var67 = varonce66;
} else {
var68 = "@";
var69 = 1;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
((void (*)(val*, val*))(var_65->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_65, var67) /* add on <var_65:Array[Object]>*/;
((void (*)(val*, val*))(var_65->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_65, var_name) /* add on <var_65:Array[Object]>*/;
if (varonce71) {
var72 = varonce71;
} else {
var73 = "<is_cached>";
var74 = 11;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
((void (*)(val*, val*))(var_65->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_65, var72) /* add on <var_65:Array[Object]>*/;
var76 = ((val* (*)(val*))(var_65->class->vft[COLOR_string__Object__to_s]))(var_65) /* to_s on <var_65:Array[Object]>*/;
var77 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:CachedPhase>*/;
((void (*)(val*, val*, val*, val*))(var62->class->vft[COLOR_model__MAttribute__init]))(var62, var_mclassdef, var76, var77) /* init on <var62:MAttribute>*/;
((void (*)(val*, val*, val*, val*))(var61->class->vft[COLOR_model__MAttributeDef__init]))(var61, var_mclassdef, var62, var_location) /* init on <var61:MAttributeDef>*/;
var_is_cached_mpropdef = var61;
var78 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mmodule]))(var_mclassdef) /* mmodule on <var_mclassdef:MClassDef>*/;
if (varonce79) {
var80 = varonce79;
} else {
var81 = "Bool";
var82 = 4;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = ((val* (*)(val*, val*))(var78->class->vft[COLOR_model__MModule__get_primitive_class]))(var78, var80) /* get_primitive_class on <var78:MModule>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_model__MClass__mclass_type]))(var84) /* mclass_type on <var84:MClass>*/;
((void (*)(val*, val*))(var_is_cached_mpropdef->class->vft[COLOR_model__MAttributeDef__static_mtype_61d]))(var_is_cached_mpropdef, var85) /* static_mtype= on <var_is_cached_mpropdef:MAttributeDef>*/;
var86 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
if (varonce87) {
var88 = varonce87;
} else {
var89 = "var is_cached = false";
var90 = 21;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = ((val* (*)(val*, val*))(var86->class->vft[COLOR_parser_util__ToolContext__parse_propdef]))(var86, var88) /* parse_propdef on <var86:ToolContext>*/;
/* <var92:APropdef> isa AAttrPropdef */
cltype94 = type_parser_nodes__AAttrPropdef.color;
idtype95 = type_parser_nodes__AAttrPropdef.id;
if(cltype94 >= var92->type->table_size) {
var93 = 0;
} else {
var93 = var92->type->type_table[cltype94] == idtype95;
}
if (!var93) {
var_class_name96 = var92 == NULL ? "null" : var92->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AAttrPropdef", var_class_name96);
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 83);
show_backtrace(1);
}
var_is_cached_npropdef = var92;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_cached__CachedPhase__associate_propdef]))(self, var_is_cached_mpropdef, var_is_cached_npropdef) /* associate_propdef on <self:CachedPhase>*/;
var97 = NEW_model__MMethodDef(&type_model__MMethodDef);
var98 = NEW_model__MMethod(&type_model__MMethod);
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
var100 = 3;
((void (*)(val*, long))(var99->class->vft[COLOR_array__Array__with_capacity]))(var99, var100) /* with_capacity on <var99:Array[Object]>*/;
var_101 = var99;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "";
var105 = 0;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
((void (*)(val*, val*))(var_101->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_101, var103) /* add on <var_101:Array[Object]>*/;
((void (*)(val*, val*))(var_101->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_101, var_name) /* add on <var_101:Array[Object]>*/;
if (varonce107) {
var108 = varonce107;
} else {
var109 = "<real>";
var110 = 6;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
((void (*)(val*, val*))(var_101->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_101, var108) /* add on <var_101:Array[Object]>*/;
var112 = ((val* (*)(val*))(var_101->class->vft[COLOR_string__Object__to_s]))(var_101) /* to_s on <var_101:Array[Object]>*/;
var113 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:CachedPhase>*/;
((void (*)(val*, val*, val*, val*))(var98->class->vft[COLOR_model__MMethod__init]))(var98, var_mclassdef, var112, var113) /* init on <var98:MMethod>*/;
((void (*)(val*, val*, val*, val*))(var97->class->vft[COLOR_model__MMethodDef__init]))(var97, var_mclassdef, var98, var_location) /* init on <var97:MMethodDef>*/;
var_real_mpropdef = var97;
var114 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
((void (*)(val*, val*))(var_real_mpropdef->class->vft[COLOR_model__MMethodDef__msignature_61d]))(var_real_mpropdef, var114) /* msignature= on <var_real_mpropdef:MMethodDef>*/;
var115 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
if (varonce116) {
var117 = varonce116;
} else {
var118 = "fun real do end";
var119 = 15;
var120 = string__NativeString__to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
var121 = ((val* (*)(val*, val*))(var115->class->vft[COLOR_parser_util__ToolContext__parse_propdef]))(var115, var117) /* parse_propdef on <var115:ToolContext>*/;
/* <var121:APropdef> isa AConcreteMethPropdef */
cltype123 = type_parser_nodes__AConcreteMethPropdef.color;
idtype124 = type_parser_nodes__AConcreteMethPropdef.id;
if(cltype123 >= var121->type->table_size) {
var122 = 0;
} else {
var122 = var121->type->type_table[cltype123] == idtype124;
}
if (!var122) {
var_class_name125 = var121 == NULL ? "null" : var121->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AConcreteMethPropdef", var_class_name125);
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 90);
show_backtrace(1);
}
var_real_npropdef = var121;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_cached__CachedPhase__associate_propdef]))(self, var_real_mpropdef, var_real_npropdef) /* associate_propdef on <self:CachedPhase>*/;
var126 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var_npropdef) /* n_block on <var_npropdef:ANode(AConcreteMethPropdef)>*/;
if (var126 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 95);
show_backtrace(1);
}
var_real_body = var126;
var127 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
if (varonce128) {
var129 = varonce128;
} else {
var130 = "if self._is_cached then return self._cache.as(not null)\nvar res = call_real\nself._cache_write = res\nself._is_cached_write = true\nreturn res";
var131 = 139;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
var133 = ((val* (*)(val*, val*))(var127->class->vft[COLOR_parser_util__ToolContext__parse_stmts]))(var127, var129) /* parse_stmts on <var127:ToolContext>*/;
var_proxy_body = var133;
((void (*)(val*, val*))(var_real_body->class->vft[COLOR_parser_nodes__ANode__replace_with]))(var_real_body, var_proxy_body) /* replace_with on <var_real_body:AExpr>*/;
if (varonce134) {
var135 = varonce134;
} else {
var136 = "_is_cached";
var137 = 10;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
var139 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var135) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var140 = ((val* (*)(val*))(var139->class->vft[COLOR_abstract_collection__Collection__first]))(var139) /* first on <var139:Array[Token]>*/;
var141 = ((val* (*)(val*))(var_is_cached_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_is_cached_mpropdef) /* mproperty on <var_is_cached_mpropdef:MAttributeDef>*/;
var142 = ((val* (*)(val*))(var141->class->vft[COLOR_model__MProperty__name]))(var141) /* name on <var141:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var140->class->vft[COLOR_parser_nodes__Token__text_61d]))(var140, var142) /* text= on <var140:nullable Object(Token)>*/;
if (varonce143) {
var144 = varonce143;
} else {
var145 = "_is_cached_write";
var146 = 16;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
var148 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var144) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var149 = ((val* (*)(val*))(var148->class->vft[COLOR_abstract_collection__Collection__first]))(var148) /* first on <var148:Array[Token]>*/;
var150 = ((val* (*)(val*))(var_is_cached_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_is_cached_mpropdef) /* mproperty on <var_is_cached_mpropdef:MAttributeDef>*/;
var151 = ((val* (*)(val*))(var150->class->vft[COLOR_model__MProperty__name]))(var150) /* name on <var150:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var149->class->vft[COLOR_parser_nodes__Token__text_61d]))(var149, var151) /* text= on <var149:nullable Object(Token)>*/;
if (varonce152) {
var153 = varonce152;
} else {
var154 = "_cache";
var155 = 6;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
var157 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var153) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var158 = ((val* (*)(val*))(var157->class->vft[COLOR_abstract_collection__Collection__first]))(var157) /* first on <var157:Array[Token]>*/;
var159 = ((val* (*)(val*))(var_cache_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_cache_mpropdef) /* mproperty on <var_cache_mpropdef:MAttributeDef>*/;
var160 = ((val* (*)(val*))(var159->class->vft[COLOR_model__MProperty__name]))(var159) /* name on <var159:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var158->class->vft[COLOR_parser_nodes__Token__text_61d]))(var158, var160) /* text= on <var158:nullable Object(Token)>*/;
if (varonce161) {
var162 = varonce161;
} else {
var163 = "_cache_write";
var164 = 12;
var165 = string__NativeString__to_s_with_length(var163, var164);
var162 = var165;
varonce161 = var162;
}
var166 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var162) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var167 = ((val* (*)(val*))(var166->class->vft[COLOR_abstract_collection__Collection__first]))(var166) /* first on <var166:Array[Token]>*/;
var168 = ((val* (*)(val*))(var_cache_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_cache_mpropdef) /* mproperty on <var_cache_mpropdef:MAttributeDef>*/;
var169 = ((val* (*)(val*))(var168->class->vft[COLOR_model__MProperty__name]))(var168) /* name on <var168:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var167->class->vft[COLOR_parser_nodes__Token__text_61d]))(var167, var169) /* text= on <var167:nullable Object(Token)>*/;
if (varonce170) {
var171 = varonce170;
} else {
var172 = "call_real";
var173 = 9;
var174 = string__NativeString__to_s_with_length(var172, var173);
var171 = var174;
varonce170 = var171;
}
var175 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var171) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var176 = ((val* (*)(val*))(var175->class->vft[COLOR_abstract_collection__Collection__first]))(var175) /* first on <var175:Array[Token]>*/;
var177 = ((val* (*)(val*))(var_real_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_real_mpropdef) /* mproperty on <var_real_mpropdef:MMethodDef>*/;
var178 = ((val* (*)(val*))(var177->class->vft[COLOR_model__MProperty__name]))(var177) /* name on <var177:MProperty(MMethod)>*/;
((void (*)(val*, val*))(var176->class->vft[COLOR_parser_nodes__Token__text_61d]))(var176, var178) /* text= on <var176:nullable Object(Token)>*/;
var179 = ((val* (*)(val*))(var_real_npropdef->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var_real_npropdef) /* n_block on <var_real_npropdef:AConcreteMethPropdef>*/;
if (var179 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 115);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var179->class->vft[COLOR_parser_nodes__ANode__replace_with]))(var179, var_real_body) /* replace_with on <var179:nullable AExpr>*/;
}
RET_LABEL:;
}
/* method cached#CachedPhase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_cached__CachedPhase__process_annotated_node(val* self, val* p0, val* p1) {
cached__CachedPhase__process_annotated_node(self, p0, p1);
RET_LABEL:;
}
/* method cached#CachedPhase#associate_propdef for (self: CachedPhase, MPropDef, APropdef) */
void cached__CachedPhase__associate_propdef(val* self, val* p0, val* p1) {
val* var_m /* var m: MPropDef */;
val* var_n /* var n: APropdef */;
val* var /* : nullable MPropDef */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : ToolContext */;
val* var4 /* : ModelBuilder */;
val* var5 /* : HashMap[MPropDef, APropdef] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : ModelBuilder */;
val* var10 /* : HashMap[MPropDef, APropdef] */;
val* var11 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var12 /* : ToolContext */;
val* var13 /* : ModelBuilder */;
val* var14 /* : HashMap[MClassDef, AClassdef] */;
val* var15 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var16 /* : nullable MClassDef */;
short int var17 /* : Bool */;
val* var18 /* : ANodes[APropdef] */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : ANodes[APropdef] */;
var_m = p0;
var_n = p1;
var = ((val* (*)(val*))(var_n->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_n) /* mpropdef on <var_n:APropdef>*/;
var1 = NULL;
if (var == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 128);
show_backtrace(1);
}
((void (*)(val*, val*))(var_n->class->vft[COLOR_modelize_property__APropdef__mpropdef_61d]))(var_n, var_m) /* mpropdef= on <var_n:APropdef>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var3) /* modelbuilder on <var3:ToolContext>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var4) /* mpropdef2npropdef on <var4:ModelBuilder>*/;
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var5, var_m) /* has_key on <var5:HashMap[MPropDef, APropdef]>*/;
var7 = !var6;
if (!var7) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 132);
show_backtrace(1);
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var8) /* modelbuilder on <var8:ToolContext>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var9) /* mpropdef2npropdef on <var9:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var10, var_m, var_n) /* []= on <var10:HashMap[MPropDef, APropdef]>*/;
var11 = ((val* (*)(val*))(var_m->class->vft[COLOR_model__MPropDef__mclassdef]))(var_m) /* mclassdef on <var_m:MPropDef>*/;
var_mclassdef = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var12) /* modelbuilder on <var12:ToolContext>*/;
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(var13) /* mclassdef2nclassdef on <var13:ModelBuilder>*/;
var15 = ((val* (*)(val*, val*))(var14->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var14, var_mclassdef) /* [] on <var14:HashMap[MClassDef, AClassdef]>*/;
var_nclassdef = var15;
var16 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var16 == NULL) {
var17 = 0; /* <var_mclassdef:MClassDef> cannot be null */
} else {
var17 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_mclassdef) /* == on <var16:nullable MClassDef>*/;
}
if (!var17) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/cached.nit", 138);
show_backtrace(1);
}
var18 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var19 = ((short int (*)(val*, val*))(var18->class->vft[COLOR_abstract_collection__Collection__has]))(var18, var_n) /* has on <var18:ANodes[APropdef]>*/;
var20 = !var19;
if (var20){
var21 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*))(var21->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var21, var_n) /* add on <var21:ANodes[APropdef]>*/;
} else {
}
RET_LABEL:;
}
/* method cached#CachedPhase#associate_propdef for (self: Object, MPropDef, APropdef) */
void VIRTUAL_cached__CachedPhase__associate_propdef(val* self, val* p0, val* p1) {
cached__CachedPhase__associate_propdef(self, p0, p1);
RET_LABEL:;
}
