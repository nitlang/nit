#include "mproject.sep.0.h"
/* method mproject#MProject#name for (self: MProject): String */
val* mproject__MProject__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_mproject__MProject___64dname].val; /* @name on <self:MProject> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#name for (self: Object): String */
val* VIRTUAL_mproject__MProject__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MProject__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#name= for (self: MProject, String) */
void mproject__MProject__name_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MProject___64dname].val = p0; /* @name on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#name= for (self: Object, String) */
void VIRTUAL_mproject__MProject__name_61d(val* self, val* p0) {
mproject__MProject__name_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MProject#model for (self: MProject): Model */
val* mproject__MProject__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_mproject__MProject___64dmodel].val; /* @model on <self:MProject> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @model");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 27);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#model for (self: Object): Model */
val* VIRTUAL_mproject__MProject__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = mproject__MProject__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#model= for (self: MProject, Model) */
void mproject__MProject__model_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MProject___64dmodel].val = p0; /* @model on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#model= for (self: Object, Model) */
void VIRTUAL_mproject__MProject__model_61d(val* self, val* p0) {
mproject__MProject__model_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MProject#root for (self: MProject): nullable MGroup */
val* mproject__MProject__root(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_mproject__MProject___64droot].val; /* @root on <self:MProject> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#root for (self: Object): nullable MGroup */
val* VIRTUAL_mproject__MProject__root(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = mproject__MProject__root(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#root= for (self: MProject, nullable MGroup) */
void mproject__MProject__root_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MProject___64droot].val = p0; /* @root on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#root= for (self: Object, nullable MGroup) */
void VIRTUAL_mproject__MProject__root_61d(val* self, val* p0) {
mproject__MProject__root_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MProject#mgroups for (self: MProject): POSet[MGroup] */
val* mproject__MProject__mgroups(val* self) {
val* var /* : POSet[MGroup] */;
val* var1 /* : POSet[MGroup] */;
var1 = self->attrs[COLOR_mproject__MProject___64dmgroups].val; /* @mgroups on <self:MProject> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mgroups");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 33);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#mgroups for (self: Object): POSet[MGroup] */
val* VIRTUAL_mproject__MProject__mgroups(val* self) {
val* var /* : POSet[MGroup] */;
val* var1 /* : POSet[MGroup] */;
var1 = mproject__MProject__mgroups(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#mgroups= for (self: MProject, POSet[MGroup]) */
void mproject__MProject__mgroups_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MProject___64dmgroups].val = p0; /* @mgroups on <self:MProject> */
RET_LABEL:;
}
/* method mproject#MProject#mgroups= for (self: Object, POSet[MGroup]) */
void VIRTUAL_mproject__MProject__mgroups_61d(val* self, val* p0) {
mproject__MProject__mgroups_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MProject#to_s for (self: MProject): String */
val* mproject__MProject__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mproject__MProject__name]))(self) /* name on <self:MProject>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MProject#to_s for (self: Object): String */
val* VIRTUAL_mproject__MProject__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MProject__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MProject#init for (self: MProject, String, Model) */
void mproject__MProject__init(val* self, val* p0, val* p1) {
val* var_name /* var name: String */;
val* var_model /* var model: Model */;
val* var /* : Array[MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
var_name = p0;
var_model = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_mproject__MProject__name_61d]))(self, var_name) /* name= on <self:MProject>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mproject__MProject__model_61d]))(self, var_model) /* model= on <self:MProject>*/;
var = ((val* (*)(val*))(var_model->class->vft[COLOR_mproject__Model__mprojects]))(var_model) /* mprojects on <var_model:Model>*/;
((void (*)(val*, val*))(var->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var, self) /* add on <var:Array[MProject]>*/;
var1 = ((val* (*)(val*))(var_model->class->vft[COLOR_mproject__Model__mproject_by_name]))(var_model) /* mproject_by_name on <var_model:Model>*/;
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_more_collections__MultiHashMap__add_one]))(var1, var_name, self) /* add_one on <var1:MultiHashMap[String, MProject]>*/;
RET_LABEL:;
}
/* method mproject#MProject#init for (self: Object, String, Model) */
void VIRTUAL_mproject__MProject__init(val* self, val* p0, val* p1) {
mproject__MProject__init(self, p0, p1);
RET_LABEL:;
}
/* method mproject#MGroup#name for (self: MGroup): String */
val* mproject__MGroup__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_mproject__MGroup___64dname].val; /* @name on <self:MGroup> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @name");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 49);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#name for (self: Object): String */
val* VIRTUAL_mproject__MGroup__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MGroup__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#name= for (self: MGroup, String) */
void mproject__MGroup__name_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___64dname].val = p0; /* @name on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#name= for (self: Object, String) */
void VIRTUAL_mproject__MGroup__name_61d(val* self, val* p0) {
mproject__MGroup__name_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MGroup#mproject for (self: MGroup): MProject */
val* mproject__MGroup__mproject(val* self) {
val* var /* : MProject */;
val* var1 /* : MProject */;
var1 = self->attrs[COLOR_mproject__MGroup___64dmproject].val; /* @mproject on <self:MGroup> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproject");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 53);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#mproject for (self: Object): MProject */
val* VIRTUAL_mproject__MGroup__mproject(val* self) {
val* var /* : MProject */;
val* var1 /* : MProject */;
var1 = mproject__MGroup__mproject(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#mproject= for (self: MGroup, MProject) */
void mproject__MGroup__mproject_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___64dmproject].val = p0; /* @mproject on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#mproject= for (self: Object, MProject) */
void VIRTUAL_mproject__MGroup__mproject_61d(val* self, val* p0) {
mproject__MGroup__mproject_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MGroup#parent for (self: MGroup): nullable MGroup */
val* mproject__MGroup__parent(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = self->attrs[COLOR_mproject__MGroup___64dparent].val; /* @parent on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#parent for (self: Object): nullable MGroup */
val* VIRTUAL_mproject__MGroup__parent(val* self) {
val* var /* : nullable MGroup */;
val* var1 /* : nullable MGroup */;
var1 = mproject__MGroup__parent(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#parent= for (self: MGroup, nullable MGroup) */
void mproject__MGroup__parent_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___64dparent].val = p0; /* @parent on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#parent= for (self: Object, nullable MGroup) */
void VIRTUAL_mproject__MGroup__parent_61d(val* self, val* p0) {
mproject__MGroup__parent_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MGroup#full_name for (self: MGroup): String */
val* mproject__MGroup__full_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable MGroup */;
val* var_p /* var p: nullable MGroup */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mproject__MGroup__parent]))(self) /* parent on <self:MGroup>*/;
var_p = var1;
var2 = NULL;
if (var_p == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_mproject__MGroup__name]))(self) /* name on <self:MGroup>*/;
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
var6 = 5;
((void (*)(val*, long))(var5->class->vft[COLOR_array__Array__with_capacity]))(var5, var6) /* with_capacity on <var5:Array[Object]>*/;
var_ = var5;
if (varonce) {
var7 = varonce;
} else {
var8 = "";
var9 = 0;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var7) /* add on <var_:Array[Object]>*/;
var11 = ((val* (*)(val*))(var_p->class->vft[COLOR_mproject__MGroup__full_name]))(var_p) /* full_name on <var_p:nullable MGroup(MGroup)>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var11) /* add on <var_:Array[Object]>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "/";
var15 = 1;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var13) /* add on <var_:Array[Object]>*/;
var17 = ((val* (*)(val*))(self->class->vft[COLOR_mproject__MGroup__name]))(self) /* name on <self:MGroup>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var17) /* add on <var_:Array[Object]>*/;
if (varonce18) {
var19 = varonce18;
} else {
var20 = "";
var21 = 0;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var19) /* add on <var_:Array[Object]>*/;
var23 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#full_name for (self: Object): String */
val* VIRTUAL_mproject__MGroup__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MGroup__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#in_nesting for (self: MGroup): POSetElement[MGroup] */
val* mproject__MGroup__in_nesting(val* self) {
val* var /* : POSetElement[MGroup] */;
val* var1 /* : POSetElement[MGroup] */;
var1 = self->attrs[COLOR_mproject__MGroup___64din_nesting].val; /* @in_nesting on <self:MGroup> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @in_nesting");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 68);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#in_nesting for (self: Object): POSetElement[MGroup] */
val* VIRTUAL_mproject__MGroup__in_nesting(val* self) {
val* var /* : POSetElement[MGroup] */;
val* var1 /* : POSetElement[MGroup] */;
var1 = mproject__MGroup__in_nesting(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#in_nesting= for (self: MGroup, POSetElement[MGroup]) */
void mproject__MGroup__in_nesting_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___64din_nesting].val = p0; /* @in_nesting on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#in_nesting= for (self: Object, POSetElement[MGroup]) */
void VIRTUAL_mproject__MGroup__in_nesting_61d(val* self, val* p0) {
mproject__MGroup__in_nesting_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MGroup#filepath for (self: MGroup): nullable String */
val* mproject__MGroup__filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_mproject__MGroup___64dfilepath].val; /* @filepath on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#filepath for (self: Object): nullable String */
val* VIRTUAL_mproject__MGroup__filepath(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = mproject__MGroup__filepath(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#filepath= for (self: MGroup, nullable String) */
void mproject__MGroup__filepath_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__MGroup___64dfilepath].val = p0; /* @filepath on <self:MGroup> */
RET_LABEL:;
}
/* method mproject#MGroup#filepath= for (self: Object, nullable String) */
void VIRTUAL_mproject__MGroup__filepath_61d(val* self, val* p0) {
mproject__MGroup__filepath_61d(self, p0);
RET_LABEL:;
}
/* method mproject#MGroup#init for (self: MGroup, String, MProject, nullable MGroup) */
void mproject__MGroup__init(val* self, val* p0, val* p1, val* p2) {
val* var_name /* var name: String */;
val* var_mproject /* var mproject: MProject */;
val* var_parent /* var parent: nullable MGroup */;
val* var /* : POSet[MGroup] */;
val* var_tree /* var tree: POSet[MGroup] */;
val* var1 /* : POSetElement[Object] */;
val* var2 /* : null */;
short int var3 /* : Bool */;
var_name = p0;
var_mproject = p1;
var_parent = p2;
((void (*)(val*, val*))(self->class->vft[COLOR_mproject__MGroup__name_61d]))(self, var_name) /* name= on <self:MGroup>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mproject__MGroup__mproject_61d]))(self, var_mproject) /* mproject= on <self:MGroup>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mproject__MGroup__parent_61d]))(self, var_parent) /* parent= on <self:MGroup>*/;
var = ((val* (*)(val*))(var_mproject->class->vft[COLOR_mproject__MProject__mgroups]))(var_mproject) /* mgroups on <var_mproject:MProject>*/;
var_tree = var;
var1 = ((val* (*)(val*, val*))(var_tree->class->vft[COLOR_poset__POSet__add_node]))(var_tree, self) /* add_node on <var_tree:POSet[MGroup]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_mproject__MGroup__in_nesting_61d]))(self, var1) /* in_nesting= on <self:MGroup>*/;
var2 = NULL;
if (var_parent == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
((void (*)(val*, val*, val*))(var_tree->class->vft[COLOR_poset__POSet__add_edge]))(var_tree, self, var_parent) /* add_edge on <var_tree:POSet[MGroup]>*/;
} else {
}
RET_LABEL:;
}
/* method mproject#MGroup#init for (self: Object, String, MProject, nullable MGroup) */
void VIRTUAL_mproject__MGroup__init(val* self, val* p0, val* p1, val* p2) {
mproject__MGroup__init(self, p0, p1, p2);
RET_LABEL:;
}
/* method mproject#MGroup#to_s for (self: MGroup): String */
val* mproject__MGroup__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mproject__MGroup__name]))(self) /* name on <self:MGroup>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mproject#MGroup#to_s for (self: Object): String */
val* VIRTUAL_mproject__MGroup__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = mproject__MGroup__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mprojects for (self: Model): Array[MProject] */
val* mproject__Model__mprojects(val* self) {
val* var /* : Array[MProject] */;
val* var1 /* : Array[MProject] */;
var1 = self->attrs[COLOR_mproject__Model___64dmprojects].val; /* @mprojects on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mprojects");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 92);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mprojects for (self: Object): Array[MProject] */
val* VIRTUAL_mproject__Model__mprojects(val* self) {
val* var /* : Array[MProject] */;
val* var1 /* : Array[MProject] */;
var1 = mproject__Model__mprojects(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mprojects= for (self: Model, Array[MProject]) */
void mproject__Model__mprojects_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__Model___64dmprojects].val = p0; /* @mprojects on <self:Model> */
RET_LABEL:;
}
/* method mproject#Model#mprojects= for (self: Object, Array[MProject]) */
void VIRTUAL_mproject__Model__mprojects_61d(val* self, val* p0) {
mproject__Model__mprojects_61d(self, p0);
RET_LABEL:;
}
/* method mproject#Model#mproject_by_name for (self: Model): MultiHashMap[String, MProject] */
val* mproject__Model__mproject_by_name(val* self) {
val* var /* : MultiHashMap[String, MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
var1 = self->attrs[COLOR_mproject__Model___64dmproject_by_name].val; /* @mproject_by_name on <self:Model> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mproject_by_name");
fprintf(stderr, " (%s:%d)\n", "src/model/mproject.nit", 95);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mproject_by_name for (self: Object): MultiHashMap[String, MProject] */
val* VIRTUAL_mproject__Model__mproject_by_name(val* self) {
val* var /* : MultiHashMap[String, MProject] */;
val* var1 /* : MultiHashMap[String, MProject] */;
var1 = mproject__Model__mproject_by_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method mproject#Model#mproject_by_name= for (self: Model, MultiHashMap[String, MProject]) */
void mproject__Model__mproject_by_name_61d(val* self, val* p0) {
self->attrs[COLOR_mproject__Model___64dmproject_by_name].val = p0; /* @mproject_by_name on <self:Model> */
RET_LABEL:;
}
/* method mproject#Model#mproject_by_name= for (self: Object, MultiHashMap[String, MProject]) */
void VIRTUAL_mproject__Model__mproject_by_name_61d(val* self, val* p0) {
mproject__Model__mproject_by_name_61d(self, p0);
RET_LABEL:;
}
/* method mproject#Model#get_mprojects_by_name for (self: Model, String): nullable Array[MProject] */
val* mproject__Model__get_mprojects_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProject] */;
val* var_name /* var name: String */;
val* var1 /* : MultiHashMap[String, MProject] */;
short int var2 /* : Bool */;
val* var3 /* : MultiHashMap[String, MProject] */;
val* var4 /* : nullable Object */;
val* var5 /* : null */;
var_name = p0;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_mproject__Model__mproject_by_name]))(self) /* mproject_by_name on <self:Model>*/;
var2 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var1, var_name) /* has_key on <var1:MultiHashMap[String, MProject]>*/;
if (var2){
var3 = ((val* (*)(val*))(self->class->vft[COLOR_mproject__Model__mproject_by_name]))(self) /* mproject_by_name on <self:Model>*/;
var4 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var3, var_name) /* [] on <var3:MultiHashMap[String, MProject]>*/;
var = var4;
goto RET_LABEL;
} else {
var5 = NULL;
var = var5;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method mproject#Model#get_mprojects_by_name for (self: Object, String): nullable Array[MProject] */
val* VIRTUAL_mproject__Model__get_mprojects_by_name(val* self, val* p0) {
val* var /* : nullable Array[MProject] */;
val* var1 /* : nullable Array[MProject] */;
var1 = mproject__Model__get_mprojects_by_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
