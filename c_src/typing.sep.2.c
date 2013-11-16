#include "typing.sep.0.h"
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void typing__ANewExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var37 /* : null */;
short int var38 /* : Bool */;
val* var39 /* : String */;
val* var_name /* var name: String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
short int var45 /* : Bool */;
val* var46 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var47 /* : null */;
short int var48 /* : Bool */;
val* var49 /* : MMethod */;
val* var50 /* : MClass */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
val* var63 /* : Array[Object] */;
long var64 /* : Int */;
val* var65 /* : NativeArray[Object] */;
val* var66 /* : String */;
val* var67 /* : AExprs */;
val* var68 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var69 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_type]))(self) /* n_type on <self:ANewExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(var_v, var) /* resolve_mtype on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_recvtype) /* mtype= on <self:ANewExpr>*/;
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var4 = 0;
} else {
var4 = var_recvtype->type->type_table[cltype] == idtype;
}
var5 = !var4;
if (var5){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype7 = type_model__MNullableType.color;
idtype8 = type_model__MNullableType.id;
if(cltype7 >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype7] == idtype8;
}
if (var6){
if (varonce) {
var9 = varonce;
} else {
var10 = "Type error: cannot instantiate the nullable type ";
var11 = 49;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ".";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
CHECK_NEW_array__Array(var18);
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var21) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Type error: cannot instantiate the formal type ";
var25 = 47;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ".";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
CHECK_NEW_array__Array(var32);
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var35) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
}
} else {
}
var36 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_id]))(self) /* n_id on <self:ANewExpr>*/;
var_nid = var36;
var37 = NULL;
if (var_nid == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (var38){
var39 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:nullable TId(TId)>*/;
var_name = var39;
} else {
if (varonce40) {
var41 = varonce40;
} else {
var42 = "init";
var43 = 4;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var_name = var41;
}
var45 = 0;
var46 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_recvtype, var_name, var45) /* get_method on <var_v:TypeVisitor>*/;
var_callsite = var46;
var47 = NULL;
if (var_callsite == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (var48){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ANewExpr__callsite_61d]))(self, var_callsite) /* callsite= on <self:ANewExpr>*/;
var49 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__mproperty]))(var_callsite) /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/;
var50 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:nullable MType(MClassType)>*/;
var51 = ((short int (*)(val*, val*))(var49->class->vft[COLOR_model__MMethod__is_init_for]))(var49, var50) /* is_init_for on <var49:MMethod>*/;
var52 = !var51;
if (var52){
if (varonce53) {
var54 = varonce53;
} else {
var55 = "Error: ";
var56 = 7;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = " is not a constructor.";
var61 = 22;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
var63 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var63 = array_instance Array[Object] */
var64 = 3;
var65 = NEW_array__NativeArray(var64, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var65)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var65)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var65)->values[2] = (val*) var59;
((void (*)(val*, val*, long))(var63->class->vft[COLOR_array__Array__with_native]))(var63, var65, var64) /* with_native on <var63:Array[Object]>*/;
CHECK_NEW_array__Array(var63);
}
var66 = ((val* (*)(val*))(var63->class->vft[COLOR_string__Object__to_s]))(var63) /* to_s on <var63:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var66) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var67 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_args]))(self) /* n_args on <self:ANewExpr>*/;
var68 = ((val* (*)(val*))(var67->class->vft[COLOR_typing__AExprs__to_a]))(var67) /* to_a on <var67:AExprs>*/;
var_args = var68;
var69 = ((short int (*)(val*, val*, val*))(var_callsite->class->vft[COLOR_typing__CallSite__check_signature]))(var_callsite, var_v, var_args) /* check_signature on <var_callsite:nullable CallSite(CallSite)>*/;
var69;
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANewExpr__accept_typing(val* self, val* p0) {
typing__ANewExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val; /* @mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty for (self: Object): nullable MAttribute */
val* VIRTUAL_typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = typing__AAttrFormExpr__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val = p0; /* @mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty= for (self: Object, nullable MAttribute) */
void VIRTUAL_typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
typing__AAttrFormExpr__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val; /* @attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AAttrFormExpr__attr_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val = p0; /* @attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
typing__AAttrFormExpr__attr_type_61d(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : TAttrid */;
val* var5 /* : String */;
val* var_name /* var name: String */;
short int var6 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var21 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : ModelBuilder */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : MModule */;
val* var48 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var55 /* : nullable MType */;
val* var_attr_type /* var attr_type: MType */;
val* var56 /* : AExpr */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
val* var60 /* : MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrFormExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_id]))(self) /* n_id on <self:AAttrFormExpr>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__Token__text]))(var4) /* text on <var4:TAttrid>*/;
var_name = var5;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "Error: Attribute \'";
var9 = 18;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\' access on \'null\'.";
var14 = 19;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
CHECK_NEW_array__Array(var16);
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var19) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var20 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_recvtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_unsafe_type = var20;
var21 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_unsafe_type, var_name) /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/;
var_mproperty = var21;
var22 = NULL;
if (var_mproperty == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (var23){
var24 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "Error: Attribute ";
var28 = 17;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = " doesn\'t exists in ";
var33 = 19;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = ".";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 5;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var31;
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var42)->values[4] = (val*) var36;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
CHECK_NEW_array__Array(var40);
}
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
((void (*)(val*, val*, val*))(var24->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var24, self, var43) /* error on <var24:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype45 = type_model__MAttribute.color;
idtype46 = type_model__MAttribute.id;
if(cltype45 >= var_mproperty->type->table_size) {
var44 = 0;
} else {
var44 = var_mproperty->type->type_table[cltype45] == idtype46;
}
if (!var44) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 1602);
exit(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty_61d]))(self, var_mproperty) /* mproperty= on <self:AAttrFormExpr>*/;
var47 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var48 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_definitions]))(var_mproperty, var47, var_unsafe_type) /* lookup_definitions on <var_mproperty:nullable MProperty(MAttribute)>*/;
var_mpropdefs = var48;
var49 = ((long (*)(val*))(var_mpropdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_mpropdefs) /* length on <var_mpropdefs:Array[MAttributeDef]>*/;
var50 = 1;
{ /* Inline kernel#Int#== (var49,var50) */
var53 = var49 == var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
if (!var51) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 1606);
exit(1);
}
var54 = ((val* (*)(val*))(var_mpropdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_mpropdefs) /* first on <var_mpropdefs:Array[MAttributeDef]>*/;
var_mpropdef = var54;
var55 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var_mpropdef) /* static_mtype on <var_mpropdef:MAttributeDef>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 1608);
exit(1);
}
var_attr_type = var55;
var56 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrFormExpr>*/;
/* <var56:AExpr> isa ASelfExpr */
cltype58 = type_parser_nodes__ASelfExpr.color;
idtype59 = type_parser_nodes__ASelfExpr.id;
if(cltype58 >= var56->type->table_size) {
var57 = 0;
} else {
var57 = var56->type->type_table[cltype58] == idtype59;
}
var60 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(var_v, var_attr_type, var_recvtype, var57) /* resolve_for on <var_v:TypeVisitor>*/;
var_attr_type = var60;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type_61d]))(self, var_attr_type) /* attr_type= on <self:AAttrFormExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
typing__AAttrFormExpr__resolve_property(self, p0);
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void typing__AAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var) /* mtype= on <self:AAttrExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrExpr__accept_typing(val* self, val* p0) {
typing__AAttrExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrAssignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrAssignExpr>*/;
var_mtype = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AAttrAssignExpr>*/;
var2 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var1, var_mtype) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var2;
var3 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var3) /* is_typed= on <self:AAttrAssignExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
typing__AAttrAssignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrReassignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrReassignExpr>*/;
var_mtype = var;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_mtype, var_mtype) /* resolve_reassignment on <self:AAttrReassignExpr>*/;
var3;
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:AAttrReassignExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
typing__AAttrReassignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var_bound /* var bound: MType */;
short int var7 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : nullable MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AIssetAttrExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AIssetAttrExpr>*/;
var_mtype = var;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AIssetAttrExpr>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_typing__AExpr__mtype]))(var3) /* mtype on <var3:AExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 1654);
exit(1);
}
var_recvtype = var4;
var5 = 0;
var6 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(var_v, var_mtype, var_recvtype, var5) /* resolve_for on <var_v:TypeVisitor>*/;
var_bound = var6;
/* <var_bound:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var7 = 0;
} else {
var7 = var_bound->type->type_table[cltype] == idtype;
}
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "Error: isset on a nullable attribute.";
var10 = 37;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var8) /* error on <var_v:TypeVisitor>*/;
} else {
}
var12 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var12) /* mtype= on <self:AIssetAttrExpr>*/;
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
typing__AIssetAttrExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AClosureCallExpr#accept_typing for (self: AClosureCallExpr, TypeVisitor) */
void typing__AClosureCallExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable ClosureVariable */;
val* var_variable /* var variable: nullable ClosureVariable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : AClassdef */;
val* var4 /* : nullable MClassDef */;
val* var5 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
val* var6 /* : nullable MType */;
val* var_msignature /* var msignature: MType */;
short int var7 /* : Bool */;
val* var8 /* : MType */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : AExprs */;
val* var11 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AClosureCallExpr__variable]))(self) /* variable on <self:AClosureCallExpr>*/;
var_variable = var;
var1 = NULL;
if (var_variable == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(var_v) /* nclassdef on <var_v:TypeVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var3) /* mclassdef on <var3:AClassdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1671);
exit(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_model__MClassDef__bound_mtype]))(var4) /* bound_mtype on <var4:nullable MClassDef>*/;
}
var_recvtype = var5;
var6 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:nullable ClosureVariable(ClosureVariable)>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 1672);
exit(1);
}
var_msignature = var6;
var7 = 0;
var8 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(var_v, var_msignature, var_recvtype, var7) /* resolve_for on <var_v:TypeVisitor>*/;
/* <var8:MType> isa MSignature */
cltype = type_model__MSignature.color;
idtype = type_model__MSignature.id;
if(cltype >= var8->type->table_size) {
var9 = 0;
} else {
var9 = var8->type->type_table[cltype] == idtype;
}
if (!var9) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 1673);
exit(1);
}
var_msignature = var8;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AClosureCallExpr__n_args]))(self) /* n_args on <self:AClosureCallExpr>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_typing__AExprs__to_a]))(var10) /* to_a on <var10:AExprs>*/;
var_args = var11;
var12 = ((val* (*)(val*))(var_variable->class->vft[COLOR_scope__Variable__name]))(var_variable) /* name on <var_variable:nullable ClosureVariable(ClosureVariable)>*/;
var13 = ((short int (*)(val*, val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__check_signature]))(var_v, self, var_args, var12, var_msignature) /* check_signature on <var_v:TypeVisitor>*/;
var13;
var14 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var14) /* is_typed= on <self:AClosureCallExpr>*/;
var15 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MType(MSignature)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var15) /* mtype= on <self:AClosureCallExpr>*/;
RET_LABEL:;
}
/* method typing#AClosureCallExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AClosureCallExpr__accept_typing(val* self, val* p0) {
typing__AClosureCallExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AClosureDef#mclosure for (self: AClosureDef): nullable MParameter */
val* typing__AClosureDef__mclosure(val* self) {
val* var /* : nullable MParameter */;
val* var1 /* : nullable MParameter */;
var1 = self->attrs[COLOR_typing__AClosureDef___64dmclosure].val; /* @mclosure on <self:AClosureDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AClosureDef#mclosure for (self: Object): nullable MParameter */
val* VIRTUAL_typing__AClosureDef__mclosure(val* self) {
val* var /* : nullable MParameter */;
val* var1 /* : nullable MParameter */;
var1 = typing__AClosureDef__mclosure(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AClosureDef#mclosure= for (self: AClosureDef, nullable MParameter) */
void typing__AClosureDef__mclosure_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AClosureDef___64dmclosure].val = p0; /* @mclosure on <self:AClosureDef> */
RET_LABEL:;
}
/* method typing#AClosureDef#mclosure= for (self: Object, nullable MParameter) */
void VIRTUAL_typing__AClosureDef__mclosure_61d(val* self, val* p0) {
typing__AClosureDef__mclosure_61d(self, p0);
RET_LABEL:;
}
/* method typing#AClosureDef#accept_typing for (self: AClosureDef, TypeVisitor, MParameter) */
void typing__AClosureDef__accept_typing(val* self, val* p0, val* p1) {
val* var_v /* var v: TypeVisitor */;
val* var_mparameter /* var mparameter: MParameter */;
val* var /* : nullable Array[Variable] */;
val* var_variables /* var variables: nullable Array[Variable] */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var_msignature /* var msignature: MSignature */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
long var21 /* : Int */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
long var27 /* : Int */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : Array[Object] */;
long var34 /* : Int */;
val* var35 /* : NativeArray[Object] */;
val* var36 /* : Object */;
val* var37 /* : Object */;
val* var38 /* : String */;
val* var39 /* : Range[Int] */;
long var40 /* : Int */;
long var41 /* : Int */;
val* var42 /* : Discrete */;
val* var43 /* : Discrete */;
val* var44 /* : Iterator[nullable Object] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
long var_i /* var i: Int */;
long var47 /* : Int */;
val* var48 /* : nullable Object */;
val* var49 /* : Array[MParameter] */;
val* var50 /* : nullable Object */;
val* var51 /* : MType */;
val* var52 /* : nullable AExpr */;
var_v = p0;
var_mparameter = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AClosureDef__variables]))(self) /* variables on <self:AClosureDef>*/;
var_variables = var;
var1 = NULL;
if (var_variables == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AClosureDef__mclosure_61d]))(self, var_mparameter) /* mclosure= on <self:AClosureDef>*/;
var3 = ((val* (*)(val*))(var_mparameter->class->vft[COLOR_model__MParameter__mtype]))(var_mparameter) /* mtype on <var_mparameter:MParameter>*/;
/* <var3:MType> isa MSignature */
cltype = type_model__MSignature.color;
idtype = type_model__MSignature.id;
if(cltype >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 1692);
exit(1);
}
var_msignature = var3;
var5 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
var6 = ((long (*)(val*))(var_variables->class->vft[COLOR_abstract_collection__Collection__length]))(var_variables) /* length on <var_variables:nullable Array[Variable](Array[Variable])>*/;
{ /* Inline kernel#Int#!= (var5,var6) */
var9 = var5 == var6;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
if (var7){
if (varonce) {
var11 = varonce;
} else {
var12 = "Type error: closure ";
var13 = 20;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
var15 = ((val* (*)(val*))(var_mparameter->class->vft[COLOR_model__MParameter__name]))(var_mparameter) /* name on <var_mparameter:MParameter>*/;
if (varonce16) {
var17 = varonce16;
} else {
var18 = " expects ";
var19 = 9;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
if (varonce22) {
var23 = varonce22;
} else {
var24 = " parameters, ";
var25 = 13;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = ((long (*)(val*))(var_variables->class->vft[COLOR_abstract_collection__Collection__length]))(var_variables) /* length on <var_variables:nullable Array[Variable](Array[Variable])>*/;
if (varonce28) {
var29 = varonce28;
} else {
var30 = " given";
var31 = 6;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
var33 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var33 = array_instance Array[Object] */
var34 = 7;
var35 = NEW_array__NativeArray(var34, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var35)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var35)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var35)->values[2] = (val*) var17;
var36 = BOX_kernel__Int(var21); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var35)->values[3] = (val*) var36;
((struct instance_array__NativeArray*)var35)->values[4] = (val*) var23;
var37 = BOX_kernel__Int(var27); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var35)->values[5] = (val*) var37;
((struct instance_array__NativeArray*)var35)->values[6] = (val*) var29;
((void (*)(val*, val*, long))(var33->class->vft[COLOR_array__Array__with_native]))(var33, var35, var34) /* with_native on <var33:Array[Object]>*/;
CHECK_NEW_array__Array(var33);
}
var38 = ((val* (*)(val*))(var33->class->vft[COLOR_string__Object__to_s]))(var33) /* to_s on <var33:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var38) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var39 = NEW_range__Range(&type_range__Rangekernel__Int);
var40 = 0;
var41 = ((long (*)(val*))(var_variables->class->vft[COLOR_abstract_collection__Collection__length]))(var_variables) /* length on <var_variables:nullable Array[Variable](Array[Variable])>*/;
var42 = BOX_kernel__Int(var40); /* autobox from Int to Discrete */
var43 = BOX_kernel__Int(var41); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var39->class->vft[COLOR_range__Range__without_last]))(var39, var42, var43) /* without_last on <var39:Range[Int]>*/;
CHECK_NEW_range__Range(var39);
var44 = ((val* (*)(val*))(var39->class->vft[COLOR_abstract_collection__Collection__iterator]))(var39) /* iterator on <var39:Range[Int]>*/;
for(;;) {
var45 = ((short int (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var44) /* is_ok on <var44:Iterator[nullable Object]>*/;
if(!var45) break;
var46 = ((val* (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__item]))(var44) /* item on <var44:Iterator[nullable Object]>*/;
var47 = ((struct instance_kernel__Int*)var46)->value; /* autounbox from nullable Object to Int */;
var_i = var47;
var48 = ((val* (*)(val*, long))(var_variables->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_variables, var_i) /* [] on <var_variables:nullable Array[Variable](Array[Variable])>*/;
var49 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var50 = ((val* (*)(val*, long))(var49->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var49, var_i) /* [] on <var49:Array[MParameter]>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_model__MParameter__mtype]))(var50) /* mtype on <var50:nullable Object(MParameter)>*/;
((void (*)(val*, val*))(var48->class->vft[COLOR_typing__Variable__declared_type_61d]))(var48, var51) /* declared_type= on <var48:nullable Object(Variable)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var44->class->vft[COLOR_abstract_collection__Iterator__next]))(var44) /* next on <var44:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AClosureDef__n_expr]))(self) /* n_expr on <self:AClosureDef>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var52) /* visit_stmt on <var_v:TypeVisitor>*/;
RET_LABEL:;
}
/* method typing#AClosureDef#accept_typing for (self: Object, TypeVisitor, MParameter) */
void VIRTUAL_typing__AClosureDef__accept_typing(val* self, val* p0, val* p1) {
typing__AClosureDef__accept_typing(self, p0, p1);
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var5 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var6 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var12 /* : ModelBuilder */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
short int var41 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADebugTypeExpr__n_expr]))(self) /* n_expr on <self:ADebugTypeExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_expr = var1;
var2 = NULL;
if (var_expr == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_expr) /* anchor_to on <var_v:TypeVisitor>*/;
var_unsafe = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADebugTypeExpr__n_type]))(self) /* n_type on <self:ADebugTypeExpr>*/;
var_ntype = var5;
var6 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(var_v, var_ntype) /* resolve_mtype on <var_v:TypeVisitor>*/;
var_mtype = var6;
var8 = NULL;
if (var_mtype == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
var_ = var9;
if (var9){
var10 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___33d_61d]))(var_mtype, var_expr) /* != on <var_mtype:nullable MType(MType)>*/;
var7 = var10;
} else {
var7 = var_;
}
if (var7){
var11 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_mtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_umtype = var11;
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "Found type ";
var15 = 11;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " (-> ";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "), expected ";
var25 = 12;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " (-> ";
var30 = 5;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ")";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 9;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_expr;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var_unsafe;
((struct instance_array__NativeArray*)var39)->values[4] = (val*) var23;
((struct instance_array__NativeArray*)var39)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var39)->values[6] = (val*) var28;
((struct instance_array__NativeArray*)var39)->values[7] = (val*) var_umtype;
((struct instance_array__NativeArray*)var39)->values[8] = (val*) var33;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
CHECK_NEW_array__Array(var37);
}
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var12, self, var40) /* warning on <var12:ModelBuilder>*/;
} else {
}
var41 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var41) /* is_typed= on <self:ADebugTypeExpr>*/;
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
typing__ADebugTypeExpr__accept_typing(self, p0);
RET_LABEL:;
}
