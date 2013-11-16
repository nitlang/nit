#include "typing.sep.0.h"
/* method typing#ToolContext#typing_phase for (self: ToolContext): Phase */
val* typing__ToolContext__typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_typing__ToolContext___64dtyping_phase].val; /* @typing_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @typing_phase", "src/typing.nit", 27);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ToolContext#typing_phase for (self: Object): Phase */
val* VIRTUAL_typing__ToolContext__typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = typing__ToolContext__typing_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ToolContext#typing_phase= for (self: ToolContext, Phase) */
void typing__ToolContext__typing_phase_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ToolContext___64dtyping_phase].val = p0; /* @typing_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method typing#ToolContext#typing_phase= for (self: Object, Phase) */
void VIRTUAL_typing__ToolContext__typing_phase_61d(val* self, val* p0) {
typing__ToolContext__typing_phase_61d(self, p0);
RET_LABEL:;
}
/* method typing#MPropDef#has_supercall for (self: MPropDef): Bool */
short int typing__MPropDef__has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_typing__MPropDef___64dhas_supercall].s; /* @has_supercall on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#MPropDef#has_supercall for (self: Object): Bool */
short int VIRTUAL_typing__MPropDef__has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__MPropDef__has_supercall(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#MPropDef#has_supercall= for (self: MPropDef, Bool) */
void typing__MPropDef__has_supercall_61d(val* self, short int p0) {
self->attrs[COLOR_typing__MPropDef___64dhas_supercall].s = p0; /* @has_supercall on <self:MPropDef> */
RET_LABEL:;
}
/* method typing#MPropDef#has_supercall= for (self: Object, Bool) */
void VIRTUAL_typing__MPropDef__has_supercall_61d(val* self, short int p0) {
typing__MPropDef__has_supercall_61d(self, p0);
RET_LABEL:;
}
/* method typing#TypingPhase#process_npropdef for (self: TypingPhase, APropdef) */
void typing__TypingPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var1 /* : ModelBuilder */;
var_npropdef = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:TypingPhase>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var) /* modelbuilder on <var:ToolContext>*/;
((void (*)(val*, val*))(var_npropdef->class->vft[COLOR_typing__APropdef__do_typing]))(var_npropdef, var1) /* do_typing on <var_npropdef:APropdef>*/;
RET_LABEL:;
}
/* method typing#TypingPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_typing__TypingPhase__process_npropdef(val* self, val* p0) {
typing__TypingPhase__process_npropdef(self, p0);
RET_LABEL:;
}
/* method typing#TypeVisitor#modelbuilder for (self: TypeVisitor): ModelBuilder */
val* typing__TypeVisitor__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_typing__TypeVisitor___64dmodelbuilder].val; /* @modelbuilder on <self:TypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @modelbuilder", "src/typing.nit", 41);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#modelbuilder for (self: Object): ModelBuilder */
val* VIRTUAL_typing__TypeVisitor__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = typing__TypeVisitor__modelbuilder(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#modelbuilder= for (self: TypeVisitor, ModelBuilder) */
void typing__TypeVisitor__modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___64dmodelbuilder].val = p0; /* @modelbuilder on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#modelbuilder= for (self: Object, ModelBuilder) */
void VIRTUAL_typing__TypeVisitor__modelbuilder_61d(val* self, val* p0) {
typing__TypeVisitor__modelbuilder_61d(self, p0);
RET_LABEL:;
}
/* method typing#TypeVisitor#nclassdef for (self: TypeVisitor): AClassdef */
val* typing__TypeVisitor__nclassdef(val* self) {
val* var /* : AClassdef */;
val* var1 /* : AClassdef */;
var1 = self->attrs[COLOR_typing__TypeVisitor___64dnclassdef].val; /* @nclassdef on <self:TypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @nclassdef", "src/typing.nit", 42);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#nclassdef for (self: Object): AClassdef */
val* VIRTUAL_typing__TypeVisitor__nclassdef(val* self) {
val* var /* : AClassdef */;
val* var1 /* : AClassdef */;
var1 = typing__TypeVisitor__nclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#nclassdef= for (self: TypeVisitor, AClassdef) */
void typing__TypeVisitor__nclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___64dnclassdef].val = p0; /* @nclassdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#nclassdef= for (self: Object, AClassdef) */
void VIRTUAL_typing__TypeVisitor__nclassdef_61d(val* self, val* p0) {
typing__TypeVisitor__nclassdef_61d(self, p0);
RET_LABEL:;
}
/* method typing#TypeVisitor#mpropdef for (self: TypeVisitor): MPropDef */
val* typing__TypeVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_typing__TypeVisitor___64dmpropdef].val; /* @mpropdef on <self:TypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mpropdef", "src/typing.nit", 43);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_typing__TypeVisitor__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = typing__TypeVisitor__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mpropdef= for (self: TypeVisitor, MPropDef) */
void typing__TypeVisitor__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___64dmpropdef].val = p0; /* @mpropdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mpropdef= for (self: Object, MPropDef) */
void VIRTUAL_typing__TypeVisitor__mpropdef_61d(val* self, val* p0) {
typing__TypeVisitor__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method typing#TypeVisitor#selfvariable for (self: TypeVisitor): Variable */
val* typing__TypeVisitor__selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_typing__TypeVisitor___64dselfvariable].val; /* @selfvariable on <self:TypeVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @selfvariable", "src/typing.nit", 45);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#selfvariable for (self: Object): Variable */
val* VIRTUAL_typing__TypeVisitor__selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = typing__TypeVisitor__selfvariable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#selfvariable= for (self: TypeVisitor, Variable) */
void typing__TypeVisitor__selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___64dselfvariable].val = p0; /* @selfvariable on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#selfvariable= for (self: Object, Variable) */
void VIRTUAL_typing__TypeVisitor__selfvariable_61d(val* self, val* p0) {
typing__TypeVisitor__selfvariable_61d(self, p0);
RET_LABEL:;
}
/* method typing#TypeVisitor#init for (self: TypeVisitor, ModelBuilder, AClassdef, MPropDef) */
void typing__TypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var /* : nullable MClassDef */;
val* var1 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var2 /* : Variable */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var_selfvariable /* var selfvariable: Variable */;
val* var7 /* : MClassType */;
var_modelbuilder = p0;
var_nclassdef = p1;
var_mpropdef = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder_61d]))(self, var_modelbuilder) /* modelbuilder= on <self:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef_61d]))(self, var_nclassdef) /* nclassdef= on <self:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__mpropdef_61d]))(self, var_mpropdef) /* mpropdef= on <self:TypeVisitor>*/;
var = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 53);
exit(1);
} else {
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model__MClassDef__mclass]))(var) /* mclass on <var:nullable MClassDef>*/;
}
var_mclass = var1;
var2 = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var3 = varonce;
} else {
var4 = "self";
var5 = 4;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var2->class->vft[COLOR_scope__Variable__init]))(var2, var3) /* init on <var2:Variable>*/;
CHECK_NEW_scope__Variable(var2);
var_selfvariable = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__selfvariable_61d]))(self, var_selfvariable) /* selfvariable= on <self:TypeVisitor>*/;
var7 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:MClass>*/;
((void (*)(val*, val*))(var_selfvariable->class->vft[COLOR_typing__Variable__declared_type_61d]))(var_selfvariable, var7) /* declared_type= on <var_selfvariable:Variable>*/;
RET_LABEL:;
}
/* method typing#TypeVisitor#init for (self: Object, ModelBuilder, AClassdef, MPropDef) */
void VIRTUAL_typing__TypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
typing__TypeVisitor__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method typing#TypeVisitor#mmodule for (self: TypeVisitor): MModule */
val* typing__TypeVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : AClassdef */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : MModule */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var1) /* mclassdef on <var1:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 60);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mmodule]))(var2) /* mmodule on <var2:nullable MClassDef>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mmodule for (self: Object): MModule */
val* VIRTUAL_typing__TypeVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = typing__TypeVisitor__mmodule(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor for (self: TypeVisitor): MClassType */
val* typing__TypeVisitor__anchor(val* self) {
val* var /* : MClassType */;
val* var1 /* : AClassdef */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : MClassType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var1) /* mclassdef on <var1:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 62);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__bound_mtype]))(var2) /* bound_mtype on <var2:nullable MClassDef>*/;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor for (self: Object): MClassType */
val* VIRTUAL_typing__TypeVisitor__anchor(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = typing__TypeVisitor__anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor_to for (self: TypeVisitor, MType): MType */
val* typing__TypeVisitor__anchor_to(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : AClassdef */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : AClassdef */;
val* var5 /* : nullable MClassDef */;
val* var6 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var7 /* : MType */;
var_mtype = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var1) /* mclassdef on <var1:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 66);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mmodule]))(var2) /* mmodule on <var2:nullable MClassDef>*/;
}
var_mmodule = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var4) /* mclassdef on <var4:AClassdef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 67);
exit(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__bound_mtype]))(var5) /* bound_mtype on <var5:nullable MClassDef>*/;
}
var_anchor = var6;
var7 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor) /* anchor_to on <var_mtype:MType>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor_to for (self: Object, MType): MType */
val* VIRTUAL_typing__TypeVisitor__anchor_to(val* self, val* p0) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = typing__TypeVisitor__anchor_to(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_subtype for (self: TypeVisitor, MType, MType): Bool */
short int typing__TypeVisitor__is_subtype(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
val* var1 /* : AClassdef */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : AClassdef */;
val* var5 /* : nullable MClassDef */;
val* var6 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
short int var7 /* : Bool */;
var_sub = p0;
var_sup = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var1) /* mclassdef on <var1:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 73);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mmodule]))(var2) /* mmodule on <var2:nullable MClassDef>*/;
}
var_mmodule = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var4) /* mclassdef on <var4:AClassdef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 74);
exit(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__bound_mtype]))(var5) /* bound_mtype on <var5:nullable MClassDef>*/;
}
var_anchor = var6;
var7 = ((short int (*)(val*, val*, val*, val*))(var_sub->class->vft[COLOR_model__MType__is_subtype]))(var_sub, var_mmodule, var_anchor, var_sup) /* is_subtype on <var_sub:MType>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_subtype for (self: Object, MType, MType): Bool */
short int VIRTUAL_typing__TypeVisitor__is_subtype(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__TypeVisitor__is_subtype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_for for (self: TypeVisitor, MType, MType, Bool): MType */
val* typing__TypeVisitor__resolve_for(val* self, val* p0, val* p1, short int p2) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_subtype /* var subtype: MType */;
short int var_for_self /* var for_self: Bool */;
val* var1 /* : AClassdef */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : AClassdef */;
val* var5 /* : nullable MClassDef */;
val* var6 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
short int var7 /* : Bool */;
val* var8 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_subtype = p1;
var_for_self = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var1) /* mclassdef on <var1:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 80);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mmodule]))(var2) /* mmodule on <var2:nullable MClassDef>*/;
}
var_mmodule = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var4) /* mclassdef on <var4:AClassdef>*/;
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 81);
exit(1);
} else {
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_model__MClassDef__bound_mtype]))(var5) /* bound_mtype on <var5:nullable MClassDef>*/;
}
var_anchor = var6;
var7 = !var_for_self;
var8 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var_subtype, var_anchor, var_mmodule, var7) /* resolve_for on <var_mtype:MType>*/;
var_res = var8;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_for for (self: Object, MType, MType, Bool): MType */
val* VIRTUAL_typing__TypeVisitor__resolve_for(val* self, val* p0, val* p1, short int p2) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = typing__TypeVisitor__resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_signature_for for (self: TypeVisitor, MMethodDef, MType, Bool): MSignature */
val* typing__TypeVisitor__resolve_signature_for(val* self, val* p0, val* p1, short int p2) {
val* var /* : MSignature */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var_recv /* var recv: MType */;
short int var_for_self /* var for_self: Bool */;
val* var1 /* : nullable MSignature */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
var_mmethoddef = p0;
var_recv = p1;
var_for_self = p2;
var1 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 94);
exit(1);
}
var2 = ((val* (*)(val*, val*, val*, short int))(self->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(self, var1, var_recv, var_for_self) /* resolve_for on <self:TypeVisitor>*/;
/* <var2:MType> isa MSignature */
cltype = type_model__MSignature.color;
idtype = type_model__MSignature.id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (!var3) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 94);
exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_signature_for for (self: Object, MMethodDef, MType, Bool): MSignature */
val* VIRTUAL_typing__TypeVisitor__resolve_signature_for(val* self, val* p0, val* p1, short int p2) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = typing__TypeVisitor__resolve_signature_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: TypeVisitor, ANode, MType, MType): nullable MType */
val* typing__TypeVisitor__check_subtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
val* var4 /* : ModelBuilder */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
val* var18 /* : null */;
var_node = p0;
var_sub = p1;
var_sup = p2;
var1 = ((short int (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(self, var_sub, var_sup) /* is_subtype on <self:TypeVisitor>*/;
if (var1){
var = var_sub;
goto RET_LABEL;
} else {
}
var2 = ((val* (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(self, var_sup) /* anchor_to on <self:TypeVisitor>*/;
var3 = ((short int (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(self, var_sub, var2) /* is_subtype on <self:TypeVisitor>*/;
if (var3){
var = var_sup;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce) {
var5 = varonce;
} else {
var6 = "Type error: expected ";
var7 = 21;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = ", got ";
var12 = 6;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 4;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var16)->values[2] = (val*) var10;
((struct instance_array__NativeArray*)var16)->values[3] = (val*) var_sub;
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
CHECK_NEW_array__Array(var14);
}
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
((void (*)(val*, val*, val*))(var4->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var4, var_node, var17) /* error on <var4:ModelBuilder>*/;
var18 = NULL;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: Object, ANode, MType, MType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__check_subtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__check_subtype(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_stmt for (self: TypeVisitor, nullable AExpr) */
void typing__TypeVisitor__visit_stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
var_nexpr = p0;
var = NULL;
if (var_nexpr == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (var1){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_typing__AExpr__accept_typing]))(var_nexpr, self) /* accept_typing on <var_nexpr:nullable AExpr(AExpr)>*/;
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_stmt for (self: Object, nullable AExpr) */
void VIRTUAL_typing__TypeVisitor__visit_stmt(val* self, val* p0) {
typing__TypeVisitor__visit_stmt(self, p0);
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_expr for (self: TypeVisitor, AExpr): nullable MType */
val* typing__TypeVisitor__visit_expr(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : null */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : null */;
var_nexpr = p0;
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_typing__AExpr__accept_typing]))(var_nexpr, self) /* accept_typing on <var_nexpr:AExpr>*/;
var1 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
var_mtype = var1;
var2 = NULL;
if (var_mtype == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_mtype;
goto RET_LABEL;
} else {
}
var4 = ((short int (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__is_typed]))(var_nexpr) /* is_typed on <var_nexpr:AExpr>*/;
var5 = !var4;
if (var5){
var6 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var6) /* toolcontext on <var6:ModelBuilder>*/;
var8 = ((long (*)(val*))(var7->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var7) /* error_count on <var7:ToolContext>*/;
var9 = 0;
{ /* Inline kernel#Int#> (var8,var9) */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (!var12) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var13 = var8 > var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var14 = !var10;
if (var14){
var15 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var15) /* toolcontext on <var15:ModelBuilder>*/;
var17 = ((long (*)(val*))(var16->class->vft[COLOR_toolcontext__ToolContext__verbose_level]))(var16) /* verbose_level on <var16:ToolContext>*/;
var18 = 1;
{ /* Inline kernel#Int#> (var17,var18) */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (!var21) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var24 = var17 > var18;
var19 = var24;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
if (var19){
if (varonce) {
var25 = varonce;
} else {
var26 = "No return type but no error.";
var27 = 28;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_parser_nodes__ANode__debug]))(var_nexpr, var25) /* debug on <var_nexpr:AExpr>*/;
} else {
}
} else {
}
var29 = NULL;
var = var29;
goto RET_LABEL;
} else {
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = "Type error: expected expression.";
var33 = 32;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__error]))(self, var_nexpr, var31) /* error on <self:TypeVisitor>*/;
var35 = NULL;
var = var35;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr for (self: Object, AExpr): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_subtype for (self: TypeVisitor, AExpr, nullable MType): nullable MType */
val* typing__TypeVisitor__visit_expr_subtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_sup /* var sup: nullable MType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var9 /* : Bool */;
var_nexpr = p0;
var_sup = p1;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(self, var_nexpr) /* visit_expr on <self:TypeVisitor>*/;
var_sub = var1;
var2 = NULL;
if (var_sub == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = NULL;
if (var_sup == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__check_subtype]))(self, var_nexpr, var_sub, var_sup) /* check_subtype on <self:TypeVisitor>*/;
var_res = var8;
if (var_res == NULL) {
var9 = 1; /* <var_sub:nullable MType(MType)> cannot be null */
} else {
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___33d_61d]))(var_res, var_sub) /* != on <var_res:nullable MType>*/;
}
if (var9){
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_typing__AExpr__implicit_cast_to_61d]))(var_nexpr, var_res) /* implicit_cast_to= on <var_nexpr:AExpr>*/;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_subtype for (self: Object, AExpr, nullable MType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr_subtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr_subtype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_bool for (self: TypeVisitor, AExpr): nullable MType */
val* typing__TypeVisitor__visit_expr_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_nexpr = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__type_bool]))(self, var_nexpr) /* type_bool on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(self, var_nexpr, var1) /* visit_expr_subtype on <self:TypeVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_bool for (self: Object, AExpr): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_cast for (self: TypeVisitor, ANode, AExpr, AType): nullable MType */
val* typing__TypeVisitor__visit_expr_cast(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : nullable MType */;
val* var_sup /* var sup: nullable MType */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : AClassdef */;
val* var10 /* : nullable MClassDef */;
val* var11 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var12 /* : AClassdef */;
val* var13 /* : nullable MClassDef */;
val* var14 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
short int var15 /* : Bool */;
val* var16 /* : ModelBuilder */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var_ /* var : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : ModelBuilder */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
var_node = p0;
var_nexpr = p1;
var_ntype = p2;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(self, var_nexpr) /* visit_expr on <self:TypeVisitor>*/;
var_sub = var1;
var2 = NULL;
if (var_sub == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = NULL;
var = var4;
goto RET_LABEL;
} else {
}
var5 = ((val* (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(self, var_ntype) /* resolve_mtype on <self:TypeVisitor>*/;
var_sup = var5;
var6 = NULL;
if (var_sup == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var9) /* mclassdef on <var9:AClassdef>*/;
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 184);
exit(1);
} else {
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_model__MClassDef__mmodule]))(var10) /* mmodule on <var10:nullable MClassDef>*/;
}
var_mmodule = var11;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var13 = ((val* (*)(val*))(var12->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var12) /* mclassdef on <var12:AClassdef>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 185);
exit(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_model__MClassDef__bound_mtype]))(var13) /* bound_mtype on <var13:nullable MClassDef>*/;
}
var_anchor = var14;
var15 = ((short int (*)(val*, val*))(var_sup->class->vft[COLOR_kernel__Object___61d_61d]))(var_sup, var_sub) /* == on <var_sup:nullable MType(MType)>*/;
if (var15){
var16 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce) {
var17 = varonce;
} else {
var18 = "Warning: Expression is already a ";
var19 = 33;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = ".";
var24 = 1;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var22;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
CHECK_NEW_array__Array(var26);
}
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var16, var_node, var29) /* warning on <var16:ModelBuilder>*/;
} else {
var31 = ((short int (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(self, var_sub, var_sup) /* is_subtype on <self:TypeVisitor>*/;
var_ = var31;
if (var31){
var32 = ((short int (*)(val*))(var_sup->class->vft[COLOR_model__MType__need_anchor]))(var_sup) /* need_anchor on <var_sup:nullable MType(MType)>*/;
var33 = !var32;
var30 = var33;
} else {
var30 = var_;
}
if (var30){
var34 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "Warning: Expression is already a ";
var38 = 33;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = " since it is a ";
var43 = 15;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ".";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 5;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var41;
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var_sub;
((struct instance_array__NativeArray*)var52)->values[4] = (val*) var46;
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
CHECK_NEW_array__Array(var50);
}
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
((void (*)(val*, val*, val*))(var34->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var34, var_node, var53) /* warning on <var34:ModelBuilder>*/;
} else {
}
}
var = var_sup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_cast for (self: Object, ANode, AExpr, AType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr_cast(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr_cast(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mproperty_by_name2 for (self: TypeVisitor, ANode, MType, String): nullable MProperty */
val* typing__TypeVisitor__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var2 /* : AClassdef */;
val* var3 /* : nullable MClassDef */;
val* var4 /* : MModule */;
val* var5 /* : nullable MProperty */;
var_anode = p0;
var_mtype = p1;
var_name = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var2) /* mclassdef on <var2:AClassdef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 196);
exit(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MClassDef__mmodule]))(var3) /* mmodule on <var3:nullable MClassDef>*/;
}
var5 = ((val* (*)(val*, val*, val*, val*, val*))(var1->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2]))(var1, var_anode, var4, var_mtype, var_name) /* try_get_mproperty_by_name2 on <var1:ModelBuilder>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mproperty_by_name2 for (self: Object, ANode, MType, String): nullable MProperty */
val* VIRTUAL_typing__TypeVisitor__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var1 /* : nullable MProperty */;
var1 = typing__TypeVisitor__try_get_mproperty_by_name2(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_mtype for (self: TypeVisitor, AType): nullable MType */
val* typing__TypeVisitor__resolve_mtype(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: AType */;
val* var1 /* : ModelBuilder */;
val* var2 /* : AClassdef */;
val* var3 /* : nullable MType */;
var_node = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var3 = ((val* (*)(val*, val*, val*))(var1->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(var1, var2, var_node) /* resolve_mtype on <var1:ModelBuilder>*/;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_mtype for (self: Object, AType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__resolve_mtype(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__resolve_mtype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* typing__TypeVisitor__try_get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_name /* var name: String */;
val* var1 /* : AClassdef */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : ModelBuilder */;
val* var5 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
var_node = p0;
var_name = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var1) /* mclassdef on <var1:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 206);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mmodule]))(var2) /* mmodule on <var2:nullable MClassDef>*/;
}
var_mmodule = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
var5 = ((val* (*)(val*, val*, val*, val*))(var4->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var4, var_node, var_mmodule, var_name) /* try_get_mclass_by_name on <var4:ModelBuilder>*/;
var_mclass = var5;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mclass for (self: Object, ANode, String): nullable MClass */
val* VIRTUAL_typing__TypeVisitor__try_get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = typing__TypeVisitor__try_get_mclass(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* typing__TypeVisitor__get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_name /* var name: String */;
val* var1 /* : AClassdef */;
val* var2 /* : nullable MClassDef */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : ModelBuilder */;
val* var5 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : ModelBuilder */;
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
var_node = p0;
var_name = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(self) /* nclassdef on <self:TypeVisitor>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var1) /* mclassdef on <var1:AClassdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 213);
exit(1);
} else {
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MClassDef__mmodule]))(var2) /* mmodule on <var2:nullable MClassDef>*/;
}
var_mmodule = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
var5 = ((val* (*)(val*, val*, val*, val*))(var4->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(var4, var_node, var_mmodule, var_name) /* try_get_mclass_by_name on <var4:ModelBuilder>*/;
var_mclass = var5;
var6 = NULL;
if (var_mclass == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce) {
var9 = varonce;
} else {
var10 = "Type Error: missing primitive class `";
var11 = 37;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "\'.";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
CHECK_NEW_array__Array(var18);
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(var8->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var8, var_node, var21) /* error on <var8:ModelBuilder>*/;
} else {
}
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_mclass for (self: Object, ANode, String): nullable MClass */
val* VIRTUAL_typing__TypeVisitor__get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = typing__TypeVisitor__get_mclass(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#type_bool for (self: TypeVisitor, ANode): nullable MType */
val* typing__TypeVisitor__type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : MClassType */;
var_node = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "Bool";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(self, var_node, var1) /* get_mclass on <self:TypeVisitor>*/;
var_mclass = var5;
var6 = NULL;
if (var_mclass == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#type_bool for (self: Object, ANode): nullable MType */
val* VIRTUAL_typing__TypeVisitor__type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__type_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* typing__TypeVisitor__get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var_node /* var node: ANode */;
val* var_recvtype /* var recvtype: MType */;
val* var_name /* var name: String */;
short int var_recv_is_self /* var recv_is_self: Bool */;
val* var1 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : String */;
val* var16 /* : null */;
val* var17 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : ModelBuilder */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
val* var40 /* : ModelBuilder */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : null */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : MVisibility */;
val* var67 /* : MVisibility */;
short int var68 /* : Bool */;
short int var_ /* var : Bool */;
short int var69 /* : Bool */;
short int var_70 /* var : Bool */;
val* var71 /* : MModule */;
val* var72 /* : MClassDef */;
val* var73 /* : MModule */;
val* var74 /* : MVisibility */;
val* var75 /* : MVisibility */;
short int var76 /* : Bool */;
val* var77 /* : ModelBuilder */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : String */;
val* var88 /* : MClassDef */;
val* var89 /* : MModule */;
val* var90 /* : MModule */;
val* var91 /* : MVisibility */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : null */;
val* var97 /* : MModule */;
val* var98 /* : Array[MPropDef] */;
val* var_propdefs /* var propdefs: Array[MMethodDef] */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
val* var104 /* : ModelBuilder */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
val* var119 /* : null */;
long var120 /* : Int */;
long var121 /* : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable Object */;
val* var126 /* : ModelBuilder */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
long var130 /* : Int */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : Array[Object] */;
long var149 /* : Int */;
val* var150 /* : NativeArray[Object] */;
val* var151 /* : String */;
val* var152 /* : MPropDef */;
val* var153 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var154 /* : Bool */;
short int var_erasure_cast /* var erasure_cast: Bool */;
val* var155 /* : nullable MSignature */;
val* var156 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var_159 /* var : Bool */;
val* var160 /* : null */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
val* var165 /* : MType */;
short int var166 /* : Bool */;
int cltype167;
int idtype168;
val* var169 /* : nullable MType */;
val* var_erased_rettype /* var erased_rettype: nullable MType */;
val* var170 /* : null */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var173 /* : CallSite */;
val* var_callsite /* var callsite: CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(self, var_recvtype) /* anchor_to on <self:TypeVisitor>*/;
var_unsafe_type = var1;
/* <var_recvtype:MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var2 = 0;
} else {
var2 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "Error: Method \'";
var5 = 15;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = "\' call on \'null\'.";
var10 = 17;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 3;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var14)->values[2] = (val*) var8;
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
CHECK_NEW_array__Array(var12);
}
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__error]))(self, var_node, var15) /* error on <self:TypeVisitor>*/;
var16 = NULL;
var = var16;
goto RET_LABEL;
} else {
}
var17 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(self, var_node, var_unsafe_type, var_name) /* try_get_mproperty_by_name2 on <self:TypeVisitor>*/;
var_mproperty = var17;
var18 = NULL;
if (var_mproperty == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (var19){
if (var_recv_is_self){
var20 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "Error: Method or variable \'";
var24 = 27;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "\' unknown in ";
var29 = 13;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = ".";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 5;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var27;
((struct instance_array__NativeArray*)var38)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var38)->values[4] = (val*) var32;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
CHECK_NEW_array__Array(var36);
}
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
((void (*)(val*, val*, val*))(var20->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var20, var_node, var39) /* error on <var20:ModelBuilder>*/;
} else {
var40 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Error: Method \'";
var44 = 15;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "\' doesn\'t exists in ";
var49 = 20;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ".";
var54 = 1;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 5;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var47;
((struct instance_array__NativeArray*)var58)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var58)->values[4] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
CHECK_NEW_array__Array(var56);
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*, val*))(var40->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var40, var_node, var59) /* error on <var40:ModelBuilder>*/;
}
var60 = NULL;
var = var60;
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype62 = type_model__MMethod.color;
idtype63 = type_model__MMethod.id;
if(cltype62 >= var_mproperty->type->table_size) {
var61 = 0;
} else {
var61 = var_mproperty->type->type_table[cltype62] == idtype63;
}
if (!var61) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 249);
exit(1);
}
var66 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__visibility]))(var_mproperty) /* visibility on <var_mproperty:nullable MProperty(MMethod)>*/;
var67 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__protected_visibility]))(self) /* protected_visibility on <self:TypeVisitor>*/;
var68 = ((short int (*)(val*, val*))(var66->class->vft[COLOR_kernel__Object___61d_61d]))(var66, var67) /* == on <var66:MVisibility>*/;
var_ = var68;
if (var68){
var69 = !var_recv_is_self;
var65 = var69;
} else {
var65 = var_;
}
var_70 = var65;
if (var65){
var71 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__mmodule]))(self) /* mmodule on <self:TypeVisitor>*/;
var72 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_mproperty) /* intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)>*/;
var73 = ((val* (*)(val*))(var72->class->vft[COLOR_model__MClassDef__mmodule]))(var72) /* mmodule on <var72:MClassDef>*/;
var74 = ((val* (*)(val*, val*))(var71->class->vft[COLOR_model_base__MModule__visibility_for]))(var71, var73) /* visibility_for on <var71:MModule>*/;
var75 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:TypeVisitor>*/;
var76 = ((short int (*)(val*, val*))(var74->class->vft[COLOR_kernel__Comparable___60d]))(var74, var75) /* < on <var74:MVisibility>*/;
var64 = var76;
} else {
var64 = var_70;
}
if (var64){
var77 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce78) {
var79 = varonce78;
} else {
var80 = "Error: Method \'";
var81 = 15;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = "\' is protected and can only acceded by self. ";
var86 = 45;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
var88 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro_mclassdef]))(var_mproperty) /* intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)>*/;
var89 = ((val* (*)(val*))(var88->class->vft[COLOR_model__MClassDef__mmodule]))(var88) /* mmodule on <var88:MClassDef>*/;
var90 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__mmodule]))(self) /* mmodule on <self:TypeVisitor>*/;
var91 = ((val* (*)(val*, val*))(var89->class->vft[COLOR_model_base__MModule__visibility_for]))(var89, var90) /* visibility_for on <var89:MModule>*/;
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 4;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var79;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var84;
((struct instance_array__NativeArray*)var94)->values[3] = (val*) var91;
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
CHECK_NEW_array__Array(var92);
}
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
((void (*)(val*, val*, val*))(var77->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var77, var_node, var95) /* error on <var77:ModelBuilder>*/;
var96 = NULL;
var = var96;
goto RET_LABEL;
} else {
}
var97 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__mmodule]))(self) /* mmodule on <self:TypeVisitor>*/;
var98 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_definitions]))(var_mproperty, var97, var_unsafe_type) /* lookup_definitions on <var_mproperty:nullable MProperty(MMethod)>*/;
var_propdefs = var98;
var99 = ((long (*)(val*))(var_propdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_propdefs) /* length on <var_propdefs:Array[MMethodDef]>*/;
var100 = 0;
{ /* Inline kernel#Int#== (var99,var100) */
var103 = var99 == var100;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
if (var101){
var104 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce105) {
var106 = varonce105;
} else {
var107 = "Type error: no definition found for property ";
var108 = 45;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = " in ";
var113 = 4;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 4;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var106;
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var117)->values[2] = (val*) var111;
((struct instance_array__NativeArray*)var117)->values[3] = (val*) var_unsafe_type;
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
CHECK_NEW_array__Array(var115);
}
var118 = ((val* (*)(val*))(var115->class->vft[COLOR_string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
((void (*)(val*, val*, val*))(var104->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var104, var_node, var118) /* error on <var104:ModelBuilder>*/;
var119 = NULL;
var = var119;
goto RET_LABEL;
} else {
var120 = ((long (*)(val*))(var_propdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_propdefs) /* length on <var_propdefs:Array[MMethodDef]>*/;
var121 = 1;
{ /* Inline kernel#Int#== (var120,var121) */
var124 = var120 == var121;
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
if (var122){
var125 = ((val* (*)(val*))(var_propdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_propdefs) /* first on <var_propdefs:Array[MMethodDef]>*/;
var_mpropdef = var125;
} else {
var126 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce127) {
var128 = varonce127;
} else {
var129 = "Warning: confliting property definitions for property ";
var130 = 54;
var131 = string__NativeString__to_s_with_length(var129, var130);
var128 = var131;
varonce127 = var128;
}
if (varonce132) {
var133 = varonce132;
} else {
var134 = " in ";
var135 = 4;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = ": ";
var140 = 2;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
if (varonce142) {
var143 = varonce142;
} else {
var144 = " ";
var145 = 1;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = ((val* (*)(val*, val*))(var_propdefs->class->vft[COLOR_string__Collection__join]))(var_propdefs, var143) /* join on <var_propdefs:Array[MMethodDef]>*/;
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 6;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var128;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var150)->values[2] = (val*) var133;
((struct instance_array__NativeArray*)var150)->values[3] = (val*) var_unsafe_type;
((struct instance_array__NativeArray*)var150)->values[4] = (val*) var138;
((struct instance_array__NativeArray*)var150)->values[5] = (val*) var147;
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
CHECK_NEW_array__Array(var148);
}
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
((void (*)(val*, val*, val*))(var126->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var126, var_node, var151) /* warning on <var126:ModelBuilder>*/;
var152 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__intro]))(var_mproperty) /* intro on <var_mproperty:nullable MProperty(MMethod)>*/;
var_mpropdef = var152;
}
}
var153 = ((val* (*)(val*, val*, val*, short int))(self->class->vft[COLOR_typing__TypeVisitor__resolve_signature_for]))(self, var_mpropdef, var_recvtype, var_recv_is_self) /* resolve_signature_for on <self:TypeVisitor>*/;
var_msignature = var153;
var154 = 0;
var_erasure_cast = var154;
var155 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:nullable Object(MMethodDef)>*/;
if (var155 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 271);
exit(1);
} else {
var156 = ((val* (*)(val*))(var155->class->vft[COLOR_model__MSignature__return_mtype]))(var155) /* return_mtype on <var155:nullable MSignature>*/;
}
var_rettype = var156;
var158 = !var_recv_is_self;
var_159 = var158;
if (var158){
var160 = NULL;
if (var_rettype == NULL) {
var161 = 0; /* is null */
} else {
var161 = 1; /* arg is null and recv is not */
}
var157 = var161;
} else {
var157 = var_159;
}
if (var157){
/* <var_rettype:nullable MType(MType)> isa MNullableType */
cltype163 = type_model__MNullableType.color;
idtype164 = type_model__MNullableType.id;
if(cltype163 >= var_rettype->type->table_size) {
var162 = 0;
} else {
var162 = var_rettype->type->type_table[cltype163] == idtype164;
}
if (var162){
var165 = ((val* (*)(val*))(var_rettype->class->vft[COLOR_model__MNullableType__mtype]))(var_rettype) /* mtype on <var_rettype:nullable MType(MNullableType)>*/;
var_rettype = var165;
} else {
}
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype167 = type_model__MParameterType.color;
idtype168 = type_model__MParameterType.id;
if(cltype167 >= var_rettype->type->table_size) {
var166 = 0;
} else {
var166 = var_rettype->type->type_table[cltype167] == idtype168;
}
if (var166){
var169 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MSignature>*/;
var_erased_rettype = var169;
var170 = NULL;
if (var_erased_rettype == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (!var171) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 276);
exit(1);
}
var172 = 1;
var_erasure_cast = var172;
} else {
}
} else {
}
var173 = NEW_typing__CallSite(&type_typing__CallSite);
((void (*)(val*, val*, val*, short int, val*, val*, val*, short int))(var173->class->vft[COLOR_typing__CallSite__init]))(var173, var_node, var_recvtype, var_recv_is_self, var_mproperty, var_mpropdef, var_msignature, var_erasure_cast) /* init on <var173:CallSite>*/;
CHECK_NEW_typing__CallSite(var173);
var_callsite = var173;
var = var_callsite;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_method for (self: Object, ANode, MType, String, Bool): nullable CallSite */
val* VIRTUAL_typing__TypeVisitor__get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__TypeVisitor__get_method(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: TypeVisitor, ANode, Array[AExpr], String, MSignature): Bool */
short int typing__TypeVisitor__check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_args /* var args: Array[AExpr] */;
val* var_name /* var name: String */;
val* var_msignature /* var msignature: MSignature */;
long var1 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
val* var15 /* : ModelBuilder */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : ModelBuilder */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
long var42 /* : Int */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
long var48 /* : Int */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : Object */;
val* var58 /* : Object */;
val* var59 /* : String */;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
long var65 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
val* var66 /* : Range[Int] */;
long var67 /* : Int */;
long var68 /* : Int */;
val* var69 /* : Discrete */;
val* var70 /* : Discrete */;
val* var71 /* : Iterator[nullable Object] */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
long var_i /* var i: Int */;
long var74 /* : Int */;
long var_j /* var j: Int */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
short int var83 /* : Bool */;
long var84 /* : Int */;
long var86 /* : Int */;
val* var87 /* : Array[MParameter] */;
val* var88 /* : nullable Object */;
val* var89 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var90 /* : nullable Object */;
val* var91 /* : nullable MType */;
long var92 /* : Int */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
short int var98 /* : Bool */;
val* var99 /* : Array[AExpr] */;
val* var_varargs /* var varargs: Array[AExpr] */;
val* var100 /* : Array[MParameter] */;
val* var101 /* : nullable Object */;
val* var102 /* : MType */;
val* var_paramtype103 /* var paramtype: MType */;
val* var104 /* : Range[Int] */;
long var105 /* : Int */;
long var107 /* : Int */;
val* var108 /* : Discrete */;
val* var109 /* : Discrete */;
val* var110 /* : Iterator[nullable Object] */;
short int var111 /* : Bool */;
val* var112 /* : nullable Object */;
long var_j113 /* var j: Int */;
long var114 /* : Int */;
val* var115 /* : nullable Object */;
val* var116 /* : nullable Object */;
val* var117 /* : nullable MType */;
short int var119 /* : Bool */;
var_node = p0;
var_args = p1;
var_name = p2;
var_msignature = p3;
var1 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__vararg_rank]))(var_msignature) /* vararg_rank on <var_msignature:MSignature>*/;
var_vararg_rank = var1;
var2 = 0;
{ /* Inline kernel#Int#>= (var_vararg_rank,var2) */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (!var5) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var6 = var_vararg_rank >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var7 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[AExpr]>*/;
var8 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#< (var7,var8) */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (!var11) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var14 = var7 < var8;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
if (var9){
var15 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce) {
var16 = varonce;
} else {
var17 = "Error: arity mismatch; prototype is \'";
var18 = 37;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = "\'";
var23 = 1;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 4;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var_msignature;
((struct instance_array__NativeArray*)var27)->values[3] = (val*) var21;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
CHECK_NEW_array__Array(var25);
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*, val*))(var15->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var15, var_node, var28) /* error on <var15:ModelBuilder>*/;
var29 = 0;
var = var29;
goto RET_LABEL;
} else {
}
} else {
var30 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[AExpr]>*/;
var31 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#!= (var30,var31) */
var34 = var30 == var31;
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
if (var32){
var36 = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Error: Incorrect number of parameters. Got ";
var40 = 43;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[AExpr]>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = ", expected ";
var46 = 11;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = ". Signature is ";
var52 = 15;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 6;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var38;
var57 = BOX_kernel__Int(var42); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var56)->values[2] = (val*) var44;
var58 = BOX_kernel__Int(var48); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var56)->values[3] = (val*) var58;
((struct instance_array__NativeArray*)var56)->values[4] = (val*) var50;
((struct instance_array__NativeArray*)var56)->values[5] = (val*) var_msignature;
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
CHECK_NEW_array__Array(var54);
}
var59 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
((void (*)(val*, val*, val*))(var36->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var36, var_node, var59) /* error on <var36:ModelBuilder>*/;
var60 = 0;
var = var60;
goto RET_LABEL;
} else {
}
}
var61 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[AExpr]>*/;
var62 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#- (var61,var62) */
var65 = var61 - var62;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var_vararg_decl = var63;
var66 = NEW_range__Range(&type_range__Rangekernel__Int);
var67 = 0;
var68 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
var69 = BOX_kernel__Int(var67); /* autobox from Int to Discrete */
var70 = BOX_kernel__Int(var68); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var66->class->vft[COLOR_range__Range__without_last]))(var66, var69, var70) /* without_last on <var66:Range[Int]>*/;
CHECK_NEW_range__Range(var66);
var71 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_collection__Collection__iterator]))(var66) /* iterator on <var66:Range[Int]>*/;
for(;;) {
var72 = ((short int (*)(val*))(var71->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var71) /* is_ok on <var71:Iterator[nullable Object]>*/;
if(!var72) break;
var73 = ((val* (*)(val*))(var71->class->vft[COLOR_abstract_collection__Iterator__item]))(var71) /* item on <var71:Iterator[nullable Object]>*/;
var74 = ((struct instance_kernel__Int*)var73)->value; /* autounbox from nullable Object to Int */;
var_i = var74;
var_j = var_i;
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) */
var77 = var_i == var_vararg_rank;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
if (var75){
goto CONTINUE_label;
} else {
}
{ /* Inline kernel#Int#> (var_i,var_vararg_rank) */
/* Covariant cast for argument 0 (i) <var_vararg_rank:Int> isa OTHER */
/* <var_vararg_rank:Int> isa OTHER */
var80 = 1; /* easy <var_vararg_rank:Int> isa OTHER*/
if (!var80) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var83 = var_i > var_vararg_rank;
var78 = var83;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
if (var78){
{ /* Inline kernel#Int#+ (var_i,var_vararg_decl) */
var86 = var_i + var_vararg_decl;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var_j = var84;
} else {
}
var87 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var88 = ((val* (*)(val*, long))(var87->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var87, var_i) /* [] on <var87:Array[MParameter]>*/;
var89 = ((val* (*)(val*))(var88->class->vft[COLOR_model__MParameter__mtype]))(var88) /* mtype on <var88:nullable Object(MParameter)>*/;
var_paramtype = var89;
var90 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var_j) /* [] on <var_args:Array[AExpr]>*/;
var91 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(self, var90, var_paramtype) /* visit_expr_subtype on <self:TypeVisitor>*/;
var91;
CONTINUE_label: (void)0;
((void (*)(val*))(var71->class->vft[COLOR_abstract_collection__Iterator__next]))(var71) /* next on <var71:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var92 = 0;
{ /* Inline kernel#Int#>= (var_vararg_rank,var92) */
/* Covariant cast for argument 0 (i) <var92:Int> isa OTHER */
/* <var92:Int> isa OTHER */
var95 = 1; /* easy <var92:Int> isa OTHER*/
if (!var95) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var98 = var_vararg_rank >= var92;
var93 = var98;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
if (var93){
var99 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
((void (*)(val*))(var99->class->vft[COLOR_array__Array__init]))(var99) /* init on <var99:Array[AExpr]>*/;
CHECK_NEW_array__Array(var99);
var_varargs = var99;
var100 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var101 = ((val* (*)(val*, long))(var100->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var100, var_vararg_rank) /* [] on <var100:Array[MParameter]>*/;
var102 = ((val* (*)(val*))(var101->class->vft[COLOR_model__MParameter__mtype]))(var101) /* mtype on <var101:nullable Object(MParameter)>*/;
var_paramtype103 = var102;
var104 = NEW_range__Range(&type_range__Rangekernel__Int);
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_decl) */
var107 = var_vararg_rank + var_vararg_decl;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var108 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
var109 = BOX_kernel__Int(var105); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var104->class->vft[COLOR_range__Range__init]))(var104, var108, var109) /* init on <var104:Range[Int]>*/;
CHECK_NEW_range__Range(var104);
var110 = ((val* (*)(val*))(var104->class->vft[COLOR_abstract_collection__Collection__iterator]))(var104) /* iterator on <var104:Range[Int]>*/;
for(;;) {
var111 = ((short int (*)(val*))(var110->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var110) /* is_ok on <var110:Iterator[nullable Object]>*/;
if(!var111) break;
var112 = ((val* (*)(val*))(var110->class->vft[COLOR_abstract_collection__Iterator__item]))(var110) /* item on <var110:Iterator[nullable Object]>*/;
var114 = ((struct instance_kernel__Int*)var112)->value; /* autounbox from nullable Object to Int */;
var_j113 = var114;
var115 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var_j113) /* [] on <var_args:Array[AExpr]>*/;
((void (*)(val*, val*))(var_varargs->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_varargs, var115) /* add on <var_varargs:Array[AExpr]>*/;
var116 = ((val* (*)(val*, long))(var_args->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_args, var_j113) /* [] on <var_args:Array[AExpr]>*/;
var117 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(self, var116, var_paramtype103) /* visit_expr_subtype on <self:TypeVisitor>*/;
var117;
CONTINUE_label118: (void)0;
((void (*)(val*))(var110->class->vft[COLOR_abstract_collection__Iterator__next]))(var110) /* next on <var110:Iterator[nullable Object]>*/;
}
BREAK_label118: (void)0;
} else {
}
var119 = 1;
var = var119;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: Object, ANode, Array[AExpr], String, MSignature): Bool */
short int VIRTUAL_typing__TypeVisitor__check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__TypeVisitor__check_signature(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#error for (self: TypeVisitor, ANode, String) */
void typing__TypeVisitor__error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ModelBuilder */;
val* var1 /* : ToolContext */;
val* var2 /* : Location */;
var_node = p0;
var_message = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(self) /* modelbuilder on <self:TypeVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var) /* toolcontext on <var:ModelBuilder>*/;
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:ANode>*/;
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_toolcontext__ToolContext__error]))(var1, var2, var_message) /* error on <var1:ToolContext>*/;
RET_LABEL:;
}
/* method typing#TypeVisitor#error for (self: Object, ANode, String) */
void VIRTUAL_typing__TypeVisitor__error(val* self, val* p0, val* p1) {
typing__TypeVisitor__error(self, p0, p1);
RET_LABEL:;
}
/* method typing#TypeVisitor#get_variable for (self: TypeVisitor, AExpr, Variable): nullable MType */
val* typing__TypeVisitor__get_variable(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
val* var2 /* : null */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : null */;
val* var9 /* : HashMap[Variable, nullable MType] */;
short int var10 /* : Bool */;
val* var11 /* : HashMap[Variable, nullable MType] */;
val* var12 /* : nullable Object */;
val* var13 /* : nullable Array[nullable MType] */;
val* var_mtypes /* var mtypes: nullable Array[nullable MType] */;
short int var14 /* : Bool */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MType */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var29 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
val* var30 /* : null */;
short int var31 /* : Bool */;
val* var32 /* : nullable MType */;
var_node = p0;
var_variable = p1;
var1 = ((val* (*)(val*))(var_node->class->vft[COLOR_flow__AExpr__after_flow_context]))(var_node) /* after_flow_context on <var_node:AExpr>*/;
var_flow = var1;
var2 = NULL;
if (var_flow == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
if (varonce) {
var4 = varonce;
} else {
var5 = "No context!";
var6 = 11;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__error]))(self, var_node, var4) /* error on <self:TypeVisitor>*/;
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*))(var_flow->class->vft[COLOR_typing__FlowContext__vars]))(var_flow) /* vars on <var_flow:nullable FlowContext(FlowContext)>*/;
var10 = ((short int (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var9, var_variable) /* has_key on <var9:HashMap[Variable, nullable MType]>*/;
if (var10){
var11 = ((val* (*)(val*))(var_flow->class->vft[COLOR_typing__FlowContext__vars]))(var_flow) /* vars on <var_flow:nullable FlowContext(FlowContext)>*/;
var12 = ((val* (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var11, var_variable) /* [] on <var11:HashMap[Variable, nullable MType]>*/;
var = var12;
goto RET_LABEL;
} else {
var13 = ((val* (*)(val*, val*))(var_flow->class->vft[COLOR_typing__FlowContext__collect_types]))(var_flow, var_variable) /* collect_types on <var_flow:nullable FlowContext(FlowContext)>*/;
var_mtypes = var13;
var15 = NULL;
if (var_mtypes == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
var_ = var16;
if (var16){
var14 = var_;
} else {
var17 = ((long (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__length]))(var_mtypes) /* length on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])>*/;
var18 = 0;
{ /* Inline kernel#Int#== (var17,var18) */
var21 = var17 == var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var14 = var19;
}
if (var14){
var22 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var = var22;
goto RET_LABEL;
} else {
var23 = ((long (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__length]))(var_mtypes) /* length on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])>*/;
var24 = 1;
{ /* Inline kernel#Int#== (var23,var24) */
var27 = var23 == var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
var28 = ((val* (*)(val*))(var_mtypes->class->vft[COLOR_abstract_collection__Collection__first]))(var_mtypes) /* first on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])>*/;
var = var28;
goto RET_LABEL;
} else {
var29 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__merge_types]))(self, var_node, var_mtypes) /* merge_types on <self:TypeVisitor>*/;
var_res = var29;
var30 = NULL;
if (var_res == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (var31){
var32 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
var_res = var32;
} else {
}
var = var_res;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_variable for (self: Object, AExpr, Variable): nullable MType */
val* VIRTUAL_typing__TypeVisitor__get_variable(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__get_variable(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#set_variable for (self: TypeVisitor, AExpr, Variable, nullable MType) */
void typing__TypeVisitor__set_variable(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
val* var1 /* : null */;
short int var2 /* : Bool */;
var_node = p0;
var_variable = p1;
var_mtype = p2;
var = ((val* (*)(val*))(var_node->class->vft[COLOR_flow__AExpr__after_flow_context]))(var_node) /* after_flow_context on <var_node:AExpr>*/;
var_flow = var;
var1 = NULL;
if (var_flow == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 360);
exit(1);
}
((void (*)(val*, val*, val*))(var_flow->class->vft[COLOR_typing__FlowContext__set_var]))(var_flow, var_variable, var_mtype) /* set_var on <var_flow:nullable FlowContext(FlowContext)>*/;
RET_LABEL:;
}
/* method typing#TypeVisitor#set_variable for (self: Object, AExpr, Variable, nullable MType) */
void VIRTUAL_typing__TypeVisitor__set_variable(val* self, val* p0, val* p1, val* p2) {
typing__TypeVisitor__set_variable(self, p0, p1, p2);
RET_LABEL:;
}
/* method typing#TypeVisitor#merge_types for (self: TypeVisitor, ANode, Array[nullable MType]): nullable MType */
val* typing__TypeVisitor__merge_types(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_col /* var col: Array[nullable MType] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var7 /* : Array[nullable MType] */;
val* var_res /* var res: Array[nullable MType] */;
val* var8 /* : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_t1 /* var t1: nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_found /* var found: Bool */;
val* var14 /* : Iterator[nullable Object] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_t2 /* var t2: nullable MType */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : MType */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : null */;
var_node = p0;
var_col = p1;
var1 = ((long (*)(val*))(var_col->class->vft[COLOR_abstract_collection__Collection__length]))(var_col) /* length on <var_col:Array[nullable MType]>*/;
var2 = 1;
{ /* Inline kernel#Int#== (var1,var2) */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
if (var3){
var6 = ((val* (*)(val*))(var_col->class->vft[COLOR_abstract_collection__Collection__first]))(var_col) /* first on <var_col:Array[nullable MType]>*/;
var = var6;
goto RET_LABEL;
} else {
}
var7 = NEW_array__Array(&type_array__Arraynullable_model__MType);
((void (*)(val*))(var7->class->vft[COLOR_array__Array__init]))(var7) /* init on <var7:Array[nullable MType]>*/;
CHECK_NEW_array__Array(var7);
var_res = var7;
var8 = ((val* (*)(val*))(var_col->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_col) /* iterator on <var_col:Array[nullable MType]>*/;
for(;;) {
var9 = ((short int (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var8) /* is_ok on <var8:Iterator[nullable Object]>*/;
if(!var9) break;
var10 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__item]))(var8) /* item on <var8:Iterator[nullable Object]>*/;
var_t1 = var10;
var11 = NULL;
if (var_t1 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (var12){
goto CONTINUE_label;
} else {
}
var13 = 1;
var_found = var13;
var14 = ((val* (*)(val*))(var_col->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_col) /* iterator on <var_col:Array[nullable MType]>*/;
for(;;) {
var15 = ((short int (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var14) /* is_ok on <var14:Iterator[nullable Object]>*/;
if(!var15) break;
var16 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__item]))(var14) /* item on <var14:Iterator[nullable Object]>*/;
var_t2 = var16;
var17 = NULL;
if (var_t2 == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (var18){
goto CONTINUE_label19;
} else {
}
/* <var_t2:nullable MType(MType)> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var21 = 0;
} else {
var21 = var_t2->type->type_table[cltype] == idtype;
}
var_ = var21;
if (var21){
var20 = var_;
} else {
/* <var_t2:nullable MType(MType)> isa MNullType */
cltype23 = type_model__MNullType.color;
idtype24 = type_model__MNullType.id;
if(cltype23 >= var_t2->type->table_size) {
var22 = 0;
} else {
var22 = var_t2->type->type_table[cltype23] == idtype24;
}
var20 = var22;
}
if (var20){
var25 = ((val* (*)(val*))(var_t1->class->vft[COLOR_model__MType__as_nullable]))(var_t1) /* as_nullable on <var_t1:nullable MType(MType)>*/;
var_t1 = var25;
} else {
}
var26 = ((short int (*)(val*, val*, val*))(self->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(self, var_t2, var_t1) /* is_subtype on <self:TypeVisitor>*/;
var27 = !var26;
if (var27){
var28 = 0;
var_found = var28;
} else {
}
CONTINUE_label19: (void)0;
((void (*)(val*))(var14->class->vft[COLOR_abstract_collection__Iterator__next]))(var14) /* next on <var14:Iterator[nullable Object]>*/;
}
BREAK_label19: (void)0;
if (var_found){
var = var_t1;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var8->class->vft[COLOR_abstract_collection__Iterator__next]))(var8) /* next on <var8:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var29 = NULL;
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#merge_types for (self: Object, ANode, Array[nullable MType]): nullable MType */
val* VIRTUAL_typing__TypeVisitor__merge_types(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__merge_types(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node for (self: CallSite): ANode */
val* typing__CallSite__node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_typing__CallSite___64dnode].val; /* @node on <self:CallSite> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @node", "src/typing.nit", 391);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node for (self: Object): ANode */
val* VIRTUAL_typing__CallSite__node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = typing__CallSite__node(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node= for (self: CallSite, ANode) */
void typing__CallSite__node_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___64dnode].val = p0; /* @node on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#node= for (self: Object, ANode) */
void VIRTUAL_typing__CallSite__node_61d(val* self, val* p0) {
typing__CallSite__node_61d(self, p0);
RET_LABEL:;
}
/* method typing#CallSite#recv for (self: CallSite): MType */
val* typing__CallSite__recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_typing__CallSite___64drecv].val; /* @recv on <self:CallSite> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @recv", "src/typing.nit", 394);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv for (self: Object): MType */
val* VIRTUAL_typing__CallSite__recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = typing__CallSite__recv(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv= for (self: CallSite, MType) */
void typing__CallSite__recv_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___64drecv].val = p0; /* @recv on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv= for (self: Object, MType) */
void VIRTUAL_typing__CallSite__recv_61d(val* self, val* p0) {
typing__CallSite__recv_61d(self, p0);
RET_LABEL:;
}
/* method typing#CallSite#recv_is_self for (self: CallSite): Bool */
short int typing__CallSite__recv_is_self(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_typing__CallSite___64drecv_is_self].s; /* @recv_is_self on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv_is_self for (self: Object): Bool */
short int VIRTUAL_typing__CallSite__recv_is_self(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__CallSite__recv_is_self(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv_is_self= for (self: CallSite, Bool) */
void typing__CallSite__recv_is_self_61d(val* self, short int p0) {
self->attrs[COLOR_typing__CallSite___64drecv_is_self].s = p0; /* @recv_is_self on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv_is_self= for (self: Object, Bool) */
void VIRTUAL_typing__CallSite__recv_is_self_61d(val* self, short int p0) {
typing__CallSite__recv_is_self_61d(self, p0);
RET_LABEL:;
}
/* method typing#CallSite#mproperty for (self: CallSite): MMethod */
val* typing__CallSite__mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = self->attrs[COLOR_typing__CallSite___64dmproperty].val; /* @mproperty on <self:CallSite> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mproperty", "src/typing.nit", 402);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty for (self: Object): MMethod */
val* VIRTUAL_typing__CallSite__mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = typing__CallSite__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty= for (self: CallSite, MMethod) */
void typing__CallSite__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___64dmproperty].val = p0; /* @mproperty on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mproperty= for (self: Object, MMethod) */
void VIRTUAL_typing__CallSite__mproperty_61d(val* self, val* p0) {
typing__CallSite__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method typing#CallSite#mpropdef for (self: CallSite): MMethodDef */
val* typing__CallSite__mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_typing__CallSite___64dmpropdef].val; /* @mpropdef on <self:CallSite> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @mpropdef", "src/typing.nit", 405);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef for (self: Object): MMethodDef */
val* VIRTUAL_typing__CallSite__mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = typing__CallSite__mpropdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef= for (self: CallSite, MMethodDef) */
void typing__CallSite__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___64dmpropdef].val = p0; /* @mpropdef on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mpropdef= for (self: Object, MMethodDef) */
void VIRTUAL_typing__CallSite__mpropdef_61d(val* self, val* p0) {
typing__CallSite__mpropdef_61d(self, p0);
RET_LABEL:;
}
/* method typing#CallSite#msignature for (self: CallSite): MSignature */
val* typing__CallSite__msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_typing__CallSite___64dmsignature].val; /* @msignature on <self:CallSite> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @msignature", "src/typing.nit", 409);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature for (self: Object): MSignature */
val* VIRTUAL_typing__CallSite__msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = typing__CallSite__msignature(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature= for (self: CallSite, MSignature) */
void typing__CallSite__msignature_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___64dmsignature].val = p0; /* @msignature on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#msignature= for (self: Object, MSignature) */
void VIRTUAL_typing__CallSite__msignature_61d(val* self, val* p0) {
typing__CallSite__msignature_61d(self, p0);
RET_LABEL:;
}
/* method typing#CallSite#erasure_cast for (self: CallSite): Bool */
short int typing__CallSite__erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_typing__CallSite___64derasure_cast].s; /* @erasure_cast on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#erasure_cast for (self: Object): Bool */
short int VIRTUAL_typing__CallSite__erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__CallSite__erasure_cast(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#erasure_cast= for (self: CallSite, Bool) */
void typing__CallSite__erasure_cast_61d(val* self, short int p0) {
self->attrs[COLOR_typing__CallSite___64derasure_cast].s = p0; /* @erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#erasure_cast= for (self: Object, Bool) */
void VIRTUAL_typing__CallSite__erasure_cast_61d(val* self, short int p0) {
typing__CallSite__erasure_cast_61d(self, p0);
RET_LABEL:;
}
/* method typing#CallSite#check_signature for (self: CallSite, TypeVisitor, Array[AExpr]): Bool */
short int typing__CallSite__check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_v /* var v: TypeVisitor */;
val* var_args /* var args: Array[AExpr] */;
val* var1 /* : ANode */;
val* var2 /* : MMethod */;
val* var3 /* : String */;
val* var4 /* : MSignature */;
short int var5 /* : Bool */;
var_v = p0;
var_args = p1;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__CallSite__node]))(self) /* node on <self:CallSite>*/;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__CallSite__mproperty]))(self) /* mproperty on <self:CallSite>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_model__MProperty__name]))(var2) /* name on <var2:MMethod>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_typing__CallSite__msignature]))(self) /* msignature on <self:CallSite>*/;
var5 = ((short int (*)(val*, val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__check_signature]))(var_v, var1, var_args, var3, var4) /* check_signature on <var_v:TypeVisitor>*/;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#CallSite#check_signature for (self: Object, TypeVisitor, Array[AExpr]): Bool */
short int VIRTUAL_typing__CallSite__check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__CallSite__check_signature(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#init for (self: CallSite, ANode, MType, Bool, MMethod, MMethodDef, MSignature, Bool) */
void typing__CallSite__init(val* self, val* p0, val* p1, short int p2, val* p3, val* p4, val* p5, short int p6) {
self->attrs[COLOR_typing__CallSite___64dnode].val = p0; /* @node on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___64drecv].val = p1; /* @recv on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___64drecv_is_self].s = p2; /* @recv_is_self on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___64dmproperty].val = p3; /* @mproperty on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___64dmpropdef].val = p4; /* @mpropdef on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___64dmsignature].val = p5; /* @msignature on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___64derasure_cast].s = p6; /* @erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#init for (self: Object, ANode, MType, Bool, MMethod, MMethodDef, MSignature, Bool) */
void VIRTUAL_typing__CallSite__init(val* self, val* p0, val* p1, short int p2, val* p3, val* p4, val* p5, short int p6) {
typing__CallSite__init(self, p0, p1, p2, p3, p4, p5, p6);
RET_LABEL:;
}
/* method typing#Variable#declared_type for (self: Variable): nullable MType */
val* typing__Variable__declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__Variable___64ddeclared_type].val; /* @declared_type on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#declared_type for (self: Object): nullable MType */
val* VIRTUAL_typing__Variable__declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__Variable__declared_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#declared_type= for (self: Variable, nullable MType) */
void typing__Variable__declared_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__Variable___64ddeclared_type].val = p0; /* @declared_type on <self:Variable> */
RET_LABEL:;
}
/* method typing#Variable#declared_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__Variable__declared_type_61d(val* self, val* p0) {
typing__Variable__declared_type_61d(self, p0);
RET_LABEL:;
}
/* method typing#FlowContext#vars for (self: FlowContext): HashMap[Variable, nullable MType] */
val* typing__FlowContext__vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = self->attrs[COLOR_typing__FlowContext___64dvars].val; /* @vars on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @vars", "src/typing.nit", 427);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#vars for (self: Object): HashMap[Variable, nullable MType] */
val* VIRTUAL_typing__FlowContext__vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = typing__FlowContext__vars(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#vars= for (self: FlowContext, HashMap[Variable, nullable MType]) */
void typing__FlowContext__vars_61d(val* self, val* p0) {
self->attrs[COLOR_typing__FlowContext___64dvars].val = p0; /* @vars on <self:FlowContext> */
RET_LABEL:;
}
/* method typing#FlowContext#vars= for (self: Object, HashMap[Variable, nullable MType]) */
void VIRTUAL_typing__FlowContext__vars_61d(val* self, val* p0) {
typing__FlowContext__vars_61d(self, p0);
RET_LABEL:;
}
/* method typing#FlowContext#cache for (self: FlowContext): HashMap[Variable, nullable Array[nullable MType]] */
val* typing__FlowContext__cache(val* self) {
val* var /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
var1 = self->attrs[COLOR_typing__FlowContext___64dcache].val; /* @cache on <self:FlowContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @cache", "src/typing.nit", 429);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#cache for (self: Object): HashMap[Variable, nullable Array[nullable MType]] */
val* VIRTUAL_typing__FlowContext__cache(val* self) {
val* var /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
var1 = typing__FlowContext__cache(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#cache= for (self: FlowContext, HashMap[Variable, nullable Array[nullable MType]]) */
void typing__FlowContext__cache_61d(val* self, val* p0) {
self->attrs[COLOR_typing__FlowContext___64dcache].val = p0; /* @cache on <self:FlowContext> */
RET_LABEL:;
}
/* method typing#FlowContext#cache= for (self: Object, HashMap[Variable, nullable Array[nullable MType]]) */
void VIRTUAL_typing__FlowContext__cache_61d(val* self, val* p0) {
typing__FlowContext__cache_61d(self, p0);
RET_LABEL:;
}
/* method typing#FlowContext#set_var for (self: FlowContext, Variable, nullable MType) */
void typing__FlowContext__set_var(val* self, val* p0, val* p1) {
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var2 /* : Collection[Object] */;
var_variable = p0;
var_mtype = p1;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__FlowContext__vars]))(self) /* vars on <self:FlowContext>*/;
((void (*)(val*, val*, val*))(var->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var, var_variable, var_mtype) /* []= on <var:HashMap[Variable, nullable MType]>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__FlowContext__cache]))(self) /* cache on <self:FlowContext>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__MapRead__keys]))(var1) /* keys on <var1:HashMap[Variable, nullable Array[nullable MType]]>*/;
((void (*)(val*, val*))(var2->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var2, var_variable) /* remove on <var2:Collection[Object](HashMapKeys[Variable, nullable Array[nullable MType]])>*/;
RET_LABEL:;
}
/* method typing#FlowContext#set_var for (self: Object, Variable, nullable MType) */
void VIRTUAL_typing__FlowContext__set_var(val* self, val* p0, val* p1) {
typing__FlowContext__set_var(self, p0, p1);
RET_LABEL:;
}
/* method typing#FlowContext#collect_types for (self: FlowContext, Variable): nullable Array[nullable MType] */
val* typing__FlowContext__collect_types(val* self, val* p0) {
val* var /* : nullable Array[nullable MType] */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var4 /* : nullable Object */;
val* var5 /* : null */;
val* var_res /* var res: nullable Array[nullable MType] */;
val* var6 /* : HashMap[Variable, nullable MType] */;
short int var7 /* : Bool */;
val* var8 /* : HashMap[Variable, nullable MType] */;
val* var9 /* : nullable Object */;
val* var_mtype /* var mtype: nullable MType */;
val* var10 /* : Array[nullable MType] */;
long var11 /* : Int */;
val* var_ /* var : Array[nullable MType] */;
val* var12 /* : Array[FlowContext] */;
short int var13 /* : Bool */;
val* var14 /* : Array[nullable MType] */;
long var15 /* : Int */;
val* var_16 /* var : Array[nullable MType] */;
val* var17 /* : nullable MType */;
val* var18 /* : Array[FlowContext] */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_flow /* var flow: FlowContext */;
short int var22 /* : Bool */;
val* var23 /* : nullable Array[nullable MType] */;
val* var_r2 /* var r2: nullable Array[nullable MType] */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
val* var28 /* : Array[nullable Object] */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : HashMap[Variable, nullable Array[nullable MType]] */;
var_variable = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__FlowContext__cache]))(self) /* cache on <self:FlowContext>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_variable) /* has_key on <var1:HashMap[Variable, nullable Array[nullable MType]]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_typing__FlowContext__cache]))(self) /* cache on <self:FlowContext>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_variable) /* [] on <var3:HashMap[Variable, nullable Array[nullable MType]]>*/;
var = var4;
goto RET_LABEL;
} else {
}
var5 = NULL;
var_res = var5;
var6 = ((val* (*)(val*))(self->class->vft[COLOR_typing__FlowContext__vars]))(self) /* vars on <self:FlowContext>*/;
var7 = ((short int (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var6, var_variable) /* has_key on <var6:HashMap[Variable, nullable MType]>*/;
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_typing__FlowContext__vars]))(self) /* vars on <self:FlowContext>*/;
var9 = ((val* (*)(val*, val*))(var8->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var8, var_variable) /* [] on <var8:HashMap[Variable, nullable MType]>*/;
var_mtype = var9;
var10 = NEW_array__Array(&type_array__Arraynullable_model__MType);
var11 = 1;
((void (*)(val*, long))(var10->class->vft[COLOR_array__Array__with_capacity]))(var10, var11) /* with_capacity on <var10:Array[nullable MType]>*/;
CHECK_NEW_array__Array(var10);
var_ = var10;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var_mtype) /* push on <var_:Array[nullable MType]>*/;
var_res = var_;
} else {
var12 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
var13 = ((short int (*)(val*))(var12->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var12) /* is_empty on <var12:Array[FlowContext]>*/;
if (var13){
var14 = NEW_array__Array(&type_array__Arraynullable_model__MType);
var15 = 1;
((void (*)(val*, long))(var14->class->vft[COLOR_array__Array__with_capacity]))(var14, var15) /* with_capacity on <var14:Array[nullable MType]>*/;
CHECK_NEW_array__Array(var14);
var_16 = var14;
var17 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:Variable>*/;
((void (*)(val*, val*))(var_16->class->vft[COLOR_abstract_collection__Sequence__push]))(var_16, var17) /* push on <var_16:Array[nullable MType]>*/;
var_res = var_16;
} else {
var18 = ((val* (*)(val*))(self->class->vft[COLOR_flow__FlowContext__previous]))(self) /* previous on <self:FlowContext>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:Array[FlowContext]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
if(!var20) break;
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
var_flow = var21;
var22 = ((short int (*)(val*))(var_flow->class->vft[COLOR_flow__FlowContext__is_unreachable]))(var_flow) /* is_unreachable on <var_flow:FlowContext>*/;
if (var22){
goto CONTINUE_label;
} else {
}
var23 = ((val* (*)(val*, val*))(var_flow->class->vft[COLOR_typing__FlowContext__collect_types]))(var_flow, var_variable) /* collect_types on <var_flow:FlowContext>*/;
var_r2 = var23;
var24 = NULL;
if (var_r2 == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (var25){
goto CONTINUE_label;
} else {
}
var26 = NULL;
if (var_res == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (var27){
var28 = ((val* (*)(val*))(var_r2->class->vft[COLOR_array__Collection__to_a]))(var_r2) /* to_a on <var_r2:nullable Array[nullable MType](Array[nullable MType])>*/;
var_res = var28;
} else {
var29 = ((val* (*)(val*))(var_r2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_r2) /* iterator on <var_r2:nullable Array[nullable MType](Array[nullable MType])>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var_t = var31;
var32 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__Collection__has]))(var_res, var_t) /* has on <var_res:nullable Array[nullable MType](Array[nullable MType])>*/;
var33 = !var32;
if (var33){
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var_t) /* add on <var_res:nullable Array[nullable MType](Array[nullable MType])>*/;
} else {
}
CONTINUE_label34: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label34: (void)0;
}
CONTINUE_label: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
}
}
var35 = ((val* (*)(val*))(self->class->vft[COLOR_typing__FlowContext__cache]))(self) /* cache on <self:FlowContext>*/;
((void (*)(val*, val*, val*))(var35->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var35, var_variable, var_res) /* []= on <var35:HashMap[Variable, nullable Array[nullable MType]]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#collect_types for (self: Object, Variable): nullable Array[nullable MType] */
val* VIRTUAL_typing__FlowContext__collect_types(val* self, val* p0) {
val* var /* : nullable Array[nullable MType] */;
val* var1 /* : nullable Array[nullable MType] */;
var1 = typing__FlowContext__collect_types(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APropdef#do_typing for (self: APropdef, ModelBuilder) */
void typing__APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method typing#APropdef#do_typing for (self: Object, ModelBuilder) */
void VIRTUAL_typing__APropdef__do_typing(val* self, val* p0) {
typing__APropdef__do_typing(self, p0);
RET_LABEL:;
}
/* method typing#APropdef#selfvariable for (self: APropdef): nullable Variable */
val* typing__APropdef__selfvariable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_typing__APropdef___64dselfvariable].val; /* @selfvariable on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APropdef#selfvariable for (self: Object): nullable Variable */
val* VIRTUAL_typing__APropdef__selfvariable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = typing__APropdef__selfvariable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APropdef#selfvariable= for (self: APropdef, nullable Variable) */
void typing__APropdef__selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_typing__APropdef___64dselfvariable].val = p0; /* @selfvariable on <self:APropdef> */
RET_LABEL:;
}
/* method typing#APropdef#selfvariable= for (self: Object, nullable Variable) */
void VIRTUAL_typing__APropdef__selfvariable_61d(val* self, val* p0) {
typing__APropdef__selfvariable_61d(self, p0);
RET_LABEL:;
}
/* method typing#AConcreteMethPropdef#do_typing for (self: AConcreteMethPropdef, ModelBuilder) */
void typing__AConcreteMethPropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var3 /* : TypeVisitor */;
val* var_v /* var v: TypeVisitor */;
val* var4 /* : Variable */;
val* var5 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var9 /* : Range[Int] */;
long var10 /* : Int */;
val* var11 /* : nullable MSignature */;
long var12 /* : Int */;
val* var13 /* : Discrete */;
val* var14 /* : Discrete */;
val* var15 /* : Iterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
long var_i /* var i: Int */;
long var18 /* : Int */;
val* var19 /* : nullable MSignature */;
val* var20 /* : Array[MParameter] */;
val* var21 /* : nullable Object */;
val* var22 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var23 /* : nullable MSignature */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable ASignature */;
val* var29 /* : ANodes[AParam] */;
val* var30 /* : nullable Object */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
val* var35 /* : nullable MClass */;
val* var_arrayclass /* var arrayclass: nullable MClass */;
val* var36 /* : null */;
short int var37 /* : Bool */;
val* var38 /* : Array[MType] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[MType] */;
val* var41 /* : MClassType */;
val* var42 /* : nullable ASignature */;
val* var43 /* : ANodes[AParam] */;
val* var44 /* : nullable Object */;
val* var45 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var46 /* : null */;
short int var47 /* : Bool */;
val* var48 /* : Range[Int] */;
long var49 /* : Int */;
val* var50 /* : nullable MSignature */;
val* var51 /* : Array[MParameter] */;
long var52 /* : Int */;
val* var53 /* : Discrete */;
val* var54 /* : Discrete */;
val* var55 /* : Iterator[nullable Object] */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
long var_i58 /* var i: Int */;
long var59 /* : Int */;
val* var60 /* : nullable MSignature */;
val* var61 /* : Array[MParameter] */;
val* var62 /* : nullable Object */;
val* var_mclosure /* var mclosure: MParameter */;
val* var63 /* : nullable ASignature */;
val* var64 /* : ANodes[AClosureDecl] */;
val* var65 /* : nullable Object */;
val* var66 /* : nullable ClosureVariable */;
val* var_variable67 /* var variable: nullable ClosureVariable */;
val* var68 /* : null */;
short int var69 /* : Bool */;
val* var70 /* : MType */;
short int var72 /* : Bool */;
val* var73 /* : nullable FlowContext */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var_ /* var : Bool */;
val* var76 /* : nullable MSignature */;
val* var77 /* : nullable MType */;
val* var78 /* : null */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
var_modelbuilder = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:AConcreteMethPropdef>*/;
/* <var:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 484);
exit(1);
}
var_nclassdef = var;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 485);
exit(1);
}
var_mpropdef = var2;
var3 = NEW_typing__TypeVisitor(&type_typing__TypeVisitor);
((void (*)(val*, val*, val*, val*))(var3->class->vft[COLOR_typing__TypeVisitor__init]))(var3, var_modelbuilder, var_nclassdef, var_mpropdef) /* init on <var3:TypeVisitor>*/;
CHECK_NEW_typing__TypeVisitor(var3);
var_v = var3;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__selfvariable]))(var_v) /* selfvariable on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__APropdef__selfvariable_61d]))(self, var4) /* selfvariable= on <self:AConcreteMethPropdef>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(self) /* n_block on <self:AConcreteMethPropdef>*/;
var_nblock = var5;
var6 = NULL;
if (var_nblock == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AConcreteMethPropdef>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 492);
exit(1);
}
var_mmethoddef = var8;
var9 = NEW_range__Range(&type_range__Rangekernel__Int);
var10 = 0;
var11 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 493);
exit(1);
} else {
var12 = ((long (*)(val*))(var11->class->vft[COLOR_model__MSignature__arity]))(var11) /* arity on <var11:nullable MSignature>*/;
}
var13 = BOX_kernel__Int(var10); /* autobox from Int to Discrete */
var14 = BOX_kernel__Int(var12); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var9->class->vft[COLOR_range__Range__without_last]))(var9, var13, var14) /* without_last on <var9:Range[Int]>*/;
CHECK_NEW_range__Range(var9);
var15 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Range[Int]>*/;
for(;;) {
var16 = ((short int (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var15) /* is_ok on <var15:Iterator[nullable Object]>*/;
if(!var16) break;
var17 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__item]))(var15) /* item on <var15:Iterator[nullable Object]>*/;
var18 = ((struct instance_kernel__Int*)var17)->value; /* autounbox from nullable Object to Int */;
var_i = var18;
var19 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var19 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 494);
exit(1);
} else {
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_model__MSignature__mparameters]))(var19) /* mparameters on <var19:nullable MSignature>*/;
}
var21 = ((val* (*)(val*, long))(var20->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var20, var_i) /* [] on <var20:Array[MParameter]>*/;
var22 = ((val* (*)(val*))(var21->class->vft[COLOR_model__MParameter__mtype]))(var21) /* mtype on <var21:nullable Object(MParameter)>*/;
var_mtype = var22;
var23 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 495);
exit(1);
} else {
var24 = ((long (*)(val*))(var23->class->vft[COLOR_model__MSignature__vararg_rank]))(var23) /* vararg_rank on <var23:nullable MSignature>*/;
}
{ /* Inline kernel#Int#== (var24,var_i) */
var27 = var24 == var_i;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
var28 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AConcreteMethPropdef>*/;
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 496);
exit(1);
} else {
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var28) /* n_params on <var28:nullable ASignature>*/;
}
var30 = ((val* (*)(val*, long))(var29->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var29, var_i) /* [] on <var29:ANodes[AParam]>*/;
if (varonce) {
var31 = varonce;
} else {
var32 = "Array";
var33 = 5;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
var35 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, var30, var31) /* get_mclass on <var_v:TypeVisitor>*/;
var_arrayclass = var35;
var36 = NULL;
if (var_arrayclass == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (var37){
goto RET_LABEL;
} else {
}
var38 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var38 = array_instance Array[MType] */
var39 = 1;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var_mtype;
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[MType]>*/;
CHECK_NEW_array__Array(var38);
}
var41 = ((val* (*)(val*, val*))(var_arrayclass->class->vft[COLOR_model__MClass__get_mtype]))(var_arrayclass, var38) /* get_mtype on <var_arrayclass:nullable MClass(MClass)>*/;
var_mtype = var41;
} else {
}
var42 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AConcreteMethPropdef>*/;
if (var42 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 500);
exit(1);
} else {
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_parser_nodes__ASignature__n_params]))(var42) /* n_params on <var42:nullable ASignature>*/;
}
var44 = ((val* (*)(val*, long))(var43->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var43, var_i) /* [] on <var43:ANodes[AParam]>*/;
var45 = ((val* (*)(val*))(var44->class->vft[COLOR_scope__AParam__variable]))(var44) /* variable on <var44:nullable Object(AParam)>*/;
var_variable = var45;
var46 = NULL;
if (var_variable == NULL) {
var47 = 0; /* is null */
} else {
var47 = 1; /* arg is null and recv is not */
}
if (!var47) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 501);
exit(1);
}
((void (*)(val*, val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type_61d]))(var_variable, var_mtype) /* declared_type= on <var_variable:nullable Variable(Variable)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var15->class->vft[COLOR_abstract_collection__Iterator__next]))(var15) /* next on <var15:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var48 = NEW_range__Range(&type_range__Rangekernel__Int);
var49 = 0;
var50 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var50 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 504);
exit(1);
} else {
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_model__MSignature__mclosures]))(var50) /* mclosures on <var50:nullable MSignature>*/;
}
var52 = ((long (*)(val*))(var51->class->vft[COLOR_abstract_collection__Collection__length]))(var51) /* length on <var51:Array[MParameter]>*/;
var53 = BOX_kernel__Int(var49); /* autobox from Int to Discrete */
var54 = BOX_kernel__Int(var52); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var48->class->vft[COLOR_range__Range__without_last]))(var48, var53, var54) /* without_last on <var48:Range[Int]>*/;
CHECK_NEW_range__Range(var48);
var55 = ((val* (*)(val*))(var48->class->vft[COLOR_abstract_collection__Collection__iterator]))(var48) /* iterator on <var48:Range[Int]>*/;
for(;;) {
var56 = ((short int (*)(val*))(var55->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var55) /* is_ok on <var55:Iterator[nullable Object]>*/;
if(!var56) break;
var57 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_collection__Iterator__item]))(var55) /* item on <var55:Iterator[nullable Object]>*/;
var59 = ((struct instance_kernel__Int*)var57)->value; /* autounbox from nullable Object to Int */;
var_i58 = var59;
var60 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var60 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 505);
exit(1);
} else {
var61 = ((val* (*)(val*))(var60->class->vft[COLOR_model__MSignature__mclosures]))(var60) /* mclosures on <var60:nullable MSignature>*/;
}
var62 = ((val* (*)(val*, long))(var61->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var61, var_i58) /* [] on <var61:Array[MParameter]>*/;
var_mclosure = var62;
var63 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AMethPropdef__n_signature]))(self) /* n_signature on <self:AConcreteMethPropdef>*/;
if (var63 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 506);
exit(1);
} else {
var64 = ((val* (*)(val*))(var63->class->vft[COLOR_parser_nodes__ASignature__n_closure_decls]))(var63) /* n_closure_decls on <var63:nullable ASignature>*/;
}
var65 = ((val* (*)(val*, long))(var64->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var64, var_i58) /* [] on <var64:ANodes[AClosureDecl]>*/;
var66 = ((val* (*)(val*))(var65->class->vft[COLOR_scope__AClosureDecl__variable]))(var65) /* variable on <var65:nullable Object(AClosureDecl)>*/;
var_variable67 = var66;
var68 = NULL;
if (var_variable67 == NULL) {
var69 = 0; /* is null */
} else {
var69 = 1; /* arg is null and recv is not */
}
if (!var69) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 507);
exit(1);
}
var70 = ((val* (*)(val*))(var_mclosure->class->vft[COLOR_model__MParameter__mtype]))(var_mclosure) /* mtype on <var_mclosure:MParameter>*/;
((void (*)(val*, val*))(var_variable67->class->vft[COLOR_typing__Variable__declared_type_61d]))(var_variable67, var70) /* declared_type= on <var_variable67:nullable ClosureVariable(ClosureVariable)>*/;
CONTINUE_label71: (void)0;
((void (*)(val*))(var55->class->vft[COLOR_abstract_collection__Iterator__next]))(var55) /* next on <var55:Iterator[nullable Object]>*/;
}
BREAK_label71: (void)0;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var_nblock) /* visit_stmt on <var_v:TypeVisitor>*/;
var73 = ((val* (*)(val*))(var_nblock->class->vft[COLOR_flow__AExpr__after_flow_context]))(var_nblock) /* after_flow_context on <var_nblock:nullable AExpr(AExpr)>*/;
if (var73 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 512);
exit(1);
} else {
var74 = ((short int (*)(val*))(var73->class->vft[COLOR_flow__FlowContext__is_unreachable]))(var73) /* is_unreachable on <var73:nullable FlowContext>*/;
}
var75 = !var74;
var_ = var75;
if (var75){
var76 = ((val* (*)(val*))(var_mmethoddef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mmethoddef) /* msignature on <var_mmethoddef:MMethodDef>*/;
if (var76 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 512);
exit(1);
} else {
var77 = ((val* (*)(val*))(var76->class->vft[COLOR_model__MSignature__return_mtype]))(var76) /* return_mtype on <var76:nullable MSignature>*/;
}
var78 = NULL;
if (var77 == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
var72 = var79;
} else {
var72 = var_;
}
if (var72){
if (varonce80) {
var81 = varonce80;
} else {
var82 = "Control error: Reached end of function (a \'return\' with a value was expected).";
var83 = 78;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var81) /* error on <var_v:TypeVisitor>*/;
} else {
}
RET_LABEL:;
}
/* method typing#AConcreteMethPropdef#do_typing for (self: Object, ModelBuilder) */
void VIRTUAL_typing__AConcreteMethPropdef__do_typing(val* self, val* p0) {
typing__AConcreteMethPropdef__do_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: AAttrPropdef, ModelBuilder) */
void typing__AAttrPropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ANode */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var2 /* : TypeVisitor */;
val* var3 /* : nullable MPropDef */;
val* var_v /* var v: TypeVisitor */;
val* var4 /* : Variable */;
val* var5 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : nullable MPropDef */;
val* var9 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var10 /* : nullable MType */;
var_modelbuilder = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__parent]))(self) /* parent on <self:AAttrPropdef>*/;
/* <var:nullable ANode> isa AClassdef */
cltype = type_parser_nodes__AClassdef.color;
idtype = type_parser_nodes__AClassdef.id;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 522);
exit(1);
}
var_nclassdef = var;
var2 = NEW_typing__TypeVisitor(&type_typing__TypeVisitor);
var3 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 523);
exit(1);
}
((void (*)(val*, val*, val*, val*))(var2->class->vft[COLOR_typing__TypeVisitor__init]))(var2, var_modelbuilder, var_nclassdef, var3) /* init on <var2:TypeVisitor>*/;
CHECK_NEW_typing__TypeVisitor(var2);
var_v = var2;
var4 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__selfvariable]))(var_v) /* selfvariable on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__APropdef__selfvariable_61d]))(self, var4) /* selfvariable= on <self:AAttrPropdef>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_expr]))(self) /* n_expr on <self:AAttrPropdef>*/;
var_nexpr = var5;
var6 = NULL;
if (var_nexpr == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_property__APropdef__mpropdef]))(self) /* mpropdef on <self:AAttrPropdef>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 528);
exit(1);
} else {
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var8) /* static_mtype on <var8:nullable MPropDef(nullable MAttributeDef)>*/;
}
var_mtype = var9;
var10 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var_nexpr, var_mtype) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var10;
} else {
}
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: Object, ModelBuilder) */
void VIRTUAL_typing__AAttrPropdef__do_typing(val* self, val* p0) {
typing__AAttrPropdef__do_typing(self, p0);
RET_LABEL:;
}
/* method typing#AExpr#mtype for (self: AExpr): nullable MType */
val* typing__AExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AExpr___64dmtype].val; /* @mtype on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#mtype for (self: Object): nullable MType */
val* VIRTUAL_typing__AExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AExpr__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#mtype= for (self: AExpr, nullable MType) */
void typing__AExpr__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AExpr___64dmtype].val = p0; /* @mtype on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#mtype= for (self: Object, nullable MType) */
void VIRTUAL_typing__AExpr__mtype_61d(val* self, val* p0) {
typing__AExpr__mtype_61d(self, p0);
RET_LABEL:;
}
/* method typing#AExpr#is_typed for (self: AExpr): Bool */
short int typing__AExpr__is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_typing__AExpr___64dis_typed].s; /* @is_typed on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#is_typed for (self: Object): Bool */
short int VIRTUAL_typing__AExpr__is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__AExpr__is_typed(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#is_typed= for (self: AExpr, Bool) */
void typing__AExpr__is_typed_61d(val* self, short int p0) {
self->attrs[COLOR_typing__AExpr___64dis_typed].s = p0; /* @is_typed on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#is_typed= for (self: Object, Bool) */
void VIRTUAL_typing__AExpr__is_typed_61d(val* self, short int p0) {
typing__AExpr__is_typed_61d(self, p0);
RET_LABEL:;
}
/* method typing#AExpr#implicit_cast_to for (self: AExpr): nullable MType */
val* typing__AExpr__implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val; /* @implicit_cast_to on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#implicit_cast_to for (self: Object): nullable MType */
val* VIRTUAL_typing__AExpr__implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AExpr__implicit_cast_to(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#implicit_cast_to= for (self: AExpr, nullable MType) */
void typing__AExpr__implicit_cast_to_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = p0; /* @implicit_cast_to on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#implicit_cast_to= for (self: Object, nullable MType) */
void VIRTUAL_typing__AExpr__implicit_cast_to_61d(val* self, val* p0) {
typing__AExpr__implicit_cast_to_61d(self, p0);
RET_LABEL:;
}
/* method typing#AExpr#its_variable for (self: AExpr): nullable Variable */
val* typing__AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : null */;
var1 = NULL;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExpr#its_variable for (self: Object): nullable Variable */
val* VIRTUAL_typing__AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = typing__AExpr__its_variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#accept_typing for (self: AExpr, TypeVisitor) */
void typing__AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "no implemented accept_typing for ";
var2 = 33;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_string__Object__class_name]))(self) /* class_name on <self:AExpr>*/;
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 2;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var4;
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
CHECK_NEW_array__Array(var5);
}
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var8) /* error on <var_v:TypeVisitor>*/;
RET_LABEL:;
}
/* method typing#AExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AExpr__accept_typing(val* self, val* p0) {
typing__AExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ABlockExpr#accept_typing for (self: ABlockExpr, TypeVisitor) */
void typing__ABlockExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : ANodes[AExpr] */;
val* var1 /* : Iterator[nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var4 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_abstract_collection__Collection__iterator]))(var) /* iterator on <var:ANodes[AExpr]>*/;
for(;;) {
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var1) /* is_ok on <var1:Iterator[nullable Object]>*/;
if(!var2) break;
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__item]))(var1) /* item on <var1:Iterator[nullable Object]>*/;
var_e = var3;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var_e) /* visit_stmt on <var_v:TypeVisitor>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var1->class->vft[COLOR_abstract_collection__Iterator__next]))(var1) /* next on <var1:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:ABlockExpr>*/;
RET_LABEL:;
}
/* method typing#ABlockExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ABlockExpr__accept_typing(val* self, val* p0) {
typing__ABlockExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ABlockExpr#mtype for (self: ABlockExpr): nullable MType */
val* typing__ABlockExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : ANodes[AExpr] */;
short int var2 /* : Bool */;
val* var3 /* : null */;
val* var4 /* : ANodes[AExpr] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable MType */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:ANodes[AExpr]>*/;
if (var2){
var3 = NULL;
var = var3;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(self) /* n_expr on <self:ABlockExpr>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var4) /* last on <var4:ANodes[AExpr]>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_typing__AExpr__mtype]))(var5) /* mtype on <var5:nullable Object(AExpr)>*/;
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABlockExpr#mtype for (self: Object): nullable MType */
val* VIRTUAL_typing__ABlockExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__ABlockExpr__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AVardeclExpr#accept_typing for (self: AVardeclExpr, TypeVisitor) */
void typing__AVardeclExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var11 /* : null */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
val* var15 /* : nullable MType */;
val* var16 /* : nullable MType */;
val* var17 /* : null */;
short int var18 /* : Bool */;
val* var_decltype /* var decltype: nullable MType */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
short int var22 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : nullable MClass */;
val* var28 /* : MClassType */;
val* var29 /* : MType */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVardeclExpr__variable]))(self) /* variable on <self:AVardeclExpr>*/;
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
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AVardeclExpr__n_type]))(self) /* n_type on <self:AVardeclExpr>*/;
var_ntype = var3;
var4 = NULL;
if (var_ntype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (var5){
var6 = NULL;
var_mtype = var6;
} else {
var7 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(var_v, var_ntype) /* resolve_mtype on <var_v:TypeVisitor>*/;
var_mtype = var7;
var8 = NULL;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (var9){
goto RET_LABEL;
} else {
}
}
var10 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(self) /* n_expr on <self:AVardeclExpr>*/;
var_nexpr = var10;
var11 = NULL;
if (var_nexpr == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (var12){
var13 = NULL;
if (var_mtype == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (var14){
var15 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var_nexpr, var_mtype) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var15;
} else {
var16 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var_nexpr) /* visit_expr on <var_v:TypeVisitor>*/;
var_mtype = var16;
var17 = NULL;
if (var_mtype == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (var18){
goto RET_LABEL;
} else {
}
}
} else {
}
var_decltype = var_mtype;
var20 = NULL;
if (var_mtype == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
var_ = var21;
if (var21){
var19 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var22 = 0;
} else {
var22 = var_mtype->type->type_table[cltype] == idtype;
}
var19 = var22;
}
if (var19){
if (varonce) {
var23 = varonce;
} else {
var24 = "Object";
var25 = 6;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
var27 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var23) /* get_mclass on <var_v:TypeVisitor>*/;
if (var27 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 603);
exit(1);
} else {
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_model__MClass__mclass_type]))(var27) /* mclass_type on <var27:nullable MClass>*/;
}
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_model__MType__as_nullable]))(var28) /* as_nullable on <var28:MClassType>*/;
var_decltype = var29;
var30 = NULL;
if (var_mtype == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (var31){
var_mtype = var_decltype;
} else {
}
} else {
}
((void (*)(val*, val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type_61d]))(var_variable, var_decltype) /* declared_type= on <var_variable:nullable Variable(Variable)>*/;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__set_variable]))(var_v, self, var_variable, var_mtype) /* set_variable on <var_v:TypeVisitor>*/;
var32 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var32) /* is_typed= on <self:AVardeclExpr>*/;
RET_LABEL:;
}
/* method typing#AVardeclExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVardeclExpr__accept_typing(val* self, val* p0) {
typing__AVardeclExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AVarExpr#its_variable for (self: AVarExpr): nullable Variable */
val* typing__AVarExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarExpr>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVarExpr#its_variable for (self: Object): nullable Variable */
val* VIRTUAL_typing__AVarExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = typing__AVarExpr__its_variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AVarExpr#accept_typing for (self: AVarExpr, TypeVisitor) */
void typing__AVarExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarExpr>*/;
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
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_variable]))(var_v, self, var_variable) /* get_variable on <var_v:TypeVisitor>*/;
var_mtype = var3;
var4 = NULL;
if (var_mtype == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (var5){
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_mtype) /* mtype= on <self:AVarExpr>*/;
RET_LABEL:;
}
/* method typing#AVarExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVarExpr__accept_typing(val* self, val* p0) {
typing__AVarExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AVarAssignExpr#accept_typing for (self: AVarAssignExpr, TypeVisitor) */
void typing__AVarAssignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var6 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarAssignExpr>*/;
var_variable = var;
var1 = NULL;
if (var_variable == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 638);
exit(1);
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AVarAssignExpr>*/;
var4 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:nullable Variable(Variable)>*/;
var5 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var3, var4) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var_mtype = var5;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__set_variable]))(var_v, self, var_variable, var_mtype) /* set_variable on <var_v:TypeVisitor>*/;
var6 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var6) /* is_typed= on <self:AVarAssignExpr>*/;
RET_LABEL:;
}
/* method typing#AVarAssignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVarAssignExpr__accept_typing(val* self, val* p0) {
typing__AVarAssignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AReassignFormExpr#reassign_property for (self: AReassignFormExpr): nullable MMethodDef */
val* typing__AReassignFormExpr__reassign_property(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable CallSite */;
val* var2 /* : MMethodDef */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite]))(self) /* reassign_callsite on <self:AReassignFormExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 650);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__CallSite__mpropdef]))(var1) /* mpropdef on <var1:nullable CallSite>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_property for (self: Object): nullable MMethodDef */
val* VIRTUAL_typing__AReassignFormExpr__reassign_property(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = typing__AReassignFormExpr__reassign_property(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite for (self: AReassignFormExpr): nullable CallSite */
val* typing__AReassignFormExpr__reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AReassignFormExpr___64dreassign_callsite].val; /* @reassign_callsite on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AReassignFormExpr__reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__AReassignFormExpr__reassign_callsite(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite= for (self: AReassignFormExpr, nullable CallSite) */
void typing__AReassignFormExpr__reassign_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AReassignFormExpr___64dreassign_callsite].val = p0; /* @reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#reassign_callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d(val* self, val* p0) {
typing__AReassignFormExpr__reassign_callsite_61d(self, p0);
RET_LABEL:;
}
/* method typing#AReassignFormExpr#read_type for (self: AReassignFormExpr): nullable MType */
val* typing__AReassignFormExpr__read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AReassignFormExpr___64dread_type].val; /* @read_type on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#read_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AReassignFormExpr__read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AReassignFormExpr__read_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#read_type= for (self: AReassignFormExpr, nullable MType) */
void typing__AReassignFormExpr__read_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AReassignFormExpr___64dread_type].val = p0; /* @read_type on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#read_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AReassignFormExpr__read_type_61d(val* self, val* p0) {
typing__AReassignFormExpr__read_type_61d(self, p0);
RET_LABEL:;
}
/* method typing#AReassignFormExpr#resolve_reassignment for (self: AReassignFormExpr, TypeVisitor, MType, MType): nullable MType */
val* typing__AReassignFormExpr__resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_v /* var v: TypeVisitor */;
val* var_readtype /* var readtype: MType */;
val* var_writetype /* var writetype: MType */;
val* var1 /* : AAssignOp */;
short int var2 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var_reassign_name /* var reassign_name: String */;
val* var7 /* : AAssignOp */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : null */;
short int var34 /* : Bool */;
val* var35 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var36 /* : null */;
short int var37 /* : Bool */;
val* var38 /* : null */;
val* var39 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var40 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var_ /* var : Bool */;
val* var47 /* : null */;
short int var48 /* : Bool */;
val* var49 /* : AExpr */;
val* var50 /* : Array[MParameter] */;
val* var51 /* : nullable Object */;
val* var52 /* : MType */;
val* var53 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
val* var54 /* : null */;
short int var55 /* : Bool */;
val* var56 /* : null */;
val* var57 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_assign_op]))(self) /* n_assign_op on <self:AReassignFormExpr>*/;
/* <var1:AAssignOp> isa APlusAssignOp */
cltype = type_parser_nodes__APlusAssignOp.color;
idtype = type_parser_nodes__APlusAssignOp.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "+";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var_reassign_name = var3;
} else {
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_assign_op]))(self) /* n_assign_op on <self:AReassignFormExpr>*/;
/* <var7:AAssignOp> isa AMinusAssignOp */
cltype9 = type_parser_nodes__AMinusAssignOp.color;
idtype10 = type_parser_nodes__AMinusAssignOp.id;
if(cltype9 >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype9] == idtype10;
}
if (var8){
if (varonce11) {
var12 = varonce11;
} else {
var13 = "-";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var_reassign_name = var12;
} else {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/typing.nit", 670);
exit(1);
}
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AReassignFormExpr__read_type_61d]))(self, var_readtype) /* read_type= on <self:AReassignFormExpr>*/;
/* <var_readtype:MType> isa MNullType */
cltype17 = type_model__MNullType.color;
idtype18 = type_model__MNullType.id;
if(cltype17 >= var_readtype->type->table_size) {
var16 = 0;
} else {
var16 = var_readtype->type->type_table[cltype17] == idtype18;
}
if (var16){
if (varonce19) {
var20 = varonce19;
} else {
var21 = "Error: Method \'";
var22 = 15;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "\' call on \'null\'.";
var27 = 17;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_reassign_name;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
CHECK_NEW_array__Array(var29);
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var32) /* error on <var_v:TypeVisitor>*/;
var33 = NULL;
var = var33;
goto RET_LABEL;
} else {
}
var34 = 0;
var35 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_readtype, var_reassign_name, var34) /* get_method on <var_v:TypeVisitor>*/;
var_callsite = var35;
var36 = NULL;
if (var_callsite == NULL) {
var37 = 1; /* is null */
} else {
var37 = 0; /* arg is null but recv is not */
}
if (var37){
var38 = NULL;
var = var38;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AReassignFormExpr__reassign_callsite_61d]))(self, var_callsite) /* reassign_callsite= on <self:AReassignFormExpr>*/;
var39 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__msignature]))(var_callsite) /* msignature on <var_callsite:nullable CallSite(CallSite)>*/;
var_msignature = var39;
var40 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MSignature>*/;
var_rettype = var40;
var42 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
var43 = 1;
{ /* Inline kernel#Int#== (var42,var43) */
var46 = var42 == var43;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var_ = var44;
if (var44){
var47 = NULL;
if (var_rettype == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
var41 = var48;
} else {
var41 = var_;
}
if (!var41) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 686);
exit(1);
}
var49 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:AReassignFormExpr>*/;
var50 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var51 = ((val* (*)(val*))(var50->class->vft[COLOR_abstract_collection__Collection__first]))(var50) /* first on <var50:Array[MParameter]>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_model__MParameter__mtype]))(var51) /* mtype on <var51:nullable Object(MParameter)>*/;
var53 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var49, var52) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var_value_type = var53;
var54 = NULL;
if (var_value_type == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (var55){
var56 = NULL;
var = var56;
goto RET_LABEL;
} else {
}
var57 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__check_subtype]))(var_v, self, var_rettype, var_writetype) /* check_subtype on <var_v:TypeVisitor>*/;
var57;
var = var_rettype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#resolve_reassignment for (self: Object, TypeVisitor, MType, MType): nullable MType */
val* VIRTUAL_typing__AReassignFormExpr__resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AReassignFormExpr__resolve_reassignment(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AVarReassignExpr#accept_typing for (self: AVarReassignExpr, TypeVisitor) */
void typing__AVarReassignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
val* var6 /* : nullable MType */;
val* var_writetype /* var writetype: nullable MType */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var10 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_scope__AVarFormExpr__variable]))(self) /* variable on <self:AVarReassignExpr>*/;
var_variable = var;
var1 = NULL;
if (var_variable == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 700);
exit(1);
}
var3 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_variable]))(var_v, self, var_variable) /* get_variable on <var_v:TypeVisitor>*/;
var_readtype = var3;
var4 = NULL;
if (var_readtype == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (var5){
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(var_variable->class->vft[COLOR_typing__Variable__declared_type]))(var_variable) /* declared_type on <var_variable:nullable Variable(Variable)>*/;
var_writetype = var6;
var7 = NULL;
if (var_writetype == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
goto RET_LABEL;
} else {
}
var9 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_readtype, var_writetype) /* resolve_reassignment on <self:AVarReassignExpr>*/;
var_rettype = var9;
((void (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__set_variable]))(var_v, self, var_variable, var_rettype) /* set_variable on <var_v:TypeVisitor>*/;
var10 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var10) /* is_typed= on <self:AVarReassignExpr>*/;
RET_LABEL:;
}
/* method typing#AVarReassignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVarReassignExpr__accept_typing(val* self, val* p0) {
typing__AVarReassignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AContinueExpr#accept_typing for (self: AContinueExpr, TypeVisitor) */
void typing__AContinueExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AContinueExpr__n_expr]))(self) /* n_expr on <self:AContinueExpr>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var_nexpr) /* visit_expr on <var_v:TypeVisitor>*/;
var_mtype = var3;
} else {
}
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:AContinueExpr>*/;
RET_LABEL:;
}
/* method typing#AContinueExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AContinueExpr__accept_typing(val* self, val* p0) {
typing__AContinueExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ABreakExpr#accept_typing for (self: ABreakExpr, TypeVisitor) */
void typing__ABreakExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABreakExpr__n_expr]))(self) /* n_expr on <self:ABreakExpr>*/;
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (var2){
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var_nexpr) /* visit_expr on <var_v:TypeVisitor>*/;
var_mtype = var3;
} else {
}
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:ABreakExpr>*/;
RET_LABEL:;
}
/* method typing#ABreakExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ABreakExpr__accept_typing(val* self, val* p0) {
typing__ABreakExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AReturnExpr#accept_typing for (self: AReturnExpr, TypeVisitor) */
void typing__AReturnExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : MPropDef */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : nullable MSignature */;
val* var4 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var10 /* : nullable MType */;
val* var_mtype11 /* var mtype: nullable MType */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : null */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
short int var23 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReturnExpr__n_expr]))(self) /* n_expr on <self:AReturnExpr>*/;
var_nexpr = var;
var1 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:TypeVisitor>*/;
/* <var1:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (!var2) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 743);
exit(1);
}
var3 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MMethodDef__msignature]))(var1) /* msignature on <var1:MPropDef(MMethodDef)>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 743);
exit(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MSignature__return_mtype]))(var3) /* return_mtype on <var3:nullable MSignature>*/;
}
var_ret_type = var4;
var5 = NULL;
if (var_nexpr == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = NULL;
if (var_ret_type == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (var8){
var9 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var_nexpr, var_ret_type) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var_mtype = var9;
} else {
var10 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var_nexpr) /* visit_expr on <var_v:TypeVisitor>*/;
var_mtype11 = var10;
if (varonce) {
var12 = varonce;
} else {
var13 = "Error: Return with value in a procedure.";
var14 = 40;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var12) /* error on <var_v:TypeVisitor>*/;
}
} else {
var16 = NULL;
if (var_ret_type == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (var17){
if (varonce18) {
var19 = varonce18;
} else {
var20 = "Error: Return without value in a function.";
var21 = 42;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var19) /* error on <var_v:TypeVisitor>*/;
} else {
}
}
var23 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var23) /* is_typed= on <self:AReturnExpr>*/;
RET_LABEL:;
}
/* method typing#AReturnExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AReturnExpr__accept_typing(val* self, val* p0) {
typing__AReturnExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAbortExpr#accept_typing for (self: AAbortExpr, TypeVisitor) */
void typing__AAbortExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
var_v = p0;
var = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var) /* is_typed= on <self:AAbortExpr>*/;
RET_LABEL:;
}
/* method typing#AAbortExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAbortExpr__accept_typing(val* self, val* p0) {
typing__AAbortExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AIfExpr#accept_typing for (self: AIfExpr, TypeVisitor) */
void typing__AIfExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
short int var4 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_expr]))(self) /* n_expr on <self:AIfExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_then]))(self) /* n_then on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var2) /* visit_stmt on <var_v:TypeVisitor>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfExpr__n_else]))(self) /* n_else on <self:AIfExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var3) /* visit_stmt on <var_v:TypeVisitor>*/;
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:AIfExpr>*/;
RET_LABEL:;
}
/* method typing#AIfExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIfExpr__accept_typing(val* self, val* p0) {
typing__AIfExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AIfexprExpr#accept_typing for (self: AIfexprExpr, TypeVisitor) */
void typing__AIfexprExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var4 /* : AExpr */;
val* var5 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : null */;
short int var10 /* : Bool */;
val* var11 /* : Array[MType] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[MType] */;
val* var14 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var15 /* : null */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_expr]))(self) /* n_expr on <self:AIfexprExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_then]))(self) /* n_then on <self:AIfexprExpr>*/;
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var2) /* visit_expr on <var_v:TypeVisitor>*/;
var_t1 = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIfexprExpr__n_else]))(self) /* n_else on <self:AIfexprExpr>*/;
var5 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var4) /* visit_expr on <var_v:TypeVisitor>*/;
var_t2 = var5;
var7 = NULL;
if (var_t1 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
var_ = var8;
if (var8){
var6 = var_;
} else {
var9 = NULL;
if (var_t2 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
var6 = var10;
}
if (var6){
goto RET_LABEL;
} else {
}
var11 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var11 = array_instance Array[MType] */
var12 = 2;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_t1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var_t2;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[MType]>*/;
CHECK_NEW_array__Array(var11);
}
var14 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__merge_types]))(var_v, self, var11) /* merge_types on <var_v:TypeVisitor>*/;
var_t = var14;
var15 = NULL;
if (var_t == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (var16){
if (varonce) {
var17 = varonce;
} else {
var18 = "Type Error: ambiguous type ";
var19 = 27;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " vs ";
var24 = 4;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 4;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var_t1;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var22;
((struct instance_array__NativeArray*)var28)->values[3] = (val*) var_t2;
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
CHECK_NEW_array__Array(var26);
}
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var29) /* error on <var_v:TypeVisitor>*/;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_t) /* mtype= on <self:AIfexprExpr>*/;
RET_LABEL:;
}
/* method typing#AIfexprExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIfexprExpr__accept_typing(val* self, val* p0) {
typing__AIfexprExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ADoExpr#accept_typing for (self: ADoExpr, TypeVisitor) */
void typing__ADoExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
short int var1 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(self) /* n_block on <self:ADoExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var) /* visit_stmt on <var_v:TypeVisitor>*/;
var1 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var1) /* is_typed= on <self:ADoExpr>*/;
RET_LABEL:;
}
/* method typing#ADoExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ADoExpr__accept_typing(val* self, val* p0) {
typing__ADoExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AWhileExpr#accept_typing for (self: AWhileExpr, TypeVisitor) */
void typing__AWhileExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_expr]))(self) /* n_expr on <self:AWhileExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AWhileExpr__n_block]))(self) /* n_block on <self:AWhileExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var2) /* visit_stmt on <var_v:TypeVisitor>*/;
var3 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var3) /* is_typed= on <self:AWhileExpr>*/;
RET_LABEL:;
}
/* method typing#AWhileExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AWhileExpr__accept_typing(val* self, val* p0) {
typing__AWhileExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ALoopExpr#accept_typing for (self: ALoopExpr, TypeVisitor) */
void typing__ALoopExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
short int var1 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ALoopExpr__n_block]))(self) /* n_block on <self:ALoopExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var) /* visit_stmt on <var_v:TypeVisitor>*/;
var1 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var1) /* is_typed= on <self:ALoopExpr>*/;
RET_LABEL:;
}
/* method typing#ALoopExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ALoopExpr__accept_typing(val* self, val* p0) {
typing__ALoopExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AForExpr#coltype for (self: AForExpr): nullable MClassType */
val* typing__AForExpr__coltype(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_typing__AForExpr___64dcoltype].val; /* @coltype on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#coltype for (self: Object): nullable MClassType */
val* VIRTUAL_typing__AForExpr__coltype(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = typing__AForExpr__coltype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#coltype= for (self: AForExpr, nullable MClassType) */
void typing__AForExpr__coltype_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___64dcoltype].val = p0; /* @coltype on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#coltype= for (self: Object, nullable MClassType) */
void VIRTUAL_typing__AForExpr__coltype_61d(val* self, val* p0) {
typing__AForExpr__coltype_61d(self, p0);
RET_LABEL:;
}
/* method typing#AForExpr#method_iterator for (self: AForExpr): nullable MMethod */
val* typing__AForExpr__method_iterator(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_typing__AForExpr___64dmethod_iterator].val; /* @method_iterator on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_iterator for (self: Object): nullable MMethod */
val* VIRTUAL_typing__AForExpr__method_iterator(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__AForExpr__method_iterator(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_iterator= for (self: AForExpr, nullable MMethod) */
void typing__AForExpr__method_iterator_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___64dmethod_iterator].val = p0; /* @method_iterator on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_iterator= for (self: Object, nullable MMethod) */
void VIRTUAL_typing__AForExpr__method_iterator_61d(val* self, val* p0) {
typing__AForExpr__method_iterator_61d(self, p0);
RET_LABEL:;
}
/* method typing#AForExpr#method_is_ok for (self: AForExpr): nullable MMethod */
val* typing__AForExpr__method_is_ok(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_typing__AForExpr___64dmethod_is_ok].val; /* @method_is_ok on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_is_ok for (self: Object): nullable MMethod */
val* VIRTUAL_typing__AForExpr__method_is_ok(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__AForExpr__method_is_ok(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_is_ok= for (self: AForExpr, nullable MMethod) */
void typing__AForExpr__method_is_ok_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___64dmethod_is_ok].val = p0; /* @method_is_ok on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_is_ok= for (self: Object, nullable MMethod) */
void VIRTUAL_typing__AForExpr__method_is_ok_61d(val* self, val* p0) {
typing__AForExpr__method_is_ok_61d(self, p0);
RET_LABEL:;
}
/* method typing#AForExpr#method_item for (self: AForExpr): nullable MMethod */
val* typing__AForExpr__method_item(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_typing__AForExpr___64dmethod_item].val; /* @method_item on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_item for (self: Object): nullable MMethod */
val* VIRTUAL_typing__AForExpr__method_item(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__AForExpr__method_item(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_item= for (self: AForExpr, nullable MMethod) */
void typing__AForExpr__method_item_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___64dmethod_item].val = p0; /* @method_item on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_item= for (self: Object, nullable MMethod) */
void VIRTUAL_typing__AForExpr__method_item_61d(val* self, val* p0) {
typing__AForExpr__method_item_61d(self, p0);
RET_LABEL:;
}
/* method typing#AForExpr#method_next for (self: AForExpr): nullable MMethod */
val* typing__AForExpr__method_next(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_typing__AForExpr___64dmethod_next].val; /* @method_next on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_next for (self: Object): nullable MMethod */
val* VIRTUAL_typing__AForExpr__method_next(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__AForExpr__method_next(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_next= for (self: AForExpr, nullable MMethod) */
void typing__AForExpr__method_next_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___64dmethod_next].val = p0; /* @method_next on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_next= for (self: Object, nullable MMethod) */
void VIRTUAL_typing__AForExpr__method_next_61d(val* self, val* p0) {
typing__AForExpr__method_next_61d(self, p0);
RET_LABEL:;
}
/* method typing#AForExpr#method_key for (self: AForExpr): nullable MMethod */
val* typing__AForExpr__method_key(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_typing__AForExpr___64dmethod_key].val; /* @method_key on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_key for (self: Object): nullable MMethod */
val* VIRTUAL_typing__AForExpr__method_key(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__AForExpr__method_key(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_key= for (self: AForExpr, nullable MMethod) */
void typing__AForExpr__method_key_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___64dmethod_key].val = p0; /* @method_key on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_key= for (self: Object, nullable MMethod) */
void VIRTUAL_typing__AForExpr__method_key_61d(val* self, val* p0) {
typing__AForExpr__method_key_61d(self, p0);
RET_LABEL:;
}
/* method typing#AForExpr#do_type_iterator for (self: AForExpr, TypeVisitor, MType) */
void typing__AForExpr__do_type_iterator(val* self, val* p0, val* p1) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable MClass */;
val* var_objcla /* var objcla: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : nullable MProperty */;
val* var14 /* : null */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : nullable MProperty */;
val* var22 /* : null */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : ModelBuilder */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : String */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
short int var48 /* : Bool */;
val* var49 /* : nullable CallSite */;
val* var_itdef /* var itdef: nullable CallSite */;
val* var50 /* : null */;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
val* var61 /* : MMethod */;
val* var62 /* : MSignature */;
val* var63 /* : nullable MType */;
val* var_ittype /* var ittype: nullable MType */;
val* var64 /* : null */;
short int var65 /* : Bool */;
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
val* var76 /* : nullable MClass */;
val* var_colit_cla /* var colit_cla: nullable MClass */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var82 /* : nullable MClass */;
val* var_mapit_cla /* var mapit_cla: nullable MClass */;
short int var83 /* : Bool */;
short int var_is_col /* var is_col: Bool */;
short int var84 /* : Bool */;
short int var_is_map /* var is_map: Bool */;
short int var85 /* : Bool */;
val* var86 /* : null */;
short int var87 /* : Bool */;
short int var_ /* var : Bool */;
val* var88 /* : MClassType */;
val* var89 /* : MType */;
val* var90 /* : Array[MType] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[MType] */;
val* var93 /* : MClassType */;
short int var94 /* : Bool */;
val* var95 /* : MModule */;
val* var96 /* : MClassType */;
val* var97 /* : MClassType */;
val* var_coltype /* var coltype: MClassType */;
val* var98 /* : nullable Array[Variable] */;
val* var_variables /* var variables: nullable Array[Variable] */;
long var99 /* : Int */;
long var100 /* : Int */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : nullable Object */;
val* var111 /* : Array[MType] */;
val* var112 /* : nullable Object */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var_117 /* var : Bool */;
val* var118 /* : MClassType */;
val* var119 /* : MClassType */;
val* var120 /* : MType */;
val* var121 /* : Array[MType] */;
long var122 /* : Int */;
val* var123 /* : NativeArray[MType] */;
val* var124 /* : MClassType */;
short int var125 /* : Bool */;
val* var126 /* : MModule */;
val* var127 /* : MClassType */;
val* var128 /* : MClassType */;
val* var_coltype129 /* var coltype: MClassType */;
val* var130 /* : nullable Array[Variable] */;
val* var_variables131 /* var variables: nullable Array[Variable] */;
long var132 /* : Int */;
long var133 /* : Int */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : String */;
long var143 /* : Int */;
val* var144 /* : nullable Object */;
val* var145 /* : Array[MType] */;
long var146 /* : Int */;
val* var147 /* : nullable Object */;
long var148 /* : Int */;
val* var149 /* : nullable Object */;
val* var150 /* : Array[MType] */;
long var151 /* : Int */;
val* var152 /* : nullable Object */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var_156 /* var : Bool */;
short int var157 /* : Bool */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : NativeString */;
long var161 /* : Int */;
val* var162 /* : String */;
short int var163 /* : Bool */;
val* var164 /* : MType */;
short int var165 /* : Bool */;
int cltype;
int idtype;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : NativeString */;
long var169 /* : Int */;
val* var170 /* : String */;
short int var171 /* : Bool */;
val* var172 /* : nullable CallSite */;
val* var_ikdef /* var ikdef: nullable CallSite */;
val* var173 /* : null */;
short int var174 /* : Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
long var178 /* : Int */;
val* var179 /* : String */;
val* var180 /* : Array[Object] */;
long var181 /* : Int */;
val* var182 /* : NativeArray[Object] */;
val* var183 /* : String */;
val* var184 /* : MMethod */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
short int var190 /* : Bool */;
val* var191 /* : nullable CallSite */;
val* var_itemdef /* var itemdef: nullable CallSite */;
val* var192 /* : null */;
short int var193 /* : Bool */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : String */;
val* var199 /* : Array[Object] */;
long var200 /* : Int */;
val* var201 /* : NativeArray[Object] */;
val* var202 /* : String */;
val* var203 /* : MMethod */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
short int var209 /* : Bool */;
val* var210 /* : nullable CallSite */;
val* var_nextdef /* var nextdef: nullable CallSite */;
val* var211 /* : null */;
short int var212 /* : Bool */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : NativeString */;
long var216 /* : Int */;
val* var217 /* : String */;
val* var218 /* : Array[Object] */;
long var219 /* : Int */;
val* var220 /* : NativeArray[Object] */;
val* var221 /* : String */;
val* var222 /* : MMethod */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : String */;
short int var228 /* : Bool */;
val* var229 /* : nullable CallSite */;
val* var_keydef /* var keydef: nullable CallSite */;
val* var230 /* : null */;
short int var231 /* : Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : String */;
val* var237 /* : Array[Object] */;
long var238 /* : Int */;
val* var239 /* : NativeArray[Object] */;
val* var240 /* : String */;
val* var241 /* : MMethod */;
var_v = p0;
var_mtype = p1;
if (varonce) {
var = varonce;
} else {
var1 = "Object";
var2 = 6;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var) /* get_mclass on <var_v:TypeVisitor>*/;
var_objcla = var4;
var5 = NULL;
if (var_objcla == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_mtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_unsafe_type = var7;
if (varonce8) {
var9 = varonce8;
} else {
var10 = "iterator";
var11 = 8;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var13 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_unsafe_type, var9) /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/;
var14 = NULL;
if (var13 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (var15){
if (varonce16) {
var17 = varonce16;
} else {
var18 = "iterate";
var19 = 7;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_unsafe_type, var17) /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/;
var22 = NULL;
if (var21 == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (var23){
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Type Error: Expected method \'iterator\' in type ";
var27 = 47;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 2;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
CHECK_NEW_array__Array(var29);
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var32) /* error on <var_v:TypeVisitor>*/;
} else {
var33 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "NOT YET IMPLEMENTED: Do \'for\' on ";
var37 = 33;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 2;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
CHECK_NEW_array__Array(var39);
}
var42 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
((void (*)(val*, val*, val*))(var33->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var33, self, var42) /* error on <var33:ModelBuilder>*/;
}
goto RET_LABEL;
} else {
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "iterator";
var46 = 8;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = 1;
var49 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_mtype, var44, var48) /* get_method on <var_v:TypeVisitor>*/;
var_itdef = var49;
var50 = NULL;
if (var_itdef == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (var51){
if (varonce52) {
var53 = varonce52;
} else {
var54 = "Type Error: Expected method \'iterator\' in type ";
var55 = 47;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 2;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var_mtype;
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
CHECK_NEW_array__Array(var57);
}
var60 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var60) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var61 = ((val* (*)(val*))(var_itdef->class->vft[COLOR_typing__CallSite__mproperty]))(var_itdef) /* mproperty on <var_itdef:nullable CallSite(CallSite)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AForExpr__method_iterator_61d]))(self, var61) /* method_iterator= on <self:AForExpr>*/;
var62 = ((val* (*)(val*))(var_itdef->class->vft[COLOR_typing__CallSite__msignature]))(var_itdef) /* msignature on <var_itdef:nullable CallSite(CallSite)>*/;
var63 = ((val* (*)(val*))(var62->class->vft[COLOR_model__MSignature__return_mtype]))(var62) /* return_mtype on <var62:MSignature>*/;
var_ittype = var63;
var64 = NULL;
if (var_ittype == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (var65){
if (varonce66) {
var67 = varonce66;
} else {
var68 = "Type Error: Expected method \'iterator\' to return an Iterator or MapIterator type";
var69 = 80;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var67) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = "Iterator";
var74 = 8;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mclass]))(var_v, self, var72) /* try_get_mclass on <var_v:TypeVisitor>*/;
var_colit_cla = var76;
if (varonce77) {
var78 = varonce77;
} else {
var79 = "MapIterator";
var80 = 11;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
var82 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mclass]))(var_v, self, var78) /* try_get_mclass on <var_v:TypeVisitor>*/;
var_mapit_cla = var82;
var83 = 0;
var_is_col = var83;
var84 = 0;
var_is_map = var84;
var86 = NULL;
if (var_colit_cla == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
var_ = var87;
if (var87){
var88 = ((val* (*)(val*))(var_objcla->class->vft[COLOR_model__MClass__mclass_type]))(var_objcla) /* mclass_type on <var_objcla:nullable MClass(MClass)>*/;
var89 = ((val* (*)(val*))(var88->class->vft[COLOR_model__MType__as_nullable]))(var88) /* as_nullable on <var88:MClassType>*/;
var90 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var90 = array_instance Array[MType] */
var91 = 1;
var92 = NEW_array__NativeArray(var91, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var92)->values[0] = (val*) var89;
((void (*)(val*, val*, long))(var90->class->vft[COLOR_array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[MType]>*/;
CHECK_NEW_array__Array(var90);
}
var93 = ((val* (*)(val*, val*))(var_colit_cla->class->vft[COLOR_model__MClass__get_mtype]))(var_colit_cla, var90) /* get_mtype on <var_colit_cla:nullable MClass(MClass)>*/;
var94 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(var_v, var_ittype, var93) /* is_subtype on <var_v:TypeVisitor>*/;
var85 = var94;
} else {
var85 = var_;
}
if (var85){
var95 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var96 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor]))(var_v) /* anchor on <var_v:TypeVisitor>*/;
var97 = ((val* (*)(val*, val*, val*, val*))(var_ittype->class->vft[COLOR_model__MType__supertype_to]))(var_ittype, var95, var96, var_colit_cla) /* supertype_to on <var_ittype:nullable MType(MType)>*/;
var_coltype = var97;
var98 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
var_variables = var98;
if (var_variables == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 872);
exit(1);
} else {
var99 = ((long (*)(val*))(var_variables->class->vft[COLOR_abstract_collection__Collection__length]))(var_variables) /* length on <var_variables:nullable Array[Variable]>*/;
}
var100 = 1;
{ /* Inline kernel#Int#!= (var99,var100) */
var103 = var99 == var100;
var104 = !var103;
var101 = var104;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
if (var101){
if (varonce105) {
var106 = varonce105;
} else {
var107 = "Type Error: Expected one variable";
var108 = 33;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var106) /* error on <var_v:TypeVisitor>*/;
} else {
if (var_variables == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 875);
exit(1);
} else {
var110 = ((val* (*)(val*))(var_variables->class->vft[COLOR_abstract_collection__Collection__first]))(var_variables) /* first on <var_variables:nullable Array[Variable]>*/;
}
var111 = ((val* (*)(val*))(var_coltype->class->vft[COLOR_model__MClassType__arguments]))(var_coltype) /* arguments on <var_coltype:MClassType>*/;
var112 = ((val* (*)(val*))(var111->class->vft[COLOR_abstract_collection__Collection__first]))(var111) /* first on <var111:Array[MType]>*/;
((void (*)(val*, val*))(var110->class->vft[COLOR_typing__Variable__declared_type_61d]))(var110, var112) /* declared_type= on <var110:nullable Object(Variable)>*/;
}
var113 = 1;
var_is_col = var113;
} else {
}
var115 = NULL;
if (var_mapit_cla == NULL) {
var116 = 0; /* is null */
} else {
var116 = 1; /* arg is null and recv is not */
}
var_117 = var116;
if (var116){
var118 = ((val* (*)(val*))(var_objcla->class->vft[COLOR_model__MClass__mclass_type]))(var_objcla) /* mclass_type on <var_objcla:nullable MClass(MClass)>*/;
var119 = ((val* (*)(val*))(var_objcla->class->vft[COLOR_model__MClass__mclass_type]))(var_objcla) /* mclass_type on <var_objcla:nullable MClass(MClass)>*/;
var120 = ((val* (*)(val*))(var119->class->vft[COLOR_model__MType__as_nullable]))(var119) /* as_nullable on <var119:MClassType>*/;
var121 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var121 = array_instance Array[MType] */
var122 = 2;
var123 = NEW_array__NativeArray(var122, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var123)->values[0] = (val*) var118;
((struct instance_array__NativeArray*)var123)->values[1] = (val*) var120;
((void (*)(val*, val*, long))(var121->class->vft[COLOR_array__Array__with_native]))(var121, var123, var122) /* with_native on <var121:Array[MType]>*/;
CHECK_NEW_array__Array(var121);
}
var124 = ((val* (*)(val*, val*))(var_mapit_cla->class->vft[COLOR_model__MClass__get_mtype]))(var_mapit_cla, var121) /* get_mtype on <var_mapit_cla:nullable MClass(MClass)>*/;
var125 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(var_v, var_ittype, var124) /* is_subtype on <var_v:TypeVisitor>*/;
var114 = var125;
} else {
var114 = var_117;
}
if (var114){
var126 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var127 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor]))(var_v) /* anchor on <var_v:TypeVisitor>*/;
var128 = ((val* (*)(val*, val*, val*, val*))(var_ittype->class->vft[COLOR_model__MType__supertype_to]))(var_ittype, var126, var127, var_mapit_cla) /* supertype_to on <var_ittype:nullable MType(MType)>*/;
var_coltype129 = var128;
var130 = ((val* (*)(val*))(self->class->vft[COLOR_scope__AForExpr__variables]))(self) /* variables on <self:AForExpr>*/;
var_variables131 = var130;
if (var_variables131 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 884);
exit(1);
} else {
var132 = ((long (*)(val*))(var_variables131->class->vft[COLOR_abstract_collection__Collection__length]))(var_variables131) /* length on <var_variables131:nullable Array[Variable]>*/;
}
var133 = 2;
{ /* Inline kernel#Int#!= (var132,var133) */
var136 = var132 == var133;
var137 = !var136;
var134 = var137;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
if (var134){
if (varonce138) {
var139 = varonce138;
} else {
var140 = "Type Error: Expected two variables";
var141 = 34;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var139) /* error on <var_v:TypeVisitor>*/;
} else {
var143 = 0;
if (var_variables131 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 887);
exit(1);
} else {
var144 = ((val* (*)(val*, long))(var_variables131->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_variables131, var143) /* [] on <var_variables131:nullable Array[Variable]>*/;
}
var145 = ((val* (*)(val*))(var_coltype129->class->vft[COLOR_model__MClassType__arguments]))(var_coltype129) /* arguments on <var_coltype129:MClassType>*/;
var146 = 0;
var147 = ((val* (*)(val*, long))(var145->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var145, var146) /* [] on <var145:Array[MType]>*/;
((void (*)(val*, val*))(var144->class->vft[COLOR_typing__Variable__declared_type_61d]))(var144, var147) /* declared_type= on <var144:nullable Object(Variable)>*/;
var148 = 1;
if (var_variables131 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 888);
exit(1);
} else {
var149 = ((val* (*)(val*, long))(var_variables131->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_variables131, var148) /* [] on <var_variables131:nullable Array[Variable]>*/;
}
var150 = ((val* (*)(val*))(var_coltype129->class->vft[COLOR_model__MClassType__arguments]))(var_coltype129) /* arguments on <var_coltype129:MClassType>*/;
var151 = 1;
var152 = ((val* (*)(val*, long))(var150->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var150, var151) /* [] on <var150:Array[MType]>*/;
((void (*)(val*, val*))(var149->class->vft[COLOR_typing__Variable__declared_type_61d]))(var149, var152) /* declared_type= on <var149:nullable Object(Variable)>*/;
}
var153 = 1;
var_is_map = var153;
} else {
}
var155 = !var_is_col;
var_156 = var155;
if (var155){
var157 = !var_is_map;
var154 = var157;
} else {
var154 = var_156;
}
if (var154){
if (varonce158) {
var159 = varonce158;
} else {
var160 = "Type Error: Expected method \'iterator\' to return an Iterator of MapIterator type";
var161 = 80;
var162 = string__NativeString__to_s_with_length(var160, var161);
var159 = var162;
varonce158 = var159;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var159) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var163 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
if (var163){
var164 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_mtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_mtype = var164;
} else {
}
/* <var_mtype:MType> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var165 = 0;
} else {
var165 = var_mtype->type->type_table[cltype] == idtype;
}
if (!var165) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 901);
exit(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AForExpr__coltype_61d]))(self, var_mtype) /* coltype= on <self:AForExpr>*/;
if (varonce166) {
var167 = varonce166;
} else {
var168 = "is_ok";
var169 = 5;
var170 = string__NativeString__to_s_with_length(var168, var169);
var167 = var170;
varonce166 = var167;
}
var171 = 0;
var172 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var167, var171) /* get_method on <var_v:TypeVisitor>*/;
var_ikdef = var172;
var173 = NULL;
if (var_ikdef == NULL) {
var174 = 1; /* is null */
} else {
var174 = 0; /* arg is null but recv is not */
}
if (var174){
if (varonce175) {
var176 = varonce175;
} else {
var177 = "Type Error: Expected method \'is_ok\' in Iterator type ";
var178 = 53;
var179 = string__NativeString__to_s_with_length(var177, var178);
var176 = var179;
varonce175 = var176;
}
var180 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var180 = array_instance Array[Object] */
var181 = 2;
var182 = NEW_array__NativeArray(var181, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var182)->values[0] = (val*) var176;
((struct instance_array__NativeArray*)var182)->values[1] = (val*) var_ittype;
((void (*)(val*, val*, long))(var180->class->vft[COLOR_array__Array__with_native]))(var180, var182, var181) /* with_native on <var180:Array[Object]>*/;
CHECK_NEW_array__Array(var180);
}
var183 = ((val* (*)(val*))(var180->class->vft[COLOR_string__Object__to_s]))(var180) /* to_s on <var180:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var183) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var184 = ((val* (*)(val*))(var_ikdef->class->vft[COLOR_typing__CallSite__mproperty]))(var_ikdef) /* mproperty on <var_ikdef:nullable CallSite(CallSite)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AForExpr__method_is_ok_61d]))(self, var184) /* method_is_ok= on <self:AForExpr>*/;
if (varonce185) {
var186 = varonce185;
} else {
var187 = "item";
var188 = 4;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
var190 = 0;
var191 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var186, var190) /* get_method on <var_v:TypeVisitor>*/;
var_itemdef = var191;
var192 = NULL;
if (var_itemdef == NULL) {
var193 = 1; /* is null */
} else {
var193 = 0; /* arg is null but recv is not */
}
if (var193){
if (varonce194) {
var195 = varonce194;
} else {
var196 = "Type Error: Expected method \'item\' in Iterator type ";
var197 = 52;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
var199 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var199 = array_instance Array[Object] */
var200 = 2;
var201 = NEW_array__NativeArray(var200, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var201)->values[0] = (val*) var195;
((struct instance_array__NativeArray*)var201)->values[1] = (val*) var_ittype;
((void (*)(val*, val*, long))(var199->class->vft[COLOR_array__Array__with_native]))(var199, var201, var200) /* with_native on <var199:Array[Object]>*/;
CHECK_NEW_array__Array(var199);
}
var202 = ((val* (*)(val*))(var199->class->vft[COLOR_string__Object__to_s]))(var199) /* to_s on <var199:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var202) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var203 = ((val* (*)(val*))(var_itemdef->class->vft[COLOR_typing__CallSite__mproperty]))(var_itemdef) /* mproperty on <var_itemdef:nullable CallSite(CallSite)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AForExpr__method_item_61d]))(self, var203) /* method_item= on <self:AForExpr>*/;
if (varonce204) {
var205 = varonce204;
} else {
var206 = "next";
var207 = 4;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = 0;
var210 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var205, var209) /* get_method on <var_v:TypeVisitor>*/;
var_nextdef = var210;
var211 = NULL;
if (var_nextdef == NULL) {
var212 = 1; /* is null */
} else {
var212 = 0; /* arg is null but recv is not */
}
if (var212){
if (varonce213) {
var214 = varonce213;
} else {
var215 = "Type Error: Expected method \'next\' in Iterator type ";
var216 = 52;
var217 = string__NativeString__to_s_with_length(var215, var216);
var214 = var217;
varonce213 = var214;
}
var218 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var218 = array_instance Array[Object] */
var219 = 2;
var220 = NEW_array__NativeArray(var219, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var220)->values[0] = (val*) var214;
((struct instance_array__NativeArray*)var220)->values[1] = (val*) var_ittype;
((void (*)(val*, val*, long))(var218->class->vft[COLOR_array__Array__with_native]))(var218, var220, var219) /* with_native on <var218:Array[Object]>*/;
CHECK_NEW_array__Array(var218);
}
var221 = ((val* (*)(val*))(var218->class->vft[COLOR_string__Object__to_s]))(var218) /* to_s on <var218:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var221) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var222 = ((val* (*)(val*))(var_nextdef->class->vft[COLOR_typing__CallSite__mproperty]))(var_nextdef) /* mproperty on <var_nextdef:nullable CallSite(CallSite)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AForExpr__method_next_61d]))(self, var222) /* method_next= on <self:AForExpr>*/;
if (var_is_map){
if (varonce223) {
var224 = varonce223;
} else {
var225 = "key";
var226 = 3;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
var228 = 0;
var229 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_ittype, var224, var228) /* get_method on <var_v:TypeVisitor>*/;
var_keydef = var229;
var230 = NULL;
if (var_keydef == NULL) {
var231 = 1; /* is null */
} else {
var231 = 0; /* arg is null but recv is not */
}
if (var231){
if (varonce232) {
var233 = varonce232;
} else {
var234 = "Type Error: Expected method \'key\' in Iterator type ";
var235 = 51;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
var237 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var237 = array_instance Array[Object] */
var238 = 2;
var239 = NEW_array__NativeArray(var238, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var239)->values[0] = (val*) var233;
((struct instance_array__NativeArray*)var239)->values[1] = (val*) var_ittype;
((void (*)(val*, val*, long))(var237->class->vft[COLOR_array__Array__with_native]))(var237, var239, var238) /* with_native on <var237:Array[Object]>*/;
CHECK_NEW_array__Array(var237);
}
var240 = ((val* (*)(val*))(var237->class->vft[COLOR_string__Object__to_s]))(var237) /* to_s on <var237:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var240) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var241 = ((val* (*)(val*))(var_keydef->class->vft[COLOR_typing__CallSite__mproperty]))(var_keydef) /* mproperty on <var_keydef:nullable CallSite(CallSite)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AForExpr__method_key_61d]))(self, var241) /* method_key= on <self:AForExpr>*/;
} else {
}
RET_LABEL:;
}
/* method typing#AForExpr#do_type_iterator for (self: Object, TypeVisitor, MType) */
void VIRTUAL_typing__AForExpr__do_type_iterator(val* self, val* p0, val* p1) {
typing__AForExpr__do_type_iterator(self, p0, p1);
RET_LABEL:;
}
/* method typing#AForExpr#accept_typing for (self: AForExpr, TypeVisitor) */
void typing__AForExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable AExpr */;
short int var5 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_expr]))(self) /* n_expr on <self:AForExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_mtype = var1;
var2 = NULL;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_typing__AForExpr__do_type_iterator]))(self, var_v, var_mtype) /* do_type_iterator on <self:AForExpr>*/;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AForExpr__n_block]))(self) /* n_block on <self:AForExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var4) /* visit_stmt on <var_v:TypeVisitor>*/;
var5 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var5) /* is_typed= on <self:AForExpr>*/;
RET_LABEL:;
}
/* method typing#AForExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AForExpr__accept_typing(val* self, val* p0) {
typing__AForExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAssertExpr#accept_typing for (self: AAssertExpr, TypeVisitor) */
void typing__AAssertExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_expr]))(self) /* n_expr on <self:AAssertExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssertExpr__n_else]))(self) /* n_else on <self:AAssertExpr>*/;
((void (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_stmt]))(var_v, var2) /* visit_stmt on <var_v:TypeVisitor>*/;
var3 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var3) /* is_typed= on <self:AAssertExpr>*/;
RET_LABEL:;
}
/* method typing#AAssertExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAssertExpr__accept_typing(val* self, val* p0) {
typing__AAssertExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AOrExpr#accept_typing for (self: AOrExpr, TypeVisitor) */
void typing__AOrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr]))(self) /* n_expr on <self:AOrExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrExpr__n_expr2]))(self) /* n_expr2 on <self:AOrExpr>*/;
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var2) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var3;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var4) /* mtype= on <self:AOrExpr>*/;
RET_LABEL:;
}
/* method typing#AOrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AOrExpr__accept_typing(val* self, val* p0) {
typing__AOrExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AImpliesExpr#accept_typing for (self: AImpliesExpr, TypeVisitor) */
void typing__AImpliesExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr]))(self) /* n_expr on <self:AImpliesExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AImpliesExpr__n_expr2]))(self) /* n_expr2 on <self:AImpliesExpr>*/;
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var2) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var3;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var4) /* mtype= on <self:AImpliesExpr>*/;
RET_LABEL:;
}
/* method typing#AImpliesExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AImpliesExpr__accept_typing(val* self, val* p0) {
typing__AImpliesExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAndExpr#accept_typing for (self: AAndExpr, TypeVisitor) */
void typing__AAndExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr]))(self) /* n_expr on <self:AAndExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAndExpr__n_expr2]))(self) /* n_expr2 on <self:AAndExpr>*/;
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var2) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var3;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var4) /* mtype= on <self:AAndExpr>*/;
RET_LABEL:;
}
/* method typing#AAndExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAndExpr__accept_typing(val* self, val* p0) {
typing__AAndExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ANotExpr#accept_typing for (self: ANotExpr, TypeVisitor) */
void typing__ANotExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANotExpr__n_expr]))(self) /* n_expr on <self:ANotExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_bool]))(var_v, var) /* visit_expr_bool on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var2) /* mtype= on <self:ANotExpr>*/;
RET_LABEL:;
}
/* method typing#ANotExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANotExpr__accept_typing(val* self, val* p0) {
typing__ANotExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_typing for (self: AOrElseExpr, TypeVisitor) */
void typing__AOrElseExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var4 /* : Bool */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : MType */;
val* var11 /* : Array[MType] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[MType] */;
val* var14 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : MModule */;
val* var18 /* : MClassType */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
val* var22 /* : MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrElseExpr__n_expr]))(self) /* n_expr on <self:AOrElseExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_t1 = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AOrElseExpr__n_expr2]))(self) /* n_expr2 on <self:AOrElseExpr>*/;
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var2) /* visit_expr on <var_v:TypeVisitor>*/;
var_t2 = var3;
var5 = NULL;
if (var_t1 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
var_ = var6;
if (var6){
var4 = var_;
} else {
var7 = NULL;
if (var_t2 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
var4 = var8;
}
if (var4){
goto RET_LABEL;
} else {
}
/* <var_t1:nullable MType(MType)> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t1->type->table_size) {
var9 = 0;
} else {
var9 = var_t1->type->type_table[cltype] == idtype;
}
if (var9){
var10 = ((val* (*)(val*))(var_t1->class->vft[COLOR_model__MNullableType__mtype]))(var_t1) /* mtype on <var_t1:nullable MType(MNullableType)>*/;
var_t1 = var10;
} else {
}
var11 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var11 = array_instance Array[MType] */
var12 = 2;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_t1;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var_t2;
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[MType]>*/;
CHECK_NEW_array__Array(var11);
}
var14 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__merge_types]))(var_v, self, var11) /* merge_types on <var_v:TypeVisitor>*/;
var_t = var14;
var15 = NULL;
if (var_t == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (var16){
var17 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_model__MModule__object_type]))(var17) /* object_type on <var17:MModule>*/;
var_t = var18;
/* <var_t2:nullable MType(MType)> isa MNullableType */
cltype20 = type_model__MNullableType.color;
idtype21 = type_model__MNullableType.id;
if(cltype20 >= var_t2->type->table_size) {
var19 = 0;
} else {
var19 = var_t2->type->type_table[cltype20] == idtype21;
}
if (var19){
var22 = ((val* (*)(val*))(var_t->class->vft[COLOR_model__MType__as_nullable]))(var_t) /* as_nullable on <var_t:nullable MType(MClassType)>*/;
var_t = var22;
} else {
}
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_t) /* mtype= on <self:AOrElseExpr>*/;
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AOrElseExpr__accept_typing(val* self, val* p0) {
typing__AOrElseExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AEeExpr#accept_typing for (self: AEeExpr, TypeVisitor) */
void typing__AEeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AEeExpr__n_expr]))(self) /* n_expr on <self:AEeExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AEeExpr__n_expr2]))(self) /* n_expr2 on <self:AEeExpr>*/;
var3 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var2) /* visit_expr on <var_v:TypeVisitor>*/;
var3;
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var4) /* mtype= on <self:AEeExpr>*/;
RET_LABEL:;
}
/* method typing#AEeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AEeExpr__accept_typing(val* self, val* p0) {
typing__AEeExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ATrueExpr#accept_typing for (self: ATrueExpr, TypeVisitor) */
void typing__ATrueExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var) /* mtype= on <self:ATrueExpr>*/;
RET_LABEL:;
}
/* method typing#ATrueExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ATrueExpr__accept_typing(val* self, val* p0) {
typing__ATrueExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AFalseExpr#accept_typing for (self: AFalseExpr, TypeVisitor) */
void typing__AFalseExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var) /* mtype= on <self:AFalseExpr>*/;
RET_LABEL:;
}
/* method typing#AFalseExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AFalseExpr__accept_typing(val* self, val* p0) {
typing__AFalseExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AIntExpr#accept_typing for (self: AIntExpr, TypeVisitor) */
void typing__AIntExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Int";
var2 = 3;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var) /* get_mclass on <var_v:TypeVisitor>*/;
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var7) /* mtype= on <self:AIntExpr>*/;
RET_LABEL:;
}
/* method typing#AIntExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIntExpr__accept_typing(val* self, val* p0) {
typing__AIntExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AFloatExpr#accept_typing for (self: AFloatExpr, TypeVisitor) */
void typing__AFloatExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Float";
var2 = 5;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var) /* get_mclass on <var_v:TypeVisitor>*/;
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var7) /* mtype= on <self:AFloatExpr>*/;
RET_LABEL:;
}
/* method typing#AFloatExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AFloatExpr__accept_typing(val* self, val* p0) {
typing__AFloatExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ACharExpr#accept_typing for (self: ACharExpr, TypeVisitor) */
void typing__ACharExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Char";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var) /* get_mclass on <var_v:TypeVisitor>*/;
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var7) /* mtype= on <self:ACharExpr>*/;
RET_LABEL:;
}
/* method typing#ACharExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ACharExpr__accept_typing(val* self, val* p0) {
typing__ACharExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AStringFormExpr#accept_typing for (self: AStringFormExpr, TypeVisitor) */
void typing__AStringFormExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "String";
var2 = 6;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var) /* get_mclass on <var_v:TypeVisitor>*/;
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var7) /* mtype= on <self:AStringFormExpr>*/;
RET_LABEL:;
}
/* method typing#AStringFormExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AStringFormExpr__accept_typing(val* self, val* p0) {
typing__AStringFormExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ASuperstringExpr#accept_typing for (self: ASuperstringExpr, TypeVisitor) */
void typing__ASuperstringExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MClassType */;
val* var8 /* : ANodes[AExpr] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var12 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "String";
var2 = 6;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var) /* get_mclass on <var_v:TypeVisitor>*/;
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var7) /* mtype= on <self:ASuperstringExpr>*/;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperstringExpr__n_exprs]))(self) /* n_exprs on <self:ASuperstringExpr>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:ANodes[AExpr]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_nexpr = var11;
var12 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var_nexpr) /* visit_expr on <var_v:TypeVisitor>*/;
var_t = var12;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method typing#ASuperstringExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASuperstringExpr__accept_typing(val* self, val* p0) {
typing__ASuperstringExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AArrayExpr#accept_typing for (self: AArrayExpr, TypeVisitor) */
void typing__AArrayExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
val* var1 /* : AExprs */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : Iterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var6 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var10 /* : null */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
val* var31 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var32 /* : null */;
short int var33 /* : Bool */;
val* var34 /* : Array[MType] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[MType] */;
val* var37 /* : MClassType */;
var_v = p0;
var = NEW_array__Array(&type_array__Arraynullable_model__MType);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[nullable MType]>*/;
CHECK_NEW_array__Array(var);
var_mtypes = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AArrayExpr__n_exprs]))(self) /* n_exprs on <self:AArrayExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(var1) /* n_exprs on <var1:AExprs>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Collection__iterator]))(var2) /* iterator on <var2:ANodes[AExpr]>*/;
for(;;) {
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[nullable Object]>*/;
if(!var4) break;
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[nullable Object]>*/;
var_e = var5;
var6 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var_e) /* visit_expr on <var_v:TypeVisitor>*/;
var_t = var6;
var7 = NULL;
if (var_t == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mtypes, var_t) /* add on <var_mtypes:Array[nullable MType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var9 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__merge_types]))(var_v, self, var_mtypes) /* merge_types on <var_v:TypeVisitor>*/;
var_mtype = var9;
var10 = NULL;
if (var_mtype == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (var11){
if (varonce) {
var12 = varonce;
} else {
var13 = "Type Error: ambiguous array type ";
var14 = 33;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = " ";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = ((val* (*)(val*, val*))(var_mtypes->class->vft[COLOR_string__Collection__join]))(var_mtypes, var17) /* join on <var_mtypes:Array[nullable MType]>*/;
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 2;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var21;
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
CHECK_NEW_array__Array(var22);
}
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var25) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Array";
var29 = 5;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var27) /* get_mclass on <var_v:TypeVisitor>*/;
var_mclass = var31;
var32 = NULL;
if (var_mclass == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (var33){
goto RET_LABEL;
} else {
}
var34 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var34 = array_instance Array[MType] */
var35 = 1;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var_mtype;
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[MType]>*/;
CHECK_NEW_array__Array(var34);
}
var37 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__get_mtype]))(var_mclass, var34) /* get_mtype on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var37) /* mtype= on <self:AArrayExpr>*/;
RET_LABEL:;
}
/* method typing#AArrayExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AArrayExpr__accept_typing(val* self, val* p0) {
typing__AArrayExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ARangeExpr#accept_typing for (self: ARangeExpr, TypeVisitor) */
void typing__ARangeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
val* var4 /* : nullable MClass */;
val* var_discrete_class /* var discrete_class: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : MClassDef */;
val* var8 /* : MClassType */;
val* var_discrete_type /* var discrete_type: MClassType */;
val* var9 /* : AExpr */;
val* var10 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var11 /* : AExpr */;
val* var12 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var13 /* : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Array[MType] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[MType] */;
val* var30 /* : MClassType */;
short int var31 /* : Bool */;
val* var32 /* : Array[MType] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[MType] */;
val* var35 /* : MClassType */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Discrete";
var2 = 8;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var4 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var) /* get_mclass on <var_v:TypeVisitor>*/;
var_discrete_class = var4;
var5 = NULL;
if (var_discrete_class == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (var6){
goto RET_LABEL;
} else {
}
var7 = ((val* (*)(val*))(var_discrete_class->class->vft[COLOR_model__MClass__intro]))(var_discrete_class) /* intro on <var_discrete_class:nullable MClass(MClass)>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MClassDef__bound_mtype]))(var7) /* bound_mtype on <var7:MClassDef>*/;
var_discrete_type = var8;
var9 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr]))(self) /* n_expr on <self:ARangeExpr>*/;
var10 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var9, var_discrete_type) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var_t1 = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ARangeExpr__n_expr2]))(self) /* n_expr2 on <self:ARangeExpr>*/;
var12 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var11, var_discrete_type) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var_t2 = var12;
var14 = NULL;
if (var_t1 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
var_ = var15;
if (var15){
var13 = var_;
} else {
var16 = NULL;
if (var_t2 == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
var13 = var17;
}
if (var13){
goto RET_LABEL;
} else {
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "Range";
var21 = 5;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_mclass]))(var_v, self, var19) /* get_mclass on <var_v:TypeVisitor>*/;
var_mclass = var23;
var24 = NULL;
if (var_mclass == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (var25){
goto RET_LABEL;
} else {
}
var26 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(var_v, var_t1, var_t2) /* is_subtype on <var_v:TypeVisitor>*/;
if (var26){
var27 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var27 = array_instance Array[MType] */
var28 = 1;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var_t2;
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[MType]>*/;
CHECK_NEW_array__Array(var27);
}
var30 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__get_mtype]))(var_mclass, var27) /* get_mtype on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var30) /* mtype= on <self:ARangeExpr>*/;
} else {
var31 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(var_v, var_t2, var_t1) /* is_subtype on <var_v:TypeVisitor>*/;
if (var31){
var32 = NEW_array__Array(&type_array__Arraymodel__MType);
{ /* var32 = array_instance Array[MType] */
var33 = 1;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraymodel__MType);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var_t1;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[MType]>*/;
CHECK_NEW_array__Array(var32);
}
var35 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__get_mtype]))(var_mclass, var32) /* get_mtype on <var_mclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var35) /* mtype= on <self:ARangeExpr>*/;
} else {
if (varonce36) {
var37 = varonce36;
} else {
var38 = "Type Error: Cannot create range: ";
var39 = 33;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = " vs ";
var44 = 4;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 4;
var48 = NEW_array__NativeArray(var47, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_array__NativeArray*)var48)->values[1] = (val*) var_t1;
((struct instance_array__NativeArray*)var48)->values[2] = (val*) var42;
((struct instance_array__NativeArray*)var48)->values[3] = (val*) var_t2;
((void (*)(val*, val*, long))(var46->class->vft[COLOR_array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
CHECK_NEW_array__Array(var46);
}
var49 = ((val* (*)(val*))(var46->class->vft[COLOR_string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var49) /* error on <var_v:TypeVisitor>*/;
}
}
RET_LABEL:;
}
/* method typing#ARangeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ARangeExpr__accept_typing(val* self, val* p0) {
typing__ARangeExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ANullExpr#accept_typing for (self: ANullExpr, TypeVisitor) */
void typing__ANullExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : MModule */;
val* var1 /* : Model */;
val* var2 /* : MNullType */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_model_base__MModule__model]))(var) /* model on <var:MModule>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__Model__null_type]))(var1) /* null_type on <var1:Model>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var2) /* mtype= on <self:ANullExpr>*/;
RET_LABEL:;
}
/* method typing#ANullExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANullExpr__accept_typing(val* self, val* p0) {
typing__ANullExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AIsaExpr#cast_type for (self: AIsaExpr): nullable MType */
val* typing__AIsaExpr__cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AIsaExpr___64dcast_type].val; /* @cast_type on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AIsaExpr#cast_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AIsaExpr__cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AIsaExpr__cast_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AIsaExpr#cast_type= for (self: AIsaExpr, nullable MType) */
void typing__AIsaExpr__cast_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AIsaExpr___64dcast_type].val = p0; /* @cast_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method typing#AIsaExpr#cast_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AIsaExpr__cast_type_61d(val* self, val* p0) {
typing__AIsaExpr__cast_type_61d(self, p0);
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_typing for (self: AIsaExpr, TypeVisitor) */
void typing__AIsaExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : AExpr */;
val* var4 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : AExpr */;
val* var8 /* : nullable MType */;
val* var_orig /* var orig: nullable MType */;
val* var9 /* : String */;
val* var10 /* : null */;
short int var11 /* : Bool */;
val* var12 /* : String */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var_from /* var from: String */;
val* var17 /* : String */;
val* var18 /* : null */;
short int var19 /* : Bool */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var_to /* var to: String */;
val* var26 /* : nullable FlowContext */;
val* var27 /* : FlowContext */;
val* var28 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIsaExpr__n_expr]))(self) /* n_expr on <self:AIsaExpr>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIsaExpr__n_type]))(self) /* n_type on <self:AIsaExpr>*/;
var2 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_cast]))(var_v, self, var, var1) /* visit_expr_cast on <var_v:TypeVisitor>*/;
var_mtype = var2;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AIsaExpr__cast_type_61d]))(self, var_mtype) /* cast_type= on <self:AIsaExpr>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIsaExpr__n_expr]))(self) /* n_expr on <self:AIsaExpr>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_typing__AExpr__its_variable]))(var3) /* its_variable on <var3:AExpr>*/;
var_variable = var4;
var5 = NULL;
if (var_variable == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (var6){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AIsaExpr__n_expr]))(self) /* n_expr on <self:AIsaExpr>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_typing__AExpr__mtype]))(var7) /* mtype on <var7:AExpr>*/;
var_orig = var8;
var10 = NULL;
if (var_orig == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (var11){
var12 = ((val* (*)(val*))(var_orig->class->vft[COLOR_string__Object__to_s]))(var_orig) /* to_s on <var_orig:nullable MType(MType)>*/;
var9 = var12;
} else {
if (varonce) {
var13 = varonce;
} else {
var14 = "invalid";
var15 = 7;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var9 = var13;
}
var_from = var9;
var18 = NULL;
if (var_mtype == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (var19){
var20 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:nullable MType(MType)>*/;
var17 = var20;
} else {
if (varonce21) {
var22 = varonce21;
} else {
var23 = "invalid";
var24 = 7;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var17 = var22;
}
var_to = var17;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context]))(self) /* after_flow_context on <self:AIsaExpr>*/;
if (var26 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1155);
exit(1);
} else {
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_flow__FlowContext__when_true]))(var26) /* when_true on <var26:nullable FlowContext>*/;
}
((void (*)(val*, val*, val*))(var27->class->vft[COLOR_typing__FlowContext__set_var]))(var27, var_variable, var_mtype) /* set_var on <var27:FlowContext>*/;
} else {
}
var28 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var28) /* mtype= on <self:AIsaExpr>*/;
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIsaExpr__accept_typing(val* self, val* p0) {
typing__AIsaExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_typing for (self: AAsCastExpr, TypeVisitor) */
void typing__AAsCastExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsCastExpr__n_expr]))(self) /* n_expr on <self:AAsCastExpr>*/;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsCastExpr__n_type]))(self) /* n_type on <self:AAsCastExpr>*/;
var2 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_cast]))(var_v, self, var, var1) /* visit_expr_cast on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var2) /* mtype= on <self:AAsCastExpr>*/;
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAsCastExpr__accept_typing(val* self, val* p0) {
typing__AAsCastExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_typing for (self: AAsNotnullExpr, TypeVisitor) */
void typing__AAsNotnullExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
val* var10 /* : MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAsNotnullExpr__n_expr]))(self) /* n_expr on <self:AAsNotnullExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_mtype = var1;
/* <var_mtype:nullable MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(var_mtype == NULL) {
var2 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "Type error: as(not null) on null";
var5 = 32;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var3) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType> isa MNullableType */
cltype8 = type_model__MNullableType.color;
idtype9 = type_model__MNullableType.id;
if(var_mtype == NULL) {
var7 = 0;
} else {
if(cltype8 >= var_mtype->type->table_size) {
var7 = 0;
} else {
var7 = var_mtype->type->type_table[cltype8] == idtype9;
}
}
if (var7){
var10 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MNullableType__mtype]))(var_mtype) /* mtype on <var_mtype:nullable MType(MNullableType)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var10) /* mtype= on <self:AAsNotnullExpr>*/;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_mtype) /* mtype= on <self:AAsNotnullExpr>*/;
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAsNotnullExpr__accept_typing(val* self, val* p0) {
typing__AAsNotnullExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AProxyExpr#accept_typing for (self: AProxyExpr, TypeVisitor) */
void typing__AProxyExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AProxyExpr__n_expr]))(self) /* n_expr on <self:AProxyExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var1) /* mtype= on <self:AProxyExpr>*/;
RET_LABEL:;
}
/* method typing#AProxyExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AProxyExpr__accept_typing(val* self, val* p0) {
typing__AProxyExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ASelfExpr#its_variable for (self: ASelfExpr): nullable Variable */
val* typing__ASelfExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_typing__ASelfExpr___64dits_variable].val; /* @its_variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASelfExpr#its_variable for (self: Object): nullable Variable */
val* VIRTUAL_typing__ASelfExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = typing__ASelfExpr__its_variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASelfExpr#its_variable= for (self: ASelfExpr, nullable Variable) */
void typing__ASelfExpr__its_variable_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASelfExpr___64dits_variable].val = p0; /* @its_variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method typing#ASelfExpr#its_variable= for (self: Object, nullable Variable) */
void VIRTUAL_typing__ASelfExpr__its_variable_61d(val* self, val* p0) {
typing__ASelfExpr__its_variable_61d(self, p0);
RET_LABEL:;
}
/* method typing#ASelfExpr#accept_typing for (self: ASelfExpr, TypeVisitor) */
void typing__ASelfExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : Variable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : nullable MType */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__selfvariable]))(var_v) /* selfvariable on <var_v:TypeVisitor>*/;
var_variable = var;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASelfExpr__its_variable_61d]))(self, var_variable) /* its_variable= on <self:ASelfExpr>*/;
var1 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_variable]))(var_v, self, var_variable) /* get_variable on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var1) /* mtype= on <self:ASelfExpr>*/;
RET_LABEL:;
}
/* method typing#ASelfExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASelfExpr__accept_typing(val* self, val* p0) {
typing__ASelfExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ASendExpr#mproperty for (self: ASendExpr): nullable MMethod */
val* typing__ASendExpr__mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable CallSite */;
val* var2 /* : MMethod */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__callsite]))(self) /* callsite on <self:ASendExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1207);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__CallSite__mproperty]))(var1) /* mproperty on <var1:nullable CallSite>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#mproperty for (self: Object): nullable MMethod */
val* VIRTUAL_typing__ASendExpr__mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__ASendExpr__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite for (self: ASendExpr): nullable CallSite */
val* typing__ASendExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ASendExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ASendExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__ASendExpr__callsite(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite= for (self: ASendExpr, nullable CallSite) */
void typing__ASendExpr__callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASendExpr___64dcallsite].val = p0; /* @callsite on <self:ASendExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ASendExpr__callsite_61d(val* self, val* p0) {
typing__ASendExpr__callsite_61d(self, p0);
RET_LABEL:;
}
/* method typing#ASendExpr#accept_typing for (self: ASendExpr, TypeVisitor) */
void typing__ASendExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
val* var19 /* : AExpr */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var27 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var28 /* : Bool */;
val* var29 /* : MMethod */;
short int var30 /* : Bool */;
val* var31 /* : MPropDef */;
val* var_vmpropdef /* var vmpropdef: MPropDef */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
short int var_ /* var : Bool */;
val* var36 /* : MProperty */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : ANodes[AClosureDef] */;
long var49 /* : Int */;
val* var50 /* : Array[MParameter] */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : Range[Int] */;
long var56 /* : Int */;
val* var57 /* : ANodes[AClosureDef] */;
long var58 /* : Int */;
val* var59 /* : Discrete */;
val* var60 /* : Discrete */;
val* var61 /* : Iterator[nullable Object] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
long var_i /* var i: Int */;
long var64 /* : Int */;
val* var65 /* : ANodes[AClosureDef] */;
val* var66 /* : nullable Object */;
val* var67 /* : Array[MParameter] */;
val* var68 /* : nullable Object */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : ANodes[AClosureDef] */;
long var75 /* : Int */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : Array[MParameter] */;
long var82 /* : Int */;
val* var83 /* : Array[Object] */;
long var84 /* : Int */;
val* var85 /* : NativeArray[Object] */;
val* var86 /* : Object */;
val* var87 /* : Object */;
val* var88 /* : String */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__property_name]))(self) /* property_name on <self:ASendExpr>*/;
var_name = var2;
var3 = NULL;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
goto RET_LABEL;
} else {
}
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var5 = 0;
} else {
var5 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var5){
if (varonce) {
var6 = varonce;
} else {
var7 = "Error: Method \'";
var8 = 15;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "\' call on \'null\'.";
var13 = 17;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 3;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var17)->values[2] = (val*) var11;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var18) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var19 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendExpr>*/;
/* <var19:AExpr> isa ASelfExpr */
cltype21 = type_parser_nodes__ASelfExpr.color;
idtype22 = type_parser_nodes__ASelfExpr.id;
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
var23 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_recvtype, var_name, var20) /* get_method on <var_v:TypeVisitor>*/;
var_callsite = var23;
var24 = NULL;
if (var_callsite == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (var25){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASendExpr__callsite_61d]))(self, var_callsite) /* callsite= on <self:ASendExpr>*/;
var26 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__msignature]))(var_callsite) /* msignature on <var_callsite:nullable CallSite(CallSite)>*/;
var_msignature = var26;
var27 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendExpr>*/;
var_args = var27;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASendExpr__raw_arguments_61d]))(self, var_args) /* raw_arguments= on <self:ASendExpr>*/;
var28 = ((short int (*)(val*, val*, val*))(var_callsite->class->vft[COLOR_typing__CallSite__check_signature]))(var_callsite, var_v, var_args) /* check_signature on <var_callsite:nullable CallSite(CallSite)>*/;
var28;
var29 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__mproperty]))(var_callsite) /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/;
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_model__MMethod__is_init]))(var29) /* is_init on <var29:MMethod>*/;
if (var30){
var31 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:TypeVisitor>*/;
var_vmpropdef = var31;
/* <var_vmpropdef:MPropDef> isa MMethodDef */
cltype34 = type_model__MMethodDef.color;
idtype35 = type_model__MMethodDef.id;
if(cltype34 >= var_vmpropdef->type->table_size) {
var33 = 0;
} else {
var33 = var_vmpropdef->type->type_table[cltype34] == idtype35;
}
var_ = var33;
if (var33){
var36 = ((val* (*)(val*))(var_vmpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_vmpropdef) /* mproperty on <var_vmpropdef:MPropDef(MMethodDef)>*/;
var37 = ((short int (*)(val*))(var36->class->vft[COLOR_model__MMethod__is_init]))(var36) /* is_init on <var36:MProperty(MMethod)>*/;
var32 = var37;
} else {
var32 = var_;
}
var38 = !var32;
if (var38){
if (varonce39) {
var40 = varonce39;
} else {
var41 = "Can call a init only in another init";
var42 = 36;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var40) /* error on <var_v:TypeVisitor>*/;
} else {
}
} else {
}
var44 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MSignature>*/;
var_ret = var44;
var45 = NULL;
if (var_ret == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (var46){
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_ret) /* mtype= on <self:ASendExpr>*/;
} else {
var47 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var47) /* is_typed= on <self:ASendExpr>*/;
}
var48 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_closure_defs]))(self) /* n_closure_defs on <self:ASendExpr>*/;
var49 = ((long (*)(val*))(var48->class->vft[COLOR_abstract_collection__Collection__length]))(var48) /* length on <var48:ANodes[AClosureDef]>*/;
var50 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mclosures]))(var_msignature) /* mclosures on <var_msignature:MSignature>*/;
var51 = ((long (*)(val*))(var50->class->vft[COLOR_abstract_collection__Collection__length]))(var50) /* length on <var50:Array[MParameter]>*/;
{ /* Inline kernel#Int#== (var49,var51) */
var54 = var49 == var51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
if (var52){
var55 = NEW_range__Range(&type_range__Rangekernel__Int);
var56 = 0;
var57 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_closure_defs]))(self) /* n_closure_defs on <self:ASendExpr>*/;
var58 = ((long (*)(val*))(var57->class->vft[COLOR_abstract_collection__Collection__length]))(var57) /* length on <var57:ANodes[AClosureDef]>*/;
var59 = BOX_kernel__Int(var56); /* autobox from Int to Discrete */
var60 = BOX_kernel__Int(var58); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var55->class->vft[COLOR_range__Range__without_last]))(var55, var59, var60) /* without_last on <var55:Range[Int]>*/;
CHECK_NEW_range__Range(var55);
var61 = ((val* (*)(val*))(var55->class->vft[COLOR_abstract_collection__Collection__iterator]))(var55) /* iterator on <var55:Range[Int]>*/;
for(;;) {
var62 = ((short int (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var61) /* is_ok on <var61:Iterator[nullable Object]>*/;
if(!var62) break;
var63 = ((val* (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__item]))(var61) /* item on <var61:Iterator[nullable Object]>*/;
var64 = ((struct instance_kernel__Int*)var63)->value; /* autounbox from nullable Object to Int */;
var_i = var64;
var65 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_closure_defs]))(self) /* n_closure_defs on <self:ASendExpr>*/;
var66 = ((val* (*)(val*, long))(var65->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var65, var_i) /* [] on <var65:ANodes[AClosureDef]>*/;
var67 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mclosures]))(var_msignature) /* mclosures on <var_msignature:MSignature>*/;
var68 = ((val* (*)(val*, long))(var67->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var67, var_i) /* [] on <var67:Array[MParameter]>*/;
((void (*)(val*, val*, val*))(var66->class->vft[COLOR_typing__AClosureDef__accept_typing]))(var66, var_v, var68) /* accept_typing on <var66:nullable Object(AClosureDef)>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var61->class->vft[COLOR_abstract_collection__Iterator__next]))(var61) /* next on <var61:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
if (varonce69) {
var70 = varonce69;
} else {
var71 = "closure: got ";
var72 = 13;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_closure_defs]))(self) /* n_closure_defs on <self:ASendExpr>*/;
var75 = ((long (*)(val*))(var74->class->vft[COLOR_abstract_collection__Collection__length]))(var74) /* length on <var74:ANodes[AClosureDef]>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = ", want ";
var79 = 7;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mclosures]))(var_msignature) /* mclosures on <var_msignature:MSignature>*/;
var82 = ((long (*)(val*))(var81->class->vft[COLOR_abstract_collection__Collection__length]))(var81) /* length on <var81:Array[MParameter]>*/;
var83 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var83 = array_instance Array[Object] */
var84 = 4;
var85 = NEW_array__NativeArray(var84, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var85)->values[0] = (val*) var70;
var86 = BOX_kernel__Int(var75); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var85)->values[1] = (val*) var86;
((struct instance_array__NativeArray*)var85)->values[2] = (val*) var77;
var87 = BOX_kernel__Int(var82); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var85)->values[3] = (val*) var87;
((void (*)(val*, val*, long))(var83->class->vft[COLOR_array__Array__with_native]))(var83, var85, var84) /* with_native on <var83:Array[Object]>*/;
CHECK_NEW_array__Array(var83);
}
var88 = ((val* (*)(val*))(var83->class->vft[COLOR_string__Object__to_s]))(var83) /* to_s on <var83:Array[Object]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_nodes__ANode__debug]))(self, var88) /* debug on <self:ASendExpr>*/;
}
RET_LABEL:;
}
/* method typing#ASendExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASendExpr__accept_typing(val* self, val* p0) {
typing__ASendExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ASendExpr#property_name for (self: ASendExpr): String */
val* typing__ASendExpr__property_name(val* self) {
val* var /* : String */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "src/typing.nit", 1256);
exit(1);
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ASendExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ASendExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#raw_arguments for (self: ASendExpr): nullable Array[AExpr] */
val* typing__ASendExpr__raw_arguments(val* self) {
val* var /* : nullable Array[AExpr] */;
val* var1 /* : nullable Array[AExpr] */;
var1 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ASendExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#raw_arguments for (self: Object): nullable Array[AExpr] */
val* VIRTUAL_typing__ASendExpr__raw_arguments(val* self) {
val* var /* : nullable Array[AExpr] */;
val* var1 /* : nullable Array[AExpr] */;
var1 = typing__ASendExpr__raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#raw_arguments= for (self: ASendExpr, nullable Array[AExpr]) */
void typing__ASendExpr__raw_arguments_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val = p0; /* @raw_arguments on <self:ASendExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#raw_arguments= for (self: Object, nullable Array[AExpr]) */
void VIRTUAL_typing__ASendExpr__raw_arguments_61d(val* self, val* p0) {
typing__ASendExpr__raw_arguments_61d(self, p0);
RET_LABEL:;
}
/* method typing#ASendExpr#compute_raw_arguments for (self: ASendExpr): Array[AExpr] */
val* typing__ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "src/typing.nit", 1263);
exit(1);
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ASendExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ASendExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#compute_raw_arguments for (self: ABinopExpr): Array[AExpr] */
val* typing__ABinopExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
long var2 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var3 /* : AExpr */;
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var2 = 1;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[AExpr]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__n_expr2]))(self) /* n_expr2 on <self:ABinopExpr>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__Sequence__push]))(var_, var3) /* push on <var_:Array[AExpr]>*/;
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABinopExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABinopExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#property_name for (self: AEqExpr): String */
val* typing__AEqExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "==";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AEqExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AEqExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#accept_typing for (self: AEqExpr, TypeVisitor) */
void typing__AEqExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : AExpr */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var_vartype /* var vartype: nullable MType */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
val* var13 /* : nullable FlowContext */;
val* var14 /* : FlowContext */;
val* var15 /* : nullable FlowContext */;
val* var16 /* : FlowContext */;
val* var17 /* : MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AEqExpr__accept_typing]))(self, p0) /* accept_typing on <self:AEqExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:AEqExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_typing__AExpr__its_variable]))(var) /* its_variable on <var:AExpr>*/;
var_variable = var1;
var2 = NULL;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__n_expr2]))(self) /* n_expr2 on <self:AEqExpr>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_typing__AExpr__mtype]))(var4) /* mtype on <var4:AExpr>*/;
var_mtype = var5;
/* <var_mtype:nullable MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(var_mtype == NULL) {
var6 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var6 = 0;
} else {
var6 = var_mtype->type->type_table[cltype] == idtype;
}
}
var7 = !var6;
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_variable]))(var_v, self, var_variable) /* get_variable on <var_v:TypeVisitor>*/;
var_vartype = var8;
/* <var_vartype:nullable MType> isa MNullableType */
cltype10 = type_model__MNullableType.color;
idtype11 = type_model__MNullableType.id;
if(var_vartype == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_vartype->type->table_size) {
var9 = 0;
} else {
var9 = var_vartype->type->type_table[cltype10] == idtype11;
}
}
var12 = !var9;
if (var12){
goto RET_LABEL;
} else {
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context]))(self) /* after_flow_context on <self:AEqExpr>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1281);
exit(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_flow__FlowContext__when_true]))(var13) /* when_true on <var13:nullable FlowContext>*/;
}
((void (*)(val*, val*, val*))(var14->class->vft[COLOR_typing__FlowContext__set_var]))(var14, var_variable, var_mtype) /* set_var on <var14:FlowContext>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context]))(self) /* after_flow_context on <self:AEqExpr>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1282);
exit(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_flow__FlowContext__when_false]))(var15) /* when_false on <var15:nullable FlowContext>*/;
}
var17 = ((val* (*)(val*))(var_vartype->class->vft[COLOR_model__MNullableType__mtype]))(var_vartype) /* mtype on <var_vartype:nullable MType(MNullableType)>*/;
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_typing__FlowContext__set_var]))(var16, var_variable, var17) /* set_var on <var16:FlowContext>*/;
RET_LABEL:;
}
/* method typing#AEqExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AEqExpr__accept_typing(val* self, val* p0) {
typing__AEqExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ANeExpr#property_name for (self: ANeExpr): String */
val* typing__ANeExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "!=";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ANeExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ANeExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ANeExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANeExpr#accept_typing for (self: ANeExpr, TypeVisitor) */
void typing__ANeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : AExpr */;
val* var5 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var_vartype /* var vartype: nullable MType */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
short int var12 /* : Bool */;
val* var13 /* : nullable FlowContext */;
val* var14 /* : FlowContext */;
val* var15 /* : nullable FlowContext */;
val* var16 /* : FlowContext */;
val* var17 /* : MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ANeExpr__accept_typing]))(self, p0) /* accept_typing on <self:ANeExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ANeExpr>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_typing__AExpr__its_variable]))(var) /* its_variable on <var:AExpr>*/;
var_variable = var1;
var2 = NULL;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABinopExpr__n_expr2]))(self) /* n_expr2 on <self:ANeExpr>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_typing__AExpr__mtype]))(var4) /* mtype on <var4:AExpr>*/;
var_mtype = var5;
/* <var_mtype:nullable MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(var_mtype == NULL) {
var6 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var6 = 0;
} else {
var6 = var_mtype->type->type_table[cltype] == idtype;
}
}
var7 = !var6;
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__get_variable]))(var_v, self, var_variable) /* get_variable on <var_v:TypeVisitor>*/;
var_vartype = var8;
/* <var_vartype:nullable MType> isa MNullableType */
cltype10 = type_model__MNullableType.color;
idtype11 = type_model__MNullableType.id;
if(var_vartype == NULL) {
var9 = 0;
} else {
if(cltype10 >= var_vartype->type->table_size) {
var9 = 0;
} else {
var9 = var_vartype->type->type_table[cltype10] == idtype11;
}
}
var12 = !var9;
if (var12){
goto RET_LABEL;
} else {
}
var13 = ((val* (*)(val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context]))(self) /* after_flow_context on <self:ANeExpr>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1298);
exit(1);
} else {
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_flow__FlowContext__when_false]))(var13) /* when_false on <var13:nullable FlowContext>*/;
}
((void (*)(val*, val*, val*))(var14->class->vft[COLOR_typing__FlowContext__set_var]))(var14, var_variable, var_mtype) /* set_var on <var14:FlowContext>*/;
var15 = ((val* (*)(val*))(self->class->vft[COLOR_flow__AExpr__after_flow_context]))(self) /* after_flow_context on <self:ANeExpr>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1299);
exit(1);
} else {
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_flow__FlowContext__when_true]))(var15) /* when_true on <var15:nullable FlowContext>*/;
}
var17 = ((val* (*)(val*))(var_vartype->class->vft[COLOR_model__MNullableType__mtype]))(var_vartype) /* mtype on <var_vartype:nullable MType(MNullableType)>*/;
((void (*)(val*, val*, val*))(var16->class->vft[COLOR_typing__FlowContext__set_var]))(var16, var_variable, var17) /* set_var on <var16:FlowContext>*/;
RET_LABEL:;
}
/* method typing#ANeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANeExpr__accept_typing(val* self, val* p0) {
typing__ANeExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ALtExpr#property_name for (self: ALtExpr): String */
val* typing__ALtExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALtExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ALtExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ALtExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ALeExpr#property_name for (self: ALeExpr): String */
val* typing__ALeExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<=";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALeExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ALeExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ALeExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ALlExpr#property_name for (self: ALlExpr): String */
val* typing__ALlExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<<";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALlExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ALlExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ALlExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AGtExpr#property_name for (self: AGtExpr): String */
val* typing__AGtExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGtExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AGtExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AGtExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AGeExpr#property_name for (self: AGeExpr): String */
val* typing__AGeExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">=";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGeExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AGeExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AGeExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AGgExpr#property_name for (self: AGgExpr): String */
val* typing__AGgExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">>";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGgExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AGgExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AGgExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APlusExpr#property_name for (self: APlusExpr): String */
val* typing__APlusExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "+";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APlusExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__APlusExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__APlusExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AMinusExpr#property_name for (self: AMinusExpr): String */
val* typing__AMinusExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "-";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AMinusExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AMinusExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AMinusExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AStarshipExpr#property_name for (self: AStarshipExpr): String */
val* typing__AStarshipExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<=>";
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
/* method typing#AStarshipExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AStarshipExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AStarshipExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AStarExpr#property_name for (self: AStarExpr): String */
val* typing__AStarExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "*";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AStarExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AStarExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AStarExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASlashExpr#property_name for (self: ASlashExpr): String */
val* typing__ASlashExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "/";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASlashExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ASlashExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ASlashExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APercentExpr#property_name for (self: APercentExpr): String */
val* typing__APercentExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "%";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APercentExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__APercentExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__APercentExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#property_name for (self: AUminusExpr): String */
val* typing__AUminusExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "unary -";
var3 = 7;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AUminusExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AUminusExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#compute_raw_arguments for (self: AUminusExpr): Array[AExpr] */
val* typing__AUminusExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[AExpr]>*/;
CHECK_NEW_array__Array(var1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__AUminusExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__AUminusExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_name for (self: ACallExpr): String */
val* typing__ACallExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(self) /* n_id on <self:ACallExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:TId>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ACallExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ACallExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#compute_raw_arguments for (self: ACallExpr): Array[AExpr] */
val* typing__ACallExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_args]))(self) /* n_args on <self:ACallExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExprs__to_a]))(var1) /* to_a on <var1:AExprs>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ACallExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ACallExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_name for (self: ACallAssignExpr): String */
val* typing__ACallAssignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
val* var7 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(self) /* n_id on <self:ACallAssignExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:TId>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "=";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((val* (*)(val*, val*))(var2->class->vft[COLOR_string__String___43d]))(var2, var3) /* + on <var2:String>*/;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ACallAssignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ACallAssignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#compute_raw_arguments for (self: ACallAssignExpr): Array[AExpr] */
val* typing__ACallAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var3 /* : AExpr */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_args]))(self) /* n_args on <self:ACallAssignExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExprs__to_a]))(var1) /* to_a on <var1:AExprs>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:ACallAssignExpr>*/;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var3) /* add on <var_res:Array[AExpr]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ACallAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ACallAssignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#property_name for (self: ABraExpr): String */
val* typing__ABraExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ABraExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ABraExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#compute_raw_arguments for (self: ABraExpr): Array[AExpr] */
val* typing__ABraExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABraFormExpr__n_args]))(self) /* n_args on <self:ABraExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExprs__to_a]))(var1) /* to_a on <var1:AExprs>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABraExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABraExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#property_name for (self: ABraAssignExpr): String */
val* typing__ABraAssignExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]=";
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
/* method typing#ABraAssignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ABraAssignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ABraAssignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#compute_raw_arguments for (self: ABraAssignExpr): Array[AExpr] */
val* typing__ABraAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var3 /* : AExpr */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABraFormExpr__n_args]))(self) /* n_args on <self:ABraAssignExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExprs__to_a]))(var1) /* to_a on <var1:AExprs>*/;
var_res = var2;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:ABraAssignExpr>*/;
((void (*)(val*, val*))(var_res->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_res, var3) /* add on <var_res:Array[AExpr]>*/;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABraAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABraAssignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_mproperty for (self: ASendReassignFormExpr): nullable MMethod */
val* typing__ASendReassignFormExpr__write_mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable CallSite */;
val* var2 /* : MMethod */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendReassignFormExpr__write_callsite]))(self) /* write_callsite on <self:ASendReassignFormExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1378);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__CallSite__mproperty]))(var1) /* mproperty on <var1:nullable CallSite>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_mproperty for (self: Object): nullable MMethod */
val* VIRTUAL_typing__ASendReassignFormExpr__write_mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__ASendReassignFormExpr__write_mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite for (self: ASendReassignFormExpr): nullable CallSite */
val* typing__ASendReassignFormExpr__write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ASendReassignFormExpr___64dwrite_callsite].val; /* @write_callsite on <self:ASendReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ASendReassignFormExpr__write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__ASendReassignFormExpr__write_callsite(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite= for (self: ASendReassignFormExpr, nullable CallSite) */
void typing__ASendReassignFormExpr__write_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASendReassignFormExpr___64dwrite_callsite].val = p0; /* @write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#write_callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ASendReassignFormExpr__write_callsite_61d(val* self, val* p0) {
typing__ASendReassignFormExpr__write_callsite_61d(self, p0);
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#accept_typing for (self: ASendReassignFormExpr, TypeVisitor) */
void typing__ASendReassignFormExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : Array[Object] */;
long var16 /* : Int */;
val* var17 /* : NativeArray[Object] */;
val* var18 /* : String */;
val* var19 /* : AExpr */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
short int var_for_self /* var for_self: Bool */;
val* var23 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var24 /* : null */;
short int var25 /* : Bool */;
val* var26 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var27 /* : Bool */;
val* var28 /* : MSignature */;
val* var29 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
val* var30 /* : null */;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : AExpr */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
val* var56 /* : nullable CallSite */;
val* var_wcallsite /* var wcallsite: nullable CallSite */;
val* var57 /* : null */;
short int var58 /* : Bool */;
val* var59 /* : MSignature */;
val* var60 /* : Array[MParameter] */;
val* var61 /* : nullable Object */;
val* var62 /* : MType */;
val* var63 /* : nullable MType */;
val* var_wtype /* var wtype: nullable MType */;
val* var64 /* : null */;
short int var65 /* : Bool */;
val* var66 /* : Array[nullable Object] */;
val* var67 /* : AExpr */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__property_name]))(self) /* property_name on <self:ASendReassignFormExpr>*/;
var_name = var2;
var3 = NULL;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (var4){
goto RET_LABEL;
} else {
}
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var5 = 0;
} else {
var5 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var5){
if (varonce) {
var6 = varonce;
} else {
var7 = "Error: Method \'";
var8 = 15;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = "\' call on \'null\'.";
var13 = 17;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
var15 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var15 = array_instance Array[Object] */
var16 = 3;
var17 = NEW_array__NativeArray(var16, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var17)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var17)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var17)->values[2] = (val*) var11;
((void (*)(val*, val*, long))(var15->class->vft[COLOR_array__Array__with_native]))(var15, var17, var16) /* with_native on <var15:Array[Object]>*/;
CHECK_NEW_array__Array(var15);
}
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_string__Object__to_s]))(var15) /* to_s on <var15:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var18) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var19 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
/* <var19:AExpr> isa ASelfExpr */
cltype21 = type_parser_nodes__ASelfExpr.color;
idtype22 = type_parser_nodes__ASelfExpr.id;
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
var_for_self = var20;
var23 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_recvtype, var_name, var_for_self) /* get_method on <var_v:TypeVisitor>*/;
var_callsite = var23;
var24 = NULL;
if (var_callsite == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (var25){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASendExpr__callsite_61d]))(self, var_callsite) /* callsite= on <self:ASendReassignFormExpr>*/;
var26 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendReassignFormExpr>*/;
var_args = var26;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASendExpr__raw_arguments_61d]))(self, var_args) /* raw_arguments= on <self:ASendReassignFormExpr>*/;
var27 = ((short int (*)(val*, val*, val*))(var_callsite->class->vft[COLOR_typing__CallSite__check_signature]))(var_callsite, var_v, var_args) /* check_signature on <var_callsite:nullable CallSite(CallSite)>*/;
var27;
var28 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__msignature]))(var_callsite) /* msignature on <var_callsite:nullable CallSite(CallSite)>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_model__MSignature__return_mtype]))(var28) /* return_mtype on <var28:MSignature>*/;
var_readtype = var29;
var30 = NULL;
if (var_readtype == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (var31){
if (varonce32) {
var33 = varonce32;
} else {
var34 = "Error: ";
var35 = 7;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = " is not a function";
var40 = 18;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 3;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
CHECK_NEW_array__Array(var42);
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var45) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "=";
var49 = 1;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*, val*))(var_name->class->vft[COLOR_string__String___43d]))(var_name, var47) /* + on <var_name:String>*/;
var52 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASendExpr__n_expr]))(self) /* n_expr on <self:ASendReassignFormExpr>*/;
/* <var52:AExpr> isa ASelfExpr */
cltype54 = type_parser_nodes__ASelfExpr.color;
idtype55 = type_parser_nodes__ASelfExpr.id;
if(cltype54 >= var52->type->table_size) {
var53 = 0;
} else {
var53 = var52->type->type_table[cltype54] == idtype55;
}
var56 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_recvtype, var51, var53) /* get_method on <var_v:TypeVisitor>*/;
var_wcallsite = var56;
var57 = NULL;
if (var_wcallsite == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (var58){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASendReassignFormExpr__write_callsite_61d]))(self, var_wcallsite) /* write_callsite= on <self:ASendReassignFormExpr>*/;
var59 = ((val* (*)(val*))(var_wcallsite->class->vft[COLOR_typing__CallSite__msignature]))(var_wcallsite) /* msignature on <var_wcallsite:nullable CallSite(CallSite)>*/;
var60 = ((val* (*)(val*))(var59->class->vft[COLOR_model__MSignature__mparameters]))(var59) /* mparameters on <var59:MSignature>*/;
var61 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_collection__SequenceRead__last]))(var60) /* last on <var60:Array[MParameter]>*/;
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_model__MParameter__mtype]))(var61) /* mtype on <var61:nullable Object(MParameter)>*/;
var63 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_readtype, var62) /* resolve_reassignment on <self:ASendReassignFormExpr>*/;
var_wtype = var63;
var64 = NULL;
if (var_wtype == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (var65){
goto RET_LABEL;
} else {
}
var66 = ((val* (*)(val*))(var_args->class->vft[COLOR_array__Collection__to_a]))(var_args) /* to_a on <var_args:Array[AExpr]>*/;
var_args = var66;
var67 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AReassignFormExpr__n_value]))(self) /* n_value on <self:ASendReassignFormExpr>*/;
((void (*)(val*, val*))(var_args->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_args, var67) /* add on <var_args:Array[AExpr]>*/;
var68 = ((short int (*)(val*, val*, val*))(var_wcallsite->class->vft[COLOR_typing__CallSite__check_signature]))(var_wcallsite, var_v, var_args) /* check_signature on <var_wcallsite:nullable CallSite(CallSite)>*/;
var68;
var69 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var69) /* is_typed= on <self:ASendReassignFormExpr>*/;
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASendReassignFormExpr__accept_typing(val* self, val* p0) {
typing__ASendReassignFormExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ACallReassignExpr#property_name for (self: ACallReassignExpr): String */
val* typing__ACallReassignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_id]))(self) /* n_id on <self:ACallReassignExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:TId>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ACallReassignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ACallReassignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#compute_raw_arguments for (self: ACallReassignExpr): Array[AExpr] */
val* typing__ACallReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ACallFormExpr__n_args]))(self) /* n_args on <self:ACallReassignExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExprs__to_a]))(var1) /* to_a on <var1:AExprs>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ACallReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ACallReassignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#property_name for (self: ABraReassignExpr): String */
val* typing__ABraReassignExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ABraReassignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ABraReassignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#compute_raw_arguments for (self: ABraReassignExpr): Array[AExpr] */
val* typing__ABraReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ABraFormExpr__n_args]))(self) /* n_args on <self:ABraReassignExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExprs__to_a]))(var1) /* to_a on <var1:AExprs>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABraReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABraReassignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#property_name for (self: AInitExpr): String */
val* typing__AInitExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
if (varonce) {
var1 = varonce;
} else {
var2 = "init";
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
/* method typing#AInitExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AInitExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AInitExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#compute_raw_arguments for (self: AInitExpr): Array[AExpr] */
val* typing__AInitExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AInitExpr__n_args]))(self) /* n_args on <self:AInitExpr>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__AExprs__to_a]))(var1) /* to_a on <var1:AExprs>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__AInitExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__AInitExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExprs#to_a for (self: AExprs): Array[AExpr] */
val* typing__AExprs__to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var2 /* : Array[nullable Object] */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AExprs__n_exprs]))(self) /* n_exprs on <self:AExprs>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_array__Collection__to_a]))(var1) /* to_a on <var1:ANodes[AExpr]>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExprs#to_a for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__AExprs__to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__AExprs__to_a(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mproperty for (self: ASuperExpr): nullable MMethod */
val* typing__ASuperExpr__mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_typing__ASuperExpr___64dmproperty].val; /* @mproperty on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mproperty for (self: Object): nullable MMethod */
val* VIRTUAL_typing__ASuperExpr__mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__ASuperExpr__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mproperty= for (self: ASuperExpr, nullable MMethod) */
void typing__ASuperExpr__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASuperExpr___64dmproperty].val = p0; /* @mproperty on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#mproperty= for (self: Object, nullable MMethod) */
void VIRTUAL_typing__ASuperExpr__mproperty_61d(val* self, val* p0) {
typing__ASuperExpr__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method typing#ASuperExpr#accept_typing for (self: ASuperExpr, TypeVisitor) */
void typing__ASuperExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AClassdef */;
val* var1 /* : nullable MClassDef */;
val* var2 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
val* var3 /* : MPropDef */;
val* var4 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : MModule */;
val* var12 /* : Array[MPropDef] */;
val* var_superprops /* var superprops: Array[MPropDef] */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : MPropDef */;
short int var21 /* : Bool */;
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
val* var36 /* : nullable Object */;
val* var_superprop /* var superprop: MPropDef */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
short int var40 /* : Bool */;
val* var41 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var42 /* : AExprs */;
val* var43 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
short int var51 /* : Bool */;
val* var52 /* : String */;
short int var53 /* : Bool */;
val* var54 /* : nullable MType */;
short int var55 /* : Bool */;
val* var56 /* : MPropDef */;
short int var57 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(var_v) /* nclassdef on <var_v:TypeVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var) /* mclassdef on <var:AClassdef>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1454);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var1) /* bound_mtype on <var1:nullable MClassDef>*/;
}
var_recvtype = var2;
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:TypeVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mproperty]))(var3) /* mproperty on <var3:MPropDef>*/;
var_mproperty = var4;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var5 = 0;
} else {
var5 = var_mproperty->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "Error: super only usable in a method";
var9 = 36;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var7) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var11 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var12 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_super_definitions]))(var_mproperty, var11, var_recvtype) /* lookup_super_definitions on <var_mproperty:MProperty(MMethod)>*/;
var_superprops = var12;
var13 = ((long (*)(val*))(var_superprops->class->vft[COLOR_abstract_collection__Collection__length]))(var_superprops) /* length on <var_superprops:Array[MPropDef]>*/;
var14 = 0;
{ /* Inline kernel#Int#== (var13,var14) */
var17 = var13 == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
if (var15){
var19 = ((short int (*)(val*))(var_mproperty->class->vft[COLOR_model__MMethod__is_init]))(var_mproperty) /* is_init on <var_mproperty:MProperty(MMethod)>*/;
var_ = var19;
if (var19){
var20 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:TypeVisitor>*/;
var21 = ((short int (*)(val*))(var20->class->vft[COLOR_model__MPropDef__is_intro]))(var20) /* is_intro on <var20:MPropDef>*/;
var18 = var21;
} else {
var18 = var_;
}
if (var18){
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASuperExpr__process_superinit]))(self, var_v) /* process_superinit on <self:ASuperExpr>*/;
goto RET_LABEL;
} else {
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Error: No super method to call for ";
var25 = 35;
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
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
CHECK_NEW_array__Array(var32);
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var35) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var36 = ((val* (*)(val*))(var_superprops->class->vft[COLOR_abstract_collection__Collection__first]))(var_superprops) /* first on <var_superprops:Array[MPropDef]>*/;
var_superprop = var36;
/* <var_superprop:MPropDef> isa MMethodDef */
cltype38 = type_model__MMethodDef.color;
idtype39 = type_model__MMethodDef.id;
if(cltype38 >= var_superprop->type->table_size) {
var37 = 0;
} else {
var37 = var_superprop->type->type_table[cltype38] == idtype39;
}
if (!var37) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Assert failed", "src/typing.nit", 1471);
exit(1);
}
var40 = 1;
var41 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_signature_for]))(var_v, var_superprop, var_recvtype, var40) /* resolve_signature_for on <var_v:TypeVisitor>*/;
var_msignature = var41;
var42 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperExpr__n_args]))(self) /* n_args on <self:ASuperExpr>*/;
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_typing__AExprs__to_a]))(var42) /* to_a on <var42:AExprs>*/;
var_args = var43;
var44 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[AExpr]>*/;
var45 = 0;
{ /* Inline kernel#Int#> (var44,var45) */
/* Covariant cast for argument 0 (i) <var45:Int> isa OTHER */
/* <var45:Int> isa OTHER */
var48 = 1; /* easy <var45:Int> isa OTHER*/
if (!var48) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var51 = var44 > var45;
var46 = var51;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
if (var46){
var52 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MProperty(MMethod)>*/;
var53 = ((short int (*)(val*, val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__check_signature]))(var_v, self, var_args, var52, var_msignature) /* check_signature on <var_v:TypeVisitor>*/;
var53;
} else {
}
var54 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__return_mtype]))(var_msignature) /* return_mtype on <var_msignature:MSignature>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var54) /* mtype= on <self:ASuperExpr>*/;
var55 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var55) /* is_typed= on <self:ASuperExpr>*/;
var56 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:TypeVisitor>*/;
var57 = 1;
((void (*)(val*, short int))(var56->class->vft[COLOR_typing__MPropDef__has_supercall_61d]))(var56, var57) /* has_supercall= on <var56:MPropDef>*/;
RET_LABEL:;
}
/* method typing#ASuperExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASuperExpr__accept_typing(val* self, val* p0) {
typing__ASuperExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ASuperExpr#process_superinit for (self: ASuperExpr, TypeVisitor) */
void typing__ASuperExpr__process_superinit(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AClassdef */;
val* var1 /* : nullable MClassDef */;
val* var2 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
val* var3 /* : MPropDef */;
val* var4 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
val* var5 /* : null */;
val* var_superprop /* var superprop: nullable MMethodDef */;
val* var6 /* : AClassdef */;
val* var7 /* : nullable MClassDef */;
val* var8 /* : Array[MClassType] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var12 /* : MModule */;
val* var13 /* : MType */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
long var16 /* : Int */;
long var_errcount /* var errcount: Int */;
val* var17 /* : String */;
val* var18 /* : nullable MProperty */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var_candidate /* var candidate: nullable MMethod */;
val* var20 /* : null */;
short int var21 /* : Bool */;
val* var22 /* : ModelBuilder */;
val* var23 /* : ToolContext */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
val* var34 /* : MProperty */;
short int var35 /* : Bool */;
static val* varonce;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : MProperty */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var57 /* : MModule */;
val* var58 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var59 /* : null */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
short int var62 /* : Bool */;
long var63 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : nullable Object */;
val* var97 /* : null */;
short int var98 /* : Bool */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
val* var113 /* : MProperty */;
val* var114 /* : AExprs */;
val* var115 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var116 /* : Bool */;
val* var117 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
long var118 /* : Int */;
long var119 /* : Int */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
short int var125 /* : Bool */;
val* var126 /* : String */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(var_v) /* nclassdef on <var_v:TypeVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var) /* mclassdef on <var:AClassdef>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1485);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var1) /* bound_mtype on <var1:nullable MClassDef>*/;
}
var_recvtype = var2;
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:TypeVisitor>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_model__MPropDef__mproperty]))(var3) /* mproperty on <var3:MPropDef>*/;
var_mproperty = var4;
var5 = NULL;
var_superprop = var5;
var6 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(var_v) /* nclassdef on <var_v:TypeVisitor>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var6) /* mclassdef on <var6:AClassdef>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1488);
exit(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_model__MClassDef__supertypes]))(var7) /* supertypes on <var7:nullable MClassDef>*/;
}
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:Array[MClassType]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_msupertype = var11;
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var13 = ((val* (*)(val*, val*, val*))(var_msupertype->class->vft[COLOR_model__MType__anchor_to]))(var_msupertype, var12, var_recvtype) /* anchor_to on <var_msupertype:MClassType>*/;
var_msupertype = var13;
var14 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var14) /* toolcontext on <var14:ModelBuilder>*/;
var16 = ((long (*)(val*))(var15->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var15) /* error_count on <var15:ToolContext>*/;
var_errcount = var16;
var17 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MProperty>*/;
var18 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_msupertype, var17) /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/;
/* <var18:nullable MProperty> isa nullable MMethod */
cltype = type_nullable_model__MMethod.color;
idtype = type_nullable_model__MMethod.id;
if(var18 == NULL) {
var19 = 1;
} else {
if(cltype >= var18->type->table_size) {
var19 = 0;
} else {
var19 = var18->type->type_table[cltype] == idtype;
}
}
if (!var19) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/typing.nit", 1491);
exit(1);
}
var_candidate = var18;
var20 = NULL;
if (var_candidate == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (var21){
var22 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var22) /* toolcontext on <var22:ModelBuilder>*/;
var24 = ((long (*)(val*))(var23->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var23) /* error_count on <var23:ToolContext>*/;
{ /* Inline kernel#Int#> (var24,var_errcount) */
/* Covariant cast for argument 0 (i) <var_errcount:Int> isa OTHER */
/* <var_errcount:Int> isa OTHER */
var27 = 1; /* easy <var_errcount:Int> isa OTHER*/
if (!var27) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var30 = var24 > var_errcount;
var25 = var30;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
goto RET_LABEL;
} else {
}
goto CONTINUE_label;
} else {
}
var32 = NULL;
if (var_superprop == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
var_ = var33;
if (var33){
var34 = ((val* (*)(val*))(var_superprop->class->vft[COLOR_model__MPropDef__mproperty]))(var_superprop) /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
var35 = ((short int (*)(val*, val*))(var34->class->vft[COLOR_kernel__Object___33d_61d]))(var34, var_candidate) /* != on <var34:MProperty(MMethod)>*/;
var31 = var35;
} else {
var31 = var_;
}
if (var31){
if (varonce) {
var36 = varonce;
} else {
var37 = "Error: conflicting super constructor to call for ";
var38 = 49;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = ": ";
var43 = 2;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = ((val* (*)(val*))(var_candidate->class->vft[COLOR_model__MProperty__full_name]))(var_candidate) /* full_name on <var_candidate:nullable MMethod(MMethod)>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = ", ";
var49 = 2;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*))(var_superprop->class->vft[COLOR_model__MPropDef__mproperty]))(var_superprop) /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
var52 = ((val* (*)(val*))(var51->class->vft[COLOR_model__MProperty__full_name]))(var51) /* full_name on <var51:MProperty(MMethod)>*/;
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 6;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var55)->values[2] = (val*) var41;
((struct instance_array__NativeArray*)var55)->values[3] = (val*) var45;
((struct instance_array__NativeArray*)var55)->values[4] = (val*) var47;
((struct instance_array__NativeArray*)var55)->values[5] = (val*) var52;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
CHECK_NEW_array__Array(var53);
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var56) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var57 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var58 = ((val* (*)(val*, val*, val*))(var_candidate->class->vft[COLOR_model__MProperty__lookup_definitions]))(var_candidate, var57, var_recvtype) /* lookup_definitions on <var_candidate:nullable MMethod(MMethod)>*/;
var_candidatedefs = var58;
var59 = NULL;
if (var_superprop == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (var60){
var61 = ((val* (*)(val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_candidatedefs) /* first on <var_candidatedefs:Array[MMethodDef]>*/;
var62 = ((short int (*)(val*, val*))(var_superprop->class->vft[COLOR_kernel__Object___61d_61d]))(var_superprop, var61) /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
if (var62){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_candidatedefs, var_superprop) /* add on <var_candidatedefs:Array[MMethodDef]>*/;
} else {
}
var63 = ((long (*)(val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_candidatedefs) /* length on <var_candidatedefs:Array[MMethodDef]>*/;
var64 = 1;
{ /* Inline kernel#Int#> (var63,var64) */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (!var67) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var70 = var63 > var64;
var65 = var70;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
if (var65){
if (varonce71) {
var72 = varonce71;
} else {
var73 = "Error: confliting property definitions for property ";
var74 = 52;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = " in ";
var79 = 4;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = ": ";
var84 = 2;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = ", ";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
var91 = ((val* (*)(val*, val*))(var_candidatedefs->class->vft[COLOR_string__Collection__join]))(var_candidatedefs, var87) /* join on <var_candidatedefs:Array[MMethodDef]>*/;
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 6;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var72;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var77;
((struct instance_array__NativeArray*)var94)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var94)->values[4] = (val*) var82;
((struct instance_array__NativeArray*)var94)->values[5] = (val*) var91;
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
CHECK_NEW_array__Array(var92);
}
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var95) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var96 = ((val* (*)(val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_candidatedefs) /* first on <var_candidatedefs:Array[MMethodDef]>*/;
var_superprop = var96;
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var97 = NULL;
if (var_superprop == NULL) {
var98 = 1; /* is null */
} else {
var98 = 0; /* arg is null but recv is not */
}
if (var98){
if (varonce99) {
var100 = varonce99;
} else {
var101 = "Error: No super method to call for ";
var102 = 35;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = ".";
var107 = 1;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 3;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var100;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var111)->values[2] = (val*) var105;
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
CHECK_NEW_array__Array(var109);
}
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var112) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var113 = ((val* (*)(val*))(var_superprop->class->vft[COLOR_model__MPropDef__mproperty]))(var_superprop) /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASuperExpr__mproperty_61d]))(self, var113) /* mproperty= on <self:ASuperExpr>*/;
var114 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperExpr__n_args]))(self) /* n_args on <self:ASuperExpr>*/;
var115 = ((val* (*)(val*))(var114->class->vft[COLOR_typing__AExprs__to_a]))(var114) /* to_a on <var114:AExprs>*/;
var_args = var115;
var116 = 1;
var117 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_signature_for]))(var_v, var_superprop, var_recvtype, var116) /* resolve_signature_for on <var_v:TypeVisitor>*/;
var_msignature = var117;
var118 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[AExpr]>*/;
var119 = 0;
{ /* Inline kernel#Int#> (var118,var119) */
/* Covariant cast for argument 0 (i) <var119:Int> isa OTHER */
/* <var119:Int> isa OTHER */
var122 = 1; /* easy <var119:Int> isa OTHER*/
if (!var122) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var125 = var118 > var119;
var120 = var125;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
if (var120){
var126 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MProperty>*/;
var127 = ((short int (*)(val*, val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__check_signature]))(var_v, self, var_args, var126, var_msignature) /* check_signature on <var_v:TypeVisitor>*/;
var127;
} else {
}
var128 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var128) /* is_typed= on <self:ASuperExpr>*/;
RET_LABEL:;
}
/* method typing#ASuperExpr#process_superinit for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASuperExpr__process_superinit(val* self, val* p0) {
typing__ASuperExpr__process_superinit(self, p0);
RET_LABEL:;
}
/* method typing#ANewExpr#mproperty for (self: ANewExpr): nullable MMethod */
val* typing__ANewExpr__mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable CallSite */;
val* var2 /* : MMethod */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ANewExpr__callsite]))(self) /* callsite on <self:ANewExpr>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/typing.nit", 1533);
exit(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_typing__CallSite__mproperty]))(var1) /* mproperty on <var1:nullable CallSite>*/;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#mproperty for (self: Object): nullable MMethod */
val* VIRTUAL_typing__ANewExpr__mproperty(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = typing__ANewExpr__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite for (self: ANewExpr): nullable CallSite */
val* typing__ANewExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ANewExpr___64dcallsite].val; /* @callsite on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ANewExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__ANewExpr__callsite(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite= for (self: ANewExpr, nullable CallSite) */
void typing__ANewExpr__callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ANewExpr___64dcallsite].val = p0; /* @callsite on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ANewExpr__callsite_61d(val* self, val* p0) {
typing__ANewExpr__callsite_61d(self, p0);
RET_LABEL:;
}
