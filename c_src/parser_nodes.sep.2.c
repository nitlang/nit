#include "parser_nodes.sep.0.h"
/* method parser_nodes#ACallFormExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_nodes__ACallFormExpr__n_args_61d(val* self, val* p0) {
parser_nodes__ACallFormExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACallFormExpr#init for (self: ACallFormExpr) */
void parser_nodes__ACallFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__init]))(self) /* init on <self:ACallFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ACallFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ACallFormExpr__init(val* self) {
parser_nodes__ACallFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASendReassignFormExpr#init for (self: ASendReassignFormExpr) */
void parser_nodes__ASendReassignFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__init]))(self) /* init on <self:ASendReassignFormExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__init]))(self) /* init on <self:ASendReassignFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ASendReassignFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ASendReassignFormExpr__init(val* self) {
parser_nodes__ASendReassignFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAttrReassignExpr#init for (self: AAttrReassignExpr) */
void parser_nodes__AAttrReassignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__init]))(self) /* init on <self:AAttrReassignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__init]))(self) /* init on <self:AAttrReassignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAttrReassignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAttrReassignExpr__init(val* self) {
parser_nodes__AAttrReassignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACallExpr#init for (self: ACallExpr) */
void parser_nodes__ACallExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__init]))(self) /* init on <self:ACallExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ACallExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ACallExpr__init(val* self) {
parser_nodes__ACallExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACallAssignExpr#init for (self: ACallAssignExpr) */
void parser_nodes__ACallAssignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__init]))(self) /* init on <self:ACallAssignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__init]))(self) /* init on <self:ACallAssignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ACallAssignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ACallAssignExpr__init(val* self) {
parser_nodes__ACallAssignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACallReassignExpr#init for (self: ACallReassignExpr) */
void parser_nodes__ACallReassignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__init]))(self) /* init on <self:ACallReassignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendReassignFormExpr__init]))(self) /* init on <self:ACallReassignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ACallReassignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ACallReassignExpr__init(val* self) {
parser_nodes__ACallReassignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_qualified for (self: ASuperExpr): nullable AQualified */
val* parser_nodes__ASuperExpr__n_qualified(val* self) {
val* var /* : nullable AQualified */;
val* var1 /* : nullable AQualified */;
var1 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val; /* _n_qualified on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_qualified for (self: Object): nullable AQualified */
val* VIRTUAL_parser_nodes__ASuperExpr__n_qualified(val* self) {
val* var /* : nullable AQualified */;
val* var1 /* : nullable AQualified */;
var1 = parser_nodes__ASuperExpr__n_qualified(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_qualified= for (self: ASuperExpr, nullable AQualified) */
void parser_nodes__ASuperExpr__n_qualified_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = p0; /* _n_qualified on <self:ASuperExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_qualified= for (self: Object, nullable AQualified) */
void VIRTUAL_parser_nodes__ASuperExpr__n_qualified_61d(val* self, val* p0) {
parser_nodes__ASuperExpr__n_qualified_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_kwsuper for (self: ASuperExpr): TKwsuper */
val* parser_nodes__ASuperExpr__n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwsuper");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1391);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_kwsuper for (self: Object): TKwsuper */
val* VIRTUAL_parser_nodes__ASuperExpr__n_kwsuper(val* self) {
val* var /* : TKwsuper */;
val* var1 /* : TKwsuper */;
var1 = parser_nodes__ASuperExpr__n_kwsuper(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_kwsuper= for (self: ASuperExpr, TKwsuper) */
void parser_nodes__ASuperExpr__n_kwsuper_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val = p0; /* _n_kwsuper on <self:ASuperExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_kwsuper= for (self: Object, TKwsuper) */
void VIRTUAL_parser_nodes__ASuperExpr__n_kwsuper_61d(val* self, val* p0) {
parser_nodes__ASuperExpr__n_kwsuper_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_args for (self: ASuperExpr): AExprs */
val* parser_nodes__ASuperExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1392);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ASuperExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__ASuperExpr__n_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperExpr#n_args= for (self: ASuperExpr, AExprs) */
void parser_nodes__ASuperExpr__n_args_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val = p0; /* _n_args on <self:ASuperExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_nodes__ASuperExpr__n_args_61d(val* self, val* p0) {
parser_nodes__ASuperExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#init for (self: ASuperExpr) */
void parser_nodes__ASuperExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ASuperExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ASuperExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ASuperExpr__init(val* self) {
parser_nodes__ASuperExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#n_kwinit for (self: AInitExpr): TKwinit */
val* parser_nodes__AInitExpr__n_kwinit(val* self) {
val* var /* : TKwinit */;
val* var1 /* : TKwinit */;
var1 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwinit");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1399);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_kwinit for (self: Object): TKwinit */
val* VIRTUAL_parser_nodes__AInitExpr__n_kwinit(val* self) {
val* var /* : TKwinit */;
val* var1 /* : TKwinit */;
var1 = parser_nodes__AInitExpr__n_kwinit(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_kwinit= for (self: AInitExpr, TKwinit) */
void parser_nodes__AInitExpr__n_kwinit_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val = p0; /* _n_kwinit on <self:AInitExpr> */
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#n_kwinit= for (self: Object, TKwinit) */
void VIRTUAL_parser_nodes__AInitExpr__n_kwinit_61d(val* self, val* p0) {
parser_nodes__AInitExpr__n_kwinit_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#n_args for (self: AInitExpr): AExprs */
val* parser_nodes__AInitExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1400);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__AInitExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__AInitExpr__n_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInitExpr#n_args= for (self: AInitExpr, AExprs) */
void parser_nodes__AInitExpr__n_args_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val = p0; /* _n_args on <self:AInitExpr> */
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_nodes__AInitExpr__n_args_61d(val* self, val* p0) {
parser_nodes__AInitExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#init for (self: AInitExpr) */
void parser_nodes__AInitExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__init]))(self) /* init on <self:AInitExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AInitExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AInitExpr__init(val* self) {
parser_nodes__AInitExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABraFormExpr#n_args for (self: ABraFormExpr): AExprs */
val* parser_nodes__ABraFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1406);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraFormExpr#n_args for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__ABraFormExpr__n_args(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__ABraFormExpr__n_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraFormExpr#n_args= for (self: ABraFormExpr, AExprs) */
void parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val = p0; /* _n_args on <self:ABraFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#ABraFormExpr#n_args= for (self: Object, AExprs) */
void VIRTUAL_parser_nodes__ABraFormExpr__n_args_61d(val* self, val* p0) {
parser_nodes__ABraFormExpr__n_args_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraFormExpr#init for (self: ABraFormExpr) */
void parser_nodes__ABraFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__init]))(self) /* init on <self:ABraFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABraFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABraFormExpr__init(val* self) {
parser_nodes__ABraFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABraExpr#init for (self: ABraExpr) */
void parser_nodes__ABraExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABraFormExpr__init]))(self) /* init on <self:ABraExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABraExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABraExpr__init(val* self) {
parser_nodes__ABraExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABraAssignExpr#init for (self: ABraAssignExpr) */
void parser_nodes__ABraAssignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABraFormExpr__init]))(self) /* init on <self:ABraAssignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__init]))(self) /* init on <self:ABraAssignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABraAssignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABraAssignExpr__init(val* self) {
parser_nodes__ABraAssignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AVarFormExpr#n_id for (self: AVarFormExpr): TId */
val* parser_nodes__AVarFormExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1423);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarFormExpr#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AVarFormExpr__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__AVarFormExpr__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AVarFormExpr#n_id= for (self: AVarFormExpr, TId) */
void parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val = p0; /* _n_id on <self:AVarFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AVarFormExpr#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__AVarFormExpr__n_id_61d(val* self, val* p0) {
parser_nodes__AVarFormExpr__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AVarFormExpr#init for (self: AVarFormExpr) */
void parser_nodes__AVarFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AVarFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AVarFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AVarFormExpr__init(val* self) {
parser_nodes__AVarFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABraReassignExpr#init for (self: ABraReassignExpr) */
void parser_nodes__ABraReassignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABraFormExpr__init]))(self) /* init on <self:ABraReassignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendReassignFormExpr__init]))(self) /* init on <self:ABraReassignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ABraReassignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ABraReassignExpr__init(val* self) {
parser_nodes__ABraReassignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AVarExpr#init for (self: AVarExpr) */
void parser_nodes__AVarExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AVarFormExpr__init]))(self) /* init on <self:AVarExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AVarExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AVarExpr__init(val* self) {
parser_nodes__AVarExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AVarAssignExpr#init for (self: AVarAssignExpr) */
void parser_nodes__AVarAssignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AVarFormExpr__init]))(self) /* init on <self:AVarAssignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__init]))(self) /* init on <self:AVarAssignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AVarAssignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AVarAssignExpr__init(val* self) {
parser_nodes__AVarAssignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AVarReassignExpr#init for (self: AVarReassignExpr) */
void parser_nodes__AVarReassignExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AVarFormExpr__init]))(self) /* init on <self:AVarReassignExpr>*/;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__init]))(self) /* init on <self:AVarReassignExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AVarReassignExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AVarReassignExpr__init(val* self) {
parser_nodes__AVarReassignExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#n_expr for (self: ARangeExpr): AExpr */
val* parser_nodes__ARangeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ARangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1455);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ARangeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ARangeExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr= for (self: ARangeExpr, AExpr) */
void parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val = p0; /* _n_expr on <self:ARangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__ARangeExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__ARangeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#n_expr2 for (self: ARangeExpr): AExpr */
val* parser_nodes__ARangeExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ARangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr2");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1456);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr2 for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ARangeExpr__n_expr2(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ARangeExpr__n_expr2(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ARangeExpr#n_expr2= for (self: ARangeExpr, AExpr) */
void parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val = p0; /* _n_expr2 on <self:ARangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#n_expr2= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__ARangeExpr__n_expr2_61d(val* self, val* p0) {
parser_nodes__ARangeExpr__n_expr2_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#init for (self: ARangeExpr) */
void parser_nodes__ARangeExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ARangeExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ARangeExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ARangeExpr__init(val* self) {
parser_nodes__ARangeExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#n_obra for (self: ACrangeExpr): TObra */
val* parser_nodes__ACrangeExpr__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1462);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACrangeExpr#n_obra for (self: Object): TObra */
val* VIRTUAL_parser_nodes__ACrangeExpr__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = parser_nodes__ACrangeExpr__n_obra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACrangeExpr#n_obra= for (self: ACrangeExpr, TObra) */
void parser_nodes__ACrangeExpr__n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val = p0; /* _n_obra on <self:ACrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_nodes__ACrangeExpr__n_obra_61d(val* self, val* p0) {
parser_nodes__ACrangeExpr__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#n_cbra for (self: ACrangeExpr): TCbra */
val* parser_nodes__ACrangeExpr__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1463);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACrangeExpr#n_cbra for (self: Object): TCbra */
val* VIRTUAL_parser_nodes__ACrangeExpr__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = parser_nodes__ACrangeExpr__n_cbra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACrangeExpr#n_cbra= for (self: ACrangeExpr, TCbra) */
void parser_nodes__ACrangeExpr__n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val = p0; /* _n_cbra on <self:ACrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_nodes__ACrangeExpr__n_cbra_61d(val* self, val* p0) {
parser_nodes__ACrangeExpr__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#init for (self: ACrangeExpr) */
void parser_nodes__ACrangeExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__init]))(self) /* init on <self:ACrangeExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ACrangeExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ACrangeExpr__init(val* self) {
parser_nodes__ACrangeExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#n_obra for (self: AOrangeExpr): TObra */
val* parser_nodes__AOrangeExpr__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1469);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrangeExpr#n_obra for (self: Object): TObra */
val* VIRTUAL_parser_nodes__AOrangeExpr__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = parser_nodes__AOrangeExpr__n_obra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrangeExpr#n_obra= for (self: AOrangeExpr, TObra) */
void parser_nodes__AOrangeExpr__n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val = p0; /* _n_obra on <self:AOrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_nodes__AOrangeExpr__n_obra_61d(val* self, val* p0) {
parser_nodes__AOrangeExpr__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#n_cbra for (self: AOrangeExpr): TObra */
val* parser_nodes__AOrangeExpr__n_cbra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1470);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrangeExpr#n_cbra for (self: Object): TObra */
val* VIRTUAL_parser_nodes__AOrangeExpr__n_cbra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = parser_nodes__AOrangeExpr__n_cbra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AOrangeExpr#n_cbra= for (self: AOrangeExpr, TObra) */
void parser_nodes__AOrangeExpr__n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val = p0; /* _n_cbra on <self:AOrangeExpr> */
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#n_cbra= for (self: Object, TObra) */
void VIRTUAL_parser_nodes__AOrangeExpr__n_cbra_61d(val* self, val* p0) {
parser_nodes__AOrangeExpr__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#init for (self: AOrangeExpr) */
void parser_nodes__AOrangeExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__init]))(self) /* init on <self:AOrangeExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AOrangeExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AOrangeExpr__init(val* self) {
parser_nodes__AOrangeExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#n_exprs for (self: AArrayExpr): AExprs */
val* parser_nodes__AArrayExpr__n_exprs(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1476);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_exprs for (self: Object): AExprs */
val* VIRTUAL_parser_nodes__AArrayExpr__n_exprs(val* self) {
val* var /* : AExprs */;
val* var1 /* : AExprs */;
var1 = parser_nodes__AArrayExpr__n_exprs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AArrayExpr#n_exprs= for (self: AArrayExpr, AExprs) */
void parser_nodes__AArrayExpr__n_exprs_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val = p0; /* _n_exprs on <self:AArrayExpr> */
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#n_exprs= for (self: Object, AExprs) */
void VIRTUAL_parser_nodes__AArrayExpr__n_exprs_61d(val* self, val* p0) {
parser_nodes__AArrayExpr__n_exprs_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#init for (self: AArrayExpr) */
void parser_nodes__AArrayExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AArrayExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AArrayExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AArrayExpr__init(val* self) {
parser_nodes__AArrayExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASelfExpr#n_kwself for (self: ASelfExpr): nullable TKwself */
val* parser_nodes__ASelfExpr__n_kwself(val* self) {
val* var /* : nullable TKwself */;
val* var1 /* : nullable TKwself */;
var1 = self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASelfExpr#n_kwself for (self: Object): nullable TKwself */
val* VIRTUAL_parser_nodes__ASelfExpr__n_kwself(val* self) {
val* var /* : nullable TKwself */;
val* var1 /* : nullable TKwself */;
var1 = parser_nodes__ASelfExpr__n_kwself(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASelfExpr#n_kwself= for (self: ASelfExpr, nullable TKwself) */
void parser_nodes__ASelfExpr__n_kwself_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val = p0; /* _n_kwself on <self:ASelfExpr> */
RET_LABEL:;
}
/* method parser_nodes#ASelfExpr#n_kwself= for (self: Object, nullable TKwself) */
void VIRTUAL_parser_nodes__ASelfExpr__n_kwself_61d(val* self, val* p0) {
parser_nodes__ASelfExpr__n_kwself_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ASelfExpr#init for (self: ASelfExpr) */
void parser_nodes__ASelfExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ASelfExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ASelfExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ASelfExpr__init(val* self) {
parser_nodes__ASelfExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AImplicitSelfExpr#init for (self: AImplicitSelfExpr) */
void parser_nodes__AImplicitSelfExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ASelfExpr__init]))(self) /* init on <self:AImplicitSelfExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AImplicitSelfExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AImplicitSelfExpr__init(val* self) {
parser_nodes__AImplicitSelfExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ATrueExpr#n_kwtrue for (self: ATrueExpr): TKwtrue */
val* parser_nodes__ATrueExpr__n_kwtrue(val* self) {
val* var /* : TKwtrue */;
val* var1 /* : TKwtrue */;
var1 = self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtrue");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1493);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATrueExpr#n_kwtrue for (self: Object): TKwtrue */
val* VIRTUAL_parser_nodes__ATrueExpr__n_kwtrue(val* self) {
val* var /* : TKwtrue */;
val* var1 /* : TKwtrue */;
var1 = parser_nodes__ATrueExpr__n_kwtrue(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATrueExpr#n_kwtrue= for (self: ATrueExpr, TKwtrue) */
void parser_nodes__ATrueExpr__n_kwtrue_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val = p0; /* _n_kwtrue on <self:ATrueExpr> */
RET_LABEL:;
}
/* method parser_nodes#ATrueExpr#n_kwtrue= for (self: Object, TKwtrue) */
void VIRTUAL_parser_nodes__ATrueExpr__n_kwtrue_61d(val* self, val* p0) {
parser_nodes__ATrueExpr__n_kwtrue_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ATrueExpr#init for (self: ATrueExpr) */
void parser_nodes__ATrueExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:ATrueExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ATrueExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ATrueExpr__init(val* self) {
parser_nodes__ATrueExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AFalseExpr#n_kwfalse for (self: AFalseExpr): TKwfalse */
val* parser_nodes__AFalseExpr__n_kwfalse(val* self) {
val* var /* : TKwfalse */;
val* var1 /* : TKwfalse */;
var1 = self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwfalse");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1498);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFalseExpr#n_kwfalse for (self: Object): TKwfalse */
val* VIRTUAL_parser_nodes__AFalseExpr__n_kwfalse(val* self) {
val* var /* : TKwfalse */;
val* var1 /* : TKwfalse */;
var1 = parser_nodes__AFalseExpr__n_kwfalse(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFalseExpr#n_kwfalse= for (self: AFalseExpr, TKwfalse) */
void parser_nodes__AFalseExpr__n_kwfalse_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val = p0; /* _n_kwfalse on <self:AFalseExpr> */
RET_LABEL:;
}
/* method parser_nodes#AFalseExpr#n_kwfalse= for (self: Object, TKwfalse) */
void VIRTUAL_parser_nodes__AFalseExpr__n_kwfalse_61d(val* self, val* p0) {
parser_nodes__AFalseExpr__n_kwfalse_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AFalseExpr#init for (self: AFalseExpr) */
void parser_nodes__AFalseExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__ABoolExpr__init]))(self) /* init on <self:AFalseExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AFalseExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AFalseExpr__init(val* self) {
parser_nodes__AFalseExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ANullExpr#n_kwnull for (self: ANullExpr): TKwnull */
val* parser_nodes__ANullExpr__n_kwnull(val* self) {
val* var /* : TKwnull */;
val* var1 /* : TKwnull */;
var1 = self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnull");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1503);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANullExpr#n_kwnull for (self: Object): TKwnull */
val* VIRTUAL_parser_nodes__ANullExpr__n_kwnull(val* self) {
val* var /* : TKwnull */;
val* var1 /* : TKwnull */;
var1 = parser_nodes__ANullExpr__n_kwnull(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ANullExpr#n_kwnull= for (self: ANullExpr, TKwnull) */
void parser_nodes__ANullExpr__n_kwnull_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val = p0; /* _n_kwnull on <self:ANullExpr> */
RET_LABEL:;
}
/* method parser_nodes#ANullExpr#n_kwnull= for (self: Object, TKwnull) */
void VIRTUAL_parser_nodes__ANullExpr__n_kwnull_61d(val* self, val* p0) {
parser_nodes__ANullExpr__n_kwnull_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ANullExpr#init for (self: ANullExpr) */
void parser_nodes__ANullExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ANullExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ANullExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ANullExpr__init(val* self) {
parser_nodes__ANullExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIntExpr#n_number for (self: AIntExpr): TNumber */
val* parser_nodes__AIntExpr__n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val; /* _n_number on <self:AIntExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_number");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1508);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIntExpr#n_number for (self: Object): TNumber */
val* VIRTUAL_parser_nodes__AIntExpr__n_number(val* self) {
val* var /* : TNumber */;
val* var1 /* : TNumber */;
var1 = parser_nodes__AIntExpr__n_number(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIntExpr#n_number= for (self: AIntExpr, TNumber) */
void parser_nodes__AIntExpr__n_number_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val = p0; /* _n_number on <self:AIntExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIntExpr#n_number= for (self: Object, TNumber) */
void VIRTUAL_parser_nodes__AIntExpr__n_number_61d(val* self, val* p0) {
parser_nodes__AIntExpr__n_number_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIntExpr#init for (self: AIntExpr) */
void parser_nodes__AIntExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AIntExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AIntExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AIntExpr__init(val* self) {
parser_nodes__AIntExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AFloatExpr#n_float for (self: AFloatExpr): TFloat */
val* parser_nodes__AFloatExpr__n_float(val* self) {
val* var /* : TFloat */;
val* var1 /* : TFloat */;
var1 = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_float");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1513);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFloatExpr#n_float for (self: Object): TFloat */
val* VIRTUAL_parser_nodes__AFloatExpr__n_float(val* self) {
val* var /* : TFloat */;
val* var1 /* : TFloat */;
var1 = parser_nodes__AFloatExpr__n_float(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AFloatExpr#n_float= for (self: AFloatExpr, TFloat) */
void parser_nodes__AFloatExpr__n_float_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val = p0; /* _n_float on <self:AFloatExpr> */
RET_LABEL:;
}
/* method parser_nodes#AFloatExpr#n_float= for (self: Object, TFloat) */
void VIRTUAL_parser_nodes__AFloatExpr__n_float_61d(val* self, val* p0) {
parser_nodes__AFloatExpr__n_float_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AFloatExpr#init for (self: AFloatExpr) */
void parser_nodes__AFloatExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AFloatExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AFloatExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AFloatExpr__init(val* self) {
parser_nodes__AFloatExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ACharExpr#n_char for (self: ACharExpr): TChar */
val* parser_nodes__ACharExpr__n_char(val* self) {
val* var /* : TChar */;
val* var1 /* : TChar */;
var1 = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_char");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1518);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACharExpr#n_char for (self: Object): TChar */
val* VIRTUAL_parser_nodes__ACharExpr__n_char(val* self) {
val* var /* : TChar */;
val* var1 /* : TChar */;
var1 = parser_nodes__ACharExpr__n_char(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ACharExpr#n_char= for (self: ACharExpr, TChar) */
void parser_nodes__ACharExpr__n_char_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val = p0; /* _n_char on <self:ACharExpr> */
RET_LABEL:;
}
/* method parser_nodes#ACharExpr#n_char= for (self: Object, TChar) */
void VIRTUAL_parser_nodes__ACharExpr__n_char_61d(val* self, val* p0) {
parser_nodes__ACharExpr__n_char_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ACharExpr#init for (self: ACharExpr) */
void parser_nodes__ACharExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ACharExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ACharExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ACharExpr__init(val* self) {
parser_nodes__ACharExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStringFormExpr#n_string for (self: AStringFormExpr): Token */
val* parser_nodes__AStringFormExpr__n_string(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1523);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStringFormExpr#n_string for (self: Object): Token */
val* VIRTUAL_parser_nodes__AStringFormExpr__n_string(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = parser_nodes__AStringFormExpr__n_string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AStringFormExpr#n_string= for (self: AStringFormExpr, Token) */
void parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val = p0; /* _n_string on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method parser_nodes#AStringFormExpr#n_string= for (self: Object, Token) */
void VIRTUAL_parser_nodes__AStringFormExpr__n_string_61d(val* self, val* p0) {
parser_nodes__AStringFormExpr__n_string_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AStringFormExpr#init for (self: AStringFormExpr) */
void parser_nodes__AStringFormExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AStringFormExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AStringFormExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AStringFormExpr__init(val* self) {
parser_nodes__AStringFormExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStringExpr#init for (self: AStringExpr) */
void parser_nodes__AStringExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AStringFormExpr__init]))(self) /* init on <self:AStringExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AStringExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AStringExpr__init(val* self) {
parser_nodes__AStringExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AStartStringExpr#init for (self: AStartStringExpr) */
void parser_nodes__AStartStringExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AStringFormExpr__init]))(self) /* init on <self:AStartStringExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AStartStringExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AStartStringExpr__init(val* self) {
parser_nodes__AStartStringExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMidStringExpr#init for (self: AMidStringExpr) */
void parser_nodes__AMidStringExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AStringFormExpr__init]))(self) /* init on <self:AMidStringExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AMidStringExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AMidStringExpr__init(val* self) {
parser_nodes__AMidStringExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AEndStringExpr#init for (self: AEndStringExpr) */
void parser_nodes__AEndStringExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AStringFormExpr__init]))(self) /* init on <self:AEndStringExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AEndStringExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AEndStringExpr__init(val* self) {
parser_nodes__AEndStringExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#ASuperstringExpr#n_exprs for (self: ASuperstringExpr): ANodes[AExpr] */
val* parser_nodes__ASuperstringExpr__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1550);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperstringExpr#n_exprs for (self: Object): ANodes[AExpr] */
val* VIRTUAL_parser_nodes__ASuperstringExpr__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = parser_nodes__ASuperstringExpr__n_exprs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ASuperstringExpr#init for (self: ASuperstringExpr) */
void parser_nodes__ASuperstringExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ASuperstringExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ASuperstringExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ASuperstringExpr__init(val* self) {
parser_nodes__ASuperstringExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AParExpr#n_opar for (self: AParExpr): TOpar */
val* parser_nodes__AParExpr__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1556);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_opar for (self: Object): TOpar */
val* VIRTUAL_parser_nodes__AParExpr__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = parser_nodes__AParExpr__n_opar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_opar= for (self: AParExpr, TOpar) */
void parser_nodes__AParExpr__n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val = p0; /* _n_opar on <self:AParExpr> */
RET_LABEL:;
}
/* method parser_nodes#AParExpr#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_nodes__AParExpr__n_opar_61d(val* self, val* p0) {
parser_nodes__AParExpr__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AParExpr#n_cpar for (self: AParExpr): TCpar */
val* parser_nodes__AParExpr__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1557);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_cpar for (self: Object): TCpar */
val* VIRTUAL_parser_nodes__AParExpr__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = parser_nodes__AParExpr__n_cpar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExpr#n_cpar= for (self: AParExpr, TCpar) */
void parser_nodes__AParExpr__n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val = p0; /* _n_cpar on <self:AParExpr> */
RET_LABEL:;
}
/* method parser_nodes#AParExpr#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_nodes__AParExpr__n_cpar_61d(val* self, val* p0) {
parser_nodes__AParExpr__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AParExpr#init for (self: AParExpr) */
void parser_nodes__AParExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AProxyExpr__init]))(self) /* init on <self:AParExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AParExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AParExpr__init(val* self) {
parser_nodes__AParExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AProxyExpr#n_expr for (self: AProxyExpr): AExpr */
val* parser_nodes__AProxyExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AProxyExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1563);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AProxyExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AProxyExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AProxyExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AProxyExpr#n_expr= for (self: AProxyExpr, AExpr) */
void parser_nodes__AProxyExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val = p0; /* _n_expr on <self:AProxyExpr> */
RET_LABEL:;
}
/* method parser_nodes#AProxyExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AProxyExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AProxyExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AProxyExpr#init for (self: AProxyExpr) */
void parser_nodes__AProxyExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AProxyExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AProxyExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AProxyExpr__init(val* self) {
parser_nodes__AProxyExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_expr for (self: AAsCastExpr): AExpr */
val* parser_nodes__AAsCastExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1569);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAsCastExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_expr= for (self: AAsCastExpr, AExpr) */
void parser_nodes__AAsCastExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val = p0; /* _n_expr on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AAsCastExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AAsCastExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_kwas for (self: AAsCastExpr): TKwas */
val* parser_nodes__AAsCastExpr__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1570);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_kwas for (self: Object): TKwas */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = parser_nodes__AAsCastExpr__n_kwas(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_kwas= for (self: AAsCastExpr, TKwas) */
void parser_nodes__AAsCastExpr__n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val = p0; /* _n_kwas on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_nodes__AAsCastExpr__n_kwas_61d(val* self, val* p0) {
parser_nodes__AAsCastExpr__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_opar for (self: AAsCastExpr): TOpar */
val* parser_nodes__AAsCastExpr__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1571);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_opar for (self: Object): TOpar */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = parser_nodes__AAsCastExpr__n_opar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_opar= for (self: AAsCastExpr, TOpar) */
void parser_nodes__AAsCastExpr__n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = p0; /* _n_opar on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_nodes__AAsCastExpr__n_opar_61d(val* self, val* p0) {
parser_nodes__AAsCastExpr__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_type for (self: AAsCastExpr): AType */
val* parser_nodes__AAsCastExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1572);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__AAsCastExpr__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_type= for (self: AAsCastExpr, AType) */
void parser_nodes__AAsCastExpr__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val = p0; /* _n_type on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__AAsCastExpr__n_type_61d(val* self, val* p0) {
parser_nodes__AAsCastExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_cpar for (self: AAsCastExpr): TCpar */
val* parser_nodes__AAsCastExpr__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1573);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_cpar for (self: Object): TCpar */
val* VIRTUAL_parser_nodes__AAsCastExpr__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = parser_nodes__AAsCastExpr__n_cpar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsCastExpr#n_cpar= for (self: AAsCastExpr, TCpar) */
void parser_nodes__AAsCastExpr__n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = p0; /* _n_cpar on <self:AAsCastExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_nodes__AAsCastExpr__n_cpar_61d(val* self, val* p0) {
parser_nodes__AAsCastExpr__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#init for (self: AAsCastExpr) */
void parser_nodes__AAsCastExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AAsCastExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAsCastExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAsCastExpr__init(val* self) {
parser_nodes__AAsCastExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_expr for (self: AAsNotnullExpr): AExpr */
val* parser_nodes__AAsNotnullExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1579);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AAsNotnullExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_expr= for (self: AAsNotnullExpr, AExpr) */
void parser_nodes__AAsNotnullExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val = p0; /* _n_expr on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AAsNotnullExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__AAsNotnullExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwas for (self: AAsNotnullExpr): TKwas */
val* parser_nodes__AAsNotnullExpr__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwas");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1580);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwas for (self: Object): TKwas */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwas(val* self) {
val* var /* : TKwas */;
val* var1 /* : TKwas */;
var1 = parser_nodes__AAsNotnullExpr__n_kwas(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwas= for (self: AAsNotnullExpr, TKwas) */
void parser_nodes__AAsNotnullExpr__n_kwas_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val = p0; /* _n_kwas on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwas= for (self: Object, TKwas) */
void VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwas_61d(val* self, val* p0) {
parser_nodes__AAsNotnullExpr__n_kwas_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_opar for (self: AAsNotnullExpr): TOpar */
val* parser_nodes__AAsNotnullExpr__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1581);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_opar for (self: Object): TOpar */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = parser_nodes__AAsNotnullExpr__n_opar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_opar= for (self: AAsNotnullExpr, TOpar) */
void parser_nodes__AAsNotnullExpr__n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = p0; /* _n_opar on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_nodes__AAsNotnullExpr__n_opar_61d(val* self, val* p0) {
parser_nodes__AAsNotnullExpr__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnot for (self: AAsNotnullExpr): TKwnot */
val* parser_nodes__AAsNotnullExpr__n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnot");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1582);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnot for (self: Object): TKwnot */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwnot(val* self) {
val* var /* : TKwnot */;
val* var1 /* : TKwnot */;
var1 = parser_nodes__AAsNotnullExpr__n_kwnot(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnot= for (self: AAsNotnullExpr, TKwnot) */
void parser_nodes__AAsNotnullExpr__n_kwnot_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val = p0; /* _n_kwnot on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnot= for (self: Object, TKwnot) */
void VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwnot_61d(val* self, val* p0) {
parser_nodes__AAsNotnullExpr__n_kwnot_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnull for (self: AAsNotnullExpr): TKwnull */
val* parser_nodes__AAsNotnullExpr__n_kwnull(val* self) {
val* var /* : TKwnull */;
val* var1 /* : TKwnull */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwnull");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1583);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnull for (self: Object): TKwnull */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwnull(val* self) {
val* var /* : TKwnull */;
val* var1 /* : TKwnull */;
var1 = parser_nodes__AAsNotnullExpr__n_kwnull(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnull= for (self: AAsNotnullExpr, TKwnull) */
void parser_nodes__AAsNotnullExpr__n_kwnull_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val = p0; /* _n_kwnull on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_kwnull= for (self: Object, TKwnull) */
void VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwnull_61d(val* self, val* p0) {
parser_nodes__AAsNotnullExpr__n_kwnull_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_cpar for (self: AAsNotnullExpr): TCpar */
val* parser_nodes__AAsNotnullExpr__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1584);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_cpar for (self: Object): TCpar */
val* VIRTUAL_parser_nodes__AAsNotnullExpr__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = parser_nodes__AAsNotnullExpr__n_cpar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAsNotnullExpr#n_cpar= for (self: AAsNotnullExpr, TCpar) */
void parser_nodes__AAsNotnullExpr__n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = p0; /* _n_cpar on <self:AAsNotnullExpr> */
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_nodes__AAsNotnullExpr__n_cpar_61d(val* self, val* p0) {
parser_nodes__AAsNotnullExpr__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#init for (self: AAsNotnullExpr) */
void parser_nodes__AAsNotnullExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:AAsNotnullExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AAsNotnullExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AAsNotnullExpr__init(val* self) {
parser_nodes__AAsNotnullExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIssetAttrExpr#n_kwisset for (self: AIssetAttrExpr): TKwisset */
val* parser_nodes__AIssetAttrExpr__n_kwisset(val* self) {
val* var /* : TKwisset */;
val* var1 /* : TKwisset */;
var1 = self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwisset");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1590);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIssetAttrExpr#n_kwisset for (self: Object): TKwisset */
val* VIRTUAL_parser_nodes__AIssetAttrExpr__n_kwisset(val* self) {
val* var /* : TKwisset */;
val* var1 /* : TKwisset */;
var1 = parser_nodes__AIssetAttrExpr__n_kwisset(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AIssetAttrExpr#n_kwisset= for (self: AIssetAttrExpr, TKwisset) */
void parser_nodes__AIssetAttrExpr__n_kwisset_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val = p0; /* _n_kwisset on <self:AIssetAttrExpr> */
RET_LABEL:;
}
/* method parser_nodes#AIssetAttrExpr#n_kwisset= for (self: Object, TKwisset) */
void VIRTUAL_parser_nodes__AIssetAttrExpr__n_kwisset_61d(val* self, val* p0) {
parser_nodes__AIssetAttrExpr__n_kwisset_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AIssetAttrExpr#init for (self: AIssetAttrExpr) */
void parser_nodes__AIssetAttrExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__init]))(self) /* init on <self:AIssetAttrExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#AIssetAttrExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__AIssetAttrExpr__init(val* self) {
parser_nodes__AIssetAttrExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExprs#n_exprs for (self: AExprs): ANodes[AExpr] */
val* parser_nodes__AExprs__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_exprs");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1596);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprs#n_exprs for (self: Object): ANodes[AExpr] */
val* VIRTUAL_parser_nodes__AExprs__n_exprs(val* self) {
val* var /* : ANodes[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
var1 = parser_nodes__AExprs__n_exprs(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprs#init for (self: AExprs) */
void parser_nodes__AExprs__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AExprs>*/;
RET_LABEL:;
}
/* method parser_nodes#AExprs#init for (self: Object) */
void VIRTUAL_parser_nodes__AExprs__init(val* self) {
parser_nodes__AExprs__init(self);
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_kwdebug for (self: ADebugTypeExpr): TKwdebug */
val* parser_nodes__ADebugTypeExpr__n_kwdebug(val* self) {
val* var /* : TKwdebug */;
val* var1 /* : TKwdebug */;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwdebug");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1601);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_kwdebug for (self: Object): TKwdebug */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_kwdebug(val* self) {
val* var /* : TKwdebug */;
val* var1 /* : TKwdebug */;
var1 = parser_nodes__ADebugTypeExpr__n_kwdebug(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_kwdebug= for (self: ADebugTypeExpr, TKwdebug) */
void parser_nodes__ADebugTypeExpr__n_kwdebug_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val = p0; /* _n_kwdebug on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_kwdebug= for (self: Object, TKwdebug) */
void VIRTUAL_parser_nodes__ADebugTypeExpr__n_kwdebug_61d(val* self, val* p0) {
parser_nodes__ADebugTypeExpr__n_kwdebug_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_kwtype for (self: ADebugTypeExpr): TKwtype */
val* parser_nodes__ADebugTypeExpr__n_kwtype(val* self) {
val* var /* : TKwtype */;
val* var1 /* : TKwtype */;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwtype");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1602);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_kwtype for (self: Object): TKwtype */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_kwtype(val* self) {
val* var /* : TKwtype */;
val* var1 /* : TKwtype */;
var1 = parser_nodes__ADebugTypeExpr__n_kwtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_kwtype= for (self: ADebugTypeExpr, TKwtype) */
void parser_nodes__ADebugTypeExpr__n_kwtype_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val = p0; /* _n_kwtype on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_kwtype= for (self: Object, TKwtype) */
void VIRTUAL_parser_nodes__ADebugTypeExpr__n_kwtype_61d(val* self, val* p0) {
parser_nodes__ADebugTypeExpr__n_kwtype_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: ADebugTypeExpr): AExpr */
val* parser_nodes__ADebugTypeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1603);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__ADebugTypeExpr__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_expr= for (self: ADebugTypeExpr, AExpr) */
void parser_nodes__ADebugTypeExpr__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val = p0; /* _n_expr on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__ADebugTypeExpr__n_expr_61d(val* self, val* p0) {
parser_nodes__ADebugTypeExpr__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_type for (self: ADebugTypeExpr): AType */
val* parser_nodes__ADebugTypeExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1604);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ADebugTypeExpr__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ADebugTypeExpr__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADebugTypeExpr#n_type= for (self: ADebugTypeExpr, AType) */
void parser_nodes__ADebugTypeExpr__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val = p0; /* _n_type on <self:ADebugTypeExpr> */
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__ADebugTypeExpr__n_type_61d(val* self, val* p0) {
parser_nodes__ADebugTypeExpr__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#init for (self: ADebugTypeExpr) */
void parser_nodes__ADebugTypeExpr__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExpr__init]))(self) /* init on <self:ADebugTypeExpr>*/;
RET_LABEL:;
}
/* method parser_nodes#ADebugTypeExpr#init for (self: Object) */
void VIRTUAL_parser_nodes__ADebugTypeExpr__init(val* self) {
parser_nodes__ADebugTypeExpr__init(self);
RET_LABEL:;
}
/* method parser_nodes#AListExprs#init for (self: AListExprs) */
void parser_nodes__AListExprs__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExprs__init]))(self) /* init on <self:AListExprs>*/;
RET_LABEL:;
}
/* method parser_nodes#AListExprs#init for (self: Object) */
void VIRTUAL_parser_nodes__AListExprs__init(val* self) {
parser_nodes__AListExprs__init(self);
RET_LABEL:;
}
/* method parser_nodes#AParExprs#n_opar for (self: AParExprs): TOpar */
val* parser_nodes__AParExprs__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_opar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1615);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExprs#n_opar for (self: Object): TOpar */
val* VIRTUAL_parser_nodes__AParExprs__n_opar(val* self) {
val* var /* : TOpar */;
val* var1 /* : TOpar */;
var1 = parser_nodes__AParExprs__n_opar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExprs#n_opar= for (self: AParExprs, TOpar) */
void parser_nodes__AParExprs__n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val = p0; /* _n_opar on <self:AParExprs> */
RET_LABEL:;
}
/* method parser_nodes#AParExprs#n_opar= for (self: Object, TOpar) */
void VIRTUAL_parser_nodes__AParExprs__n_opar_61d(val* self, val* p0) {
parser_nodes__AParExprs__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AParExprs#n_cpar for (self: AParExprs): TCpar */
val* parser_nodes__AParExprs__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cpar");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1616);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExprs#n_cpar for (self: Object): TCpar */
val* VIRTUAL_parser_nodes__AParExprs__n_cpar(val* self) {
val* var /* : TCpar */;
val* var1 /* : TCpar */;
var1 = parser_nodes__AParExprs__n_cpar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AParExprs#n_cpar= for (self: AParExprs, TCpar) */
void parser_nodes__AParExprs__n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val = p0; /* _n_cpar on <self:AParExprs> */
RET_LABEL:;
}
/* method parser_nodes#AParExprs#n_cpar= for (self: Object, TCpar) */
void VIRTUAL_parser_nodes__AParExprs__n_cpar_61d(val* self, val* p0) {
parser_nodes__AParExprs__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AParExprs#init for (self: AParExprs) */
void parser_nodes__AParExprs__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExprs__init]))(self) /* init on <self:AParExprs>*/;
RET_LABEL:;
}
/* method parser_nodes#AParExprs#init for (self: Object) */
void VIRTUAL_parser_nodes__AParExprs__init(val* self) {
parser_nodes__AParExprs__init(self);
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#n_obra for (self: ABraExprs): TObra */
val* parser_nodes__ABraExprs__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_obra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1622);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraExprs#n_obra for (self: Object): TObra */
val* VIRTUAL_parser_nodes__ABraExprs__n_obra(val* self) {
val* var /* : TObra */;
val* var1 /* : TObra */;
var1 = parser_nodes__ABraExprs__n_obra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraExprs#n_obra= for (self: ABraExprs, TObra) */
void parser_nodes__ABraExprs__n_obra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val = p0; /* _n_obra on <self:ABraExprs> */
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#n_obra= for (self: Object, TObra) */
void VIRTUAL_parser_nodes__ABraExprs__n_obra_61d(val* self, val* p0) {
parser_nodes__ABraExprs__n_obra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#n_cbra for (self: ABraExprs): TCbra */
val* parser_nodes__ABraExprs__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_cbra");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1623);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraExprs#n_cbra for (self: Object): TCbra */
val* VIRTUAL_parser_nodes__ABraExprs__n_cbra(val* self) {
val* var /* : TCbra */;
val* var1 /* : TCbra */;
var1 = parser_nodes__ABraExprs__n_cbra(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ABraExprs#n_cbra= for (self: ABraExprs, TCbra) */
void parser_nodes__ABraExprs__n_cbra_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val = p0; /* _n_cbra on <self:ABraExprs> */
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#n_cbra= for (self: Object, TCbra) */
void VIRTUAL_parser_nodes__ABraExprs__n_cbra_61d(val* self, val* p0) {
parser_nodes__ABraExprs__n_cbra_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#init for (self: ABraExprs) */
void parser_nodes__ABraExprs__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AExprs__init]))(self) /* init on <self:ABraExprs>*/;
RET_LABEL:;
}
/* method parser_nodes#ABraExprs#init for (self: Object) */
void VIRTUAL_parser_nodes__ABraExprs__init(val* self) {
parser_nodes__ABraExprs__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAssignOp#init for (self: AAssignOp) */
void parser_nodes__AAssignOp__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AAssignOp>*/;
RET_LABEL:;
}
/* method parser_nodes#AAssignOp#init for (self: Object) */
void VIRTUAL_parser_nodes__AAssignOp__init(val* self) {
parser_nodes__AAssignOp__init(self);
RET_LABEL:;
}
/* method parser_nodes#APlusAssignOp#n_pluseq for (self: APlusAssignOp): TPluseq */
val* parser_nodes__APlusAssignOp__n_pluseq(val* self) {
val* var /* : TPluseq */;
val* var1 /* : TPluseq */;
var1 = self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_pluseq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1632);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APlusAssignOp#n_pluseq for (self: Object): TPluseq */
val* VIRTUAL_parser_nodes__APlusAssignOp__n_pluseq(val* self) {
val* var /* : TPluseq */;
val* var1 /* : TPluseq */;
var1 = parser_nodes__APlusAssignOp__n_pluseq(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#APlusAssignOp#n_pluseq= for (self: APlusAssignOp, TPluseq) */
void parser_nodes__APlusAssignOp__n_pluseq_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val = p0; /* _n_pluseq on <self:APlusAssignOp> */
RET_LABEL:;
}
/* method parser_nodes#APlusAssignOp#n_pluseq= for (self: Object, TPluseq) */
void VIRTUAL_parser_nodes__APlusAssignOp__n_pluseq_61d(val* self, val* p0) {
parser_nodes__APlusAssignOp__n_pluseq_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#APlusAssignOp#init for (self: APlusAssignOp) */
void parser_nodes__APlusAssignOp__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignOp__init]))(self) /* init on <self:APlusAssignOp>*/;
RET_LABEL:;
}
/* method parser_nodes#APlusAssignOp#init for (self: Object) */
void VIRTUAL_parser_nodes__APlusAssignOp__init(val* self) {
parser_nodes__APlusAssignOp__init(self);
RET_LABEL:;
}
/* method parser_nodes#AMinusAssignOp#n_minuseq for (self: AMinusAssignOp): TMinuseq */
val* parser_nodes__AMinusAssignOp__n_minuseq(val* self) {
val* var /* : TMinuseq */;
val* var1 /* : TMinuseq */;
var1 = self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_minuseq");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1636);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusAssignOp#n_minuseq for (self: Object): TMinuseq */
val* VIRTUAL_parser_nodes__AMinusAssignOp__n_minuseq(val* self) {
val* var /* : TMinuseq */;
val* var1 /* : TMinuseq */;
var1 = parser_nodes__AMinusAssignOp__n_minuseq(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AMinusAssignOp#n_minuseq= for (self: AMinusAssignOp, TMinuseq) */
void parser_nodes__AMinusAssignOp__n_minuseq_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val = p0; /* _n_minuseq on <self:AMinusAssignOp> */
RET_LABEL:;
}
/* method parser_nodes#AMinusAssignOp#n_minuseq= for (self: Object, TMinuseq) */
void VIRTUAL_parser_nodes__AMinusAssignOp__n_minuseq_61d(val* self, val* p0) {
parser_nodes__AMinusAssignOp__n_minuseq_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AMinusAssignOp#init for (self: AMinusAssignOp) */
void parser_nodes__AMinusAssignOp__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignOp__init]))(self) /* init on <self:AMinusAssignOp>*/;
RET_LABEL:;
}
/* method parser_nodes#AMinusAssignOp#init for (self: Object) */
void VIRTUAL_parser_nodes__AMinusAssignOp__init(val* self) {
parser_nodes__AMinusAssignOp__init(self);
RET_LABEL:;
}
/* method parser_nodes#AModuleName#n_quad for (self: AModuleName): nullable TQuad */
val* parser_nodes__AModuleName__n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val; /* _n_quad on <self:AModuleName> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad for (self: Object): nullable TQuad */
val* VIRTUAL_parser_nodes__AModuleName__n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = parser_nodes__AModuleName__n_quad(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_quad= for (self: AModuleName, nullable TQuad) */
void parser_nodes__AModuleName__n_quad_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = p0; /* _n_quad on <self:AModuleName> */
RET_LABEL:;
}
/* method parser_nodes#AModuleName#n_quad= for (self: Object, nullable TQuad) */
void VIRTUAL_parser_nodes__AModuleName__n_quad_61d(val* self, val* p0) {
parser_nodes__AModuleName__n_quad_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AModuleName#n_path for (self: AModuleName): ANodes[TId] */
val* parser_nodes__AModuleName__n_path(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_parser_nodes__AModuleName___n_path].val; /* _n_path on <self:AModuleName> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_path");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1642);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_path for (self: Object): ANodes[TId] */
val* VIRTUAL_parser_nodes__AModuleName__n_path(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = parser_nodes__AModuleName__n_path(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id for (self: AModuleName): TId */
val* parser_nodes__AModuleName__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1643);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id for (self: Object): TId */
val* VIRTUAL_parser_nodes__AModuleName__n_id(val* self) {
val* var /* : TId */;
val* var1 /* : TId */;
var1 = parser_nodes__AModuleName__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AModuleName#n_id= for (self: AModuleName, TId) */
void parser_nodes__AModuleName__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AModuleName___n_id].val = p0; /* _n_id on <self:AModuleName> */
RET_LABEL:;
}
/* method parser_nodes#AModuleName#n_id= for (self: Object, TId) */
void VIRTUAL_parser_nodes__AModuleName__n_id_61d(val* self, val* p0) {
parser_nodes__AModuleName__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AModuleName#init for (self: AModuleName) */
void parser_nodes__AModuleName__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AModuleName>*/;
RET_LABEL:;
}
/* method parser_nodes#AModuleName#init for (self: Object) */
void VIRTUAL_parser_nodes__AModuleName__init(val* self) {
parser_nodes__AModuleName__init(self);
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#n_kwin for (self: AInLanguage): TKwin */
val* parser_nodes__AInLanguage__n_kwin(val* self) {
val* var /* : TKwin */;
val* var1 /* : TKwin */;
var1 = self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_kwin");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1647);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInLanguage#n_kwin for (self: Object): TKwin */
val* VIRTUAL_parser_nodes__AInLanguage__n_kwin(val* self) {
val* var /* : TKwin */;
val* var1 /* : TKwin */;
var1 = parser_nodes__AInLanguage__n_kwin(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInLanguage#n_kwin= for (self: AInLanguage, TKwin) */
void parser_nodes__AInLanguage__n_kwin_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val = p0; /* _n_kwin on <self:AInLanguage> */
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#n_kwin= for (self: Object, TKwin) */
void VIRTUAL_parser_nodes__AInLanguage__n_kwin_61d(val* self, val* p0) {
parser_nodes__AInLanguage__n_kwin_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#n_string for (self: AInLanguage): TString */
val* parser_nodes__AInLanguage__n_string(val* self) {
val* var /* : TString */;
val* var1 /* : TString */;
var1 = self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_string");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1648);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInLanguage#n_string for (self: Object): TString */
val* VIRTUAL_parser_nodes__AInLanguage__n_string(val* self) {
val* var /* : TString */;
val* var1 /* : TString */;
var1 = parser_nodes__AInLanguage__n_string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AInLanguage#n_string= for (self: AInLanguage, TString) */
void parser_nodes__AInLanguage__n_string_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val = p0; /* _n_string on <self:AInLanguage> */
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#n_string= for (self: Object, TString) */
void VIRTUAL_parser_nodes__AInLanguage__n_string_61d(val* self, val* p0) {
parser_nodes__AInLanguage__n_string_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#init for (self: AInLanguage) */
void parser_nodes__AInLanguage__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AInLanguage>*/;
RET_LABEL:;
}
/* method parser_nodes#AInLanguage#init for (self: Object) */
void VIRTUAL_parser_nodes__AInLanguage__init(val* self) {
parser_nodes__AInLanguage__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#n_in_language for (self: AExternCodeBlock): nullable AInLanguage */
val* parser_nodes__AExternCodeBlock__n_in_language(val* self) {
val* var /* : nullable AInLanguage */;
val* var1 /* : nullable AInLanguage */;
var1 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val; /* _n_in_language on <self:AExternCodeBlock> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_in_language for (self: Object): nullable AInLanguage */
val* VIRTUAL_parser_nodes__AExternCodeBlock__n_in_language(val* self) {
val* var /* : nullable AInLanguage */;
val* var1 /* : nullable AInLanguage */;
var1 = parser_nodes__AExternCodeBlock__n_in_language(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_in_language= for (self: AExternCodeBlock, nullable AInLanguage) */
void parser_nodes__AExternCodeBlock__n_in_language_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = p0; /* _n_in_language on <self:AExternCodeBlock> */
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#n_in_language= for (self: Object, nullable AInLanguage) */
void VIRTUAL_parser_nodes__AExternCodeBlock__n_in_language_61d(val* self, val* p0) {
parser_nodes__AExternCodeBlock__n_in_language_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#n_extern_code_segment for (self: AExternCodeBlock): TExternCodeSegment */
val* parser_nodes__AExternCodeBlock__n_extern_code_segment(val* self) {
val* var /* : TExternCodeSegment */;
val* var1 /* : TExternCodeSegment */;
var1 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_extern_code_segment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1653);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_extern_code_segment for (self: Object): TExternCodeSegment */
val* VIRTUAL_parser_nodes__AExternCodeBlock__n_extern_code_segment(val* self) {
val* var /* : TExternCodeSegment */;
val* var1 /* : TExternCodeSegment */;
var1 = parser_nodes__AExternCodeBlock__n_extern_code_segment(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExternCodeBlock#n_extern_code_segment= for (self: AExternCodeBlock, TExternCodeSegment) */
void parser_nodes__AExternCodeBlock__n_extern_code_segment_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val = p0; /* _n_extern_code_segment on <self:AExternCodeBlock> */
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#n_extern_code_segment= for (self: Object, TExternCodeSegment) */
void VIRTUAL_parser_nodes__AExternCodeBlock__n_extern_code_segment_61d(val* self, val* p0) {
parser_nodes__AExternCodeBlock__n_extern_code_segment_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#init for (self: AExternCodeBlock) */
void parser_nodes__AExternCodeBlock__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AExternCodeBlock>*/;
RET_LABEL:;
}
/* method parser_nodes#AExternCodeBlock#init for (self: Object) */
void VIRTUAL_parser_nodes__AExternCodeBlock__init(val* self) {
parser_nodes__AExternCodeBlock__init(self);
RET_LABEL:;
}
/* method parser_nodes#AQualified#n_quad for (self: AQualified): nullable TQuad */
val* parser_nodes__AQualified__n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = self->attrs[COLOR_parser_nodes__AQualified___n_quad].val; /* _n_quad on <self:AQualified> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_quad for (self: Object): nullable TQuad */
val* VIRTUAL_parser_nodes__AQualified__n_quad(val* self) {
val* var /* : nullable TQuad */;
val* var1 /* : nullable TQuad */;
var1 = parser_nodes__AQualified__n_quad(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_quad= for (self: AQualified, nullable TQuad) */
void parser_nodes__AQualified__n_quad_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AQualified___n_quad].val = p0; /* _n_quad on <self:AQualified> */
RET_LABEL:;
}
/* method parser_nodes#AQualified#n_quad= for (self: Object, nullable TQuad) */
void VIRTUAL_parser_nodes__AQualified__n_quad_61d(val* self, val* p0) {
parser_nodes__AQualified__n_quad_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AQualified#n_id for (self: AQualified): ANodes[TId] */
val* parser_nodes__AQualified__n_id(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = self->attrs[COLOR_parser_nodes__AQualified___n_id].val; /* _n_id on <self:AQualified> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1658);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_id for (self: Object): ANodes[TId] */
val* VIRTUAL_parser_nodes__AQualified__n_id(val* self) {
val* var /* : ANodes[TId] */;
val* var1 /* : ANodes[TId] */;
var1 = parser_nodes__AQualified__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_classid for (self: AQualified): nullable TClassid */
val* parser_nodes__AQualified__n_classid(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
var1 = self->attrs[COLOR_parser_nodes__AQualified___n_classid].val; /* _n_classid on <self:AQualified> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_classid for (self: Object): nullable TClassid */
val* VIRTUAL_parser_nodes__AQualified__n_classid(val* self) {
val* var /* : nullable TClassid */;
val* var1 /* : nullable TClassid */;
var1 = parser_nodes__AQualified__n_classid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AQualified#n_classid= for (self: AQualified, nullable TClassid) */
void parser_nodes__AQualified__n_classid_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = p0; /* _n_classid on <self:AQualified> */
RET_LABEL:;
}
/* method parser_nodes#AQualified#n_classid= for (self: Object, nullable TClassid) */
void VIRTUAL_parser_nodes__AQualified__n_classid_61d(val* self, val* p0) {
parser_nodes__AQualified__n_classid_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AQualified#init for (self: AQualified) */
void parser_nodes__AQualified__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AQualified>*/;
RET_LABEL:;
}
/* method parser_nodes#AQualified#init for (self: Object) */
void VIRTUAL_parser_nodes__AQualified__init(val* self) {
parser_nodes__AQualified__init(self);
RET_LABEL:;
}
/* method parser_nodes#ADoc#n_comment for (self: ADoc): ANodes[TComment] */
val* parser_nodes__ADoc__n_comment(val* self) {
val* var /* : ANodes[TComment] */;
val* var1 /* : ANodes[TComment] */;
var1 = self->attrs[COLOR_parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_comment");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1666);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoc#n_comment for (self: Object): ANodes[TComment] */
val* VIRTUAL_parser_nodes__ADoc__n_comment(val* self) {
val* var /* : ANodes[TComment] */;
val* var1 /* : ANodes[TComment] */;
var1 = parser_nodes__ADoc__n_comment(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ADoc#init for (self: ADoc) */
void parser_nodes__ADoc__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:ADoc>*/;
RET_LABEL:;
}
/* method parser_nodes#ADoc#init for (self: Object) */
void VIRTUAL_parser_nodes__ADoc__init(val* self) {
parser_nodes__ADoc__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_at for (self: AAnnotations): nullable TAt */
val* parser_nodes__AAnnotations__n_at(val* self) {
val* var /* : nullable TAt */;
val* var1 /* : nullable TAt */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val; /* _n_at on <self:AAnnotations> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_at for (self: Object): nullable TAt */
val* VIRTUAL_parser_nodes__AAnnotations__n_at(val* self) {
val* var /* : nullable TAt */;
val* var1 /* : nullable TAt */;
var1 = parser_nodes__AAnnotations__n_at(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_at= for (self: AAnnotations, nullable TAt) */
void parser_nodes__AAnnotations__n_at_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = p0; /* _n_at on <self:AAnnotations> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_at= for (self: Object, nullable TAt) */
void VIRTUAL_parser_nodes__AAnnotations__n_at_61d(val* self, val* p0) {
parser_nodes__AAnnotations__n_at_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_opar for (self: AAnnotations): nullable TOpar */
val* parser_nodes__AAnnotations__n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val; /* _n_opar on <self:AAnnotations> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_opar for (self: Object): nullable TOpar */
val* VIRTUAL_parser_nodes__AAnnotations__n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = parser_nodes__AAnnotations__n_opar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_opar= for (self: AAnnotations, nullable TOpar) */
void parser_nodes__AAnnotations__n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = p0; /* _n_opar on <self:AAnnotations> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_nodes__AAnnotations__n_opar_61d(val* self, val* p0) {
parser_nodes__AAnnotations__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_items for (self: AAnnotations): ANodes[AAnnotation] */
val* parser_nodes__AAnnotations__n_items(val* self) {
val* var /* : ANodes[AAnnotation] */;
val* var1 /* : ANodes[AAnnotation] */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <self:AAnnotations> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_items");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1673);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_items for (self: Object): ANodes[AAnnotation] */
val* VIRTUAL_parser_nodes__AAnnotations__n_items(val* self) {
val* var /* : ANodes[AAnnotation] */;
val* var1 /* : ANodes[AAnnotation] */;
var1 = parser_nodes__AAnnotations__n_items(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_cpar for (self: AAnnotations): nullable TCpar */
val* parser_nodes__AAnnotations__n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val; /* _n_cpar on <self:AAnnotations> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_cpar for (self: Object): nullable TCpar */
val* VIRTUAL_parser_nodes__AAnnotations__n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = parser_nodes__AAnnotations__n_cpar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotations#n_cpar= for (self: AAnnotations, nullable TCpar) */
void parser_nodes__AAnnotations__n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = p0; /* _n_cpar on <self:AAnnotations> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_nodes__AAnnotations__n_cpar_61d(val* self, val* p0) {
parser_nodes__AAnnotations__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#init for (self: AAnnotations) */
void parser_nodes__AAnnotations__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AAnnotations>*/;
RET_LABEL:;
}
/* method parser_nodes#AAnnotations#init for (self: Object) */
void VIRTUAL_parser_nodes__AAnnotations__init(val* self) {
parser_nodes__AAnnotations__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_atid for (self: AAnnotation): AAtid */
val* parser_nodes__AAnnotation__n_atid(val* self) {
val* var /* : AAtid */;
val* var1 /* : AAtid */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_atid");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1678);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_atid for (self: Object): AAtid */
val* VIRTUAL_parser_nodes__AAnnotation__n_atid(val* self) {
val* var /* : AAtid */;
val* var1 /* : AAtid */;
var1 = parser_nodes__AAnnotation__n_atid(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_atid= for (self: AAnnotation, AAtid) */
void parser_nodes__AAnnotation__n_atid_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val = p0; /* _n_atid on <self:AAnnotation> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_atid= for (self: Object, AAtid) */
void VIRTUAL_parser_nodes__AAnnotation__n_atid_61d(val* self, val* p0) {
parser_nodes__AAnnotation__n_atid_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_opar for (self: AAnnotation): nullable TOpar */
val* parser_nodes__AAnnotation__n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val; /* _n_opar on <self:AAnnotation> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_opar for (self: Object): nullable TOpar */
val* VIRTUAL_parser_nodes__AAnnotation__n_opar(val* self) {
val* var /* : nullable TOpar */;
val* var1 /* : nullable TOpar */;
var1 = parser_nodes__AAnnotation__n_opar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_opar= for (self: AAnnotation, nullable TOpar) */
void parser_nodes__AAnnotation__n_opar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = p0; /* _n_opar on <self:AAnnotation> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_opar= for (self: Object, nullable TOpar) */
void VIRTUAL_parser_nodes__AAnnotation__n_opar_61d(val* self, val* p0) {
parser_nodes__AAnnotation__n_opar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_args for (self: AAnnotation): ANodes[AAtArg] */
val* parser_nodes__AAnnotation__n_args(val* self) {
val* var /* : ANodes[AAtArg] */;
val* var1 /* : ANodes[AAtArg] */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_args");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1680);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_args for (self: Object): ANodes[AAtArg] */
val* VIRTUAL_parser_nodes__AAnnotation__n_args(val* self) {
val* var /* : ANodes[AAtArg] */;
val* var1 /* : ANodes[AAtArg] */;
var1 = parser_nodes__AAnnotation__n_args(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_cpar for (self: AAnnotation): nullable TCpar */
val* parser_nodes__AAnnotation__n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val; /* _n_cpar on <self:AAnnotation> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_cpar for (self: Object): nullable TCpar */
val* VIRTUAL_parser_nodes__AAnnotation__n_cpar(val* self) {
val* var /* : nullable TCpar */;
val* var1 /* : nullable TCpar */;
var1 = parser_nodes__AAnnotation__n_cpar(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAnnotation#n_cpar= for (self: AAnnotation, nullable TCpar) */
void parser_nodes__AAnnotation__n_cpar_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = p0; /* _n_cpar on <self:AAnnotation> */
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#n_cpar= for (self: Object, nullable TCpar) */
void VIRTUAL_parser_nodes__AAnnotation__n_cpar_61d(val* self, val* p0) {
parser_nodes__AAnnotation__n_cpar_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#init for (self: AAnnotation) */
void parser_nodes__AAnnotation__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AAnnotation>*/;
RET_LABEL:;
}
/* method parser_nodes#AAnnotation#init for (self: Object) */
void VIRTUAL_parser_nodes__AAnnotation__init(val* self) {
parser_nodes__AAnnotation__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAtArg#init for (self: AAtArg) */
void parser_nodes__AAtArg__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AAtArg>*/;
RET_LABEL:;
}
/* method parser_nodes#AAtArg#init for (self: Object) */
void VIRTUAL_parser_nodes__AAtArg__init(val* self) {
parser_nodes__AAtArg__init(self);
RET_LABEL:;
}
/* method parser_nodes#ATypeAtArg#n_type for (self: ATypeAtArg): AType */
val* parser_nodes__ATypeAtArg__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val; /* _n_type on <self:ATypeAtArg> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_type");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1688);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypeAtArg#n_type for (self: Object): AType */
val* VIRTUAL_parser_nodes__ATypeAtArg__n_type(val* self) {
val* var /* : AType */;
val* var1 /* : AType */;
var1 = parser_nodes__ATypeAtArg__n_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#ATypeAtArg#n_type= for (self: ATypeAtArg, AType) */
void parser_nodes__ATypeAtArg__n_type_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val = p0; /* _n_type on <self:ATypeAtArg> */
RET_LABEL:;
}
/* method parser_nodes#ATypeAtArg#n_type= for (self: Object, AType) */
void VIRTUAL_parser_nodes__ATypeAtArg__n_type_61d(val* self, val* p0) {
parser_nodes__ATypeAtArg__n_type_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#ATypeAtArg#init for (self: ATypeAtArg) */
void parser_nodes__ATypeAtArg__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtArg__init]))(self) /* init on <self:ATypeAtArg>*/;
RET_LABEL:;
}
/* method parser_nodes#ATypeAtArg#init for (self: Object) */
void VIRTUAL_parser_nodes__ATypeAtArg__init(val* self) {
parser_nodes__ATypeAtArg__init(self);
RET_LABEL:;
}
/* method parser_nodes#AExprAtArg#n_expr for (self: AExprAtArg): AExpr */
val* parser_nodes__AExprAtArg__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val; /* _n_expr on <self:AExprAtArg> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_expr");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1692);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprAtArg#n_expr for (self: Object): AExpr */
val* VIRTUAL_parser_nodes__AExprAtArg__n_expr(val* self) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_nodes__AExprAtArg__n_expr(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AExprAtArg#n_expr= for (self: AExprAtArg, AExpr) */
void parser_nodes__AExprAtArg__n_expr_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val = p0; /* _n_expr on <self:AExprAtArg> */
RET_LABEL:;
}
/* method parser_nodes#AExprAtArg#n_expr= for (self: Object, AExpr) */
void VIRTUAL_parser_nodes__AExprAtArg__n_expr_61d(val* self, val* p0) {
parser_nodes__AExprAtArg__n_expr_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AExprAtArg#init for (self: AExprAtArg) */
void parser_nodes__AExprAtArg__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtArg__init]))(self) /* init on <self:AExprAtArg>*/;
RET_LABEL:;
}
/* method parser_nodes#AExprAtArg#init for (self: Object) */
void VIRTUAL_parser_nodes__AExprAtArg__init(val* self) {
parser_nodes__AExprAtArg__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAtAtArg#init for (self: AAtAtArg) */
void parser_nodes__AAtAtArg__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtArg__init]))(self) /* init on <self:AAtAtArg>*/;
RET_LABEL:;
}
/* method parser_nodes#AAtAtArg#init for (self: Object) */
void VIRTUAL_parser_nodes__AAtAtArg__init(val* self) {
parser_nodes__AAtAtArg__init(self);
RET_LABEL:;
}
/* method parser_nodes#AAtid#n_id for (self: AAtid): Token */
val* parser_nodes__AAtid__n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <self:AAtid> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_id");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1699);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id for (self: Object): Token */
val* VIRTUAL_parser_nodes__AAtid__n_id(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = parser_nodes__AAtid__n_id(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#AAtid#n_id= for (self: AAtid, Token) */
void parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__AAtid___n_id].val = p0; /* _n_id on <self:AAtid> */
RET_LABEL:;
}
/* method parser_nodes#AAtid#n_id= for (self: Object, Token) */
void VIRTUAL_parser_nodes__AAtid__n_id_61d(val* self, val* p0) {
parser_nodes__AAtid__n_id_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#AAtid#init for (self: AAtid) */
void parser_nodes__AAtid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:AAtid>*/;
RET_LABEL:;
}
/* method parser_nodes#AAtid#init for (self: Object) */
void VIRTUAL_parser_nodes__AAtid__init(val* self) {
parser_nodes__AAtid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AIdAtid#init for (self: AIdAtid) */
void parser_nodes__AIdAtid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtid__init]))(self) /* init on <self:AIdAtid>*/;
RET_LABEL:;
}
/* method parser_nodes#AIdAtid#init for (self: Object) */
void VIRTUAL_parser_nodes__AIdAtid__init(val* self) {
parser_nodes__AIdAtid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AKwexternAtid#init for (self: AKwexternAtid) */
void parser_nodes__AKwexternAtid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtid__init]))(self) /* init on <self:AKwexternAtid>*/;
RET_LABEL:;
}
/* method parser_nodes#AKwexternAtid#init for (self: Object) */
void VIRTUAL_parser_nodes__AKwexternAtid__init(val* self) {
parser_nodes__AKwexternAtid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AKwinternAtid#init for (self: AKwinternAtid) */
void parser_nodes__AKwinternAtid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtid__init]))(self) /* init on <self:AKwinternAtid>*/;
RET_LABEL:;
}
/* method parser_nodes#AKwinternAtid#init for (self: Object) */
void VIRTUAL_parser_nodes__AKwinternAtid__init(val* self) {
parser_nodes__AKwinternAtid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AKwreadableAtid#init for (self: AKwreadableAtid) */
void parser_nodes__AKwreadableAtid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtid__init]))(self) /* init on <self:AKwreadableAtid>*/;
RET_LABEL:;
}
/* method parser_nodes#AKwreadableAtid#init for (self: Object) */
void VIRTUAL_parser_nodes__AKwreadableAtid__init(val* self) {
parser_nodes__AKwreadableAtid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AKwwritableAtid#init for (self: AKwwritableAtid) */
void parser_nodes__AKwwritableAtid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtid__init]))(self) /* init on <self:AKwwritableAtid>*/;
RET_LABEL:;
}
/* method parser_nodes#AKwwritableAtid#init for (self: Object) */
void VIRTUAL_parser_nodes__AKwwritableAtid__init(val* self) {
parser_nodes__AKwwritableAtid__init(self);
RET_LABEL:;
}
/* method parser_nodes#AKwimportAtid#init for (self: AKwimportAtid) */
void parser_nodes__AKwimportAtid__init(val* self) {
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__AAtid__init]))(self) /* init on <self:AKwimportAtid>*/;
RET_LABEL:;
}
/* method parser_nodes#AKwimportAtid#init for (self: Object) */
void VIRTUAL_parser_nodes__AKwimportAtid__init(val* self) {
parser_nodes__AKwimportAtid__init(self);
RET_LABEL:;
}
/* method parser_nodes#Start#n_base for (self: Start): nullable AModule */
val* parser_nodes__Start__n_base(val* self) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = self->attrs[COLOR_parser_nodes__Start___n_base].val; /* _n_base on <self:Start> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base for (self: Object): nullable AModule */
val* VIRTUAL_parser_nodes__Start__n_base(val* self) {
val* var /* : nullable AModule */;
val* var1 /* : nullable AModule */;
var1 = parser_nodes__Start__n_base(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_base= for (self: Start, nullable AModule) */
void parser_nodes__Start__n_base_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Start___n_base].val = p0; /* _n_base on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#n_base= for (self: Object, nullable AModule) */
void VIRTUAL_parser_nodes__Start__n_base_61d(val* self, val* p0) {
parser_nodes__Start__n_base_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Start#n_eof for (self: Start): EOF */
val* parser_nodes__Start__n_eof(val* self) {
val* var /* : EOF */;
val* var1 /* : EOF */;
var1 = self->attrs[COLOR_parser_nodes__Start___n_eof].val; /* _n_eof on <self:Start> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _n_eof");
fprintf(stderr, " (%s:%d)\n", "src/parser/parser_nodes.nit", 1724);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_eof for (self: Object): EOF */
val* VIRTUAL_parser_nodes__Start__n_eof(val* self) {
val* var /* : EOF */;
val* var1 /* : EOF */;
var1 = parser_nodes__Start__n_eof(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_nodes#Start#n_eof= for (self: Start, EOF) */
void parser_nodes__Start__n_eof_61d(val* self, val* p0) {
self->attrs[COLOR_parser_nodes__Start___n_eof].val = p0; /* _n_eof on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#n_eof= for (self: Object, EOF) */
void VIRTUAL_parser_nodes__Start__n_eof_61d(val* self, val* p0) {
parser_nodes__Start__n_eof_61d(self, p0);
RET_LABEL:;
}
/* method parser_nodes#Start#init for (self: Start, nullable AModule, EOF) */
void parser_nodes__Start__init(val* self, val* p0, val* p1) {
val* var_n_base /* var n_base: nullable AModule */;
val* var_n_eof /* var n_eof: EOF */;
var_n_base = p0;
var_n_eof = p1;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Prod__init]))(self) /* init on <self:Start>*/;
self->attrs[COLOR_parser_nodes__Start___n_base].val = var_n_base; /* _n_base on <self:Start> */
self->attrs[COLOR_parser_nodes__Start___n_eof].val = var_n_eof; /* _n_eof on <self:Start> */
RET_LABEL:;
}
/* method parser_nodes#Start#init for (self: Object, nullable AModule, EOF) */
void VIRTUAL_parser_nodes__Start__init(val* self, val* p0, val* p1) {
parser_nodes__Start__init(self, p0, p1);
RET_LABEL:;
}
