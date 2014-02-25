#include "transform.sep.0.h"
/* method transform#ToolContext#transform_phase for (self: ToolContext): Phase */
val* transform__ToolContext__transform_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_transform__ToolContext___64dtransform_phase].val; /* @transform_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @transform_phase");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#ToolContext#transform_phase for (self: Object): Phase */
val* VIRTUAL_transform__ToolContext__transform_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = transform__ToolContext__transform_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#ToolContext#transform_phase= for (self: ToolContext, Phase) */
void transform__ToolContext__transform_phase_61d(val* self, val* p0) {
self->attrs[COLOR_transform__ToolContext___64dtransform_phase].val = p0; /* @transform_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method transform#ToolContext#transform_phase= for (self: Object, Phase) */
void VIRTUAL_transform__ToolContext__transform_phase_61d(val* self, val* p0) {
transform__ToolContext__transform_phase_61d(self, p0);
RET_LABEL:;
}
/* method transform#TransformPhase#process_npropdef for (self: TransformPhase, APropdef) */
void transform__TransformPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : TransformVisitor */;
val* var_v /* var v: TransformVisitor */;
val* var1 /* : ASTValidationVisitor */;
val* var_val /* var val: nullable Object */;
var_npropdef = p0;
var = NEW_transform__TransformVisitor(&type_transform__TransformVisitor);
((void (*)(val*, val*, val*))(var->class->vft[COLOR_transform__TransformVisitor__init]))(var, self, var_npropdef) /* init on <var:TransformVisitor>*/;
var_v = var;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, var_npropdef) /* enter_visit on <var_v:TransformVisitor>*/;
var1 = NEW_astvalidation__ASTValidationVisitor(&type_astvalidation__ASTValidationVisitor);
((void (*)(val*))(var1->class->vft[COLOR_astvalidation__ASTValidationVisitor__init]))(var1) /* init on <var1:ASTValidationVisitor>*/;
var_val = var1;
((void (*)(val*, val*))(var_val->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_val, var_npropdef) /* enter_visit on <var_val:nullable Object(ASTValidationVisitor)>*/;
RET_LABEL:;
}
/* method transform#TransformPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_transform__TransformPhase__process_npropdef(val* self, val* p0) {
transform__TransformPhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method transform#TransformVisitor#phase for (self: TransformVisitor): TransformPhase */
val* transform__TransformVisitor__phase(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : TransformPhase */;
var1 = self->attrs[COLOR_transform__TransformVisitor___64dphase].val; /* @phase on <self:TransformVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @phase");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 45);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#phase for (self: Object): TransformPhase */
val* VIRTUAL_transform__TransformVisitor__phase(val* self) {
val* var /* : TransformPhase */;
val* var1 /* : TransformPhase */;
var1 = transform__TransformVisitor__phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#phase= for (self: TransformVisitor, TransformPhase) */
void transform__TransformVisitor__phase_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___64dphase].val = p0; /* @phase on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#phase= for (self: Object, TransformPhase) */
void VIRTUAL_transform__TransformVisitor__phase_61d(val* self, val* p0) {
transform__TransformVisitor__phase_61d(self, p0);
RET_LABEL:;
}
/* method transform#TransformVisitor#mmodule for (self: TransformVisitor): MModule */
val* transform__TransformVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_transform__TransformVisitor___64dmmodule].val; /* @mmodule on <self:TransformVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mmodule");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 46);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mmodule for (self: Object): MModule */
val* VIRTUAL_transform__TransformVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = transform__TransformVisitor__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mmodule= for (self: TransformVisitor, MModule) */
void transform__TransformVisitor__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___64dmmodule].val = p0; /* @mmodule on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mmodule= for (self: Object, MModule) */
void VIRTUAL_transform__TransformVisitor__mmodule_61d(val* self, val* p0) {
transform__TransformVisitor__mmodule_61d(self, p0);
RET_LABEL:;
}
/* method transform#TransformVisitor#mclassdef for (self: TransformVisitor): MClassDef */
val* transform__TransformVisitor__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_transform__TransformVisitor___64dmclassdef].val; /* @mclassdef on <self:TransformVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 47);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mclassdef for (self: Object): MClassDef */
val* VIRTUAL_transform__TransformVisitor__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = transform__TransformVisitor__mclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mclassdef= for (self: TransformVisitor, MClassDef) */
void transform__TransformVisitor__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___64dmclassdef].val = p0; /* @mclassdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_transform__TransformVisitor__mclassdef_61d(val* self, val* p0) {
transform__TransformVisitor__mclassdef_61d(self, p0);
RET_LABEL:;
}
/* method transform#TransformVisitor#mpropdef for (self: TransformVisitor): MPropDef */
val* transform__TransformVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_transform__TransformVisitor___64dmpropdef].val; /* @mpropdef on <self:TransformVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mpropdef");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 48);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_transform__TransformVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = transform__TransformVisitor__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#mpropdef= for (self: TransformVisitor, MPropDef) */
void transform__TransformVisitor__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___64dmpropdef].val = p0; /* @mpropdef on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_transform__TransformVisitor__mpropdef_61d(val* self, val* p0) {
transform__TransformVisitor__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method transform#TransformVisitor#builder for (self: TransformVisitor): ASTBuilder */
val* transform__TransformVisitor__builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
var1 = self->attrs[COLOR_transform__TransformVisitor___64dbuilder].val; /* @builder on <self:TransformVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @builder");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 49);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#builder for (self: Object): ASTBuilder */
val* VIRTUAL_transform__TransformVisitor__builder(val* self) {
val* var /* : ASTBuilder */;
val* var1 /* : ASTBuilder */;
var1 = transform__TransformVisitor__builder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#builder= for (self: TransformVisitor, ASTBuilder) */
void transform__TransformVisitor__builder_61d(val* self, val* p0) {
self->attrs[COLOR_transform__TransformVisitor___64dbuilder].val = p0; /* @builder on <self:TransformVisitor> */
RET_LABEL:;
}
/* method transform#TransformVisitor#builder= for (self: Object, ASTBuilder) */
void VIRTUAL_transform__TransformVisitor__builder_61d(val* self, val* p0) {
transform__TransformVisitor__builder_61d(self, p0);
RET_LABEL:;
}
/* method transform#TransformVisitor#init for (self: TransformVisitor, TransformPhase, APropdef) */
void transform__TransformVisitor__init(val* self, val* p0, val* p1) {
val* var_phase /* var phase: TransformPhase */;
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : nullable MPropDef */;
val* var1 /* : MPropDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var5 /* : ASTBuilder */;
val* var6 /* : MModule */;
val* var7 /* : MPropDef */;
val* var8 /* : MClassDef */;
val* var9 /* : MClassType */;
var_phase = p0;
var_npropdef = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:TransformVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_transform__TransformVisitor__phase_61d]))(self, var_phase) /* phase= on <self:TransformVisitor>*/;
var = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(var_npropdef) /* mpropdef on <var_npropdef:APropdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 54);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_transform__TransformVisitor__mpropdef_61d]))(self, var) /* mpropdef= on <self:TransformVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_transform__TransformVisitor__mpropdef]))(self) /* mpropdef on <self:TransformVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MPropDef__mclassdef]))(var1) /* mclassdef on <var1:MPropDef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_transform__TransformVisitor__mclassdef_61d]))(self, var2) /* mclassdef= on <self:TransformVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_transform__TransformVisitor__mclassdef]))(self) /* mclassdef on <self:TransformVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__mmodule]))(var3) /* mmodule on <var3:MClassDef>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_transform__TransformVisitor__mmodule_61d]))(self, var4) /* mmodule= on <self:TransformVisitor>*/;
var5 = NEW_astbuilder__ASTBuilder(&type_astbuilder__ASTBuilder);
var6 = ((val* (*)(val*))(self->class->vft[COLOR_transform__TransformVisitor__mmodule]))(self) /* mmodule on <self:TransformVisitor>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_transform__TransformVisitor__mpropdef]))(self) /* mpropdef on <self:TransformVisitor>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MPropDef__mclassdef]))(var7) /* mclassdef on <var7:MPropDef>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MClassDef__bound_mtype]))(var8) /* bound_mtype on <var8:MClassDef>*/;
((void (*)(val*, val*, val*))(var5->class->vft[COLOR_astbuilder__ASTBuilder__init]))(var5, var6, var9) /* init on <var5:ASTBuilder>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_transform__TransformVisitor__builder_61d]))(self, var5) /* builder= on <self:TransformVisitor>*/;
RET_LABEL:;
}
/* method transform#TransformVisitor#init for (self: Object, TransformPhase, APropdef) */
void VIRTUAL_transform__TransformVisitor__init(val* self, val* p0, val* p1) {
transform__TransformVisitor__init(self, p0, p1);
RET_LABEL:;
}
/* method transform#TransformVisitor#visit for (self: TransformVisitor, ANode) */
void transform__TransformVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
var_node = p0;
/* <var_node:ANode> isa AAnnotations */
cltype = type_parser_nodes__AAnnotations.color;
idtype = type_parser_nodes__AAnnotations.id;
if(cltype >= var_node->type->table_size) {
var = 0;
} else {
var = var_node->type->type_table[cltype] == idtype;
}
if (var){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
((void (*)(val*, val*))(var_node->class->vft[COLOR_transform__ANode__accept_transform_visitor]))(var_node, self) /* accept_transform_visitor on <var_node:ANode>*/;
RET_LABEL:;
}
/* method transform#TransformVisitor#visit for (self: Object, ANode) */
void VIRTUAL_transform__TransformVisitor__visit(val* self, val* p0) {
transform__TransformVisitor__visit(self, p0);
RET_LABEL:;
}
/* method transform#TransformVisitor#get_class for (self: TransformVisitor, AExpr, String): MClass */
val* transform__TransformVisitor__get_class(val* self, val* p0, val* p1) {
val* var /* : MClass */;
val* var_location /* var location: AExpr */;
val* var_name /* var name: String */;
val* var1 /* : MModule */;
val* var2 /* : MClass */;
var_location = p0;
var_name = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_transform__TransformVisitor__mmodule]))(self) /* mmodule on <self:TransformVisitor>*/;
var2 = ((val* (*)(val*, val*))(var1->class->vft[COLOR_model__MModule__get_primitive_class]))(var1, var_name) /* get_primitive_class on <var1:MModule>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#get_class for (self: Object, AExpr, String): MClass */
val* VIRTUAL_transform__TransformVisitor__get_class(val* self, val* p0, val* p1) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = transform__TransformVisitor__get_class(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#get_method for (self: TransformVisitor, AExpr, String, MClass): MMethod */
val* transform__TransformVisitor__get_method(val* self, val* p0, val* p1, val* p2) {
val* var /* : MMethod */;
val* var_location /* var location: AExpr */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MClass */;
val* var1 /* : TransformPhase */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
val* var4 /* : MModule */;
val* var5 /* : MMethod */;
var_location = p0;
var_name = p1;
var_recv = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_transform__TransformVisitor__phase]))(self) /* phase on <self:TransformVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_phase__Phase__toolcontext]))(var1) /* toolcontext on <var1:TransformPhase>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var2) /* modelbuilder on <var2:ToolContext>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_transform__TransformVisitor__mmodule]))(self) /* mmodule on <self:TransformVisitor>*/;
var5 = ((val* (*)(val*, val*, val*, val*, val*))(var3->class->vft[COLOR_modelbuilder__ModelBuilder__force_get_primitive_method]))(var3, var_location, var_name, var_recv, var4) /* force_get_primitive_method on <var3:ModelBuilder>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method transform#TransformVisitor#get_method for (self: Object, AExpr, String, MClass): MMethod */
val* VIRTUAL_transform__TransformVisitor__get_method(val* self, val* p0, val* p1, val* p2) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = transform__TransformVisitor__get_method(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method transform#ANode#accept_transform_visitor for (self: ANode, TransformVisitor) */
void transform__ANode__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#ANode#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ANode__accept_transform_visitor(val* self, val* p0) {
transform__ANode__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: AVardeclExpr, TransformVisitor) */
void transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : ASTBuilder */;
val* var4 /* : nullable Variable */;
val* var5 /* : AVarAssignExpr */;
val* var_nvar /* var nvar: AVarAssignExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(self) /* n_expr on <self:AVardeclExpr>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__detach]))(self) /* detach on <self:AVardeclExpr>*/;
} else {
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVardeclExpr__variable]))(self) /* variable on <self:AVardeclExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 99);
show_backtrace(1);
}
var5 = ((val* (*)(val*, val*, val*))(var3->class->vft[COLOR_astbuilder__ASTBuilder__make_var_assign]))(var3, var4, var_nexpr) /* make_var_assign on <var3:ASTBuilder>*/;
var_nvar = var5;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nvar) /* replace_with on <self:AVardeclExpr>*/;
}
RET_LABEL:;
}
/* method transform#AVardeclExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AVardeclExpr__accept_transform_visitor(val* self, val* p0) {
transform__AVardeclExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AIfexprExpr#accept_transform_visitor for (self: AIfexprExpr, TransformVisitor) */
void transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
val* var3 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var4 /* : nullable AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : AExpr */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_expr]))(self) /* n_expr on <self:AIfexprExpr>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AIfexprExpr>*/;
var3 = ((val* (*)(val*, val*, val*))(var->class->vft[COLOR_astbuilder__ASTBuilder__make_if]))(var, var1, var2) /* make_if on <var:ASTBuilder>*/;
var_nif = var3;
var4 = ((val* (*)(val*))(var_nif->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(var_nif) /* n_then on <var_nif:AIfExpr>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_then]))(self) /* n_then on <self:AIfexprExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 112);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var4->class->vft[COLOR_astbuilder__AExpr__add]))(var4, var5) /* add on <var4:nullable AExpr>*/;
}
var6 = ((val* (*)(val*))(var_nif->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(var_nif) /* n_else on <var_nif:AIfExpr>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_else]))(self) /* n_else on <self:AIfexprExpr>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 113);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var6->class->vft[COLOR_astbuilder__AExpr__add]))(var6, var7) /* add on <var6:nullable AExpr>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nif) /* replace_with on <self:AIfexprExpr>*/;
RET_LABEL:;
}
/* method transform#AIfexprExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AIfexprExpr__accept_transform_visitor(val* self, val* p0) {
transform__AIfexprExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AOrExpr#accept_transform_visitor for (self: AOrExpr, TransformVisitor) */
void transform__AOrExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
val* var3 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var4 /* : nullable AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : AVarExpr */;
val* var7 /* : nullable AExpr */;
val* var8 /* : AExpr */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr]))(self) /* n_expr on <self:AOrExpr>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrExpr>*/;
var3 = ((val* (*)(val*, val*, val*))(var->class->vft[COLOR_astbuilder__ASTBuilder__make_if]))(var, var1, var2) /* make_if on <var:ASTBuilder>*/;
var_nif = var3;
var4 = ((val* (*)(val*))(var_nif->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(var_nif) /* n_then on <var_nif:AIfExpr>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr]))(self) /* n_expr on <self:AOrExpr>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var5) /* make_var_read on <var5:AExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 124);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var4->class->vft[COLOR_astbuilder__AExpr__add]))(var4, var6) /* add on <var4:nullable AExpr>*/;
}
var7 = ((val* (*)(val*))(var_nif->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(var_nif) /* n_else on <var_nif:AIfExpr>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr2]))(self) /* n_expr2 on <self:AOrExpr>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 125);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var7->class->vft[COLOR_astbuilder__AExpr__add]))(var7, var8) /* add on <var7:nullable AExpr>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nif) /* replace_with on <self:AOrExpr>*/;
RET_LABEL:;
}
/* method transform#AOrExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AOrExpr__accept_transform_visitor(val* self, val* p0) {
transform__AOrExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AImpliesExpr#accept_transform_visitor for (self: AImpliesExpr, TransformVisitor) */
void transform__AImpliesExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AImpliesExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AImpliesExpr__accept_transform_visitor(val* self, val* p0) {
transform__AImpliesExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AAndExpr#accept_transform_visitor for (self: AAndExpr, TransformVisitor) */
void transform__AAndExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
val* var3 /* : AIfExpr */;
val* var_nif /* var nif: AIfExpr */;
val* var4 /* : nullable AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : AVarExpr */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr]))(self) /* n_expr on <self:AAndExpr>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AAndExpr>*/;
var3 = ((val* (*)(val*, val*, val*))(var->class->vft[COLOR_astbuilder__ASTBuilder__make_if]))(var, var1, var2) /* make_if on <var:ASTBuilder>*/;
var_nif = var3;
var4 = ((val* (*)(val*))(var_nif->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(var_nif) /* n_then on <var_nif:AIfExpr>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr2]))(self) /* n_expr2 on <self:AAndExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 143);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var4->class->vft[COLOR_astbuilder__AExpr__add]))(var4, var5) /* add on <var4:nullable AExpr>*/;
}
var6 = ((val* (*)(val*))(var_nif->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(var_nif) /* n_else on <var_nif:AIfExpr>*/;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr]))(self) /* n_expr on <self:AAndExpr>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var7) /* make_var_read on <var7:AExpr>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 144);
show_backtrace(1);
} else {
((void (*)(val*, val*))(var6->class->vft[COLOR_astbuilder__AExpr__add]))(var6, var8) /* add on <var6:nullable AExpr>*/;
}
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nif) /* replace_with on <self:AAndExpr>*/;
RET_LABEL:;
}
/* method transform#AAndExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AAndExpr__accept_transform_visitor(val* self, val* p0) {
transform__AAndExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AWhileExpr#accept_transform_visitor for (self: AWhileExpr, TransformVisitor) */
void transform__AWhileExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AWhileExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AWhileExpr__accept_transform_visitor(val* self, val* p0) {
transform__AWhileExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: AForExpr, TransformVisitor) */
void transform__AForExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method transform#AForExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AForExpr__accept_transform_visitor(val* self, val* p0) {
transform__AForExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AArrayExpr#accept_transform_visitor for (self: AArrayExpr, TransformVisitor) */
void transform__AArrayExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var2 /* : ASTBuilder */;
val* var3 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : MClass */;
val* var9 /* : MMethod */;
val* var_meth /* var meth: MMethod */;
val* var10 /* : ASTBuilder */;
val* var11 /* : ASTBuilder */;
val* var12 /* : AExprs */;
val* var13 /* : ANodes[AExpr] */;
long var14 /* : Int */;
val* var15 /* : AIntExpr */;
val* var16 /* : Array[AIntExpr] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[AIntExpr] */;
val* var19 /* : ANewExpr */;
val* var_nnew /* var nnew: ANewExpr */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : MClass */;
val* var26 /* : MMethod */;
val* var_madd /* var madd: MMethod */;
val* var27 /* : AExprs */;
val* var28 /* : ANodes[AExpr] */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var32 /* : ASTBuilder */;
val* var33 /* : AVarExpr */;
val* var34 /* : Array[AExpr] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[AExpr] */;
val* var37 /* : ACallExpr */;
val* var_nadd /* var nadd: ACallExpr */;
val* var38 /* : AVarExpr */;
val* var_nres /* var nres: AVarExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AArrayExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 173);
show_backtrace(1);
}
var_mtype = var;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_astbuilder__ASTBuilder__make_block]))(var2) /* make_block on <var2:ASTBuilder>*/;
var_nblock = var3;
if (varonce) {
var4 = varonce;
} else {
var5 = "with_capacity";
var6 = 13;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var8 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var9 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_method]))(var_v, self, var4, var8) /* get_method on <var_v:TransformVisitor>*/;
var_meth = var9;
var10 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AArrayExpr__n_exprs]))(self) /* n_exprs on <self:AArrayExpr>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var12) /* n_exprs on <var12:AExprs>*/;
var14 = ((long (*)(val*))(var13->class->vft[COLOR_abstract_collection__Collection__length]))(var13) /* length on <var13:ANodes[AExpr]>*/;
var15 = ((val* (*)(val*, long))(var11->class->vft[COLOR_astbuilder__ASTBuilder__make_int]))(var11, var14) /* make_int on <var11:ASTBuilder>*/;
var16 = NEW_array__Array(&type_array__Arrayparser_nodes__AIntExpr);
{ /* var16 = array_instance Array[AIntExpr] */
var17 = 1;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArrayparser_nodes__AIntExpr);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var15;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[AIntExpr]>*/;
}
var19 = ((val* (*)(val*, val*, val*, val*))(var10->class->vft[COLOR_astbuilder__ASTBuilder__make_new]))(var10, var_mtype, var_meth, var16) /* make_new on <var10:ASTBuilder>*/;
var_nnew = var19;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_nnew) /* add on <var_nblock:ABlockExpr>*/;
if (varonce20) {
var21 = varonce20;
} else {
var22 = "push";
var23 = 4;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var26 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_method]))(var_v, self, var21, var25) /* get_method on <var_v:TransformVisitor>*/;
var_madd = var26;
var27 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AArrayExpr__n_exprs]))(self) /* n_exprs on <self:AArrayExpr>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var27) /* n_exprs on <var27:AExprs>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_abstract_collection__Collection__iterator]))(var28) /* iterator on <var28:ANodes[AExpr]>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var_nexpr = var31;
var32 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var33 = ((val* (*)(val*))(var_nnew->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var_nnew) /* make_var_read on <var_nnew:ANewExpr>*/;
var34 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{ /* var34 = array_instance Array[AExpr] */
var35 = 1;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArrayparser_nodes__AExpr);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var_nexpr;
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[AExpr]>*/;
}
var37 = ((val* (*)(val*, val*, val*, val*))(var32->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var32, var33, var_madd, var34) /* make_call on <var32:ASTBuilder>*/;
var_nadd = var37;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_nadd) /* add on <var_nblock:ABlockExpr>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var38 = ((val* (*)(val*))(var_nnew->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var_nnew) /* make_var_read on <var_nnew:ANewExpr>*/;
var_nres = var38;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_nres) /* add on <var_nblock:ABlockExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nblock) /* replace_with on <self:AArrayExpr>*/;
RET_LABEL:;
}
/* method transform#AArrayExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AArrayExpr__accept_transform_visitor(val* self, val* p0) {
transform__AArrayExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#ASuperstringExpr#accept_transform_visitor for (self: ASuperstringExpr, TransformVisitor) */
void transform__ASuperstringExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var1 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MClass */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : MClass */;
val* var13 /* : MClassType */;
val* var14 /* : Array[MClassType] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[MClassType] */;
val* var17 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : MClass */;
val* var24 /* : MMethod */;
val* var_meth /* var meth: MMethod */;
val* var25 /* : ASTBuilder */;
val* var26 /* : ASTBuilder */;
val* var27 /* : ANodes[AExpr] */;
long var28 /* : Int */;
val* var29 /* : AIntExpr */;
val* var30 /* : Array[AIntExpr] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[AIntExpr] */;
val* var33 /* : ANewExpr */;
val* var_nnew /* var nnew: ANewExpr */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var40 /* : MMethod */;
val* var_madd /* var madd: MMethod */;
val* var41 /* : ANodes[AExpr] */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var45 /* : ASTBuilder */;
val* var46 /* : AVarExpr */;
val* var47 /* : Array[AExpr] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[AExpr] */;
val* var50 /* : ACallExpr */;
val* var_nadd /* var nadd: ACallExpr */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : MClass */;
val* var57 /* : MMethod */;
val* var_mtos /* var mtos: MMethod */;
val* var58 /* : ASTBuilder */;
val* var59 /* : AVarExpr */;
val* var60 /* : null */;
val* var61 /* : ACallExpr */;
val* var_ntos /* var ntos: ACallExpr */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_astbuilder__ASTBuilder__make_block]))(var) /* make_block on <var:ASTBuilder>*/;
var_nblock = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "Array";
var4 = 5;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_class]))(var_v, self, var2) /* get_class on <var_v:TransformVisitor>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "Object";
var10 = 6;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_class]))(var_v, self, var8) /* get_class on <var_v:TransformVisitor>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_model__MClass__mclass_type]))(var12) /* mclass_type on <var12:MClass>*/;
var14 = NEW_array__Array(&type_array__Arraymodel__MClassType);
{ /* var14 = array_instance Array[MClassType] */
var15 = 1;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraymodel__MClassType);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var13;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[MClassType]>*/;
}
var17 = ((val* (*)(val*, val*))(var6->class->vft[COLOR_model__MClass__get_mtype]))(var6, var14) /* get_mtype on <var6:MClass>*/;
var_arraytype = var17;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "with_capacity";
var21 = 13;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*))(var_arraytype->class->vft[COLOR_model__MClassType__mclass]))(var_arraytype) /* mclass on <var_arraytype:MClassType>*/;
var24 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_method]))(var_v, self, var19, var23) /* get_method on <var_v:TransformVisitor>*/;
var_meth = var24;
var25 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var26 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var27 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperstringExpr__n_exprs]))(self) /* n_exprs on <self:ASuperstringExpr>*/;
var28 = ((long (*)(val*))(var27->class->vft[COLOR_abstract_collection__Collection__length]))(var27) /* length on <var27:ANodes[AExpr]>*/;
var29 = ((val* (*)(val*, long))(var26->class->vft[COLOR_astbuilder__ASTBuilder__make_int]))(var26, var28) /* make_int on <var26:ASTBuilder>*/;
var30 = NEW_array__Array(&type_array__Arrayparser_nodes__AIntExpr);
{ /* var30 = array_instance Array[AIntExpr] */
var31 = 1;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArrayparser_nodes__AIntExpr);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var29;
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[AIntExpr]>*/;
}
var33 = ((val* (*)(val*, val*, val*, val*))(var25->class->vft[COLOR_astbuilder__ASTBuilder__make_new]))(var25, var_arraytype, var_meth, var30) /* make_new on <var25:ASTBuilder>*/;
var_nnew = var33;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_nnew) /* add on <var_nblock:ABlockExpr>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "add";
var37 = 3;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = ((val* (*)(val*))(var_arraytype->class->vft[COLOR_model__MClassType__mclass]))(var_arraytype) /* mclass on <var_arraytype:MClassType>*/;
var40 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_method]))(var_v, self, var35, var39) /* get_method on <var_v:TransformVisitor>*/;
var_madd = var40;
var41 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperstringExpr__n_exprs]))(self) /* n_exprs on <self:ASuperstringExpr>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Collection__iterator]))(var41) /* iterator on <var41:ANodes[AExpr]>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var_nexpr = var44;
var45 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var46 = ((val* (*)(val*))(var_nnew->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var_nnew) /* make_var_read on <var_nnew:ANewExpr>*/;
var47 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{ /* var47 = array_instance Array[AExpr] */
var48 = 1;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArrayparser_nodes__AExpr);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var_nexpr;
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[AExpr]>*/;
}
var50 = ((val* (*)(val*, val*, val*, val*))(var45->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var45, var46, var_madd, var47) /* make_call on <var45:ASTBuilder>*/;
var_nadd = var50;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_nadd) /* add on <var_nblock:ABlockExpr>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce51) {
var52 = varonce51;
} else {
var53 = "to_s";
var54 = 4;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = ((val* (*)(val*))(var_arraytype->class->vft[COLOR_model__MClassType__mclass]))(var_arraytype) /* mclass on <var_arraytype:MClassType>*/;
var57 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_method]))(var_v, self, var52, var56) /* get_method on <var_v:TransformVisitor>*/;
var_mtos = var57;
var58 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var59 = ((val* (*)(val*))(var_nnew->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var_nnew) /* make_var_read on <var_nnew:ANewExpr>*/;
var60 = NULL;
var61 = ((val* (*)(val*, val*, val*, val*))(var58->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var58, var59, var_mtos, var60) /* make_call on <var58:ASTBuilder>*/;
var_ntos = var61;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_ntos) /* add on <var_nblock:ABlockExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nblock) /* replace_with on <self:ASuperstringExpr>*/;
RET_LABEL:;
}
/* method transform#ASuperstringExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ASuperstringExpr__accept_transform_visitor(val* self, val* p0) {
transform__ASuperstringExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#ACrangeExpr#accept_transform_visitor for (self: ACrangeExpr, TransformVisitor) */
void transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MClass */;
val* var7 /* : MMethod */;
val* var_meth /* var meth: MMethod */;
val* var8 /* : ASTBuilder */;
val* var9 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : Array[AExpr] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[AExpr] */;
val* var14 /* : ANewExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:ACrangeExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 227);
show_backtrace(1);
}
var_mtype = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "init";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var7 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_method]))(var_v, self, var2, var6) /* get_method on <var_v:TransformVisitor>*/;
var_meth = var7;
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(self) /* n_expr on <self:ACrangeExpr>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(self) /* n_expr2 on <self:ACrangeExpr>*/;
var11 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{ /* var11 = array_instance Array[AExpr] */
var12 = 2;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArrayparser_nodes__AExpr);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var10;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[AExpr]>*/;
}
var14 = ((val* (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_astbuilder__ASTBuilder__make_new]))(var8, var_mtype, var_meth, var11) /* make_new on <var8:ASTBuilder>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var14) /* replace_with on <self:ACrangeExpr>*/;
RET_LABEL:;
}
/* method transform#ACrangeExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ACrangeExpr__accept_transform_visitor(val* self, val* p0) {
transform__ACrangeExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AOrangeExpr#accept_transform_visitor for (self: AOrangeExpr, TransformVisitor) */
void transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var6 /* : MClass */;
val* var7 /* : MMethod */;
val* var_meth /* var meth: MMethod */;
val* var8 /* : ASTBuilder */;
val* var9 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : Array[AExpr] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[AExpr] */;
val* var14 /* : ANewExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AExpr__mtype]))(self) /* mtype on <self:AOrangeExpr>*/;
/* <var:nullable MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(var == NULL) {
var1 = 0;
} else {
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
}
if (!var1) {
var_class_name = var == NULL ? "null" : var->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 238);
show_backtrace(1);
}
var_mtype = var;
if (varonce) {
var2 = varonce;
} else {
var3 = "without_last";
var4 = 12;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
var6 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:MClassType>*/;
var7 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_transform__TransformVisitor__get_method]))(var_v, self, var2, var6) /* get_method on <var_v:TransformVisitor>*/;
var_meth = var7;
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(self) /* n_expr on <self:AOrangeExpr>*/;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(self) /* n_expr2 on <self:AOrangeExpr>*/;
var11 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{ /* var11 = array_instance Array[AExpr] */
var12 = 2;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArrayparser_nodes__AExpr);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var10;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[AExpr]>*/;
}
var14 = ((val* (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_astbuilder__ASTBuilder__make_new]))(var8, var_mtype, var_meth, var11) /* make_new on <var8:ASTBuilder>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var14) /* replace_with on <self:AOrangeExpr>*/;
RET_LABEL:;
}
/* method transform#AOrangeExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AOrangeExpr__accept_transform_visitor(val* self, val* p0) {
transform__AOrangeExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AParExpr#accept_transform_visitor for (self: AParExpr, TransformVisitor) */
void transform__AParExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : AExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AProxyExpr__n_expr]))(self) /* n_expr on <self:AParExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var) /* replace_with on <self:AParExpr>*/;
RET_LABEL:;
}
/* method transform#AParExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AParExpr__accept_transform_visitor(val* self, val* p0) {
transform__AParExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#ASendReassignFormExpr#accept_transform_visitor for (self: ASendReassignFormExpr, TransformVisitor) */
void transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var1 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var2 /* : AExpr */;
val* var3 /* : Array[AExpr] */;
val* var_read_args /* var read_args: Array[AExpr] */;
val* var4 /* : Array[AExpr] */;
val* var_write_args /* var write_args: Array[AExpr] */;
val* var5 /* : nullable Array[AExpr] */;
val* var6 /* : Iterator[nullable Object] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_a /* var a: AExpr */;
val* var9 /* : AVarExpr */;
val* var10 /* : AVarExpr */;
val* var11 /* : ASTBuilder */;
val* var12 /* : AExpr */;
val* var13 /* : AVarExpr */;
val* var14 /* : nullable CallSite */;
val* var15 /* : MMethod */;
val* var16 /* : ACallExpr */;
val* var_nread /* var nread: ACallExpr */;
val* var17 /* : ASTBuilder */;
val* var18 /* : nullable CallSite */;
val* var19 /* : MMethod */;
val* var20 /* : AExpr */;
val* var21 /* : Array[AExpr] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[AExpr] */;
val* var24 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var25 /* : ASTBuilder */;
val* var26 /* : AExpr */;
val* var27 /* : AVarExpr */;
val* var28 /* : nullable CallSite */;
val* var29 /* : MMethod */;
val* var30 /* : ACallExpr */;
val* var_nwrite /* var nwrite: ACallExpr */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_astbuilder__ASTBuilder__make_block]))(var) /* make_block on <var:ASTBuilder>*/;
var_nblock = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var2) /* add on <var_nblock:ABlockExpr>*/;
var3 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
((void (*)(val*))(var3->class->vft[COLOR_array__Array__init]))(var3) /* init on <var3:Array[AExpr]>*/;
var_read_args = var3;
var4 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
((void (*)(val*))(var4->class->vft[COLOR_array__Array__init]))(var4) /* init on <var4:Array[AExpr]>*/;
var_write_args = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__raw_arguments]))(self) /* raw_arguments on <self:ASendReassignFormExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 268);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Collection__iterator]))(var5) /* iterator on <var5:nullable Array[AExpr](Array[AExpr])>*/;
for(;;) {
var7 = ((short int (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var6) /* is_ok on <var6:Iterator[nullable Object]>*/;
if(!var7) break;
var8 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__item]))(var6) /* item on <var6:Iterator[nullable Object]>*/;
var_a = var8;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_a) /* add on <var_nblock:ABlockExpr>*/;
var9 = ((val* (*)(val*))(var_a->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var_a) /* make_var_read on <var_a:AExpr>*/;
((void (*)(val*, val*))(var_read_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_read_args, var9) /* add on <var_read_args:Array[AExpr]>*/;
var10 = ((val* (*)(val*))(var_a->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var_a) /* make_var_read on <var_a:AExpr>*/;
((void (*)(val*, val*))(var_write_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_write_args, var10) /* add on <var_write_args:Array[AExpr]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var6->class->vft[COLOR_abstract_collection__Iterator__next]))(var6) /* next on <var6:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var12) /* make_var_read on <var12:AExpr>*/;
var14 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__callsite]))(self) /* callsite on <self:ASendReassignFormExpr>*/;
if (var14 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 274);
show_backtrace(1);
} else {
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_typing__CallSite__mproperty]))(var14) /* mproperty on <var14:nullable CallSite>*/;
}
var16 = ((val* (*)(val*, val*, val*, val*))(var11->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var11, var13, var15, var_read_args) /* make_call on <var11:ASTBuilder>*/;
var_nread = var16;
var17 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var18 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:ASendReassignFormExpr>*/;
if (var18 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 276);
show_backtrace(1);
} else {
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_typing__CallSite__mproperty]))(var18) /* mproperty on <var18:nullable CallSite>*/;
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:ASendReassignFormExpr>*/;
var21 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{ /* var21 = array_instance Array[AExpr] */
var22 = 1;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArrayparser_nodes__AExpr);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var20;
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[AExpr]>*/;
}
var24 = ((val* (*)(val*, val*, val*, val*))(var17->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var17, var_nread, var19, var21) /* make_call on <var17:ASTBuilder>*/;
var_nnewvalue = var24;
((void (*)(val*, val*))(var_write_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_write_args, var_nnewvalue) /* add on <var_write_args:Array[AExpr]>*/;
var25 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var26) /* make_var_read on <var26:AExpr>*/;
var28 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendReassignFormExpr__write_callsite]))(self) /* write_callsite on <self:ASendReassignFormExpr>*/;
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 279);
show_backtrace(1);
} else {
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_typing__CallSite__mproperty]))(var28) /* mproperty on <var28:nullable CallSite>*/;
}
var30 = ((val* (*)(val*, val*, val*, val*))(var25->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var25, var27, var29, var_write_args) /* make_call on <var25:ASTBuilder>*/;
var_nwrite = var30;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_nwrite) /* add on <var_nblock:ABlockExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nblock) /* replace_with on <self:ASendReassignFormExpr>*/;
RET_LABEL:;
}
/* method transform#ASendReassignFormExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__ASendReassignFormExpr__accept_transform_visitor(val* self, val* p0) {
transform__ASendReassignFormExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AVarReassignExpr#accept_transform_visitor for (self: AVarReassignExpr, TransformVisitor) */
void transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : ASTBuilder */;
val* var2 /* : nullable MType */;
val* var3 /* : AVarExpr */;
val* var_nread /* var nread: AVarExpr */;
val* var4 /* : ASTBuilder */;
val* var5 /* : nullable CallSite */;
val* var6 /* : MMethod */;
val* var7 /* : AExpr */;
val* var8 /* : Array[AExpr] */;
long var9 /* : Int */;
val* var10 /* : NativeArray[AExpr] */;
val* var11 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var12 /* : ASTBuilder */;
val* var13 /* : AVarAssignExpr */;
val* var_nwrite /* var nwrite: AVarAssignExpr */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarReassignExpr>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 290);
show_backtrace(1);
}
var_variable = var;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__read_type]))(self) /* read_type on <self:AVarReassignExpr>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 292);
show_backtrace(1);
}
var3 = ((val* (*)(val*, val*, val*))(var1->class->vft[COLOR_astbuilder__ASTBuilder__make_var_read]))(var1, var_variable, var2) /* make_var_read on <var1:ASTBuilder>*/;
var_nread = var3;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AVarReassignExpr>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 294);
show_backtrace(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_typing__CallSite__mproperty]))(var5) /* mproperty on <var5:nullable CallSite>*/;
}
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:AVarReassignExpr>*/;
var8 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{ /* var8 = array_instance Array[AExpr] */
var9 = 1;
var10 = NEW_array__NativeArray(var9, &type_array__NativeArrayparser_nodes__AExpr);
((struct instance_array__NativeArray*)var10)->values[0] = (val*) var7;
((void (*)(val*, val*, long))(var8->class->vft[COLOR_array__Array__with_native]))(var8, var10, var9) /* with_native on <var8:Array[AExpr]>*/;
}
var11 = ((val* (*)(val*, val*, val*, val*))(var4->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var4, var_nread, var6, var8) /* make_call on <var4:ASTBuilder>*/;
var_nnewvalue = var11;
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var13 = ((val* (*)(val*, val*, val*))(var12->class->vft[COLOR_astbuilder__ASTBuilder__make_var_assign]))(var12, var_variable, var_nnewvalue) /* make_var_assign on <var12:ASTBuilder>*/;
var_nwrite = var13;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nwrite) /* replace_with on <self:AVarReassignExpr>*/;
RET_LABEL:;
}
/* method transform#AVarReassignExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AVarReassignExpr__accept_transform_visitor(val* self, val* p0) {
transform__AVarReassignExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
/* method transform#AAttrReassignExpr#accept_transform_visitor for (self: AAttrReassignExpr, TransformVisitor) */
void transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0) {
val* var_v /* var v: TransformVisitor */;
val* var /* : ASTBuilder */;
val* var1 /* : ABlockExpr */;
val* var_nblock /* var nblock: ABlockExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MAttribute */;
val* var_attribute /* var attribute: MAttribute */;
val* var4 /* : ASTBuilder */;
val* var5 /* : AExpr */;
val* var6 /* : AVarExpr */;
val* var7 /* : AAttrExpr */;
val* var_nread /* var nread: AAttrExpr */;
val* var8 /* : ASTBuilder */;
val* var9 /* : nullable CallSite */;
val* var10 /* : MMethod */;
val* var11 /* : AExpr */;
val* var12 /* : Array[AExpr] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[AExpr] */;
val* var15 /* : ACallExpr */;
val* var_nnewvalue /* var nnewvalue: ACallExpr */;
val* var16 /* : ASTBuilder */;
val* var17 /* : AExpr */;
val* var18 /* : AVarExpr */;
val* var19 /* : AAttrAssignExpr */;
val* var_nwrite /* var nwrite: AAttrAssignExpr */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_astbuilder__ASTBuilder__make_block]))(var) /* make_block on <var:ASTBuilder>*/;
var_nblock = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrReassignExpr>*/;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var2) /* add on <var_nblock:ABlockExpr>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty]))(self) /* mproperty on <self:AAttrReassignExpr>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 307);
show_backtrace(1);
}
var_attribute = var3;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrReassignExpr>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var5) /* make_var_read on <var5:AExpr>*/;
var7 = ((val* (*)(val*, val*, val*))(var4->class->vft[COLOR_astbuilder__ASTBuilder__make_attr_read]))(var4, var6, var_attribute) /* make_attr_read on <var4:ASTBuilder>*/;
var_nread = var7;
var8 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AAttrReassignExpr>*/;
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/transform.nit", 310);
show_backtrace(1);
} else {
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_typing__CallSite__mproperty]))(var9) /* mproperty on <var9:nullable CallSite>*/;
}
var11 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:AAttrReassignExpr>*/;
var12 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{ /* var12 = array_instance Array[AExpr] */
var13 = 1;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArrayparser_nodes__AExpr);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var11;
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[AExpr]>*/;
}
var15 = ((val* (*)(val*, val*, val*, val*))(var8->class->vft[COLOR_astbuilder__ASTBuilder__make_call]))(var8, var_nread, var10, var12) /* make_call on <var8:ASTBuilder>*/;
var_nnewvalue = var15;
var16 = ((val* (*)(val*))(var_v->class->vft[COLOR_transform__TransformVisitor__builder]))(var_v) /* builder on <var_v:TransformVisitor>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrReassignExpr>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_astbuilder__AExpr__make_var_read]))(var17) /* make_var_read on <var17:AExpr>*/;
var19 = ((val* (*)(val*, val*, val*, val*))(var16->class->vft[COLOR_astbuilder__ASTBuilder__make_attr_assign]))(var16, var18, var_attribute, var_nnewvalue) /* make_attr_assign on <var16:ASTBuilder>*/;
var_nwrite = var19;
((void (*)(val*, val*))(var_nblock->class->vft[COLOR_astbuilder__AExpr__add]))(var_nblock, var_nwrite) /* add on <var_nblock:ABlockExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__replace_with]))(self, var_nblock) /* replace_with on <self:AAttrReassignExpr>*/;
RET_LABEL:;
}
/* method transform#AAttrReassignExpr#accept_transform_visitor for (self: Object, TransformVisitor) */
void VIRTUAL_transform__AAttrReassignExpr__accept_transform_visitor(val* self, val* p0) {
transform__AAttrReassignExpr__accept_transform_visitor(self, p0);
RET_LABEL:;
}
