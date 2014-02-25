#include "astbuilder.sep.0.h"
/* method astbuilder#ASTBuilder#mmodule for (self: ASTBuilder): MModule */
val* astbuilder__ASTBuilder__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_astbuilder__ASTBuilder___64dmmodule].val; /* @mmodule on <self:ASTBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 25);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#mmodule for (self: Object): MModule */
val* VIRTUAL_astbuilder__ASTBuilder__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = astbuilder__ASTBuilder__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#mmodule= for (self: ASTBuilder, MModule) */
void astbuilder__ASTBuilder__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_astbuilder__ASTBuilder___64dmmodule].val = p0; /* @mmodule on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#mmodule= for (self: Object, MModule) */
void VIRTUAL_astbuilder__ASTBuilder__mmodule_61d(val* self, val* p0) {
astbuilder__ASTBuilder__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#anchor for (self: ASTBuilder): nullable MClassType */
val* astbuilder__ASTBuilder__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_astbuilder__ASTBuilder___64danchor].val; /* @anchor on <self:ASTBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#anchor for (self: Object): nullable MClassType */
val* VIRTUAL_astbuilder__ASTBuilder__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = astbuilder__ASTBuilder__anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#anchor= for (self: ASTBuilder, nullable MClassType) */
void astbuilder__ASTBuilder__anchor_61d(val* self, val* p0) {
self->attrs[COLOR_astbuilder__ASTBuilder___64danchor].val = p0; /* @anchor on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#anchor= for (self: Object, nullable MClassType) */
void VIRTUAL_astbuilder__ASTBuilder__anchor_61d(val* self, val* p0) {
astbuilder__ASTBuilder__anchor_61d(self, p0);
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#make_int for (self: ASTBuilder, Int): AIntExpr */
val* astbuilder__ASTBuilder__make_int(val* self, long p0) {
val* var /* : AIntExpr */;
long var_value /* var value: Int */;
val* var1 /* : AIntExpr */;
val* var2 /* : MModule */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : MClass */;
val* var8 /* : MClassType */;
var_value = p0;
var1 = NEW_parser_nodes__AIntExpr(&type_parser_nodes__AIntExpr);
var2 = ((val* (*)(val*))(self->class->vft[COLOR_astbuilder__ASTBuilder__mmodule]))(self) /* mmodule on <self:ASTBuilder>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "Int";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_model__MModule__get_primitive_class]))(var2, var3) /* get_primitive_class on <var2:MModule>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MClass__mclass_type]))(var7) /* mclass_type on <var7:MClass>*/;
((void (*)(val*, long, val*))(var1->class->vft[COLOR_astbuilder__AIntExpr__make]))(var1, var_value, var8) /* make on <var1:AIntExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_int for (self: Object, Int): AIntExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_int(val* self, long p0) {
val* var /* : AIntExpr */;
val* var1 /* : AIntExpr */;
var1 = astbuilder__ASTBuilder__make_int(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_new for (self: ASTBuilder, MClassType, MMethod, nullable Array[AExpr]): ANewExpr */
val* astbuilder__ASTBuilder__make_new(val* self, val* p0, val* p1, val* p2) {
val* var /* : ANewExpr */;
val* var_mtype /* var mtype: MClassType */;
val* var_constructor /* var constructor: MMethod */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : ANewExpr */;
var_mtype = p0;
var_constructor = p1;
var_args = p2;
var1 = NEW_parser_nodes__ANewExpr(&type_parser_nodes__ANewExpr);
((void (*)(val*, val*, val*, val*))(var1->class->vft[COLOR_astbuilder__ANewExpr__make]))(var1, var_mtype, var_constructor, var_args) /* make on <var1:ANewExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_new for (self: Object, MClassType, MMethod, nullable Array[AExpr]): ANewExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_new(val* self, val* p0, val* p1, val* p2) {
val* var /* : ANewExpr */;
val* var1 /* : ANewExpr */;
var1 = astbuilder__ASTBuilder__make_new(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_call for (self: ASTBuilder, AExpr, MMethod, nullable Array[AExpr]): ACallExpr */
val* astbuilder__ASTBuilder__make_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : ACallExpr */;
val* var_recv /* var recv: AExpr */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var1 /* : MPropDef */;
val* var2 /* : nullable MSignature */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable MType */;
val* var7 /* : nullable MClassType */;
val* var8 /* : MModule */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var11 /* : ACallExpr */;
var_recv = p0;
var_mmethod = p1;
var_args = p2;
var1 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MMethodDef__msignature]))(var1) /* msignature on <var1:MPropDef(MMethodDef)>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 47);
show_backtrace(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MSignature__return_mtype]))(var2) /* return_mtype on <var2:nullable MSignature>*/;
}
var_mtype = var3;
var4 = NULL;
if (var_mtype == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = ((val* (*)(val*))(var_recv->class->vft[COLOR_typing__AExpr__mtype]))(var_recv) /* mtype on <var_recv:AExpr>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 48);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_astbuilder__ASTBuilder__anchor]))(self) /* anchor on <self:ASTBuilder>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_astbuilder__ASTBuilder__mmodule]))(self) /* mmodule on <self:ASTBuilder>*/;
var9 = 1;
var10 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var6, var7, var8, var9) /* resolve_for on <var_mtype:nullable MType(MType)>*/;
var_mtype = var10;
} else {
}
var11 = NEW_parser_nodes__ACallExpr(&type_parser_nodes__ACallExpr);
((void (*)(val*, val*, val*, val*, val*))(var11->class->vft[COLOR_astbuilder__ACallExpr__make]))(var11, var_recv, var_mmethod, var_args, var_mtype) /* make on <var11:ACallExpr>*/;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_call for (self: Object, AExpr, MMethod, nullable Array[AExpr]): ACallExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_call(val* self, val* p0, val* p1, val* p2) {
val* var /* : ACallExpr */;
val* var1 /* : ACallExpr */;
var1 = astbuilder__ASTBuilder__make_call(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_block for (self: ASTBuilder): ABlockExpr */
val* astbuilder__ASTBuilder__make_block(val* self) {
val* var /* : ABlockExpr */;
val* var1 /* : ABlockExpr */;
var1 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*))(var1->class->vft[COLOR_astbuilder__ABlockExpr__make]))(var1) /* make on <var1:ABlockExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_block for (self: Object): ABlockExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_block(val* self) {
val* var /* : ABlockExpr */;
val* var1 /* : ABlockExpr */;
var1 = astbuilder__ASTBuilder__make_block(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_read for (self: ASTBuilder, Variable, MType): AVarExpr */
val* astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1) {
val* var /* : AVarExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : AVarExpr */;
var_variable = p0;
var_mtype = p1;
var1 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_astbuilder__AVarExpr__make]))(var1, var_variable, var_mtype) /* make on <var1:AVarExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_read for (self: Object, Variable, MType): AVarExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_var_read(val* self, val* p0, val* p1) {
val* var /* : AVarExpr */;
val* var1 /* : AVarExpr */;
var1 = astbuilder__ASTBuilder__make_var_read(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_assign for (self: ASTBuilder, Variable, AExpr): AVarAssignExpr */
val* astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1) {
val* var /* : AVarAssignExpr */;
val* var_variable /* var variable: Variable */;
val* var_value /* var value: AExpr */;
val* var1 /* : AVarAssignExpr */;
var_variable = p0;
var_value = p1;
var1 = NEW_parser_nodes__AVarAssignExpr(&type_parser_nodes__AVarAssignExpr);
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_astbuilder__AVarAssignExpr__make]))(var1, var_variable, var_value) /* make on <var1:AVarAssignExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_var_assign for (self: Object, Variable, AExpr): AVarAssignExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_var_assign(val* self, val* p0, val* p1) {
val* var /* : AVarAssignExpr */;
val* var1 /* : AVarAssignExpr */;
var1 = astbuilder__ASTBuilder__make_var_assign(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_read for (self: ASTBuilder, AExpr, MAttribute): AAttrExpr */
val* astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1) {
val* var /* : AAttrExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var1 /* : MPropDef */;
val* var2 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MClassType */;
val* var5 /* : MModule */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var8 /* : AAttrExpr */;
var_recv = p0;
var_attribute = p1;
var1 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_model__MProperty__intro]))(var_attribute) /* intro on <var_attribute:MAttribute>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var1) /* static_mtype on <var1:MPropDef(MAttributeDef)>*/;
var3 = ((val* (*)(val*))(var_recv->class->vft[COLOR_typing__AExpr__mtype]))(var_recv) /* mtype on <var_recv:AExpr>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 73);
show_backtrace(1);
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_astbuilder__ASTBuilder__anchor]))(self) /* anchor on <self:ASTBuilder>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_astbuilder__ASTBuilder__mmodule]))(self) /* mmodule on <self:ASTBuilder>*/;
var6 = 1;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 73);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*, val*, val*, val*, short int))(var2->class->vft[COLOR_model__MType__resolve_for]))(var2, var3, var4, var5, var6) /* resolve_for on <var2:nullable MType>*/;
}
var_mtype = var7;
var8 = NEW_parser_nodes__AAttrExpr(&type_parser_nodes__AAttrExpr);
((void (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_astbuilder__AAttrExpr__make]))(var8, var_recv, var_attribute, var_mtype) /* make on <var8:AAttrExpr>*/;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_read for (self: Object, AExpr, MAttribute): AAttrExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_attr_read(val* self, val* p0, val* p1) {
val* var /* : AAttrExpr */;
val* var1 /* : AAttrExpr */;
var1 = astbuilder__ASTBuilder__make_attr_read(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_assign for (self: ASTBuilder, AExpr, MAttribute, AExpr): AAttrAssignExpr */
val* astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2) {
val* var /* : AAttrAssignExpr */;
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var1 /* : AAttrAssignExpr */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
var1 = NEW_parser_nodes__AAttrAssignExpr(&type_parser_nodes__AAttrAssignExpr);
((void (*)(val*, val*, val*, val*))(var1->class->vft[COLOR_astbuilder__AAttrAssignExpr__make]))(var1, var_recv, var_attribute, var_value) /* make on <var1:AAttrAssignExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_attr_assign for (self: Object, AExpr, MAttribute, AExpr): AAttrAssignExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_attr_assign(val* self, val* p0, val* p1, val* p2) {
val* var /* : AAttrAssignExpr */;
val* var1 /* : AAttrAssignExpr */;
var1 = astbuilder__ASTBuilder__make_attr_assign(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_do for (self: ASTBuilder): ADoExpr */
val* astbuilder__ASTBuilder__make_do(val* self) {
val* var /* : ADoExpr */;
val* var1 /* : ADoExpr */;
var1 = NEW_parser_nodes__ADoExpr(&type_parser_nodes__ADoExpr);
((void (*)(val*))(var1->class->vft[COLOR_astbuilder__ADoExpr__make]))(var1) /* make on <var1:ADoExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_do for (self: Object): ADoExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_do(val* self) {
val* var /* : ADoExpr */;
val* var1 /* : ADoExpr */;
var1 = astbuilder__ASTBuilder__make_do(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_if for (self: ASTBuilder, AExpr, nullable MType): AIfExpr */
val* astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1) {
val* var /* : AIfExpr */;
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AIfExpr */;
var_condition = p0;
var_mtype = p1;
var1 = NEW_parser_nodes__AIfExpr(&type_parser_nodes__AIfExpr);
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_astbuilder__AIfExpr__make]))(var1, var_condition, var_mtype) /* make on <var1:AIfExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#make_if for (self: Object, AExpr, nullable MType): AIfExpr */
val* VIRTUAL_astbuilder__ASTBuilder__make_if(val* self, val* p0, val* p1) {
val* var /* : AIfExpr */;
val* var1 /* : AIfExpr */;
var1 = astbuilder__ASTBuilder__make_if(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ASTBuilder#init for (self: ASTBuilder, MModule, nullable MClassType) */
void astbuilder__ASTBuilder__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_astbuilder__ASTBuilder___64dmmodule].val = p0; /* @mmodule on <self:ASTBuilder> */
self->attrs[COLOR_astbuilder__ASTBuilder___64danchor].val = p1; /* @anchor on <self:ASTBuilder> */
RET_LABEL:;
}
/* method astbuilder#ASTBuilder#init for (self: Object, MModule, nullable MClassType) */
void VIRTUAL_astbuilder__ASTBuilder__init(val* self, val* p0, val* p1) {
astbuilder__ASTBuilder__init(self, p0, p1);
RET_LABEL:;
}
/* method astbuilder#AExpr#make_var_read for (self: AExpr): AVarExpr */
val* astbuilder__AExpr__make_var_read(val* self) {
val* var /* : AVarExpr */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable ANode */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : AExpr */;
val* var_place /* var place: AExpr */;
val* var8 /* : Variable */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : nullable MType */;
val* var14 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
val* var15 /* : AVarExpr */;
val* var16 /* : nullable MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_astbuilder__AExpr__variable_cache]))(self) /* variable_cache on <self:AExpr>*/;
var_variable = var1;
var2 = NULL;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:AExpr>*/;
var5 = NULL;
if (var4 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (!var6) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 107);
show_backtrace(1);
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_astbuilder__AExpr__detach_with_placeholder]))(self) /* detach_with_placeholder on <self:AExpr>*/;
var_place = var7;
var8 = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var9 = varonce;
} else {
var10 = "";
var11 = 0;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
((void (*)(val*, val*))(var8->class->vft[COLOR_scope__Variable__init]))(var8, var9) /* init on <var8:Variable>*/;
var_variable = var8;
var13 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AExpr>*/;
((void (*)(val*, val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type_61d]))(var_variable, var13) /* declared_type= on <var_variable:nullable Variable(Variable)>*/;
var14 = NEW_parser_nodes__AVarAssignExpr(&type_parser_nodes__AVarAssignExpr);
((void (*)(val*, val*, val*))(var14->class->vft[COLOR_astbuilder__AVarAssignExpr__make]))(var14, var_variable, self) /* make on <var14:AVarAssignExpr>*/;
var_nvar = var14;
((void (*)(val*, val*))(var_place->class->vft[COLOR_parser_nodes__ANode__replace_with]))(var_place, var_nvar) /* replace_with on <var_place:AExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_astbuilder__AExpr__variable_cache_61d]))(self, var_variable) /* variable_cache= on <self:AExpr>*/;
} else {
}
var15 = NEW_parser_nodes__AVarExpr(&type_parser_nodes__AVarExpr);
var16 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:nullable Variable(Variable)>*/;
if (var16 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 115);
show_backtrace(1);
}
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_astbuilder__AVarExpr__make]))(var15, var_variable, var16) /* make on <var15:AVarExpr>*/;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#make_var_read for (self: Object): AVarExpr */
val* VIRTUAL_astbuilder__AExpr__make_var_read(val* self) {
val* var /* : AVarExpr */;
val* var1 /* : AVarExpr */;
var1 = astbuilder__AExpr__make_var_read(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache for (self: AExpr): nullable Variable */
val* astbuilder__AExpr__variable_cache(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache for (self: Object): nullable Variable */
val* VIRTUAL_astbuilder__AExpr__variable_cache(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = astbuilder__AExpr__variable_cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#variable_cache= for (self: AExpr, nullable Variable) */
void astbuilder__AExpr__variable_cache_61d(val* self, val* p0) {
self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val = p0; /* @variable_cache on <self:AExpr> */
RET_LABEL:;
}
/* method astbuilder#AExpr#variable_cache= for (self: Object, nullable Variable) */
void VIRTUAL_astbuilder__AExpr__variable_cache_61d(val* self, val* p0) {
astbuilder__AExpr__variable_cache_61d(self, p0);
RET_LABEL:;
}
/* method astbuilder#AExpr#detach_with_placeholder for (self: AExpr): AExpr */
val* astbuilder__AExpr__detach_with_placeholder(val* self) {
val* var /* : AExpr */;
val* var1 /* : APlaceholderExpr */;
val* var_h /* var h: APlaceholderExpr */;
var1 = NEW_astbuilder__APlaceholderExpr(&type_astbuilder__APlaceholderExpr);
((void (*)(val*))(var1->class->vft[COLOR_astbuilder__APlaceholderExpr__make]))(var1) /* make on <var1:APlaceholderExpr>*/;
var_h = var1;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_h) /* replace_with on <self:AExpr>*/;
var = var_h;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#detach_with_placeholder for (self: Object): AExpr */
val* VIRTUAL_astbuilder__AExpr__detach_with_placeholder(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = astbuilder__AExpr__detach_with_placeholder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#AExpr#add for (self: AExpr, AExpr) */
void astbuilder__AExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
var_expr = p0;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 147);
show_backtrace(1);
RET_LABEL:;
}
/* method astbuilder#AExpr#add for (self: Object, AExpr) */
void VIRTUAL_astbuilder__AExpr__add(val* self, val* p0) {
astbuilder__AExpr__add(self, p0);
RET_LABEL:;
}
/* method astbuilder#APlaceholderExpr#make for (self: APlaceholderExpr) */
void astbuilder__APlaceholderExpr__make(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:APlaceholderExpr>*/;
RET_LABEL:;
}
/* method astbuilder#APlaceholderExpr#make for (self: Object) */
void VIRTUAL_astbuilder__APlaceholderExpr__make(val* self) {
astbuilder__APlaceholderExpr__make(self);
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#make for (self: ABlockExpr) */
void astbuilder__ABlockExpr__make(val* self) {
short int var /* : Bool */;
var = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var) /* is_typed= on <self:ABlockExpr>*/;
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#make for (self: Object) */
void VIRTUAL_astbuilder__ABlockExpr__make(val* self) {
astbuilder__ABlockExpr__make(self);
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#add for (self: ABlockExpr, AExpr) */
void astbuilder__ABlockExpr__add(val* self, val* p0) {
val* var_expr /* var expr: AExpr */;
val* var /* : ANodes[AExpr] */;
var_expr = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, var_expr) /* add on <var:ANodes[AExpr]>*/;
RET_LABEL:;
}
/* method astbuilder#ABlockExpr#add for (self: Object, AExpr) */
void VIRTUAL_astbuilder__ABlockExpr__add(val* self, val* p0) {
astbuilder__ABlockExpr__add(self, p0);
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make for (self: ADoExpr) */
void astbuilder__ADoExpr__make(val* self) {
val* var /* : TKwdo */;
val* var1 /* : EscapeMark */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TKwdo__init]))(var) /* init on <var:TKwdo>*/;
self->attrs[COLOR_parser_nodes__ADoExpr___n_kwdo].val = var; /* _n_kwdo on <self:ADoExpr> */
var1 = NEW_scope__EscapeMark(&type_scope__EscapeMark);
var2 = NULL;
var3 = 0;
((void (*)(val*, val*, short int))(var1->class->vft[COLOR_scope__EscapeMark__init]))(var1, var2, var3) /* init on <var1:EscapeMark>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark_61d]))(self, var1) /* escapemark= on <self:ADoExpr>*/;
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make for (self: Object) */
void VIRTUAL_astbuilder__ADoExpr__make(val* self) {
astbuilder__ADoExpr__make(self);
RET_LABEL:;
}
/* method astbuilder#ADoExpr#make_break for (self: ADoExpr): ABreakExpr */
val* astbuilder__ADoExpr__make_break(val* self) {
val* var /* : ABreakExpr */;
val* var1 /* : nullable EscapeMark */;
val* var_escapemark /* var escapemark: nullable EscapeMark */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : EscapeMark */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : ABreakExpr */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark]))(self) /* escapemark on <self:ADoExpr>*/;
var_escapemark = var1;
var2 = NULL;
if (var_escapemark == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NEW_scope__EscapeMark(&type_scope__EscapeMark);
var5 = NULL;
var6 = 0;
((void (*)(val*, val*, short int))(var4->class->vft[COLOR_scope__EscapeMark__init]))(var4, var5, var6) /* init on <var4:EscapeMark>*/;
var_escapemark = var4;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ADoExpr__escapemark_61d]))(self, var_escapemark) /* escapemark= on <self:ADoExpr>*/;
} else {
}
var7 = NEW_parser_nodes__ABreakExpr(&type_parser_nodes__ABreakExpr);
((void (*)(val*, val*))(var7->class->vft[COLOR_astbuilder__ABreakExpr__make]))(var7, var_escapemark) /* make on <var7:ABreakExpr>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method astbuilder#ADoExpr#make_break for (self: Object): ABreakExpr */
val* VIRTUAL_astbuilder__ADoExpr__make_break(val* self) {
val* var /* : ABreakExpr */;
val* var1 /* : ABreakExpr */;
var1 = astbuilder__ADoExpr__make_break(self);
var = var1;
RET_LABEL:;
return var;
}
/* method astbuilder#ABreakExpr#make for (self: ABreakExpr, EscapeMark) */
void astbuilder__ABreakExpr__make(val* self, val* p0) {
val* var_escapemark /* var escapemark: EscapeMark */;
var_escapemark = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_scope__ABreakExpr__escapemark_61d]))(self, var_escapemark) /* escapemark= on <self:ABreakExpr>*/;
RET_LABEL:;
}
/* method astbuilder#ABreakExpr#make for (self: Object, EscapeMark) */
void VIRTUAL_astbuilder__ABreakExpr__make(val* self, val* p0) {
astbuilder__ABreakExpr__make(self, p0);
RET_LABEL:;
}
/* method astbuilder#AIfExpr#make for (self: AIfExpr, AExpr, nullable MType) */
void astbuilder__AIfExpr__make(val* self, val* p0, val* p1) {
val* var_condition /* var condition: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : TKwif */;
val* var1 /* : AExpr */;
val* var2 /* : ABlockExpr */;
val* var3 /* : ABlockExpr */;
short int var4 /* : Bool */;
var_condition = p0;
var_mtype = p1;
var = NEW_parser_nodes__TKwif(&type_parser_nodes__TKwif);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TKwif__init]))(var) /* init on <var:TKwif>*/;
self->attrs[COLOR_parser_nodes__AIfExpr___n_kwif].val = var; /* _n_kwif on <self:AIfExpr> */
self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val = var_condition; /* _n_expr on <self:AIfExpr> */
var1 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 208);
show_backtrace(1);
}
((void (*)(val*, val*))(var1->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var1, self) /* parent= on <var1:AExpr>*/;
var2 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*))(var2->class->vft[COLOR_astbuilder__ABlockExpr__make]))(var2) /* make on <var2:ABlockExpr>*/;
self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val = var2; /* _n_then on <self:AIfExpr> */
var3 = NEW_parser_nodes__ABlockExpr(&type_parser_nodes__ABlockExpr);
((void (*)(val*))(var3->class->vft[COLOR_astbuilder__ABlockExpr__make]))(var3) /* make on <var3:ABlockExpr>*/;
self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val = var3; /* _n_else on <self:AIfExpr> */
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_mtype) /* mtype= on <self:AIfExpr>*/;
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:AIfExpr>*/;
RET_LABEL:;
}
/* method astbuilder#AIfExpr#make for (self: Object, AExpr, nullable MType) */
void VIRTUAL_astbuilder__AIfExpr__make(val* self, val* p0, val* p1) {
astbuilder__AIfExpr__make(self, p0, p1);
RET_LABEL:;
}
/* method astbuilder#AType#make for (self: AType) */
void astbuilder__AType__make(val* self) {
val* var /* : TClassid */;
var = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TClassid__init]))(var) /* init on <var:TClassid>*/;
self->attrs[COLOR_parser_nodes__AType___n_id].val = var; /* _n_id on <self:AType> */
RET_LABEL:;
}
/* method astbuilder#AType#make for (self: Object) */
void VIRTUAL_astbuilder__AType__make(val* self) {
astbuilder__AType__make(self);
RET_LABEL:;
}
/* method astbuilder#AIntExpr#make for (self: AIntExpr, Int, MType) */
void astbuilder__AIntExpr__make(val* self, long p0, val* p1) {
long var_value /* var value: Int */;
val* var_t /* var t: MType */;
val* var /* : nullable Int */;
val* var1 /* : TNumber */;
var_value = p0;
var_t = p1;
var = BOX_kernel__Int(var_value); /* autobox from Int to nullable Int */
((void (*)(val*, val*))(self->class->vft[COLOR_literal__AIntExpr__value_61d]))(self, var) /* value= on <self:AIntExpr>*/;
var1 = NEW_parser_nodes__TNumber(&type_parser_nodes__TNumber);
((void (*)(val*))(var1->class->vft[COLOR_parser_nodes__TNumber__init]))(var1) /* init on <var1:TNumber>*/;
self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val = var1; /* _n_number on <self:AIntExpr> */
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_t) /* mtype= on <self:AIntExpr>*/;
RET_LABEL:;
}
/* method astbuilder#AIntExpr#make for (self: Object, Int, MType) */
void VIRTUAL_astbuilder__AIntExpr__make(val* self, long p0, val* p1) {
astbuilder__AIntExpr__make(self, p0, p1);
RET_LABEL:;
}
/* method astbuilder#ANewExpr#make for (self: ANewExpr, MClassType, MMethod, nullable Array[AExpr]) */
void astbuilder__ANewExpr__make(val* self, val* p0, val* p1, val* p2) {
val* var_mtype /* var mtype: MClassType */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var /* : TKwnew */;
val* var1 /* : AType */;
val* var2 /* : AListExprs */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : AExprs */;
val* var6 /* : ANodes[AExpr] */;
val* var7 /* : CallSite */;
short int var8 /* : Bool */;
val* var9 /* : MPropDef */;
val* var10 /* : MPropDef */;
val* var11 /* : nullable MSignature */;
short int var12 /* : Bool */;
var_mtype = p0;
var_mmethod = p1;
var_args = p2;
var = NEW_parser_nodes__TKwnew(&type_parser_nodes__TKwnew);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TKwnew__init]))(var) /* init on <var:TKwnew>*/;
self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val = var; /* _n_kwnew on <self:ANewExpr> */
var1 = NEW_parser_nodes__AType(&type_parser_nodes__AType);
((void (*)(val*))(var1->class->vft[COLOR_astbuilder__AType__make]))(var1) /* make on <var1:AType>*/;
self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val = var1; /* _n_type on <self:ANewExpr> */
var2 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
((void (*)(val*))(var2->class->vft[COLOR_parser_nodes__AListExprs__init]))(var2) /* init on <var2:AListExprs>*/;
self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val = var2; /* _n_args on <self:ANewExpr> */
var3 = NULL;
if (var_args == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (var4){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_args]))(self) /* n_args on <self:ANewExpr>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var5) /* n_exprs on <var5:AExprs>*/;
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var6, var_args) /* add_all on <var6:ANodes[AExpr]>*/;
} else {
}
var7 = NEW_typing__CallSite(&type_typing__CallSite);
var8 = 1;
var9 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var10 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MMethodDef__msignature]))(var10) /* msignature on <var10:MPropDef(MMethodDef)>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 241);
show_backtrace(1);
}
var12 = 0;
((void (*)(val*, val*, val*, short int, val*, val*, val*, short int))(var7->class->vft[COLOR_typing__CallSite__init]))(var7, self, var_mtype, var8, var_mmethod, var9, var11, var12) /* init on <var7:CallSite>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ANewExpr__callsite_61d]))(self, var7) /* callsite= on <self:ANewExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_mtype) /* mtype= on <self:ANewExpr>*/;
RET_LABEL:;
}
/* method astbuilder#ANewExpr#make for (self: Object, MClassType, MMethod, nullable Array[AExpr]) */
void VIRTUAL_astbuilder__ANewExpr__make(val* self, val* p0, val* p1, val* p2) {
astbuilder__ANewExpr__make(self, p0, p1, p2);
RET_LABEL:;
}
/* method astbuilder#ACallExpr#make for (self: ACallExpr, AExpr, MMethod, nullable Array[AExpr], nullable MType) */
void astbuilder__ACallExpr__make(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_recv /* var recv: AExpr */;
val* var_mmethod /* var mmethod: MMethod */;
val* var_args /* var args: nullable Array[AExpr] */;
val* var_t /* var t: nullable MType */;
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
val* var2 /* : AListExprs */;
val* var3 /* : TId */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : AExprs */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var9 /* : CallSite */;
short int var10 /* : Bool */;
val* var11 /* : MPropDef */;
val* var12 /* : MPropDef */;
val* var13 /* : nullable MSignature */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_recv = p0;
var_mmethod = p1;
var_args = p2;
var_t = p3;
self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val = var_recv; /* _n_expr on <self:ACallExpr> */
((void (*)(val*, val*))(var_recv->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_recv, self) /* parent= on <var_recv:AExpr>*/;
if (var_args!=NULL) {
var = var_args;
} else {
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[AExpr]>*/;
var = var1;
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASendExpr__raw_arguments_61d]))(self, var) /* raw_arguments= on <self:ACallExpr>*/;
var2 = NEW_parser_nodes__AListExprs(&type_parser_nodes__AListExprs);
((void (*)(val*))(var2->class->vft[COLOR_parser_nodes__AListExprs__init]))(var2) /* init on <var2:AListExprs>*/;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val = var2; /* _n_args on <self:ACallExpr> */
var3 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*))(var3->class->vft[COLOR_parser_nodes__TId__init]))(var3) /* init on <var3:TId>*/;
self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val = var3; /* _n_id on <self:ACallExpr> */
var4 = NULL;
if (var_args == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_args]))(self) /* n_args on <self:ACallExpr>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var6) /* n_exprs on <var6:AExprs>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add_all]))(var7, var_args) /* add_all on <var7:ANodes[AExpr]>*/;
} else {
}
var8 = ((val* (*)(val*))(var_recv->class->vft[COLOR_typing__AExpr__mtype]))(var_recv) /* mtype on <var_recv:AExpr>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 257);
show_backtrace(1);
}
var_mtype = var8;
var9 = NEW_typing__CallSite(&type_typing__CallSite);
var10 = 1;
var11 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var12 = ((val* (*)(val*))(var_mmethod->class->vft[COLOR_model__MProperty__intro]))(var_mmethod) /* intro on <var_mmethod:MMethod>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MMethodDef__msignature]))(var12) /* msignature on <var12:MPropDef(MMethodDef)>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/astbuilder.nit", 258);
show_backtrace(1);
}
var14 = 0;
((void (*)(val*, val*, val*, short int, val*, val*, val*, short int))(var9->class->vft[COLOR_typing__CallSite__init]))(var9, self, var_mtype, var10, var_mmethod, var11, var13, var14) /* init on <var9:CallSite>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASendExpr__callsite_61d]))(self, var9) /* callsite= on <self:ACallExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_t) /* mtype= on <self:ACallExpr>*/;
var15 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var15) /* is_typed= on <self:ACallExpr>*/;
RET_LABEL:;
}
/* method astbuilder#ACallExpr#make for (self: Object, AExpr, MMethod, nullable Array[AExpr], nullable MType) */
void VIRTUAL_astbuilder__ACallExpr__make(val* self, val* p0, val* p1, val* p2, val* p3) {
astbuilder__ACallExpr__make(self, p0, p1, p2, p3);
RET_LABEL:;
}
/* method astbuilder#AAttrExpr#make for (self: AAttrExpr, AExpr, MAttribute, MType) */
void astbuilder__AAttrExpr__make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_t /* var t: MType */;
val* var /* : TAttrid */;
var_recv = p0;
var_attribute = p1;
var_t = p2;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrExpr> */
((void (*)(val*, val*))(var_recv->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_recv, self) /* parent= on <var_recv:AExpr>*/;
var = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TAttrid__init]))(var) /* init on <var:TAttrid>*/;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrExpr> */
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty_61d]))(self, var_attribute) /* mproperty= on <self:AAttrExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_t) /* mtype= on <self:AAttrExpr>*/;
RET_LABEL:;
}
/* method astbuilder#AAttrExpr#make for (self: Object, AExpr, MAttribute, MType) */
void VIRTUAL_astbuilder__AAttrExpr__make(val* self, val* p0, val* p1, val* p2) {
astbuilder__AAttrExpr__make(self, p0, p1, p2);
RET_LABEL:;
}
/* method astbuilder#AAttrAssignExpr#make for (self: AAttrAssignExpr, AExpr, MAttribute, AExpr) */
void astbuilder__AAttrAssignExpr__make(val* self, val* p0, val* p1, val* p2) {
val* var_recv /* var recv: AExpr */;
val* var_attribute /* var attribute: MAttribute */;
val* var_value /* var value: AExpr */;
val* var /* : TAttrid */;
val* var1 /* : TAssign */;
val* var2 /* : nullable MType */;
var_recv = p0;
var_attribute = p1;
var_value = p2;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val = var_recv; /* _n_expr on <self:AAttrAssignExpr> */
((void (*)(val*, val*))(var_recv->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_recv, self) /* parent= on <var_recv:AExpr>*/;
var = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TAttrid__init]))(var) /* init on <var:TAttrid>*/;
self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val = var; /* _n_id on <self:AAttrAssignExpr> */
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AAttrAssignExpr> */
((void (*)(val*, val*))(var_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_value, self) /* parent= on <var_value:AExpr>*/;
var1 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
((void (*)(val*))(var1->class->vft[COLOR_parser_nodes__TAssign__init]))(var1) /* init on <var1:TAssign>*/;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var1; /* _n_assign on <self:AAttrAssignExpr> */
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty_61d]))(self, var_attribute) /* mproperty= on <self:AAttrAssignExpr>*/;
var2 = ((val* (*)(val*))(var_value->class->vft[COLOR_typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var2) /* mtype= on <self:AAttrAssignExpr>*/;
RET_LABEL:;
}
/* method astbuilder#AAttrAssignExpr#make for (self: Object, AExpr, MAttribute, AExpr) */
void VIRTUAL_astbuilder__AAttrAssignExpr__make(val* self, val* p0, val* p1, val* p2) {
astbuilder__AAttrAssignExpr__make(self, p0, p1, p2);
RET_LABEL:;
}
/* method astbuilder#AVarExpr#make for (self: AVarExpr, Variable, MType) */
void astbuilder__AVarExpr__make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_mtype /* var mtype: MType */;
val* var /* : TId */;
var_v = p0;
var_mtype = p1;
var = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TId__init]))(var) /* init on <var:TId>*/;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarExpr> */
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable_61d]))(self, var_v) /* variable= on <self:AVarExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_mtype) /* mtype= on <self:AVarExpr>*/;
RET_LABEL:;
}
/* method astbuilder#AVarExpr#make for (self: Object, Variable, MType) */
void VIRTUAL_astbuilder__AVarExpr__make(val* self, val* p0, val* p1) {
astbuilder__AVarExpr__make(self, p0, p1);
RET_LABEL:;
}
/* method astbuilder#AVarAssignExpr#make for (self: AVarAssignExpr, Variable, AExpr) */
void astbuilder__AVarAssignExpr__make(val* self, val* p0, val* p1) {
val* var_v /* var v: Variable */;
val* var_value /* var value: AExpr */;
val* var /* : TId */;
val* var1 /* : TAssign */;
val* var2 /* : nullable MType */;
var_v = p0;
var_value = p1;
var = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*))(var->class->vft[COLOR_parser_nodes__TId__init]))(var) /* init on <var:TId>*/;
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = var; /* _n_id on <self:AVarAssignExpr> */
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val = var_value; /* _n_value on <self:AVarAssignExpr> */
((void (*)(val*, val*))(var_value->class->vft[COLOR_parser_nodes__ANode__parent_61d]))(var_value, self) /* parent= on <var_value:AExpr>*/;
var1 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
((void (*)(val*))(var1->class->vft[COLOR_parser_nodes__TAssign__init]))(var1) /* init on <var1:TAssign>*/;
self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val = var1; /* _n_assign on <self:AVarAssignExpr> */
((void (*)(val*, val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable_61d]))(self, var_v) /* variable= on <self:AVarAssignExpr>*/;
var2 = ((val* (*)(val*))(var_value->class->vft[COLOR_typing__AExpr__mtype]))(var_value) /* mtype on <var_value:AExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var2) /* mtype= on <self:AVarAssignExpr>*/;
RET_LABEL:;
}
/* method astbuilder#AVarAssignExpr#make for (self: Object, Variable, AExpr) */
void VIRTUAL_astbuilder__AVarAssignExpr__make(val* self, val* p0, val* p1) {
astbuilder__AVarAssignExpr__make(self, p0, p1);
RET_LABEL:;
}
