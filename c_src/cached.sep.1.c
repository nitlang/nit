#include "cached.sep.0.h"
/* method cached#ToolContext#cached_phase for (self: ToolContext): Phase */
val* cached__ToolContext__cached_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_cached__ToolContext___64dcached_phase].val; /* @cached_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @cached_phase", "src/cached.nit", 26);
exit(1);
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
val* var_is_cached_npropdef /* var is_cached_npropdef: AAttrPropdef */;
val* var96 /* : MMethodDef */;
val* var97 /* : MMethod */;
val* var98 /* : Array[Object] */;
long var99 /* : Int */;
val* var_100 /* var : Array[Object] */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var112 /* : MVisibility */;
val* var_real_mpropdef /* var real_mpropdef: MMethodDef */;
val* var113 /* : nullable MSignature */;
val* var114 /* : ToolContext */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : APropdef */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
val* var_real_npropdef /* var real_npropdef: AConcreteMethPropdef */;
val* var124 /* : nullable AExpr */;
val* var_real_body /* var real_body: AExpr */;
val* var125 /* : ToolContext */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : AExpr */;
val* var_proxy_body /* var proxy_body: AExpr */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
val* var137 /* : Array[Token] */;
val* var138 /* : nullable Object */;
val* var139 /* : MProperty */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : Array[Token] */;
val* var147 /* : nullable Object */;
val* var148 /* : MProperty */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : NativeString */;
long var153 /* : Int */;
val* var154 /* : String */;
val* var155 /* : Array[Token] */;
val* var156 /* : nullable Object */;
val* var157 /* : MProperty */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : Array[Token] */;
val* var165 /* : nullable Object */;
val* var166 /* : MProperty */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
val* var173 /* : Array[Token] */;
val* var174 /* : nullable Object */;
val* var175 /* : MProperty */;
val* var176 /* : String */;
val* var177 /* : nullable AExpr */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/cached.nit", 54);
exit(1);
}
var_mpropdef = var17;
var18 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/cached.nit", 56);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/cached.nit", 62);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/cached.nit", 71);
exit(1);
}
var_nclassdef = var39;
var43 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AStdClassdef>*/;
if (var43 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/cached.nit", 72);
exit(1);
}
var_mclassdef = var43;
var44 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
var45 = NEW_model__MAttribute(&type_model__MAttribute);
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
var47 = 3;
((void (*)(val*, long))(var46->class->vft[COLOR_array__Array__with_capacity]))(var46, var47) /* with_capacity on <var46:Array[Object]>*/;
CHECK_NEW_array__Array(var46);
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
CHECK_NEW_model__MAttribute(var45);
((void (*)(val*, val*, val*, val*))(var44->class->vft[COLOR_model__MAttributeDef__init]))(var44, var_mclassdef, var45, var_location) /* init on <var44:MAttributeDef>*/;
CHECK_NEW_model__MAttributeDef(var44);
var_cache_mpropdef = var44;
var60 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_nullable]))(var_mtype) /* as_nullable on <var_mtype:nullable MType(MType)>*/;
((void (*)(val*, val*))(var_cache_mpropdef->class->vft[COLOR_model__MAttributeDef__static_mtype_61d]))(var_cache_mpropdef, var60) /* static_mtype= on <var_cache_mpropdef:MAttributeDef>*/;
var61 = NEW_model__MAttributeDef(&type_model__MAttributeDef);
var62 = NEW_model__MAttribute(&type_model__MAttribute);
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
var64 = 3;
((void (*)(val*, long))(var63->class->vft[COLOR_array__Array__with_capacity]))(var63, var64) /* with_capacity on <var63:Array[Object]>*/;
CHECK_NEW_array__Array(var63);
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
CHECK_NEW_model__MAttribute(var62);
((void (*)(val*, val*, val*, val*))(var61->class->vft[COLOR_model__MAttributeDef__init]))(var61, var_mclassdef, var62, var_location) /* init on <var61:MAttributeDef>*/;
CHECK_NEW_model__MAttributeDef(var61);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/cached.nit", 83);
exit(1);
}
var_is_cached_npropdef = var92;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_cached__CachedPhase__associate_propdef]))(self, var_is_cached_mpropdef, var_is_cached_npropdef) /* associate_propdef on <self:CachedPhase>*/;
var96 = NEW_model__MMethodDef(&type_model__MMethodDef);
var97 = NEW_model__MMethod(&type_model__MMethod);
var98 = NEW_array__Array(&type_array__Arraykernel__Object);
var99 = 3;
((void (*)(val*, long))(var98->class->vft[COLOR_array__Array__with_capacity]))(var98, var99) /* with_capacity on <var98:Array[Object]>*/;
CHECK_NEW_array__Array(var98);
var_100 = var98;
if (varonce101) {
var102 = varonce101;
} else {
var103 = "";
var104 = 0;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
((void (*)(val*, val*))(var_100->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_100, var102) /* add on <var_100:Array[Object]>*/;
((void (*)(val*, val*))(var_100->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_100, var_name) /* add on <var_100:Array[Object]>*/;
if (varonce106) {
var107 = varonce106;
} else {
var108 = "<real>";
var109 = 6;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
((void (*)(val*, val*))(var_100->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_100, var107) /* add on <var_100:Array[Object]>*/;
var111 = ((val* (*)(val*))(var_100->class->vft[COLOR_string__Object__to_s]))(var_100) /* to_s on <var_100:Array[Object]>*/;
var112 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__private_visibility]))(self) /* private_visibility on <self:CachedPhase>*/;
((void (*)(val*, val*, val*, val*))(var97->class->vft[COLOR_model__MMethod__init]))(var97, var_mclassdef, var111, var112) /* init on <var97:MMethod>*/;
CHECK_NEW_model__MMethod(var97);
((void (*)(val*, val*, val*, val*))(var96->class->vft[COLOR_model__MMethodDef__init]))(var96, var_mclassdef, var97, var_location) /* init on <var96:MMethodDef>*/;
CHECK_NEW_model__MMethodDef(var96);
var_real_mpropdef = var96;
var113 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MMethodDef>*/;
((void (*)(val*, val*))(var_real_mpropdef->class->vft[COLOR_model__MMethodDef__msignature_61d]))(var_real_mpropdef, var113) /* msignature= on <var_real_mpropdef:MMethodDef>*/;
var114 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "fun real do end";
var118 = 15;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = ((val* (*)(val*, val*))(var114->class->vft[COLOR_parser_util__ToolContext__parse_propdef]))(var114, var116) /* parse_propdef on <var114:ToolContext>*/;
/* <var120:APropdef> isa AConcreteMethPropdef */
cltype122 = type_parser_nodes__AConcreteMethPropdef.color;
idtype123 = type_parser_nodes__AConcreteMethPropdef.id;
if(cltype122 >= var120->type->table_size) {
var121 = 0;
} else {
var121 = var120->type->type_table[cltype122] == idtype123;
}
if (!var121) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/cached.nit", 90);
exit(1);
}
var_real_npropdef = var120;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_cached__CachedPhase__associate_propdef]))(self, var_real_mpropdef, var_real_npropdef) /* associate_propdef on <self:CachedPhase>*/;
var124 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var_npropdef) /* n_block on <var_npropdef:ANode(AConcreteMethPropdef)>*/;
if (var124 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/cached.nit", 95);
exit(1);
}
var_real_body = var124;
var125 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
if (varonce126) {
var127 = varonce126;
} else {
var128 = "if self._is_cached then return self._cache.as(not null)\nvar res = call_real\nself._cache_write = res\nself._is_cached_write = true\nreturn res";
var129 = 139;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var131 = ((val* (*)(val*, val*))(var125->class->vft[COLOR_parser_util__ToolContext__parse_stmts]))(var125, var127) /* parse_stmts on <var125:ToolContext>*/;
var_proxy_body = var131;
((void (*)(val*, val*))(var_real_body->class->vft[COLOR_parser_nodes__ANode__replace_with]))(var_real_body, var_proxy_body) /* replace_with on <var_real_body:AExpr>*/;
if (varonce132) {
var133 = varonce132;
} else {
var134 = "_is_cached";
var135 = 10;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
var137 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var133) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var138 = ((val* (*)(val*))(var137->class->vft[COLOR_abstract_collection__Collection__first]))(var137) /* first on <var137:Array[Token]>*/;
var139 = ((val* (*)(val*))(var_is_cached_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_is_cached_mpropdef) /* mproperty on <var_is_cached_mpropdef:MAttributeDef>*/;
var140 = ((val* (*)(val*))(var139->class->vft[COLOR_model__MProperty__name]))(var139) /* name on <var139:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var138->class->vft[COLOR_parser_nodes__Token__text_61d]))(var138, var140) /* text= on <var138:nullable Object(Token)>*/;
if (varonce141) {
var142 = varonce141;
} else {
var143 = "_is_cached_write";
var144 = 16;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var142) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var147 = ((val* (*)(val*))(var146->class->vft[COLOR_abstract_collection__Collection__first]))(var146) /* first on <var146:Array[Token]>*/;
var148 = ((val* (*)(val*))(var_is_cached_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_is_cached_mpropdef) /* mproperty on <var_is_cached_mpropdef:MAttributeDef>*/;
var149 = ((val* (*)(val*))(var148->class->vft[COLOR_model__MProperty__name]))(var148) /* name on <var148:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var147->class->vft[COLOR_parser_nodes__Token__text_61d]))(var147, var149) /* text= on <var147:nullable Object(Token)>*/;
if (varonce150) {
var151 = varonce150;
} else {
var152 = "_cache";
var153 = 6;
var154 = string__NativeString__to_s_with_length(var152, var153);
var151 = var154;
varonce150 = var151;
}
var155 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var151) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var156 = ((val* (*)(val*))(var155->class->vft[COLOR_abstract_collection__Collection__first]))(var155) /* first on <var155:Array[Token]>*/;
var157 = ((val* (*)(val*))(var_cache_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_cache_mpropdef) /* mproperty on <var_cache_mpropdef:MAttributeDef>*/;
var158 = ((val* (*)(val*))(var157->class->vft[COLOR_model__MProperty__name]))(var157) /* name on <var157:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var156->class->vft[COLOR_parser_nodes__Token__text_61d]))(var156, var158) /* text= on <var156:nullable Object(Token)>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = "_cache_write";
var162 = 12;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var160) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var165 = ((val* (*)(val*))(var164->class->vft[COLOR_abstract_collection__Collection__first]))(var164) /* first on <var164:Array[Token]>*/;
var166 = ((val* (*)(val*))(var_cache_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_cache_mpropdef) /* mproperty on <var_cache_mpropdef:MAttributeDef>*/;
var167 = ((val* (*)(val*))(var166->class->vft[COLOR_model__MProperty__name]))(var166) /* name on <var166:MProperty(MAttribute)>*/;
((void (*)(val*, val*))(var165->class->vft[COLOR_parser_nodes__Token__text_61d]))(var165, var167) /* text= on <var165:nullable Object(Token)>*/;
if (varonce168) {
var169 = varonce168;
} else {
var170 = "call_real";
var171 = 9;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
var173 = ((val* (*)(val*, val*))(var_proxy_body->class->vft[COLOR_parser_util__ANode__collect_tokens_by_text]))(var_proxy_body, var169) /* collect_tokens_by_text on <var_proxy_body:AExpr>*/;
var174 = ((val* (*)(val*))(var173->class->vft[COLOR_abstract_collection__Collection__first]))(var173) /* first on <var173:Array[Token]>*/;
var175 = ((val* (*)(val*))(var_real_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_real_mpropdef) /* mproperty on <var_real_mpropdef:MMethodDef>*/;
var176 = ((val* (*)(val*))(var175->class->vft[COLOR_model__MProperty__name]))(var175) /* name on <var175:MProperty(MMethod)>*/;
((void (*)(val*, val*))(var174->class->vft[COLOR_parser_nodes__Token__text_61d]))(var174, var176) /* text= on <var174:nullable Object(Token)>*/;
var177 = ((val* (*)(val*))(var_real_npropdef->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var_real_npropdef) /* n_block on <var_real_npropdef:AConcreteMethPropdef>*/;
if (var177 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/cached.nit", 115);
exit(1);
} else {
((void (*)(val*, val*))(var177->class->vft[COLOR_parser_nodes__ANode__replace_with]))(var177, var_real_body) /* replace_with on <var177:nullable AExpr>*/;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/cached.nit", 128);
exit(1);
}
((void (*)(val*, val*))(var_n->class->vft[COLOR_modelize_property__APropdef__mpropdef_61d]))(var_n, var_m) /* mpropdef= on <var_n:APropdef>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:CachedPhase>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var3) /* modelbuilder on <var3:ToolContext>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelize_property__ModelBuilder__mpropdef2npropdef]))(var4) /* mpropdef2npropdef on <var4:ModelBuilder>*/;
var6 = ((short int (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var5, var_m) /* has_key on <var5:HashMap[MPropDef, APropdef]>*/;
var7 = !var6;
if (!var7) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/cached.nit", 132);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/cached.nit", 138);
exit(1);
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
