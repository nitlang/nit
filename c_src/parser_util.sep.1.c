#include "parser_util.sep.0.h"
/* method parser_util#ToolContext#parse_module for (self: ToolContext, String): AModule */
val* parser_util__ToolContext__parse_module(val* self, val* p0) {
val* var /* : AModule */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_source /* var source: SourceFile */;
val* var6 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var7 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var8 /* : Start */;
val* var_tree /* var tree: Start */;
val* var9 /* : EOF */;
val* var_eof /* var eof: EOF */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : null */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
val* var22 /* : nullable AModule */;
var_string = p0;
var1 = NEW_location__SourceFile(&type_location__SourceFile);
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_location__SourceFile__from_string]))(var1, var2, var_string) /* from_string on <var1:SourceFile>*/;
CHECK_NEW_location__SourceFile(var1);
var_source = var1;
var6 = NEW_lexer__Lexer(&type_lexer__Lexer);
((void (*)(val*, val*))(var6->class->vft[COLOR_lexer__Lexer__init]))(var6, var_source) /* init on <var6:Lexer>*/;
CHECK_NEW_lexer__Lexer(var6);
var_lexer = var6;
var7 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var7->class->vft[COLOR_parser__Parser__init]))(var7, var_lexer) /* init on <var7:Parser>*/;
CHECK_NEW_parser__Parser(var7);
var_parser = var7;
var8 = ((val* (*)(val*))(var_parser->class->vft[COLOR_parser__Parser__parse]))(var_parser) /* parse on <var_parser:Parser>*/;
var_tree = var8;
var9 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:Start>*/;
var_eof = var9;
/* <var_eof:EOF> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_eof->type->table_size) {
var10 = 0;
} else {
var10 = var_eof->type->type_table[cltype] == idtype;
}
if (var10){
var11 = NULL;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "Fatal Error: ";
var15 = 13;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var17 = ((val* (*)(val*))(var_eof->class->vft[COLOR_lexer__AError__message]))(var_eof) /* message on <var_eof:EOF(AError)>*/;
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var17;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
CHECK_NEW_array__Array(var18);
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(self, var11, var21) /* fatal_error on <self:ToolContext>*/;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser_util.nit", 34);
exit(1);
} else {
}
var22 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:Start>*/;
if (var22 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 36);
exit(1);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_module for (self: Object, String): AModule */
val* VIRTUAL_parser_util__ToolContext__parse_module(val* self, val* p0) {
val* var /* : AModule */;
val* var1 /* : AModule */;
var1 = parser_util__ToolContext__parse_module(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_classdef for (self: ToolContext, String): AClassdef */
val* parser_util__ToolContext__parse_classdef(val* self, val* p0) {
val* var /* : AClassdef */;
val* var_string /* var string: String */;
val* var1 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var2 /* : ANodes[AClassdef] */;
val* var_nclassdefs /* var nclassdefs: ANodes[AClassdef] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
val* var14 /* : nullable Object */;
var_string = p0;
var1 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_module]))(self, var_string) /* parse_module on <self:ToolContext>*/;
var_nmodule = var1;
var2 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var_nclassdefs = var2;
var3 = ((long (*)(val*))(var_nclassdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_nclassdefs) /* length on <var_nclassdefs:ANodes[AClassdef]>*/;
var4 = 1;
{ /* Inline kernel#Int#!= (var3,var4) */
var7 = var3 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
if (var5){
var9 = NULL;
if (varonce) {
var10 = varonce;
} else {
var11 = "Fatal Error: not a classdef";
var12 = 27;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(self, var9, var10) /* fatal_error on <self:ToolContext>*/;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser_util.nit", 47);
exit(1);
} else {
}
var14 = ((val* (*)(val*))(var_nclassdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_nclassdefs) /* first on <var_nclassdefs:ANodes[AClassdef]>*/;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_classdef for (self: Object, String): AClassdef */
val* VIRTUAL_parser_util__ToolContext__parse_classdef(val* self, val* p0) {
val* var /* : AClassdef */;
val* var1 /* : AClassdef */;
var1 = parser_util__ToolContext__parse_classdef(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_propdef for (self: ToolContext, String): APropdef */
val* parser_util__ToolContext__parse_propdef(val* self, val* p0) {
val* var /* : APropdef */;
val* var_string /* var string: String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var12 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var13 /* : AClassdef */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var14 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : null */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
val* var27 /* : nullable Object */;
var_string = p0;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "class Dummy\n";
var5 = 12;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_string) /* add on <var_:Array[Object]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "\nend";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_mod_string = var12;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_classdef]))(self, var_mod_string) /* parse_classdef on <self:ToolContext>*/;
var_nclassdef = var13;
var14 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var_npropdefs = var14;
var15 = ((long (*)(val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_npropdefs) /* length on <var_npropdefs:ANodes[APropdef]>*/;
var16 = 1;
{ /* Inline kernel#Int#!= (var15,var16) */
var19 = var15 == var16;
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
if (var17){
var21 = NULL;
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Fatal Error: not a propdef";
var25 = 26;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_toolcontext__ToolContext__fatal_error]))(self, var21, var23) /* fatal_error on <self:ToolContext>*/;
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Aborted", "src/parser_util.nit", 61);
exit(1);
} else {
}
var27 = ((val* (*)(val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_npropdefs) /* first on <var_npropdefs:ANodes[APropdef]>*/;
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_propdef for (self: Object, String): APropdef */
val* VIRTUAL_parser_util__ToolContext__parse_propdef(val* self, val* p0) {
val* var /* : APropdef */;
val* var1 /* : APropdef */;
var1 = parser_util__ToolContext__parse_propdef(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_stmts for (self: ToolContext, String): AExpr */
val* parser_util__ToolContext__parse_stmts(val* self, val* p0) {
val* var /* : AExpr */;
val* var_string /* var string: String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var12 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var13 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var14 /* : ANodes[AClassdef] */;
val* var15 /* : nullable Object */;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ANodes[AExpr] */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AExpr */;
val* var_nblock /* var nblock: AExpr */;
var_string = p0;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "do\n";
var5 = 3;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_string) /* add on <var_:Array[Object]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "\nend";
var10 = 4;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_mod_string = var12;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_module]))(self, var_mod_string) /* parse_module on <self:ToolContext>*/;
var_nmodule = var13;
var14 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__first]))(var14) /* first on <var14:ANodes[AClassdef]>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var15) /* n_propdefs on <var15:nullable Object(AClassdef)>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__first]))(var16) /* first on <var16:ANodes[APropdef]>*/;
/* <var17:nullable Object(APropdef)> isa AMainMethPropdef */
cltype = type_parser_nodes__AMainMethPropdef.color;
idtype = type_parser_nodes__AMainMethPropdef.id;
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 72);
exit(1);
}
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var17) /* n_block on <var17:APropdef(AMainMethPropdef)>*/;
/* <var19:nullable AExpr> isa ABlockExpr */
cltype21 = type_parser_nodes__ABlockExpr.color;
idtype22 = type_parser_nodes__ABlockExpr.id;
if(var19 == NULL) {
var20 = 0;
} else {
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 72);
exit(1);
}
var23 = ((val* (*)(val*))(var19->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var19) /* n_expr on <var19:nullable AExpr(ABlockExpr)>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Collection__first]))(var23) /* first on <var23:ANodes[AExpr]>*/;
/* <var24:nullable Object(AExpr)> isa ADoExpr */
cltype26 = type_parser_nodes__ADoExpr.color;
idtype27 = type_parser_nodes__ADoExpr.id;
if(cltype26 >= var24->type->table_size) {
var25 = 0;
} else {
var25 = var24->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 72);
exit(1);
}
var28 = ((val* (*)(val*))(var24->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(var24) /* n_block on <var24:AExpr(ADoExpr)>*/;
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 72);
exit(1);
}
var_nblock = var28;
var = var_nblock;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_stmts for (self: Object, String): AExpr */
val* VIRTUAL_parser_util__ToolContext__parse_stmts(val* self, val* p0) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_util__ToolContext__parse_stmts(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_expr for (self: ToolContext, String): AExpr */
val* parser_util__ToolContext__parse_expr(val* self, val* p0) {
val* var /* : AExpr */;
val* var_string /* var string: String */;
val* var1 /* : Array[Object] */;
long var2 /* : Int */;
val* var_ /* var : Array[Object] */;
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
val* var12 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var13 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var14 /* : ANodes[AClassdef] */;
val* var15 /* : nullable Object */;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype;
int idtype;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : ANodes[AExpr] */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
var_string = p0;
var1 = NEW_array__Array(&type_array__Arraykernel__Object);
var2 = 3;
((void (*)(val*, long))(var1->class->vft[COLOR_array__Array__with_capacity]))(var1, var2) /* with_capacity on <var1:Array[Object]>*/;
CHECK_NEW_array__Array(var1);
var_ = var1;
if (varonce) {
var3 = varonce;
} else {
var4 = "var dummy = \n";
var5 = 13;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var3) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_string) /* add on <var_:Array[Object]>*/;
if (varonce7) {
var8 = varonce7;
} else {
var9 = "";
var10 = 0;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var8) /* add on <var_:Array[Object]>*/;
var12 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_mod_string = var12;
var13 = ((val* (*)(val*, val*))(self->class->vft[COLOR_parser_util__ToolContext__parse_module]))(self, var_mod_string) /* parse_module on <self:ToolContext>*/;
var_nmodule = var13;
var14 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var15 = ((val* (*)(val*))(var14->class->vft[COLOR_abstract_collection__Collection__first]))(var14) /* first on <var14:ANodes[AClassdef]>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var15) /* n_propdefs on <var15:nullable Object(AClassdef)>*/;
var17 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Collection__first]))(var16) /* first on <var16:ANodes[APropdef]>*/;
/* <var17:nullable Object(APropdef)> isa AMainMethPropdef */
cltype = type_parser_nodes__AMainMethPropdef.color;
idtype = type_parser_nodes__AMainMethPropdef.id;
if(cltype >= var17->type->table_size) {
var18 = 0;
} else {
var18 = var17->type->type_table[cltype] == idtype;
}
if (!var18) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 82);
exit(1);
}
var19 = ((val* (*)(val*))(var17->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var17) /* n_block on <var17:APropdef(AMainMethPropdef)>*/;
/* <var19:nullable AExpr> isa ABlockExpr */
cltype21 = type_parser_nodes__ABlockExpr.color;
idtype22 = type_parser_nodes__ABlockExpr.id;
if(var19 == NULL) {
var20 = 0;
} else {
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 82);
exit(1);
}
var23 = ((val* (*)(val*))(var19->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var19) /* n_expr on <var19:nullable AExpr(ABlockExpr)>*/;
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Collection__first]))(var23) /* first on <var23:ANodes[AExpr]>*/;
/* <var24:nullable Object(AExpr)> isa AVardeclExpr */
cltype26 = type_parser_nodes__AVardeclExpr.color;
idtype27 = type_parser_nodes__AVardeclExpr.id;
if(cltype26 >= var24->type->table_size) {
var25 = 0;
} else {
var25 = var24->type->type_table[cltype26] == idtype27;
}
if (!var25) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 82);
exit(1);
}
var28 = ((val* (*)(val*))(var24->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(var24) /* n_expr on <var24:AExpr(AVardeclExpr)>*/;
if (var28 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 82);
exit(1);
}
var_nexpr = var28;
var = var_nexpr;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_expr for (self: Object, String): AExpr */
val* VIRTUAL_parser_util__ToolContext__parse_expr(val* self, val* p0) {
val* var /* : AExpr */;
val* var1 /* : AExpr */;
var1 = parser_util__ToolContext__parse_expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_something for (self: ToolContext, String): ANode */
val* parser_util__ToolContext__parse_something(val* self, val* p0) {
val* var /* : ANode */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
val* var_source /* var source: SourceFile */;
val* var6 /* : InjectedLexer */;
val* var_lexer /* var lexer: nullable Object */;
val* var7 /* : List[Token] */;
val* var8 /* : TKwvar */;
val* var9 /* : List[Token] */;
val* var10 /* : TId */;
val* var11 /* : List[Token] */;
val* var12 /* : TColumn */;
val* var13 /* : List[Token] */;
val* var14 /* : TClassid */;
val* var15 /* : List[Token] */;
val* var16 /* : TObra */;
val* var17 /* : List[Token] */;
val* var18 /* : TCbra */;
val* var19 /* : Parser */;
val* var20 /* : Start */;
val* var_tree /* var tree: nullable Object */;
val* var21 /* : EOF */;
val* var_eof /* var eof: nullable Object */;
short int var22 /* : Bool */;
int cltype;
int idtype;
short int var23 /* : Bool */;
val* var24 /* : nullable AModule */;
val* var25 /* : ANodes[AClassdef] */;
val* var26 /* : nullable Object */;
val* var27 /* : ANodes[APropdef] */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
val* var32 /* : nullable AExpr */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : ANodes[AExpr] */;
val* var37 /* : nullable Object */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : nullable AType */;
val* var42 /* : ANodes[AType] */;
val* var43 /* : nullable Object */;
val* var_ntype /* var ntype: AType */;
val* var_error /* var error: nullable Object */;
val* var44 /* : Lexer */;
val* var45 /* : Token */;
val* var_first /* var first: Token */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
short int var49 /* : Bool */;
val* var50 /* : Token */;
val* var_second /* var second: Token */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var_ /* var : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
short int var58 /* : Bool */;
val* var59 /* : InjectedLexer */;
val* var60 /* : List[Token] */;
val* var61 /* : TKwvar */;
val* var62 /* : List[Token] */;
val* var63 /* : TId */;
val* var64 /* : List[Token] */;
val* var65 /* : TAssign */;
val* var66 /* : List[Token] */;
val* var67 /* : TOpar */;
val* var68 /* : List[Token] */;
val* var69 /* : TCpar */;
val* var70 /* : Parser */;
val* var71 /* : Start */;
val* var72 /* : EOF */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
short int var76 /* : Bool */;
val* var77 /* : nullable AModule */;
val* var78 /* : ANodes[AClassdef] */;
val* var79 /* : nullable Object */;
val* var80 /* : ANodes[APropdef] */;
val* var81 /* : nullable Object */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
val* var85 /* : nullable AExpr */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
val* var89 /* : ANodes[AExpr] */;
val* var90 /* : nullable Object */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
val* var94 /* : nullable AExpr */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
val* var98 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
val* var99 /* : Location */;
val* var100 /* : Location */;
short int var101 /* : Bool */;
val* var102 /* : InjectedLexer */;
val* var103 /* : List[Token] */;
val* var104 /* : TKwdo */;
val* var105 /* : List[Token] */;
val* var106 /* : TKwend */;
val* var107 /* : Parser */;
val* var108 /* : Start */;
val* var109 /* : EOF */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
short int var113 /* : Bool */;
val* var114 /* : nullable AModule */;
val* var115 /* : ANodes[AClassdef] */;
val* var116 /* : nullable Object */;
val* var117 /* : ANodes[APropdef] */;
val* var118 /* : nullable Object */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
val* var122 /* : nullable AExpr */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
val* var126 /* : ANodes[AExpr] */;
val* var127 /* : nullable Object */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
val* var131 /* : nullable AExpr */;
val* var_nblock /* var nblock: AExpr */;
val* var132 /* : Location */;
val* var133 /* : Location */;
short int var134 /* : Bool */;
val* var135 /* : Lexer */;
val* var136 /* : Parser */;
val* var137 /* : Start */;
val* var138 /* : EOF */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
short int var142 /* : Bool */;
val* var143 /* : nullable AModule */;
val* var144 /* : Location */;
val* var145 /* : Location */;
short int var146 /* : Bool */;
var_string = p0;
var1 = NEW_location__SourceFile(&type_location__SourceFile);
if (varonce) {
var2 = varonce;
} else {
var3 = "";
var4 = 0;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*, val*))(var1->class->vft[COLOR_location__SourceFile__from_string]))(var1, var2, var_string) /* from_string on <var1:SourceFile>*/;
CHECK_NEW_location__SourceFile(var1);
var_source = var1;
var6 = NEW_parser_util__InjectedLexer(&type_parser_util__InjectedLexer);
((void (*)(val*, val*))(var6->class->vft[COLOR_lexer__Lexer__init]))(var6, var_source) /* init on <var6:InjectedLexer>*/;
CHECK_NEW_parser_util__InjectedLexer(var6);
var_lexer = var6;
var7 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var8 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
((void (*)(val*))(var8->class->vft[COLOR_parser_nodes__TKwvar__init]))(var8) /* init on <var8:TKwvar>*/;
CHECK_NEW_parser_nodes__TKwvar(var8);
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var8) /* add on <var7:List[Token]>*/;
var9 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var10 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*))(var10->class->vft[COLOR_parser_nodes__TId__init]))(var10) /* init on <var10:TId>*/;
CHECK_NEW_parser_nodes__TId(var10);
((void (*)(val*, val*))(var9->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var9, var10) /* add on <var9:List[Token]>*/;
var11 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var12 = NEW_parser_nodes__TColumn(&type_parser_nodes__TColumn);
((void (*)(val*))(var12->class->vft[COLOR_parser_nodes__TColumn__init]))(var12) /* init on <var12:TColumn>*/;
CHECK_NEW_parser_nodes__TColumn(var12);
((void (*)(val*, val*))(var11->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var11, var12) /* add on <var11:List[Token]>*/;
var13 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var14 = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
((void (*)(val*))(var14->class->vft[COLOR_parser_nodes__TClassid__init]))(var14) /* init on <var14:TClassid>*/;
CHECK_NEW_parser_nodes__TClassid(var14);
((void (*)(val*, val*))(var13->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var13, var14) /* add on <var13:List[Token]>*/;
var15 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var16 = NEW_parser_nodes__TObra(&type_parser_nodes__TObra);
((void (*)(val*))(var16->class->vft[COLOR_parser_nodes__TObra__init]))(var16) /* init on <var16:TObra>*/;
CHECK_NEW_parser_nodes__TObra(var16);
((void (*)(val*, val*))(var15->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var15, var16) /* add on <var15:List[Token]>*/;
var17 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(var_lexer) /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/;
var18 = NEW_parser_nodes__TCbra(&type_parser_nodes__TCbra);
((void (*)(val*))(var18->class->vft[COLOR_parser_nodes__TCbra__init]))(var18) /* init on <var18:TCbra>*/;
CHECK_NEW_parser_nodes__TCbra(var18);
((void (*)(val*, val*))(var17->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var17, var18) /* add on <var17:List[Token]>*/;
var19 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var19->class->vft[COLOR_parser__Parser__init]))(var19, var_lexer) /* init on <var19:Parser>*/;
CHECK_NEW_parser__Parser(var19);
var20 = ((val* (*)(val*))(var19->class->vft[COLOR_parser__Parser__parse]))(var19) /* parse on <var19:Parser>*/;
var_tree = var20;
var21 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var21;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype = type_parser_nodes__AError.color;
idtype = type_parser_nodes__AError.id;
if(cltype >= var_eof->type->table_size) {
var22 = 0;
} else {
var22 = var_eof->type->type_table[cltype] == idtype;
}
var23 = !var22;
if (var23){
var24 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var24 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser_util.nit", 114);
exit(1);
} else {
var25 = ((val* (*)(val*))(var24->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var24) /* n_classdefs on <var24:nullable AModule>*/;
}
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Collection__first]))(var25) /* first on <var25:ANodes[AClassdef]>*/;
var27 = ((val* (*)(val*))(var26->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var26) /* n_propdefs on <var26:nullable Object(AClassdef)>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_abstract_collection__Collection__first]))(var27) /* first on <var27:ANodes[APropdef]>*/;
/* <var28:nullable Object(APropdef)> isa AMainMethPropdef */
cltype30 = type_parser_nodes__AMainMethPropdef.color;
idtype31 = type_parser_nodes__AMainMethPropdef.id;
if(cltype30 >= var28->type->table_size) {
var29 = 0;
} else {
var29 = var28->type->type_table[cltype30] == idtype31;
}
if (!var29) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 114);
exit(1);
}
var32 = ((val* (*)(val*))(var28->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var28) /* n_block on <var28:APropdef(AMainMethPropdef)>*/;
/* <var32:nullable AExpr> isa ABlockExpr */
cltype34 = type_parser_nodes__ABlockExpr.color;
idtype35 = type_parser_nodes__ABlockExpr.id;
if(var32 == NULL) {
var33 = 0;
} else {
if(cltype34 >= var32->type->table_size) {
var33 = 0;
} else {
var33 = var32->type->type_table[cltype34] == idtype35;
}
}
if (!var33) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 114);
exit(1);
}
var36 = ((val* (*)(val*))(var32->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var32) /* n_expr on <var32:nullable AExpr(ABlockExpr)>*/;
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_abstract_collection__Collection__first]))(var36) /* first on <var36:ANodes[AExpr]>*/;
/* <var37:nullable Object(AExpr)> isa AVardeclExpr */
cltype39 = type_parser_nodes__AVardeclExpr.color;
idtype40 = type_parser_nodes__AVardeclExpr.id;
if(cltype39 >= var37->type->table_size) {
var38 = 0;
} else {
var38 = var37->type->type_table[cltype39] == idtype40;
}
if (!var38) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 114);
exit(1);
}
var41 = ((val* (*)(val*))(var37->class->vft[COLOR_parser_nodes__AVardeclExpr__n_type]))(var37) /* n_type on <var37:AExpr(AVardeclExpr)>*/;
if (var41 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser_util.nit", 114);
exit(1);
} else {
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_parser_nodes__AType__n_types]))(var41) /* n_types on <var41:nullable AType>*/;
}
var43 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Collection__first]))(var42) /* first on <var42:ANodes[AType]>*/;
var_ntype = var43;
var = var_ntype;
goto RET_LABEL;
} else {
}
var_error = var_eof;
var44 = NEW_lexer__Lexer(&type_lexer__Lexer);
((void (*)(val*, val*))(var44->class->vft[COLOR_lexer__Lexer__init]))(var44, var_source) /* init on <var44:Lexer>*/;
CHECK_NEW_lexer__Lexer(var44);
var_lexer = var44;
var45 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:nullable Object(Lexer)>*/;
var_first = var45;
/* <var_first:Token> isa EOF */
cltype47 = type_parser_nodes__EOF.color;
idtype48 = type_parser_nodes__EOF.id;
if(cltype47 >= var_first->type->table_size) {
var46 = 0;
} else {
var46 = var_first->type->type_table[cltype47] == idtype48;
}
var49 = !var46;
if (var49){
var50 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_lexer__Lexer__next]))(var_lexer) /* next on <var_lexer:nullable Object(Lexer)>*/;
var_second = var50;
/* <var_second:Token> isa EOF */
cltype53 = type_parser_nodes__EOF.color;
idtype54 = type_parser_nodes__EOF.id;
if(cltype53 >= var_second->type->table_size) {
var52 = 0;
} else {
var52 = var_second->type->type_table[cltype53] == idtype54;
}
var_ = var52;
if (var52){
/* <var_second:Token(EOF)> isa AError */
cltype56 = type_parser_nodes__AError.color;
idtype57 = type_parser_nodes__AError.id;
if(cltype56 >= var_second->type->table_size) {
var55 = 0;
} else {
var55 = var_second->type->type_table[cltype56] == idtype57;
}
var58 = !var55;
var51 = var58;
} else {
var51 = var_;
}
if (var51){
var = var_first;
goto RET_LABEL;
} else {
}
} else {
}
var59 = NEW_parser_util__InjectedLexer(&type_parser_util__InjectedLexer);
((void (*)(val*, val*))(var59->class->vft[COLOR_lexer__Lexer__init]))(var59, var_source) /* init on <var59:InjectedLexer>*/;
CHECK_NEW_parser_util__InjectedLexer(var59);
var_lexer = var59;
var60 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var61 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
((void (*)(val*))(var61->class->vft[COLOR_parser_nodes__TKwvar__init]))(var61) /* init on <var61:TKwvar>*/;
CHECK_NEW_parser_nodes__TKwvar(var61);
((void (*)(val*, val*))(var60->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var60, var61) /* add on <var60:List[Token]>*/;
var62 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var63 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*))(var63->class->vft[COLOR_parser_nodes__TId__init]))(var63) /* init on <var63:TId>*/;
CHECK_NEW_parser_nodes__TId(var63);
((void (*)(val*, val*))(var62->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var62, var63) /* add on <var62:List[Token]>*/;
var64 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var65 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
((void (*)(val*))(var65->class->vft[COLOR_parser_nodes__TAssign__init]))(var65) /* init on <var65:TAssign>*/;
CHECK_NEW_parser_nodes__TAssign(var65);
((void (*)(val*, val*))(var64->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var64, var65) /* add on <var64:List[Token]>*/;
var66 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var67 = NEW_parser_nodes__TOpar(&type_parser_nodes__TOpar);
((void (*)(val*))(var67->class->vft[COLOR_parser_nodes__TOpar__init]))(var67) /* init on <var67:TOpar>*/;
CHECK_NEW_parser_nodes__TOpar(var67);
((void (*)(val*, val*))(var66->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var66, var67) /* add on <var66:List[Token]>*/;
var68 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(var_lexer) /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/;
var69 = NEW_parser_nodes__TCpar(&type_parser_nodes__TCpar);
((void (*)(val*))(var69->class->vft[COLOR_parser_nodes__TCpar__init]))(var69) /* init on <var69:TCpar>*/;
CHECK_NEW_parser_nodes__TCpar(var69);
((void (*)(val*, val*))(var68->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var68, var69) /* add on <var68:List[Token]>*/;
var70 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var70->class->vft[COLOR_parser__Parser__init]))(var70, var_lexer) /* init on <var70:Parser>*/;
CHECK_NEW_parser__Parser(var70);
var71 = ((val* (*)(val*))(var70->class->vft[COLOR_parser__Parser__parse]))(var70) /* parse on <var70:Parser>*/;
var_tree = var71;
var72 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var72;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype74 = type_parser_nodes__AError.color;
idtype75 = type_parser_nodes__AError.id;
if(cltype74 >= var_eof->type->table_size) {
var73 = 0;
} else {
var73 = var_eof->type->type_table[cltype74] == idtype75;
}
var76 = !var73;
if (var76){
var77 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var77 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser_util.nit", 137);
exit(1);
} else {
var78 = ((val* (*)(val*))(var77->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var77) /* n_classdefs on <var77:nullable AModule>*/;
}
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_collection__Collection__first]))(var78) /* first on <var78:ANodes[AClassdef]>*/;
var80 = ((val* (*)(val*))(var79->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var79) /* n_propdefs on <var79:nullable Object(AClassdef)>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_abstract_collection__Collection__first]))(var80) /* first on <var80:ANodes[APropdef]>*/;
/* <var81:nullable Object(APropdef)> isa AMainMethPropdef */
cltype83 = type_parser_nodes__AMainMethPropdef.color;
idtype84 = type_parser_nodes__AMainMethPropdef.id;
if(cltype83 >= var81->type->table_size) {
var82 = 0;
} else {
var82 = var81->type->type_table[cltype83] == idtype84;
}
if (!var82) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 137);
exit(1);
}
var85 = ((val* (*)(val*))(var81->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var81) /* n_block on <var81:APropdef(AMainMethPropdef)>*/;
/* <var85:nullable AExpr> isa ABlockExpr */
cltype87 = type_parser_nodes__ABlockExpr.color;
idtype88 = type_parser_nodes__ABlockExpr.id;
if(var85 == NULL) {
var86 = 0;
} else {
if(cltype87 >= var85->type->table_size) {
var86 = 0;
} else {
var86 = var85->type->type_table[cltype87] == idtype88;
}
}
if (!var86) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 137);
exit(1);
}
var89 = ((val* (*)(val*))(var85->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var85) /* n_expr on <var85:nullable AExpr(ABlockExpr)>*/;
var90 = ((val* (*)(val*))(var89->class->vft[COLOR_abstract_collection__Collection__first]))(var89) /* first on <var89:ANodes[AExpr]>*/;
/* <var90:nullable Object(AExpr)> isa AVardeclExpr */
cltype92 = type_parser_nodes__AVardeclExpr.color;
idtype93 = type_parser_nodes__AVardeclExpr.id;
if(cltype92 >= var90->type->table_size) {
var91 = 0;
} else {
var91 = var90->type->type_table[cltype92] == idtype93;
}
if (!var91) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 137);
exit(1);
}
var94 = ((val* (*)(val*))(var90->class->vft[COLOR_parser_nodes__AVardeclExpr__n_expr]))(var90) /* n_expr on <var90:AExpr(AVardeclExpr)>*/;
/* <var94:nullable AExpr> isa AParExpr */
cltype96 = type_parser_nodes__AParExpr.color;
idtype97 = type_parser_nodes__AParExpr.id;
if(var94 == NULL) {
var95 = 0;
} else {
if(cltype96 >= var94->type->table_size) {
var95 = 0;
} else {
var95 = var94->type->type_table[cltype96] == idtype97;
}
}
if (!var95) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 137);
exit(1);
}
var98 = ((val* (*)(val*))(var94->class->vft[COLOR_parser_nodes__AProxyExpr__n_expr]))(var94) /* n_expr on <var94:nullable AExpr(AParExpr)>*/;
var_nexpr = var98;
var = var_nexpr;
goto RET_LABEL;
} else {
}
var99 = ((val* (*)(val*))(var_eof->class->vft[COLOR_parser_nodes__ANode__location]))(var_eof) /* location on <var_eof:nullable Object(AError)>*/;
var100 = ((val* (*)(val*))(var_error->class->vft[COLOR_parser_nodes__ANode__location]))(var_error) /* location on <var_error:nullable Object(AError)>*/;
var101 = ((short int (*)(val*, val*))(var99->class->vft[COLOR_kernel__Comparable___62d]))(var99, var100) /* > on <var99:Location>*/;
if (var101){
var_error = var_eof;
} else {
}
var102 = NEW_parser_util__InjectedLexer(&type_parser_util__InjectedLexer);
((void (*)(val*, val*))(var102->class->vft[COLOR_lexer__Lexer__init]))(var102, var_source) /* init on <var102:InjectedLexer>*/;
CHECK_NEW_parser_util__InjectedLexer(var102);
var_lexer = var102;
var103 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(var_lexer) /* injected_before on <var_lexer:nullable Object(InjectedLexer)>*/;
var104 = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
((void (*)(val*))(var104->class->vft[COLOR_parser_nodes__TKwdo__init]))(var104) /* init on <var104:TKwdo>*/;
CHECK_NEW_parser_nodes__TKwdo(var104);
((void (*)(val*, val*))(var103->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var103, var104) /* add on <var103:List[Token]>*/;
var105 = ((val* (*)(val*))(var_lexer->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(var_lexer) /* injected_after on <var_lexer:nullable Object(InjectedLexer)>*/;
var106 = NEW_parser_nodes__TKwend(&type_parser_nodes__TKwend);
((void (*)(val*))(var106->class->vft[COLOR_parser_nodes__TKwend__init]))(var106) /* init on <var106:TKwend>*/;
CHECK_NEW_parser_nodes__TKwend(var106);
((void (*)(val*, val*))(var105->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var105, var106) /* add on <var105:List[Token]>*/;
var107 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var107->class->vft[COLOR_parser__Parser__init]))(var107, var_lexer) /* init on <var107:Parser>*/;
CHECK_NEW_parser__Parser(var107);
var108 = ((val* (*)(val*))(var107->class->vft[COLOR_parser__Parser__parse]))(var107) /* parse on <var107:Parser>*/;
var_tree = var108;
var109 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var109;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype111 = type_parser_nodes__AError.color;
idtype112 = type_parser_nodes__AError.id;
if(cltype111 >= var_eof->type->table_size) {
var110 = 0;
} else {
var110 = var_eof->type->type_table[cltype111] == idtype112;
}
var113 = !var110;
if (var113){
var114 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var114 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Reciever is null", "src/parser_util.nit", 148);
exit(1);
} else {
var115 = ((val* (*)(val*))(var114->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var114) /* n_classdefs on <var114:nullable AModule>*/;
}
var116 = ((val* (*)(val*))(var115->class->vft[COLOR_abstract_collection__Collection__first]))(var115) /* first on <var115:ANodes[AClassdef]>*/;
var117 = ((val* (*)(val*))(var116->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var116) /* n_propdefs on <var116:nullable Object(AClassdef)>*/;
var118 = ((val* (*)(val*))(var117->class->vft[COLOR_abstract_collection__Collection__first]))(var117) /* first on <var117:ANodes[APropdef]>*/;
/* <var118:nullable Object(APropdef)> isa AMainMethPropdef */
cltype120 = type_parser_nodes__AMainMethPropdef.color;
idtype121 = type_parser_nodes__AMainMethPropdef.id;
if(cltype120 >= var118->type->table_size) {
var119 = 0;
} else {
var119 = var118->type->type_table[cltype120] == idtype121;
}
if (!var119) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 148);
exit(1);
}
var122 = ((val* (*)(val*))(var118->class->vft[COLOR_parser_nodes__AConcreteMethPropdef__n_block]))(var118) /* n_block on <var118:APropdef(AMainMethPropdef)>*/;
/* <var122:nullable AExpr> isa ABlockExpr */
cltype124 = type_parser_nodes__ABlockExpr.color;
idtype125 = type_parser_nodes__ABlockExpr.id;
if(var122 == NULL) {
var123 = 0;
} else {
if(cltype124 >= var122->type->table_size) {
var123 = 0;
} else {
var123 = var122->type->type_table[cltype124] == idtype125;
}
}
if (!var123) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 148);
exit(1);
}
var126 = ((val* (*)(val*))(var122->class->vft[COLOR_parser_nodes__ABlockExpr__n_expr]))(var122) /* n_expr on <var122:nullable AExpr(ABlockExpr)>*/;
var127 = ((val* (*)(val*))(var126->class->vft[COLOR_abstract_collection__Collection__first]))(var126) /* first on <var126:ANodes[AExpr]>*/;
/* <var127:nullable Object(AExpr)> isa ADoExpr */
cltype129 = type_parser_nodes__ADoExpr.color;
idtype130 = type_parser_nodes__ADoExpr.id;
if(cltype129 >= var127->type->table_size) {
var128 = 0;
} else {
var128 = var127->type->type_table[cltype129] == idtype130;
}
if (!var128) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 148);
exit(1);
}
var131 = ((val* (*)(val*))(var127->class->vft[COLOR_parser_nodes__ADoExpr__n_block]))(var127) /* n_block on <var127:AExpr(ADoExpr)>*/;
if (var131 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 148);
exit(1);
}
var_nblock = var131;
var = var_nblock;
goto RET_LABEL;
} else {
}
var132 = ((val* (*)(val*))(var_eof->class->vft[COLOR_parser_nodes__ANode__location]))(var_eof) /* location on <var_eof:nullable Object(AError)>*/;
var133 = ((val* (*)(val*))(var_error->class->vft[COLOR_parser_nodes__ANode__location]))(var_error) /* location on <var_error:nullable Object(AError)>*/;
var134 = ((short int (*)(val*, val*))(var132->class->vft[COLOR_kernel__Comparable___62d]))(var132, var133) /* > on <var132:Location>*/;
if (var134){
var_error = var_eof;
} else {
}
var135 = NEW_lexer__Lexer(&type_lexer__Lexer);
((void (*)(val*, val*))(var135->class->vft[COLOR_lexer__Lexer__init]))(var135, var_source) /* init on <var135:Lexer>*/;
CHECK_NEW_lexer__Lexer(var135);
var_lexer = var135;
var136 = NEW_parser__Parser(&type_parser__Parser);
((void (*)(val*, val*))(var136->class->vft[COLOR_parser__Parser__init]))(var136, var_lexer) /* init on <var136:Parser>*/;
CHECK_NEW_parser__Parser(var136);
var137 = ((val* (*)(val*))(var136->class->vft[COLOR_parser__Parser__parse]))(var136) /* parse on <var136:Parser>*/;
var_tree = var137;
var138 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_eof]))(var_tree) /* n_eof on <var_tree:nullable Object(Start)>*/;
var_eof = var138;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype140 = type_parser_nodes__AError.color;
idtype141 = type_parser_nodes__AError.id;
if(cltype140 >= var_eof->type->table_size) {
var139 = 0;
} else {
var139 = var_eof->type->type_table[cltype140] == idtype141;
}
var142 = !var139;
if (var142){
var143 = ((val* (*)(val*))(var_tree->class->vft[COLOR_parser_nodes__Start__n_base]))(var_tree) /* n_base on <var_tree:nullable Object(Start)>*/;
if (var143 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "src/parser_util.nit", 157);
exit(1);
}
var = var143;
goto RET_LABEL;
} else {
}
var144 = ((val* (*)(val*))(var_eof->class->vft[COLOR_parser_nodes__ANode__location]))(var_eof) /* location on <var_eof:nullable Object(AError)>*/;
var145 = ((val* (*)(val*))(var_error->class->vft[COLOR_parser_nodes__ANode__location]))(var_error) /* location on <var_error:nullable Object(AError)>*/;
var146 = ((short int (*)(val*, val*))(var144->class->vft[COLOR_kernel__Comparable___62d]))(var144, var145) /* > on <var144:Location>*/;
if (var146){
var_error = var_eof;
} else {
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_something for (self: Object, String): ANode */
val* VIRTUAL_parser_util__ToolContext__parse_something(val* self, val* p0) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = parser_util__ToolContext__parse_something(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before for (self: InjectedLexer): List[Token] */
val* parser_util__InjectedLexer__injected_before(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_before].val; /* @injected_before on <self:InjectedLexer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @injected_before", "src/parser_util.nit", 168);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before for (self: Object): List[Token] */
val* VIRTUAL_parser_util__InjectedLexer__injected_before(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = parser_util__InjectedLexer__injected_before(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before= for (self: InjectedLexer, List[Token]) */
void parser_util__InjectedLexer__injected_before_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_before].val = p0; /* @injected_before on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#injected_before= for (self: Object, List[Token]) */
void VIRTUAL_parser_util__InjectedLexer__injected_before_61d(val* self, val* p0) {
parser_util__InjectedLexer__injected_before_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#InjectedLexer#injected_after for (self: InjectedLexer): List[Token] */
val* parser_util__InjectedLexer__injected_after(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_after].val; /* @injected_after on <self:InjectedLexer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @injected_after", "src/parser_util.nit", 169);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_after for (self: Object): List[Token] */
val* VIRTUAL_parser_util__InjectedLexer__injected_after(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = parser_util__InjectedLexer__injected_after(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_after= for (self: InjectedLexer, List[Token]) */
void parser_util__InjectedLexer__injected_after_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__InjectedLexer___64dinjected_after].val = p0; /* @injected_after on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#injected_after= for (self: Object, List[Token]) */
void VIRTUAL_parser_util__InjectedLexer__injected_after_61d(val* self, val* p0) {
parser_util__InjectedLexer__injected_after_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#InjectedLexer#is_finished for (self: InjectedLexer): Bool */
short int parser_util__InjectedLexer__is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_parser_util__InjectedLexer___64dis_finished].s; /* @is_finished on <self:InjectedLexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#is_finished for (self: Object): Bool */
short int VIRTUAL_parser_util__InjectedLexer__is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = parser_util__InjectedLexer__is_finished(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#is_finished= for (self: InjectedLexer, Bool) */
void parser_util__InjectedLexer__is_finished_61d(val* self, short int p0) {
self->attrs[COLOR_parser_util__InjectedLexer___64dis_finished].s = p0; /* @is_finished on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#is_finished= for (self: Object, Bool) */
void VIRTUAL_parser_util__InjectedLexer__is_finished_61d(val* self, short int p0) {
parser_util__InjectedLexer__is_finished_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#InjectedLexer#get_token for (self: InjectedLexer): nullable Token */
val* parser_util__InjectedLexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : List[Token] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : List[Token] */;
val* var5 /* : nullable Object */;
val* var_tok /* var tok: Token */;
val* var6 /* : nullable Location */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : Location */;
val* var10 /* : SourceFile */;
long var11 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Token */;
val* var_next /* var next: nullable Token */;
short int var18 /* : Bool */;
int cltype;
int idtype;
short int var19 /* : Bool */;
val* var20 /* : List[Token] */;
short int var21 /* : Bool */;
val* var22 /* : List[Token] */;
val* var23 /* : nullable Object */;
val* var_tok24 /* var tok: Token */;
val* var25 /* : nullable Location */;
val* var26 /* : null */;
short int var27 /* : Bool */;
val* var28 /* : Location */;
val* var29 /* : SourceFile */;
long var30 /* : Int */;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(self) /* injected_before on <self:InjectedLexer>*/;
var2 = ((short int (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var1) /* is_empty on <var1:List[Token]>*/;
var3 = !var2;
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_before]))(self) /* injected_before on <self:InjectedLexer>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_abstract_collection__Sequence__shift]))(var4) /* shift on <var4:List[Token]>*/;
var_tok = var5;
var6 = var_tok->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_tok:Token> */
var7 = NULL;
if (var6 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
var9 = NEW_location__Location(&type_location__Location);
var10 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__file]))(self) /* file on <self:InjectedLexer>*/;
var11 = 1;
var12 = 1;
var13 = 1;
var14 = 0;
((void (*)(val*, val*, long, long, long, long))(var9->class->vft[COLOR_location__Location__init]))(var9, var10, var11, var12, var13, var14) /* init on <var9:Location>*/;
CHECK_NEW_location__Location(var9);
var_tok->attrs[COLOR_parser_nodes__ANode___location].val = var9; /* _location on <var_tok:Token> */
} else {
}
var = var_tok;
goto RET_LABEL;
} else {
}
var15 = ((short int (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__is_finished]))(self) /* is_finished on <self:InjectedLexer>*/;
var16 = !var15;
if (var16){
var17 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__get_token]))(self) /* get_token on <self:InjectedLexer>*/;
var_next = var17;
/* <var_next:nullable Token> isa EOF */
cltype = type_parser_nodes__EOF.color;
idtype = type_parser_nodes__EOF.id;
if(var_next == NULL) {
var18 = 0;
} else {
if(cltype >= var_next->type->table_size) {
var18 = 0;
} else {
var18 = var_next->type->type_table[cltype] == idtype;
}
}
var19 = !var18;
if (var19){
var = var_next;
goto RET_LABEL;
} else {
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(self) /* injected_after on <self:InjectedLexer>*/;
((void (*)(val*, val*))(var20->class->vft[COLOR_abstract_collection__Sequence__push]))(var20, var_next) /* push on <var20:List[Token]>*/;
var21 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_parser_util__InjectedLexer__is_finished_61d]))(self, var21) /* is_finished= on <self:InjectedLexer>*/;
} else {
}
var22 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__InjectedLexer__injected_after]))(self) /* injected_after on <self:InjectedLexer>*/;
var23 = ((val* (*)(val*))(var22->class->vft[COLOR_abstract_collection__Sequence__shift]))(var22) /* shift on <var22:List[Token]>*/;
var_tok24 = var23;
var25 = var_tok24->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_tok24:Token> */
var26 = NULL;
if (var25 == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (var27){
var28 = NEW_location__Location(&type_location__Location);
var29 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__file]))(self) /* file on <self:InjectedLexer>*/;
var30 = 1;
var31 = 1;
var32 = 1;
var33 = 0;
((void (*)(val*, val*, long, long, long, long))(var28->class->vft[COLOR_location__Location__init]))(var28, var29, var30, var31, var32, var33) /* init on <var28:Location>*/;
CHECK_NEW_location__Location(var28);
var_tok24->attrs[COLOR_parser_nodes__ANode___location].val = var28; /* _location on <var_tok24:Token> */
} else {
}
var = var_tok24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#get_token for (self: Object): nullable Token */
val* VIRTUAL_parser_util__InjectedLexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = parser_util__InjectedLexer__get_token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_tokens_by_text for (self: ANode, String): Array[Token] */
val* parser_util__ANode__collect_tokens_by_text(val* self, val* p0) {
val* var /* : Array[Token] */;
val* var_text /* var text: String */;
val* var1 /* : CollectTokensByTextVisitor */;
val* var_v /* var v: CollectTokensByTextVisitor */;
val* var2 /* : Array[Token] */;
var_text = p0;
var1 = NEW_parser_util__CollectTokensByTextVisitor(&type_parser_util__CollectTokensByTextVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__init]))(var1, var_text) /* init on <var1:CollectTokensByTextVisitor>*/;
CHECK_NEW_parser_util__CollectTokensByTextVisitor(var1);
var_v = var1;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:CollectTokensByTextVisitor>*/;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__result]))(var_v) /* result on <var_v:CollectTokensByTextVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_tokens_by_text for (self: Object, String): Array[Token] */
val* VIRTUAL_parser_util__ANode__collect_tokens_by_text(val* self, val* p0) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = parser_util__ANode__collect_tokens_by_text(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_annotations_by_name for (self: ANode, String): Array[AAnnotation] */
val* parser_util__ANode__collect_annotations_by_name(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var1 /* : CollectAnnotationsByNameVisitor */;
val* var_v /* var v: CollectAnnotationsByNameVisitor */;
val* var2 /* : Array[AAnnotation] */;
var_name = p0;
var1 = NEW_parser_util__CollectAnnotationsByNameVisitor(&type_parser_util__CollectAnnotationsByNameVisitor);
((void (*)(val*, val*))(var1->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__init]))(var1, var_name) /* init on <var1:CollectAnnotationsByNameVisitor>*/;
CHECK_NEW_parser_util__CollectAnnotationsByNameVisitor(var1);
var_v = var1;
((void (*)(val*, val*))(var_v->class->vft[COLOR_parser_nodes__Visitor__enter_visit]))(var_v, self) /* enter_visit on <var_v:CollectAnnotationsByNameVisitor>*/;
var2 = ((val* (*)(val*))(var_v->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__result]))(var_v) /* result on <var_v:CollectAnnotationsByNameVisitor>*/;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ANode#collect_annotations_by_name for (self: Object, String): Array[AAnnotation] */
val* VIRTUAL_parser_util__ANode__collect_annotations_by_name(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = parser_util__ANode__collect_annotations_by_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#text for (self: CollectTokensByTextVisitor): String */
val* parser_util__CollectTokensByTextVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dtext].val; /* @text on <self:CollectTokensByTextVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @text", "src/parser_util.nit", 213);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#text for (self: Object): String */
val* VIRTUAL_parser_util__CollectTokensByTextVisitor__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_util__CollectTokensByTextVisitor__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#text= for (self: CollectTokensByTextVisitor, String) */
void parser_util__CollectTokensByTextVisitor__text_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dtext].val = p0; /* @text on <self:CollectTokensByTextVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#text= for (self: Object, String) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__text_61d(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__text_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#init for (self: CollectTokensByTextVisitor, String) */
void parser_util__CollectTokensByTextVisitor__init(val* self, val* p0) {
val* var_text /* var text: String */;
var_text = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:CollectTokensByTextVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__text_61d]))(self, var_text) /* text= on <self:CollectTokensByTextVisitor>*/;
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#init for (self: Object, String) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__init(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__init(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#result for (self: CollectTokensByTextVisitor): Array[Token] */
val* parser_util__CollectTokensByTextVisitor__result(val* self) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dresult].val; /* @result on <self:CollectTokensByTextVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @result", "src/parser_util.nit", 215);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#result for (self: Object): Array[Token] */
val* VIRTUAL_parser_util__CollectTokensByTextVisitor__result(val* self) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = parser_util__CollectTokensByTextVisitor__result(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectTokensByTextVisitor#result= for (self: CollectTokensByTextVisitor, Array[Token]) */
void parser_util__CollectTokensByTextVisitor__result_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectTokensByTextVisitor___64dresult].val = p0; /* @result on <self:CollectTokensByTextVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#result= for (self: Object, Array[Token]) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__result_61d(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__result_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#visit for (self: CollectTokensByTextVisitor, ANode) */
void parser_util__CollectTokensByTextVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var5 /* : Array[Token] */;
var_node = p0;
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
/* <var_node:ANode> isa Token */
cltype = type_parser_nodes__Token.color;
idtype = type_parser_nodes__Token.id;
if(cltype >= var_node->type->table_size) {
var1 = 0;
} else {
var1 = var_node->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__Token__text]))(var_node) /* text on <var_node:ANode(Token)>*/;
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__text]))(self) /* text on <self:CollectTokensByTextVisitor>*/;
var4 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___61d_61d]))(var2, var3) /* == on <var2:String>*/;
var = var4;
} else {
var = var_;
}
if (var){
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectTokensByTextVisitor__result]))(self) /* result on <self:CollectTokensByTextVisitor>*/;
((void (*)(val*, val*))(var5->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var5, var_node) /* add on <var5:Array[Token]>*/;
} else {
}
RET_LABEL:;
}
/* method parser_util#CollectTokensByTextVisitor#visit for (self: Object, ANode) */
void VIRTUAL_parser_util__CollectTokensByTextVisitor__visit(val* self, val* p0) {
parser_util__CollectTokensByTextVisitor__visit(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name for (self: CollectAnnotationsByNameVisitor): String */
val* parser_util__CollectAnnotationsByNameVisitor__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dname].val; /* @name on <self:CollectAnnotationsByNameVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @name", "src/parser_util.nit", 225);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name for (self: Object): String */
val* VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = parser_util__CollectAnnotationsByNameVisitor__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name= for (self: CollectAnnotationsByNameVisitor, String) */
void parser_util__CollectAnnotationsByNameVisitor__name_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dname].val = p0; /* @name on <self:CollectAnnotationsByNameVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#name= for (self: Object, String) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__name_61d(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__name_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#init for (self: CollectAnnotationsByNameVisitor, String) */
void parser_util__CollectAnnotationsByNameVisitor__init(val* self, val* p0) {
val* var_name /* var name: String */;
var_name = p0;
((void (*)(val*))(self->class->vft[COLOR_parser_nodes__Visitor__init]))(self) /* init on <self:CollectAnnotationsByNameVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__name_61d]))(self, var_name) /* name= on <self:CollectAnnotationsByNameVisitor>*/;
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#init for (self: Object, String) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__init(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__init(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result for (self: CollectAnnotationsByNameVisitor): Array[AAnnotation] */
val* parser_util__CollectAnnotationsByNameVisitor__result(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dresult].val; /* @result on <self:CollectAnnotationsByNameVisitor> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute @result", "src/parser_util.nit", 227);
exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result for (self: Object): Array[AAnnotation] */
val* VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__result(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = parser_util__CollectAnnotationsByNameVisitor__result(self);
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result= for (self: CollectAnnotationsByNameVisitor, Array[AAnnotation]) */
void parser_util__CollectAnnotationsByNameVisitor__result_61d(val* self, val* p0) {
self->attrs[COLOR_parser_util__CollectAnnotationsByNameVisitor___64dresult].val = p0; /* @result on <self:CollectAnnotationsByNameVisitor> */
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#result= for (self: Object, Array[AAnnotation]) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__result_61d(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__result_61d(self, p0);
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#visit for (self: CollectAnnotationsByNameVisitor, ANode) */
void parser_util__CollectAnnotationsByNameVisitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var2 /* : AAtid */;
val* var3 /* : Token */;
val* var4 /* : String */;
val* var5 /* : String */;
short int var6 /* : Bool */;
val* var7 /* : Array[AAnnotation] */;
var_node = p0;
((void (*)(val*, val*))(var_node->class->vft[COLOR_parser_nodes__ANode__visit_all]))(var_node, self) /* visit_all on <var_node:ANode>*/;
/* <var_node:ANode> isa AAnnotation */
cltype = type_parser_nodes__AAnnotation.color;
idtype = type_parser_nodes__AAnnotation.id;
if(cltype >= var_node->type->table_size) {
var1 = 0;
} else {
var1 = var_node->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
var2 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__AAnnotation__n_atid]))(var_node) /* n_atid on <var_node:ANode(AAnnotation)>*/;
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_parser_nodes__AAtid__n_id]))(var2) /* n_id on <var2:AAtid>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_parser_nodes__Token__text]))(var3) /* text on <var3:Token>*/;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__name]))(self) /* name on <self:CollectAnnotationsByNameVisitor>*/;
var6 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var5) /* == on <var4:String>*/;
var = var6;
} else {
var = var_;
}
if (var){
var7 = ((val* (*)(val*))(self->class->vft[COLOR_parser_util__CollectAnnotationsByNameVisitor__result]))(self) /* result on <self:CollectAnnotationsByNameVisitor>*/;
((void (*)(val*, val*))(var7->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var7, var_node) /* add on <var7:Array[AAnnotation]>*/;
} else {
}
RET_LABEL:;
}
/* method parser_util#CollectAnnotationsByNameVisitor#visit for (self: Object, ANode) */
void VIRTUAL_parser_util__CollectAnnotationsByNameVisitor__visit(val* self, val* p0) {
parser_util__CollectAnnotationsByNameVisitor__visit(self, p0);
RET_LABEL:;
}
