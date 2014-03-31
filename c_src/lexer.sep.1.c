#include "lexer.sep.0.h"
/* method lexer#Token#text for (self: Token): String */
val* lexer__Token__text(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : Location */;
val* var5 /* : String */;
var1 = self->attrs[COLOR_lexer__Token___text].val; /* _text on <self:Token> */
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_res;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANode__location]))(self) /* location on <self:Token>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_location__Location__text]))(var4) /* text on <var4:Location>*/;
var_res = var5;
self->attrs[COLOR_lexer__Token___text].val = var_res; /* _text on <self:Token> */
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Token#text for (self: Object): String */
val* VIRTUAL_lexer__Token__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = lexer__Token__text(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Token#text= for (self: Token, String) */
void lexer__Token__text_61d(val* self, val* p0) {
val* var_text /* var text: String */;
var_text = p0;
self->attrs[COLOR_lexer__Token___text].val = var_text; /* _text on <self:Token> */
RET_LABEL:;
}
/* method lexer#Token#text= for (self: Object, String) */
void VIRTUAL_lexer__Token__text_61d(val* self, val* p0) {
lexer__Token__text_61d(self, p0);
RET_LABEL:;
}
/* method lexer#Token#parser_index for (self: Token): Int */
long lexer__Token__parser_index(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "parser_index", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 25);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method lexer#Token#parser_index for (self: Object): Int */
long VIRTUAL_lexer__Token__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__Token__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEol#parser_index for (self: TEol): Int */
long lexer__TEol__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TEol#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TEol__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TEol__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEol#init_tk for (self: TEol, Location) */
void lexer__TEol__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TEol> */
RET_LABEL:;
}
/* method lexer#TEol#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TEol__init_tk(val* self, val* p0) {
lexer__TEol__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TComment#parser_index for (self: TComment): Int */
long lexer__TComment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TComment#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TComment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TComment__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TComment#init_tk for (self: TComment, Location) */
void lexer__TComment__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TComment> */
RET_LABEL:;
}
/* method lexer#TComment#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TComment__init_tk(val* self, val* p0) {
lexer__TComment__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwpackage#parser_index for (self: TKwpackage): Int */
long lexer__TKwpackage__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 2;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwpackage#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwpackage__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwpackage__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwpackage#init_tk for (self: TKwpackage, Location) */
void lexer__TKwpackage__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwpackage> */
RET_LABEL:;
}
/* method lexer#TKwpackage#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwpackage__init_tk(val* self, val* p0) {
lexer__TKwpackage__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwmodule#parser_index for (self: TKwmodule): Int */
long lexer__TKwmodule__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 3;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwmodule#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwmodule__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwmodule__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwmodule#init_tk for (self: TKwmodule, Location) */
void lexer__TKwmodule__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwmodule> */
RET_LABEL:;
}
/* method lexer#TKwmodule#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwmodule__init_tk(val* self, val* p0) {
lexer__TKwmodule__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwimport#parser_index for (self: TKwimport): Int */
long lexer__TKwimport__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 4;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwimport#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwimport__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwimport__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwimport#init_tk for (self: TKwimport, Location) */
void lexer__TKwimport__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwimport> */
RET_LABEL:;
}
/* method lexer#TKwimport#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwimport__init_tk(val* self, val* p0) {
lexer__TKwimport__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwclass#parser_index for (self: TKwclass): Int */
long lexer__TKwclass__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 5;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwclass#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwclass__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwclass__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwclass#init_tk for (self: TKwclass, Location) */
void lexer__TKwclass__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwclass> */
RET_LABEL:;
}
/* method lexer#TKwclass#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwclass__init_tk(val* self, val* p0) {
lexer__TKwclass__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwabstract#parser_index for (self: TKwabstract): Int */
long lexer__TKwabstract__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 6;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwabstract#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwabstract__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwabstract__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwabstract#init_tk for (self: TKwabstract, Location) */
void lexer__TKwabstract__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwabstract> */
RET_LABEL:;
}
/* method lexer#TKwabstract#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwabstract__init_tk(val* self, val* p0) {
lexer__TKwabstract__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwinterface#parser_index for (self: TKwinterface): Int */
long lexer__TKwinterface__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 7;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwinterface#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwinterface__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwinterface__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwinterface#init_tk for (self: TKwinterface, Location) */
void lexer__TKwinterface__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwinterface> */
RET_LABEL:;
}
/* method lexer#TKwinterface#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwinterface__init_tk(val* self, val* p0) {
lexer__TKwinterface__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwenum#parser_index for (self: TKwenum): Int */
long lexer__TKwenum__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 8;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwenum#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwenum__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwenum__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwenum#init_tk for (self: TKwenum, Location) */
void lexer__TKwenum__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwenum> */
RET_LABEL:;
}
/* method lexer#TKwenum#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwenum__init_tk(val* self, val* p0) {
lexer__TKwenum__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwend#parser_index for (self: TKwend): Int */
long lexer__TKwend__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 9;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwend#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwend__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwend__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwend#init_tk for (self: TKwend, Location) */
void lexer__TKwend__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwend> */
RET_LABEL:;
}
/* method lexer#TKwend#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwend__init_tk(val* self, val* p0) {
lexer__TKwend__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwmeth#parser_index for (self: TKwmeth): Int */
long lexer__TKwmeth__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 10;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwmeth#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwmeth__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwmeth__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwmeth#init_tk for (self: TKwmeth, Location) */
void lexer__TKwmeth__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwmeth> */
RET_LABEL:;
}
/* method lexer#TKwmeth#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwmeth__init_tk(val* self, val* p0) {
lexer__TKwmeth__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwtype#parser_index for (self: TKwtype): Int */
long lexer__TKwtype__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 11;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwtype#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwtype__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwtype__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwtype#init_tk for (self: TKwtype, Location) */
void lexer__TKwtype__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwtype> */
RET_LABEL:;
}
/* method lexer#TKwtype#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwtype__init_tk(val* self, val* p0) {
lexer__TKwtype__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwinit#parser_index for (self: TKwinit): Int */
long lexer__TKwinit__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 12;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwinit#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwinit__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwinit__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwinit#init_tk for (self: TKwinit, Location) */
void lexer__TKwinit__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwinit> */
RET_LABEL:;
}
/* method lexer#TKwinit#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwinit__init_tk(val* self, val* p0) {
lexer__TKwinit__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwredef#parser_index for (self: TKwredef): Int */
long lexer__TKwredef__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 13;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwredef#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwredef__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwredef__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwredef#init_tk for (self: TKwredef, Location) */
void lexer__TKwredef__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwredef> */
RET_LABEL:;
}
/* method lexer#TKwredef#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwredef__init_tk(val* self, val* p0) {
lexer__TKwredef__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwis#parser_index for (self: TKwis): Int */
long lexer__TKwis__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 14;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwis#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwis__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwis__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwis#init_tk for (self: TKwis, Location) */
void lexer__TKwis__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwis> */
RET_LABEL:;
}
/* method lexer#TKwis#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwis__init_tk(val* self, val* p0) {
lexer__TKwis__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwdo#parser_index for (self: TKwdo): Int */
long lexer__TKwdo__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 15;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwdo#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwdo__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwdo__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwdo#init_tk for (self: TKwdo, Location) */
void lexer__TKwdo__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwdo> */
RET_LABEL:;
}
/* method lexer#TKwdo#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwdo__init_tk(val* self, val* p0) {
lexer__TKwdo__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwreadable#parser_index for (self: TKwreadable): Int */
long lexer__TKwreadable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 16;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwreadable#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwreadable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwreadable__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwreadable#init_tk for (self: TKwreadable, Location) */
void lexer__TKwreadable__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwreadable> */
RET_LABEL:;
}
/* method lexer#TKwreadable#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwreadable__init_tk(val* self, val* p0) {
lexer__TKwreadable__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwwritable#parser_index for (self: TKwwritable): Int */
long lexer__TKwwritable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 17;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwwritable#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwwritable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwwritable__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwwritable#init_tk for (self: TKwwritable, Location) */
void lexer__TKwwritable__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwwritable> */
RET_LABEL:;
}
/* method lexer#TKwwritable#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwwritable__init_tk(val* self, val* p0) {
lexer__TKwwritable__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwvar#parser_index for (self: TKwvar): Int */
long lexer__TKwvar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 18;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwvar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwvar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwvar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwvar#init_tk for (self: TKwvar, Location) */
void lexer__TKwvar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwvar> */
RET_LABEL:;
}
/* method lexer#TKwvar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwvar__init_tk(val* self, val* p0) {
lexer__TKwvar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwintern#parser_index for (self: TKwintern): Int */
long lexer__TKwintern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 19;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwintern#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwintern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwintern__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwintern#init_tk for (self: TKwintern, Location) */
void lexer__TKwintern__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwintern> */
RET_LABEL:;
}
/* method lexer#TKwintern#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwintern__init_tk(val* self, val* p0) {
lexer__TKwintern__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwextern#parser_index for (self: TKwextern): Int */
long lexer__TKwextern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 20;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwextern#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwextern__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwextern__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwextern#init_tk for (self: TKwextern, Location) */
void lexer__TKwextern__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwextern> */
RET_LABEL:;
}
/* method lexer#TKwextern#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwextern__init_tk(val* self, val* p0) {
lexer__TKwextern__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwprotected#parser_index for (self: TKwprotected): Int */
long lexer__TKwprotected__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 21;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwprotected#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwprotected__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwprotected__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwprotected#init_tk for (self: TKwprotected, Location) */
void lexer__TKwprotected__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwprotected> */
RET_LABEL:;
}
/* method lexer#TKwprotected#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwprotected__init_tk(val* self, val* p0) {
lexer__TKwprotected__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwprivate#parser_index for (self: TKwprivate): Int */
long lexer__TKwprivate__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 22;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwprivate#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwprivate__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwprivate__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwprivate#init_tk for (self: TKwprivate, Location) */
void lexer__TKwprivate__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwprivate> */
RET_LABEL:;
}
/* method lexer#TKwprivate#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwprivate__init_tk(val* self, val* p0) {
lexer__TKwprivate__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwintrude#parser_index for (self: TKwintrude): Int */
long lexer__TKwintrude__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 23;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwintrude#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwintrude__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwintrude__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwintrude#init_tk for (self: TKwintrude, Location) */
void lexer__TKwintrude__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwintrude> */
RET_LABEL:;
}
/* method lexer#TKwintrude#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwintrude__init_tk(val* self, val* p0) {
lexer__TKwintrude__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwif#parser_index for (self: TKwif): Int */
long lexer__TKwif__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 24;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwif#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwif__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwif__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwif#init_tk for (self: TKwif, Location) */
void lexer__TKwif__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwif> */
RET_LABEL:;
}
/* method lexer#TKwif#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwif__init_tk(val* self, val* p0) {
lexer__TKwif__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwthen#parser_index for (self: TKwthen): Int */
long lexer__TKwthen__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 25;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwthen#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwthen__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwthen__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwthen#init_tk for (self: TKwthen, Location) */
void lexer__TKwthen__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwthen> */
RET_LABEL:;
}
/* method lexer#TKwthen#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwthen__init_tk(val* self, val* p0) {
lexer__TKwthen__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwelse#parser_index for (self: TKwelse): Int */
long lexer__TKwelse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 26;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwelse#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwelse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwelse__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwelse#init_tk for (self: TKwelse, Location) */
void lexer__TKwelse__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwelse> */
RET_LABEL:;
}
/* method lexer#TKwelse#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwelse__init_tk(val* self, val* p0) {
lexer__TKwelse__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwwhile#parser_index for (self: TKwwhile): Int */
long lexer__TKwwhile__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 27;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwwhile#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwwhile__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwwhile__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwwhile#init_tk for (self: TKwwhile, Location) */
void lexer__TKwwhile__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwwhile> */
RET_LABEL:;
}
/* method lexer#TKwwhile#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwwhile__init_tk(val* self, val* p0) {
lexer__TKwwhile__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwloop#parser_index for (self: TKwloop): Int */
long lexer__TKwloop__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 28;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwloop#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwloop__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwloop__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwloop#init_tk for (self: TKwloop, Location) */
void lexer__TKwloop__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwloop> */
RET_LABEL:;
}
/* method lexer#TKwloop#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwloop__init_tk(val* self, val* p0) {
lexer__TKwloop__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwfor#parser_index for (self: TKwfor): Int */
long lexer__TKwfor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 29;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwfor#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwfor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwfor__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwfor#init_tk for (self: TKwfor, Location) */
void lexer__TKwfor__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwfor> */
RET_LABEL:;
}
/* method lexer#TKwfor#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwfor__init_tk(val* self, val* p0) {
lexer__TKwfor__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwin#parser_index for (self: TKwin): Int */
long lexer__TKwin__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 30;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwin#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwin__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwin__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwin#init_tk for (self: TKwin, Location) */
void lexer__TKwin__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwin> */
RET_LABEL:;
}
/* method lexer#TKwin#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwin__init_tk(val* self, val* p0) {
lexer__TKwin__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwand#parser_index for (self: TKwand): Int */
long lexer__TKwand__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 31;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwand#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwand__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwand__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwand#init_tk for (self: TKwand, Location) */
void lexer__TKwand__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwand> */
RET_LABEL:;
}
/* method lexer#TKwand#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwand__init_tk(val* self, val* p0) {
lexer__TKwand__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwor#parser_index for (self: TKwor): Int */
long lexer__TKwor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 32;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwor#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwor__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwor__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwor#init_tk for (self: TKwor, Location) */
void lexer__TKwor__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwor> */
RET_LABEL:;
}
/* method lexer#TKwor#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwor__init_tk(val* self, val* p0) {
lexer__TKwor__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnot#parser_index for (self: TKwnot): Int */
long lexer__TKwnot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 33;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnot#init_tk for (self: TKwnot, Location) */
void lexer__TKwnot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnot> */
RET_LABEL:;
}
/* method lexer#TKwnot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnot__init_tk(val* self, val* p0) {
lexer__TKwnot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwimplies#parser_index for (self: TKwimplies): Int */
long lexer__TKwimplies__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 34;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwimplies#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwimplies__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwimplies__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwimplies#init_tk for (self: TKwimplies, Location) */
void lexer__TKwimplies__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwimplies> */
RET_LABEL:;
}
/* method lexer#TKwimplies#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwimplies__init_tk(val* self, val* p0) {
lexer__TKwimplies__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwreturn#parser_index for (self: TKwreturn): Int */
long lexer__TKwreturn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 35;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwreturn#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwreturn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwreturn__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwreturn#init_tk for (self: TKwreturn, Location) */
void lexer__TKwreturn__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwreturn> */
RET_LABEL:;
}
/* method lexer#TKwreturn#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwreturn__init_tk(val* self, val* p0) {
lexer__TKwreturn__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwcontinue#parser_index for (self: TKwcontinue): Int */
long lexer__TKwcontinue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 36;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwcontinue#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwcontinue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwcontinue__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwcontinue#init_tk for (self: TKwcontinue, Location) */
void lexer__TKwcontinue__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwcontinue> */
RET_LABEL:;
}
/* method lexer#TKwcontinue#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwcontinue__init_tk(val* self, val* p0) {
lexer__TKwcontinue__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwbreak#parser_index for (self: TKwbreak): Int */
long lexer__TKwbreak__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 37;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwbreak#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwbreak__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwbreak__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwbreak#init_tk for (self: TKwbreak, Location) */
void lexer__TKwbreak__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwbreak> */
RET_LABEL:;
}
/* method lexer#TKwbreak#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwbreak__init_tk(val* self, val* p0) {
lexer__TKwbreak__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwabort#parser_index for (self: TKwabort): Int */
long lexer__TKwabort__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 38;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwabort#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwabort__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwabort__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwabort#init_tk for (self: TKwabort, Location) */
void lexer__TKwabort__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwabort> */
RET_LABEL:;
}
/* method lexer#TKwabort#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwabort__init_tk(val* self, val* p0) {
lexer__TKwabort__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwassert#parser_index for (self: TKwassert): Int */
long lexer__TKwassert__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 39;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwassert#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwassert__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwassert__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwassert#init_tk for (self: TKwassert, Location) */
void lexer__TKwassert__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwassert> */
RET_LABEL:;
}
/* method lexer#TKwassert#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwassert__init_tk(val* self, val* p0) {
lexer__TKwassert__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnew#parser_index for (self: TKwnew): Int */
long lexer__TKwnew__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 40;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnew#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnew__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnew__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnew#init_tk for (self: TKwnew, Location) */
void lexer__TKwnew__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnew> */
RET_LABEL:;
}
/* method lexer#TKwnew#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnew__init_tk(val* self, val* p0) {
lexer__TKwnew__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwisa#parser_index for (self: TKwisa): Int */
long lexer__TKwisa__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 41;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwisa#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwisa__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwisa__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwisa#init_tk for (self: TKwisa, Location) */
void lexer__TKwisa__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwisa> */
RET_LABEL:;
}
/* method lexer#TKwisa#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwisa__init_tk(val* self, val* p0) {
lexer__TKwisa__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwonce#parser_index for (self: TKwonce): Int */
long lexer__TKwonce__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 42;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwonce#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwonce__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwonce__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwonce#init_tk for (self: TKwonce, Location) */
void lexer__TKwonce__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwonce> */
RET_LABEL:;
}
/* method lexer#TKwonce#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwonce__init_tk(val* self, val* p0) {
lexer__TKwonce__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwsuper#parser_index for (self: TKwsuper): Int */
long lexer__TKwsuper__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 43;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwsuper#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwsuper__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwsuper__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwsuper#init_tk for (self: TKwsuper, Location) */
void lexer__TKwsuper__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwsuper> */
RET_LABEL:;
}
/* method lexer#TKwsuper#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwsuper__init_tk(val* self, val* p0) {
lexer__TKwsuper__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwself#parser_index for (self: TKwself): Int */
long lexer__TKwself__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 44;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwself#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwself__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwself__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwself#init_tk for (self: TKwself, Location) */
void lexer__TKwself__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwself> */
RET_LABEL:;
}
/* method lexer#TKwself#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwself__init_tk(val* self, val* p0) {
lexer__TKwself__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwtrue#parser_index for (self: TKwtrue): Int */
long lexer__TKwtrue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 45;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwtrue#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwtrue__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwtrue__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwtrue#init_tk for (self: TKwtrue, Location) */
void lexer__TKwtrue__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwtrue> */
RET_LABEL:;
}
/* method lexer#TKwtrue#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwtrue__init_tk(val* self, val* p0) {
lexer__TKwtrue__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwfalse#parser_index for (self: TKwfalse): Int */
long lexer__TKwfalse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 46;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwfalse#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwfalse__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwfalse__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwfalse#init_tk for (self: TKwfalse, Location) */
void lexer__TKwfalse__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwfalse> */
RET_LABEL:;
}
/* method lexer#TKwfalse#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwfalse__init_tk(val* self, val* p0) {
lexer__TKwfalse__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnull#parser_index for (self: TKwnull): Int */
long lexer__TKwnull__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 47;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnull#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnull__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnull__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnull#init_tk for (self: TKwnull, Location) */
void lexer__TKwnull__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnull> */
RET_LABEL:;
}
/* method lexer#TKwnull#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnull__init_tk(val* self, val* p0) {
lexer__TKwnull__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwas#parser_index for (self: TKwas): Int */
long lexer__TKwas__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 48;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwas#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwas__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwas__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwas#init_tk for (self: TKwas, Location) */
void lexer__TKwas__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwas> */
RET_LABEL:;
}
/* method lexer#TKwas#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwas__init_tk(val* self, val* p0) {
lexer__TKwas__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwnullable#parser_index for (self: TKwnullable): Int */
long lexer__TKwnullable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 49;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwnullable#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwnullable__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwnullable__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwnullable#init_tk for (self: TKwnullable, Location) */
void lexer__TKwnullable__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwnullable> */
RET_LABEL:;
}
/* method lexer#TKwnullable#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwnullable__init_tk(val* self, val* p0) {
lexer__TKwnullable__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwisset#parser_index for (self: TKwisset): Int */
long lexer__TKwisset__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 50;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwisset#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwisset__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwisset__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwisset#init_tk for (self: TKwisset, Location) */
void lexer__TKwisset__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwisset> */
RET_LABEL:;
}
/* method lexer#TKwisset#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwisset__init_tk(val* self, val* p0) {
lexer__TKwisset__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwlabel#parser_index for (self: TKwlabel): Int */
long lexer__TKwlabel__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 51;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwlabel#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwlabel__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwlabel__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwlabel#init_tk for (self: TKwlabel, Location) */
void lexer__TKwlabel__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwlabel> */
RET_LABEL:;
}
/* method lexer#TKwlabel#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwlabel__init_tk(val* self, val* p0) {
lexer__TKwlabel__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TKwdebug#parser_index for (self: TKwdebug): Int */
long lexer__TKwdebug__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 52;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TKwdebug#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TKwdebug__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TKwdebug__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TKwdebug#init_tk for (self: TKwdebug, Location) */
void lexer__TKwdebug__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TKwdebug> */
RET_LABEL:;
}
/* method lexer#TKwdebug#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TKwdebug__init_tk(val* self, val* p0) {
lexer__TKwdebug__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TOpar#parser_index for (self: TOpar): Int */
long lexer__TOpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 53;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TOpar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TOpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TOpar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TOpar#init_tk for (self: TOpar, Location) */
void lexer__TOpar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TOpar> */
RET_LABEL:;
}
/* method lexer#TOpar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TOpar__init_tk(val* self, val* p0) {
lexer__TOpar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TCpar#parser_index for (self: TCpar): Int */
long lexer__TCpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 54;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TCpar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TCpar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TCpar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TCpar#init_tk for (self: TCpar, Location) */
void lexer__TCpar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TCpar> */
RET_LABEL:;
}
/* method lexer#TCpar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TCpar__init_tk(val* self, val* p0) {
lexer__TCpar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TObra#parser_index for (self: TObra): Int */
long lexer__TObra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 55;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TObra#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TObra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TObra__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TObra#init_tk for (self: TObra, Location) */
void lexer__TObra__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TObra> */
RET_LABEL:;
}
/* method lexer#TObra#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TObra__init_tk(val* self, val* p0) {
lexer__TObra__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TCbra#parser_index for (self: TCbra): Int */
long lexer__TCbra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 56;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TCbra#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TCbra__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TCbra__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TCbra#init_tk for (self: TCbra, Location) */
void lexer__TCbra__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TCbra> */
RET_LABEL:;
}
/* method lexer#TCbra#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TCbra__init_tk(val* self, val* p0) {
lexer__TCbra__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TComma#parser_index for (self: TComma): Int */
long lexer__TComma__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 57;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TComma#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TComma__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TComma__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TComma#init_tk for (self: TComma, Location) */
void lexer__TComma__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TComma> */
RET_LABEL:;
}
/* method lexer#TComma#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TComma__init_tk(val* self, val* p0) {
lexer__TComma__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TColumn#parser_index for (self: TColumn): Int */
long lexer__TColumn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 58;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TColumn#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TColumn__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TColumn__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TColumn#init_tk for (self: TColumn, Location) */
void lexer__TColumn__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TColumn> */
RET_LABEL:;
}
/* method lexer#TColumn#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TColumn__init_tk(val* self, val* p0) {
lexer__TColumn__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TQuad#parser_index for (self: TQuad): Int */
long lexer__TQuad__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 59;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TQuad#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TQuad__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TQuad__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TQuad#init_tk for (self: TQuad, Location) */
void lexer__TQuad__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TQuad> */
RET_LABEL:;
}
/* method lexer#TQuad#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TQuad__init_tk(val* self, val* p0) {
lexer__TQuad__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TAssign#parser_index for (self: TAssign): Int */
long lexer__TAssign__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 60;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TAssign#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TAssign__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TAssign__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TAssign#init_tk for (self: TAssign, Location) */
void lexer__TAssign__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TAssign> */
RET_LABEL:;
}
/* method lexer#TAssign#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TAssign__init_tk(val* self, val* p0) {
lexer__TAssign__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TPluseq#parser_index for (self: TPluseq): Int */
long lexer__TPluseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 61;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TPluseq#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TPluseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TPluseq__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TPluseq#init_tk for (self: TPluseq, Location) */
void lexer__TPluseq__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TPluseq> */
RET_LABEL:;
}
/* method lexer#TPluseq#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TPluseq__init_tk(val* self, val* p0) {
lexer__TPluseq__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TMinuseq#parser_index for (self: TMinuseq): Int */
long lexer__TMinuseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 62;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TMinuseq#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TMinuseq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TMinuseq__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TMinuseq#init_tk for (self: TMinuseq, Location) */
void lexer__TMinuseq__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TMinuseq> */
RET_LABEL:;
}
/* method lexer#TMinuseq#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TMinuseq__init_tk(val* self, val* p0) {
lexer__TMinuseq__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TDotdotdot#parser_index for (self: TDotdotdot): Int */
long lexer__TDotdotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 63;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TDotdotdot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TDotdotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TDotdotdot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TDotdotdot#init_tk for (self: TDotdotdot, Location) */
void lexer__TDotdotdot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TDotdotdot> */
RET_LABEL:;
}
/* method lexer#TDotdotdot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TDotdotdot__init_tk(val* self, val* p0) {
lexer__TDotdotdot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TDotdot#parser_index for (self: TDotdot): Int */
long lexer__TDotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 64;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TDotdot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TDotdot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TDotdot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TDotdot#init_tk for (self: TDotdot, Location) */
void lexer__TDotdot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TDotdot> */
RET_LABEL:;
}
/* method lexer#TDotdot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TDotdot__init_tk(val* self, val* p0) {
lexer__TDotdot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TDot#parser_index for (self: TDot): Int */
long lexer__TDot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 65;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TDot#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TDot__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TDot__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TDot#init_tk for (self: TDot, Location) */
void lexer__TDot__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TDot> */
RET_LABEL:;
}
/* method lexer#TDot#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TDot__init_tk(val* self, val* p0) {
lexer__TDot__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TPlus#parser_index for (self: TPlus): Int */
long lexer__TPlus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 66;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TPlus#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TPlus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TPlus__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TPlus#init_tk for (self: TPlus, Location) */
void lexer__TPlus__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TPlus> */
RET_LABEL:;
}
/* method lexer#TPlus#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TPlus__init_tk(val* self, val* p0) {
lexer__TPlus__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TMinus#parser_index for (self: TMinus): Int */
long lexer__TMinus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 67;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TMinus#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TMinus__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TMinus__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TMinus#init_tk for (self: TMinus, Location) */
void lexer__TMinus__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TMinus> */
RET_LABEL:;
}
/* method lexer#TMinus#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TMinus__init_tk(val* self, val* p0) {
lexer__TMinus__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TStar#parser_index for (self: TStar): Int */
long lexer__TStar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 68;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TStar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TStar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TStar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TStar#init_tk for (self: TStar, Location) */
void lexer__TStar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TStar> */
RET_LABEL:;
}
/* method lexer#TStar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TStar__init_tk(val* self, val* p0) {
lexer__TStar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TSlash#parser_index for (self: TSlash): Int */
long lexer__TSlash__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 69;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TSlash#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TSlash__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TSlash__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TSlash#init_tk for (self: TSlash, Location) */
void lexer__TSlash__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TSlash> */
RET_LABEL:;
}
/* method lexer#TSlash#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TSlash__init_tk(val* self, val* p0) {
lexer__TSlash__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TPercent#parser_index for (self: TPercent): Int */
long lexer__TPercent__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 70;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TPercent#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TPercent__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TPercent__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TPercent#init_tk for (self: TPercent, Location) */
void lexer__TPercent__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TPercent> */
RET_LABEL:;
}
/* method lexer#TPercent#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TPercent__init_tk(val* self, val* p0) {
lexer__TPercent__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TEq#parser_index for (self: TEq): Int */
long lexer__TEq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 71;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TEq#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TEq__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TEq__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEq#init_tk for (self: TEq, Location) */
void lexer__TEq__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TEq> */
RET_LABEL:;
}
/* method lexer#TEq#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TEq__init_tk(val* self, val* p0) {
lexer__TEq__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TNe#parser_index for (self: TNe): Int */
long lexer__TNe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 72;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TNe#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TNe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TNe__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TNe#init_tk for (self: TNe, Location) */
void lexer__TNe__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TNe> */
RET_LABEL:;
}
/* method lexer#TNe#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TNe__init_tk(val* self, val* p0) {
lexer__TNe__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TLt#parser_index for (self: TLt): Int */
long lexer__TLt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 73;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TLt#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TLt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TLt__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TLt#init_tk for (self: TLt, Location) */
void lexer__TLt__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TLt> */
RET_LABEL:;
}
/* method lexer#TLt#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TLt__init_tk(val* self, val* p0) {
lexer__TLt__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TLe#parser_index for (self: TLe): Int */
long lexer__TLe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 74;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TLe#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TLe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TLe__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TLe#init_tk for (self: TLe, Location) */
void lexer__TLe__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TLe> */
RET_LABEL:;
}
/* method lexer#TLe#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TLe__init_tk(val* self, val* p0) {
lexer__TLe__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TLl#parser_index for (self: TLl): Int */
long lexer__TLl__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 75;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TLl#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TLl__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TLl__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TLl#init_tk for (self: TLl, Location) */
void lexer__TLl__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TLl> */
RET_LABEL:;
}
/* method lexer#TLl#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TLl__init_tk(val* self, val* p0) {
lexer__TLl__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TGt#parser_index for (self: TGt): Int */
long lexer__TGt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 76;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TGt#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TGt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TGt__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TGt#init_tk for (self: TGt, Location) */
void lexer__TGt__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TGt> */
RET_LABEL:;
}
/* method lexer#TGt#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TGt__init_tk(val* self, val* p0) {
lexer__TGt__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TGe#parser_index for (self: TGe): Int */
long lexer__TGe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 77;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TGe#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TGe__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TGe__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TGe#init_tk for (self: TGe, Location) */
void lexer__TGe__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TGe> */
RET_LABEL:;
}
/* method lexer#TGe#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TGe__init_tk(val* self, val* p0) {
lexer__TGe__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TGg#parser_index for (self: TGg): Int */
long lexer__TGg__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 78;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TGg#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TGg__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TGg__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TGg#init_tk for (self: TGg, Location) */
void lexer__TGg__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TGg> */
RET_LABEL:;
}
/* method lexer#TGg#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TGg__init_tk(val* self, val* p0) {
lexer__TGg__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TStarship#parser_index for (self: TStarship): Int */
long lexer__TStarship__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 79;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TStarship#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TStarship__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TStarship__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TStarship#init_tk for (self: TStarship, Location) */
void lexer__TStarship__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TStarship> */
RET_LABEL:;
}
/* method lexer#TStarship#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TStarship__init_tk(val* self, val* p0) {
lexer__TStarship__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TBang#parser_index for (self: TBang): Int */
long lexer__TBang__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 80;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TBang#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TBang__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TBang__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TBang#init_tk for (self: TBang, Location) */
void lexer__TBang__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TBang> */
RET_LABEL:;
}
/* method lexer#TBang#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TBang__init_tk(val* self, val* p0) {
lexer__TBang__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TAt#parser_index for (self: TAt): Int */
long lexer__TAt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 81;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TAt#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TAt__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TAt__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TAt#init_tk for (self: TAt, Location) */
void lexer__TAt__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TAt> */
RET_LABEL:;
}
/* method lexer#TAt#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TAt__init_tk(val* self, val* p0) {
lexer__TAt__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TClassid#parser_index for (self: TClassid): Int */
long lexer__TClassid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 82;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TClassid#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TClassid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TClassid__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TClassid#init_tk for (self: TClassid, Location) */
void lexer__TClassid__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TClassid> */
RET_LABEL:;
}
/* method lexer#TClassid#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TClassid__init_tk(val* self, val* p0) {
lexer__TClassid__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TId#parser_index for (self: TId): Int */
long lexer__TId__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 83;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TId#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TId__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TId__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TId#init_tk for (self: TId, Location) */
void lexer__TId__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TId> */
RET_LABEL:;
}
/* method lexer#TId#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TId__init_tk(val* self, val* p0) {
lexer__TId__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TAttrid#parser_index for (self: TAttrid): Int */
long lexer__TAttrid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 84;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TAttrid#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TAttrid__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TAttrid__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TAttrid#init_tk for (self: TAttrid, Location) */
void lexer__TAttrid__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TAttrid> */
RET_LABEL:;
}
/* method lexer#TAttrid#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TAttrid__init_tk(val* self, val* p0) {
lexer__TAttrid__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TNumber#parser_index for (self: TNumber): Int */
long lexer__TNumber__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 85;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TNumber#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TNumber__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TNumber__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TNumber#init_tk for (self: TNumber, Location) */
void lexer__TNumber__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TNumber> */
RET_LABEL:;
}
/* method lexer#TNumber#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TNumber__init_tk(val* self, val* p0) {
lexer__TNumber__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TFloat#parser_index for (self: TFloat): Int */
long lexer__TFloat__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 86;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TFloat#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TFloat__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TFloat__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TFloat#init_tk for (self: TFloat, Location) */
void lexer__TFloat__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TFloat> */
RET_LABEL:;
}
/* method lexer#TFloat#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TFloat__init_tk(val* self, val* p0) {
lexer__TFloat__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TString#parser_index for (self: TString): Int */
long lexer__TString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 87;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TString#init_tk for (self: TString, Location) */
void lexer__TString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TString> */
RET_LABEL:;
}
/* method lexer#TString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TString__init_tk(val* self, val* p0) {
lexer__TString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TStartString#parser_index for (self: TStartString): Int */
long lexer__TStartString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 88;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TStartString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TStartString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TStartString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TStartString#init_tk for (self: TStartString, Location) */
void lexer__TStartString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TStartString> */
RET_LABEL:;
}
/* method lexer#TStartString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TStartString__init_tk(val* self, val* p0) {
lexer__TStartString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TMidString#parser_index for (self: TMidString): Int */
long lexer__TMidString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 89;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TMidString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TMidString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TMidString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TMidString#init_tk for (self: TMidString, Location) */
void lexer__TMidString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TMidString> */
RET_LABEL:;
}
/* method lexer#TMidString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TMidString__init_tk(val* self, val* p0) {
lexer__TMidString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TEndString#parser_index for (self: TEndString): Int */
long lexer__TEndString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 90;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TEndString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TEndString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TEndString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TEndString#init_tk for (self: TEndString, Location) */
void lexer__TEndString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TEndString> */
RET_LABEL:;
}
/* method lexer#TEndString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TEndString__init_tk(val* self, val* p0) {
lexer__TEndString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TChar#parser_index for (self: TChar): Int */
long lexer__TChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 91;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TChar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TChar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TChar#init_tk for (self: TChar, Location) */
void lexer__TChar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TChar> */
RET_LABEL:;
}
/* method lexer#TChar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TChar__init_tk(val* self, val* p0) {
lexer__TChar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TBadString#parser_index for (self: TBadString): Int */
long lexer__TBadString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 92;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TBadString#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TBadString__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TBadString__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TBadString#init_tk for (self: TBadString, Location) */
void lexer__TBadString__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TBadString> */
RET_LABEL:;
}
/* method lexer#TBadString#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TBadString__init_tk(val* self, val* p0) {
lexer__TBadString__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TBadChar#parser_index for (self: TBadChar): Int */
long lexer__TBadChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 93;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TBadChar#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TBadChar__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TBadChar__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TBadChar#init_tk for (self: TBadChar, Location) */
void lexer__TBadChar__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TBadChar> */
RET_LABEL:;
}
/* method lexer#TBadChar#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TBadChar__init_tk(val* self, val* p0) {
lexer__TBadChar__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#TExternCodeSegment#parser_index for (self: TExternCodeSegment): Int */
long lexer__TExternCodeSegment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 94;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#TExternCodeSegment#parser_index for (self: Object): Int */
long VIRTUAL_lexer__TExternCodeSegment__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__TExternCodeSegment__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#TExternCodeSegment#init_tk for (self: TExternCodeSegment, Location) */
void lexer__TExternCodeSegment__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
var_loc = p0;
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:TExternCodeSegment> */
RET_LABEL:;
}
/* method lexer#TExternCodeSegment#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__TExternCodeSegment__init_tk(val* self, val* p0) {
lexer__TExternCodeSegment__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#EOF#parser_index for (self: EOF): Int */
long lexer__EOF__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 95;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#EOF#parser_index for (self: Object): Int */
long VIRTUAL_lexer__EOF__parser_index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__EOF__parser_index(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#EOF#init_tk for (self: EOF, Location) */
void lexer__EOF__init_tk(val* self, val* p0) {
val* var_loc /* var loc: Location */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : String */;
var_loc = p0;
if (varonce) {
var = varonce;
} else {
var1 = "";
var2 = 0;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
self->attrs[COLOR_lexer__Token___text].val = var; /* _text on <self:EOF> */
self->attrs[COLOR_parser_nodes__ANode___location].val = var_loc; /* _location on <self:EOF> */
RET_LABEL:;
}
/* method lexer#EOF#init_tk for (self: Object, Location) */
void VIRTUAL_lexer__EOF__init_tk(val* self, val* p0) {
lexer__EOF__init_tk(self, p0);
RET_LABEL:;
}
/* method lexer#AError#message for (self: AError): String */
val* lexer__AError__message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_lexer__AError___message].val; /* _message on <self:AError> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _message");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1183);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AError#message for (self: Object): String */
val* VIRTUAL_lexer__AError__message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = lexer__AError__message(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AError#init_error for (self: AError, String, Location) */
void lexer__AError__init_error(val* self, val* p0, val* p1) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
var_message = p0;
var_loc = p1;
((void (*)(val*, val*))(self->class->vft[COLOR_lexer__EOF__init_tk]))(self, var_loc) /* init_tk on <self:AError>*/;
self->attrs[COLOR_lexer__AError___message].val = var_message; /* _message on <self:AError> */
RET_LABEL:;
}
/* method lexer#AError#init_error for (self: Object, String, Location) */
void VIRTUAL_lexer__AError__init_error(val* self, val* p0, val* p1) {
lexer__AError__init_error(self, p0, p1);
RET_LABEL:;
}
/* method lexer#ALexerError#string for (self: ALexerError): String */
val* lexer__ALexerError__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_lexer__ALexerError___string].val; /* _string on <self:ALexerError> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _string");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1193);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#ALexerError#string for (self: Object): String */
val* VIRTUAL_lexer__ALexerError__string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = lexer__ALexerError__string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#ALexerError#init_lexer_error for (self: ALexerError, String, Location, String) */
void lexer__ALexerError__init_lexer_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_string /* var string: String */;
var_message = p0;
var_loc = p1;
var_string = p2;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_lexer__AError__init_error]))(self, var_message, var_loc) /* init_error on <self:ALexerError>*/;
self->attrs[COLOR_lexer__ALexerError___string].val = var_string; /* _string on <self:ALexerError> */
RET_LABEL:;
}
/* method lexer#ALexerError#init_lexer_error for (self: Object, String, Location, String) */
void VIRTUAL_lexer__ALexerError__init_lexer_error(val* self, val* p0, val* p1, val* p2) {
lexer__ALexerError__init_lexer_error(self, p0, p1, p2);
RET_LABEL:;
}
/* method lexer#AParserError#token for (self: AParserError): Token */
val* lexer__AParserError__token(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = self->attrs[COLOR_lexer__AParserError___token].val; /* _token on <self:AParserError> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _token");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1203);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AParserError#token for (self: Object): Token */
val* VIRTUAL_lexer__AParserError__token(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer__AParserError__token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#AParserError#init_parser_error for (self: AParserError, String, Location, Token) */
void lexer__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2) {
val* var_message /* var message: String */;
val* var_loc /* var loc: Location */;
val* var_token /* var token: Token */;
var_message = p0;
var_loc = p1;
var_token = p2;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_lexer__AError__init_error]))(self, var_message, var_loc) /* init_error on <self:AParserError>*/;
self->attrs[COLOR_lexer__AParserError___token].val = var_token; /* _token on <self:AParserError> */
RET_LABEL:;
}
/* method lexer#AParserError#init_parser_error for (self: Object, String, Location, Token) */
void VIRTUAL_lexer__AParserError__init_parser_error(val* self, val* p0, val* p1, val* p2) {
lexer__AParserError__init_parser_error(self, p0, p1, p2);
RET_LABEL:;
}
/* method lexer#Lexer#file for (self: Lexer): SourceFile */
val* lexer__Lexer__file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1222);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#file for (self: Object): SourceFile */
val* VIRTUAL_lexer__Lexer__file(val* self) {
val* var /* : SourceFile */;
val* var1 /* : SourceFile */;
var1 = lexer__Lexer__file(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#state_initial for (self: Lexer): Int */
long lexer__Lexer__state_initial(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#state_initial for (self: Object): Int */
long VIRTUAL_lexer__Lexer__state_initial(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = lexer__Lexer__state_initial(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#init for (self: Lexer, SourceFile) */
void lexer__Lexer__init(val* self, val* p0) {
val* var_file /* var file: SourceFile */;
var_file = p0;
self->attrs[COLOR_lexer__Lexer___file].val = var_file; /* _file on <self:Lexer> */
RET_LABEL:;
}
/* method lexer#Lexer#init for (self: Object, SourceFile) */
void VIRTUAL_lexer__Lexer__init(val* self, val* p0) {
lexer__Lexer__init(self, p0);
RET_LABEL:;
}
/* method lexer#Lexer#last_token for (self: Lexer): nullable Token */
val* lexer__Lexer__last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = self->attrs[COLOR_lexer__Lexer___64dlast_token].val; /* @last_token on <self:Lexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#last_token for (self: Object): nullable Token */
val* VIRTUAL_lexer__Lexer__last_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = lexer__Lexer__last_token(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#last_token= for (self: Lexer, nullable Token) */
void lexer__Lexer__last_token_61d(val* self, val* p0) {
self->attrs[COLOR_lexer__Lexer___64dlast_token].val = p0; /* @last_token on <self:Lexer> */
RET_LABEL:;
}
/* method lexer#Lexer#last_token= for (self: Object, nullable Token) */
void VIRTUAL_lexer__Lexer__last_token_61d(val* self, val* p0) {
lexer__Lexer__last_token_61d(self, p0);
RET_LABEL:;
}
/* method lexer#Lexer#peek for (self: Lexer): Token */
val* lexer__Lexer__peek(val* self) {
val* var /* : Token */;
val* var1 /* : nullable Token */;
val* var_t /* var t: nullable Token */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable Token */;
val* var5 /* : null */;
short int var6 /* : Bool */;
val* var7 /* : nullable Token */;
val* var8 /* : nullable Token */;
val* var_l /* var l: nullable Token */;
val* var9 /* : null */;
short int var10 /* : Bool */;
var1 = self->attrs[COLOR_lexer__Lexer___token].val; /* _token on <self:Lexer> */
var_t = var1;
var2 = NULL;
if (var_t == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (var3){
var = var_t;
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__get_token]))(self) /* get_token on <self:Lexer>*/;
var_t = var4;
for(;;) {
var5 = NULL;
if (var_t == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (!var6) break;
var7 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__get_token]))(self) /* get_token on <self:Lexer>*/;
var_t = var7;
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
var8 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__last_token]))(self) /* last_token on <self:Lexer>*/;
var_l = var8;
var9 = NULL;
if (var_l == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (var10){
((void (*)(val*, val*))(var_l->class->vft[COLOR_parser_nodes__Token__next_token_61d]))(var_l, var_t) /* next_token= on <var_l:nullable Token(Token)>*/;
((void (*)(val*, val*))(var_t->class->vft[COLOR_parser_nodes__Token__prev_token_61d]))(var_t, var_l) /* prev_token= on <var_t:nullable Token(Token)>*/;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_lexer__Lexer__last_token_61d]))(self, var_t) /* last_token= on <self:Lexer>*/;
self->attrs[COLOR_lexer__Lexer___token].val = var_t; /* _token on <self:Lexer> */
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#peek for (self: Object): Token */
val* VIRTUAL_lexer__Lexer__peek(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer__Lexer__peek(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#next for (self: Lexer): Token */
val* lexer__Lexer__next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
val* var_result /* var result: Token */;
val* var2 /* : null */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_lexer__Lexer__peek]))(self) /* peek on <self:Lexer>*/;
var_result = var1;
var2 = NULL;
self->attrs[COLOR_lexer__Lexer___token].val = var2; /* _token on <self:Lexer> */
var = var_result;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#next for (self: Object): Token */
val* VIRTUAL_lexer__Lexer__next(val* self) {
val* var /* : Token */;
val* var1 /* : Token */;
var1 = lexer__Lexer__next(self);
var = var1;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#get_token for (self: Lexer): nullable Token */
val* lexer__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
long var1 /* : Int */;
long var_dfa_state /* var dfa_state: Int */;
long var2 /* : Int */;
long var_sp /* var sp: Int */;
long var_start_stream_pos /* var start_stream_pos: Int */;
long var3 /* : Int */;
long var_start_pos /* var start_pos: Int */;
long var4 /* : Int */;
long var_start_line /* var start_line: Int */;
val* var5 /* : SourceFile */;
val* var6 /* : String */;
val* var_string /* var string: String */;
long var7 /* : Int */;
long var_string_len /* var string_len: Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var_accept_state /* var accept_state: Int */;
long var12 /* : Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var_accept_token /* var accept_token: Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_accept_length /* var accept_length: Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
long var_accept_pos /* var accept_pos: Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var_accept_line /* var accept_line: Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
long var32 /* : Int */;
long var33 /* : Int */;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
long var37 /* : Int */;
char var39 /* : Char */;
long var40 /* : Int */;
long var_c /* var c: Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var_cr /* var cr: Bool */;
long var46 /* : Int */;
long var_line /* var line: Int */;
long var47 /* : Int */;
long var_pos /* var pos: Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : SourceFile */;
val* var54 /* : Array[Int] */;
val* var55 /* : nullable Object */;
long var56 /* : Int */;
long var57 /* : Int */;
long var59 /* : Int */;
long var60 /* : Int */;
val* var61 /* : SourceFile */;
val* var62 /* : Array[Int] */;
val* var63 /* : nullable Object */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
long var69 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
short int var73 /* : Bool */;
val* var74 /* : SourceFile */;
val* var75 /* : Array[Int] */;
val* var76 /* : nullable Object */;
long var77 /* : Int */;
long var78 /* : Int */;
long var80 /* : Int */;
short int var81 /* : Bool */;
long var_old_state /* var old_state: Int */;
long var82 /* : Int */;
long var83 /* : Int */;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
long var93 /* : Int */;
long var94 /* : Int */;
long var96 /* : Int */;
long var97 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
long var101 /* : Int */;
long var103 /* : Int */;
long var104 /* : Int */;
long var_low /* var low: Int */;
long var105 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
long var108 /* : Int */;
long var110 /* : Int */;
long var_high /* var high: Int */;
long var111 /* : Int */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
short int var125 /* : Bool */;
long var126 /* : Int */;
long var128 /* : Int */;
long var129 /* : Int */;
long var130 /* : Int */;
long var132 /* : Int */;
long var_middle /* var middle: Int */;
long var133 /* : Int */;
long var134 /* : Int */;
long var136 /* : Int */;
long var137 /* : Int */;
long var138 /* : Int */;
long var140 /* : Int */;
long var_offset /* var offset: Int */;
long var141 /* : Int */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
const char* var_class_name147;
short int var148 /* : Bool */;
long var149 /* : Int */;
long var150 /* : Int */;
long var152 /* : Int */;
long var153 /* : Int */;
long var154 /* : Int */;
long var156 /* : Int */;
long var157 /* : Int */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name163;
short int var164 /* : Bool */;
long var165 /* : Int */;
long var166 /* : Int */;
long var168 /* : Int */;
long var169 /* : Int */;
long var170 /* : Int */;
long var172 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
long var175 /* : Int */;
long var177 /* : Int */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
short int var184 /* : Bool */;
long var186 /* : Int */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
int cltype190;
int idtype191;
const char* var_class_name192;
short int var193 /* : Bool */;
long var194 /* : Int */;
long var_tok /* var tok: Int */;
long var195 /* : Int */;
long var196 /* : Int */;
long var198 /* : Int */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
long var203 /* : Int */;
long var205 /* : Int */;
long var206 /* : Int */;
long var207 /* : Int */;
long var208 /* : Int */;
long var209 /* : Int */;
long var211 /* : Int */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
short int var215 /* : Bool */;
val* var216 /* : Location */;
val* var217 /* : SourceFile */;
long var218 /* : Int */;
long var219 /* : Int */;
long var221 /* : Int */;
long var222 /* : Int */;
long var223 /* : Int */;
long var225 /* : Int */;
long var226 /* : Int */;
long var227 /* : Int */;
long var229 /* : Int */;
val* var_location /* var location: Location */;
long var230 /* : Int */;
long var232 /* : Int */;
long var233 /* : Int */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
val* var237 /* : null */;
long var238 /* : Int */;
short int var239 /* : Bool */;
short int var241 /* : Bool */;
val* var242 /* : TEol */;
long var243 /* : Int */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
val* var247 /* : TComment */;
long var248 /* : Int */;
short int var249 /* : Bool */;
short int var251 /* : Bool */;
val* var252 /* : TKwpackage */;
long var253 /* : Int */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
val* var257 /* : TKwmodule */;
long var258 /* : Int */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
val* var262 /* : TKwimport */;
long var263 /* : Int */;
short int var264 /* : Bool */;
short int var266 /* : Bool */;
val* var267 /* : TKwclass */;
long var268 /* : Int */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
val* var272 /* : TKwabstract */;
long var273 /* : Int */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
val* var277 /* : TKwinterface */;
long var278 /* : Int */;
short int var279 /* : Bool */;
short int var281 /* : Bool */;
val* var282 /* : TKwenum */;
long var283 /* : Int */;
short int var284 /* : Bool */;
short int var286 /* : Bool */;
val* var287 /* : TKwend */;
long var288 /* : Int */;
short int var289 /* : Bool */;
short int var291 /* : Bool */;
val* var292 /* : TKwmeth */;
long var293 /* : Int */;
short int var294 /* : Bool */;
short int var296 /* : Bool */;
val* var297 /* : TKwtype */;
long var298 /* : Int */;
short int var299 /* : Bool */;
short int var301 /* : Bool */;
val* var302 /* : TKwinit */;
long var303 /* : Int */;
short int var304 /* : Bool */;
short int var306 /* : Bool */;
val* var307 /* : TKwredef */;
long var308 /* : Int */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
val* var312 /* : TKwis */;
long var313 /* : Int */;
short int var314 /* : Bool */;
short int var316 /* : Bool */;
val* var317 /* : TKwdo */;
long var318 /* : Int */;
short int var319 /* : Bool */;
short int var321 /* : Bool */;
val* var322 /* : TKwreadable */;
long var323 /* : Int */;
short int var324 /* : Bool */;
short int var326 /* : Bool */;
val* var327 /* : TKwwritable */;
long var328 /* : Int */;
short int var329 /* : Bool */;
short int var331 /* : Bool */;
val* var332 /* : TKwvar */;
long var333 /* : Int */;
short int var334 /* : Bool */;
short int var336 /* : Bool */;
val* var337 /* : TKwintern */;
long var338 /* : Int */;
short int var339 /* : Bool */;
short int var341 /* : Bool */;
val* var342 /* : TKwextern */;
long var343 /* : Int */;
short int var344 /* : Bool */;
short int var346 /* : Bool */;
val* var347 /* : TKwprotected */;
long var348 /* : Int */;
short int var349 /* : Bool */;
short int var351 /* : Bool */;
val* var352 /* : TKwprivate */;
long var353 /* : Int */;
short int var354 /* : Bool */;
short int var356 /* : Bool */;
val* var357 /* : TKwintrude */;
long var358 /* : Int */;
short int var359 /* : Bool */;
short int var361 /* : Bool */;
val* var362 /* : TKwif */;
long var363 /* : Int */;
short int var364 /* : Bool */;
short int var366 /* : Bool */;
val* var367 /* : TKwthen */;
long var368 /* : Int */;
short int var369 /* : Bool */;
short int var371 /* : Bool */;
val* var372 /* : TKwelse */;
long var373 /* : Int */;
short int var374 /* : Bool */;
short int var376 /* : Bool */;
val* var377 /* : TKwwhile */;
long var378 /* : Int */;
short int var379 /* : Bool */;
short int var381 /* : Bool */;
val* var382 /* : TKwloop */;
long var383 /* : Int */;
short int var384 /* : Bool */;
short int var386 /* : Bool */;
val* var387 /* : TKwfor */;
long var388 /* : Int */;
short int var389 /* : Bool */;
short int var391 /* : Bool */;
val* var392 /* : TKwin */;
long var393 /* : Int */;
short int var394 /* : Bool */;
short int var396 /* : Bool */;
val* var397 /* : TKwand */;
long var398 /* : Int */;
short int var399 /* : Bool */;
short int var401 /* : Bool */;
val* var402 /* : TKwor */;
long var403 /* : Int */;
short int var404 /* : Bool */;
short int var406 /* : Bool */;
val* var407 /* : TKwnot */;
long var408 /* : Int */;
short int var409 /* : Bool */;
short int var411 /* : Bool */;
val* var412 /* : TKwimplies */;
long var413 /* : Int */;
short int var414 /* : Bool */;
short int var416 /* : Bool */;
val* var417 /* : TKwreturn */;
long var418 /* : Int */;
short int var419 /* : Bool */;
short int var421 /* : Bool */;
val* var422 /* : TKwcontinue */;
long var423 /* : Int */;
short int var424 /* : Bool */;
short int var426 /* : Bool */;
val* var427 /* : TKwbreak */;
long var428 /* : Int */;
short int var429 /* : Bool */;
short int var431 /* : Bool */;
val* var432 /* : TKwabort */;
long var433 /* : Int */;
short int var434 /* : Bool */;
short int var436 /* : Bool */;
val* var437 /* : TKwassert */;
long var438 /* : Int */;
short int var439 /* : Bool */;
short int var441 /* : Bool */;
val* var442 /* : TKwnew */;
long var443 /* : Int */;
short int var444 /* : Bool */;
short int var446 /* : Bool */;
val* var447 /* : TKwisa */;
long var448 /* : Int */;
short int var449 /* : Bool */;
short int var451 /* : Bool */;
val* var452 /* : TKwonce */;
long var453 /* : Int */;
short int var454 /* : Bool */;
short int var456 /* : Bool */;
val* var457 /* : TKwsuper */;
long var458 /* : Int */;
short int var459 /* : Bool */;
short int var461 /* : Bool */;
val* var462 /* : TKwself */;
long var463 /* : Int */;
short int var464 /* : Bool */;
short int var466 /* : Bool */;
val* var467 /* : TKwtrue */;
long var468 /* : Int */;
short int var469 /* : Bool */;
short int var471 /* : Bool */;
val* var472 /* : TKwfalse */;
long var473 /* : Int */;
short int var474 /* : Bool */;
short int var476 /* : Bool */;
val* var477 /* : TKwnull */;
long var478 /* : Int */;
short int var479 /* : Bool */;
short int var481 /* : Bool */;
val* var482 /* : TKwas */;
long var483 /* : Int */;
short int var484 /* : Bool */;
short int var486 /* : Bool */;
val* var487 /* : TKwnullable */;
long var488 /* : Int */;
short int var489 /* : Bool */;
short int var491 /* : Bool */;
val* var492 /* : TKwisset */;
long var493 /* : Int */;
short int var494 /* : Bool */;
short int var496 /* : Bool */;
val* var497 /* : TKwlabel */;
long var498 /* : Int */;
short int var499 /* : Bool */;
short int var501 /* : Bool */;
val* var502 /* : TKwdebug */;
long var503 /* : Int */;
short int var504 /* : Bool */;
short int var506 /* : Bool */;
val* var507 /* : TOpar */;
long var508 /* : Int */;
short int var509 /* : Bool */;
short int var511 /* : Bool */;
val* var512 /* : TCpar */;
long var513 /* : Int */;
short int var514 /* : Bool */;
short int var516 /* : Bool */;
val* var517 /* : TObra */;
long var518 /* : Int */;
short int var519 /* : Bool */;
short int var521 /* : Bool */;
val* var522 /* : TCbra */;
long var523 /* : Int */;
short int var524 /* : Bool */;
short int var526 /* : Bool */;
val* var527 /* : TComma */;
long var528 /* : Int */;
short int var529 /* : Bool */;
short int var531 /* : Bool */;
val* var532 /* : TColumn */;
long var533 /* : Int */;
short int var534 /* : Bool */;
short int var536 /* : Bool */;
val* var537 /* : TQuad */;
long var538 /* : Int */;
short int var539 /* : Bool */;
short int var541 /* : Bool */;
val* var542 /* : TAssign */;
long var543 /* : Int */;
short int var544 /* : Bool */;
short int var546 /* : Bool */;
val* var547 /* : TPluseq */;
long var548 /* : Int */;
short int var549 /* : Bool */;
short int var551 /* : Bool */;
val* var552 /* : TMinuseq */;
long var553 /* : Int */;
short int var554 /* : Bool */;
short int var556 /* : Bool */;
val* var557 /* : TDotdotdot */;
long var558 /* : Int */;
short int var559 /* : Bool */;
short int var561 /* : Bool */;
val* var562 /* : TDotdot */;
long var563 /* : Int */;
short int var564 /* : Bool */;
short int var566 /* : Bool */;
val* var567 /* : TDot */;
long var568 /* : Int */;
short int var569 /* : Bool */;
short int var571 /* : Bool */;
val* var572 /* : TPlus */;
long var573 /* : Int */;
short int var574 /* : Bool */;
short int var576 /* : Bool */;
val* var577 /* : TMinus */;
long var578 /* : Int */;
short int var579 /* : Bool */;
short int var581 /* : Bool */;
val* var582 /* : TStar */;
long var583 /* : Int */;
short int var584 /* : Bool */;
short int var586 /* : Bool */;
val* var587 /* : TSlash */;
long var588 /* : Int */;
short int var589 /* : Bool */;
short int var591 /* : Bool */;
val* var592 /* : TPercent */;
long var593 /* : Int */;
short int var594 /* : Bool */;
short int var596 /* : Bool */;
val* var597 /* : TEq */;
long var598 /* : Int */;
short int var599 /* : Bool */;
short int var601 /* : Bool */;
val* var602 /* : TNe */;
long var603 /* : Int */;
short int var604 /* : Bool */;
short int var606 /* : Bool */;
val* var607 /* : TLt */;
long var608 /* : Int */;
short int var609 /* : Bool */;
short int var611 /* : Bool */;
val* var612 /* : TLe */;
long var613 /* : Int */;
short int var614 /* : Bool */;
short int var616 /* : Bool */;
val* var617 /* : TLl */;
long var618 /* : Int */;
short int var619 /* : Bool */;
short int var621 /* : Bool */;
val* var622 /* : TGt */;
long var623 /* : Int */;
short int var624 /* : Bool */;
short int var626 /* : Bool */;
val* var627 /* : TGe */;
long var628 /* : Int */;
short int var629 /* : Bool */;
short int var631 /* : Bool */;
val* var632 /* : TGg */;
long var633 /* : Int */;
short int var634 /* : Bool */;
short int var636 /* : Bool */;
val* var637 /* : TStarship */;
long var638 /* : Int */;
short int var639 /* : Bool */;
short int var641 /* : Bool */;
val* var642 /* : TBang */;
long var643 /* : Int */;
short int var644 /* : Bool */;
short int var646 /* : Bool */;
val* var647 /* : TAt */;
long var648 /* : Int */;
short int var649 /* : Bool */;
short int var651 /* : Bool */;
val* var652 /* : TClassid */;
long var653 /* : Int */;
short int var654 /* : Bool */;
short int var656 /* : Bool */;
val* var657 /* : TId */;
long var658 /* : Int */;
short int var659 /* : Bool */;
short int var661 /* : Bool */;
val* var662 /* : TAttrid */;
long var663 /* : Int */;
short int var664 /* : Bool */;
short int var666 /* : Bool */;
val* var667 /* : TNumber */;
long var668 /* : Int */;
short int var669 /* : Bool */;
short int var671 /* : Bool */;
val* var672 /* : TFloat */;
long var673 /* : Int */;
short int var674 /* : Bool */;
short int var676 /* : Bool */;
val* var677 /* : TString */;
long var678 /* : Int */;
short int var679 /* : Bool */;
short int var681 /* : Bool */;
val* var682 /* : TStartString */;
long var683 /* : Int */;
short int var684 /* : Bool */;
short int var686 /* : Bool */;
val* var687 /* : TMidString */;
long var688 /* : Int */;
short int var689 /* : Bool */;
short int var691 /* : Bool */;
val* var692 /* : TEndString */;
long var693 /* : Int */;
short int var694 /* : Bool */;
short int var696 /* : Bool */;
val* var697 /* : TChar */;
long var698 /* : Int */;
short int var699 /* : Bool */;
short int var701 /* : Bool */;
val* var702 /* : TBadString */;
long var703 /* : Int */;
short int var704 /* : Bool */;
short int var706 /* : Bool */;
val* var707 /* : TBadChar */;
long var708 /* : Int */;
short int var709 /* : Bool */;
short int var711 /* : Bool */;
val* var712 /* : TExternCodeSegment */;
val* var713 /* : Location */;
val* var714 /* : SourceFile */;
long var715 /* : Int */;
long var716 /* : Int */;
long var718 /* : Int */;
long var719 /* : Int */;
long var720 /* : Int */;
long var722 /* : Int */;
long var723 /* : Int */;
long var724 /* : Int */;
long var726 /* : Int */;
long var727 /* : Int */;
long var728 /* : Int */;
long var730 /* : Int */;
val* var_location731 /* var location: Location */;
short int var732 /* : Bool */;
short int var734 /* : Bool */;
int cltype735;
int idtype736;
const char* var_class_name737;
short int var738 /* : Bool */;
long var739 /* : Int */;
long var741 /* : Int */;
val* var742 /* : String */;
val* var_text /* var text: String */;
val* var743 /* : ALexerError */;
val* var744 /* : Array[Object] */;
long var745 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var746 /* : String */;
char* var747 /* : NativeString */;
long var748 /* : Int */;
val* var749 /* : String */;
static val* varonce750;
val* var751 /* : String */;
char* var752 /* : NativeString */;
long var753 /* : Int */;
val* var754 /* : String */;
val* var755 /* : String */;
val* var_token /* var token: ALexerError */;
val* var756 /* : EOF */;
val* var_token757 /* var token: EOF */;
var1 = 0;
var_dfa_state = var1;
var2 = self->attrs[COLOR_lexer__Lexer___stream_pos].l; /* _stream_pos on <self:Lexer> */
var_sp = var2;
var_start_stream_pos = var_sp;
var3 = self->attrs[COLOR_lexer__Lexer___pos].l; /* _pos on <self:Lexer> */
var_start_pos = var3;
var4 = self->attrs[COLOR_lexer__Lexer___line].l; /* _line on <self:Lexer> */
var_start_line = var4;
var5 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1287);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_location__SourceFile__string]))(var5) /* string on <var5:SourceFile>*/;
var_string = var6;
var7 = ((long (*)(val*))(var_string->class->vft[COLOR_abstract_collection__Collection__length]))(var_string) /* length on <var_string:String>*/;
var_string_len = var7;
var8 = 1;
{ /* Inline kernel#Int#unary - (var8) */
var11 = -var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var_accept_state = var9;
var12 = 1;
{ /* Inline kernel#Int#unary - (var12) */
var15 = -var12;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var_accept_token = var13;
var16 = 1;
{ /* Inline kernel#Int#unary - (var16) */
var19 = -var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var_accept_length = var17;
var20 = 1;
{ /* Inline kernel#Int#unary - (var20) */
var23 = -var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var_accept_pos = var21;
var24 = 1;
{ /* Inline kernel#Int#unary - (var24) */
var27 = -var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var_accept_line = var25;
for(;;) {
{ /* Inline kernel#Int#>= (var_sp,var_string_len) */
/* Covariant cast for argument 0 (i) <var_string_len:Int> isa OTHER */
/* <var_string_len:Int> isa OTHER */
var30 = 1; /* easy <var_string_len:Int> isa OTHER*/
if (!var30) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var31 = var_sp >= var_string_len;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
if (var28){
var32 = 1;
{ /* Inline kernel#Int#unary - (var32) */
var35 = -var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var_dfa_state = var33;
} else {
var36 = ((val* (*)(val*, long))(var_string->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_string, var_sp) /* [] on <var_string:String>*/;
{ /* Inline kernel#Char#ascii (var36) */
var39 = ((struct instance_kernel__Char*)var36)->value; /* autounbox from nullable Object to Char */;
var40 = (unsigned char)var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var_c = var37;
var41 = 1;
{ /* Inline kernel#Int#+ (var_sp,var41) */
var44 = var_sp + var41;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var_sp = var42;
var45 = self->attrs[COLOR_lexer__Lexer___cr].s; /* _cr on <self:Lexer> */
var_cr = var45;
var46 = self->attrs[COLOR_lexer__Lexer___line].l; /* _line on <self:Lexer> */
var_line = var46;
var47 = self->attrs[COLOR_lexer__Lexer___pos].l; /* _pos on <self:Lexer> */
var_pos = var47;
var48 = 10;
{ /* Inline kernel#Int#== (var_c,var48) */
var51 = var_c == var48;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
if (var49){
if (var_cr){
var52 = 0;
var_cr = var52;
var53 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var53 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1309);
show_backtrace(1);
}
var54 = ((val* (*)(val*))(var53->class->vft[COLOR_location__SourceFile__line_starts]))(var53) /* line_starts on <var53:SourceFile>*/;
var55 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var54->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var54, var_line, var55) /* []= on <var54:Array[Int]>*/;
} else {
var56 = 1;
{ /* Inline kernel#Int#+ (var_line,var56) */
var59 = var_line + var56;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var_line = var57;
var60 = 0;
var_pos = var60;
var61 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var61 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1313);
show_backtrace(1);
}
var62 = ((val* (*)(val*))(var61->class->vft[COLOR_location__SourceFile__line_starts]))(var61) /* line_starts on <var61:SourceFile>*/;
var63 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var62->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var62, var_line, var63) /* []= on <var62:Array[Int]>*/;
}
} else {
var64 = 13;
{ /* Inline kernel#Int#== (var_c,var64) */
var67 = var_c == var64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
if (var65){
var68 = 1;
{ /* Inline kernel#Int#+ (var_line,var68) */
var71 = var_line + var68;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var_line = var69;
var72 = 0;
var_pos = var72;
var73 = 1;
var_cr = var73;
var74 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var74 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1319);
show_backtrace(1);
}
var75 = ((val* (*)(val*))(var74->class->vft[COLOR_location__SourceFile__line_starts]))(var74) /* line_starts on <var74:SourceFile>*/;
var76 = BOX_kernel__Int(var_sp); /* autobox from Int to nullable Object */
((void (*)(val*, long, val*))(var75->class->vft[COLOR_abstract_collection__Sequence___91d_93d_61d]))(var75, var_line, var76) /* []= on <var75:Array[Int]>*/;
} else {
var77 = 1;
{ /* Inline kernel#Int#+ (var_pos,var77) */
var80 = var_pos + var77;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
var_pos = var78;
var81 = 0;
var_cr = var81;
}
}
for(;;) {
var_old_state = var_dfa_state;
var82 = 1;
{ /* Inline kernel#Int#unary - (var82) */
var85 = -var82;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
{ /* Inline kernel#Int#< (var_dfa_state,var83) */
/* Covariant cast for argument 0 (i) <var83:Int> isa OTHER */
/* <var83:Int> isa OTHER */
var88 = 1; /* easy <var83:Int> isa OTHER*/
if (!var88) {
var_class_name91 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var92 = var_dfa_state < var83;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
if (var86){
var93 = 2;
{ /* Inline kernel#Int#unary - (var93) */
var96 = -var93;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
{ /* Inline kernel#Int#- (var94,var_dfa_state) */
var99 = var94 - var_dfa_state;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var_old_state = var97;
} else {
}
var100 = 1;
{ /* Inline kernel#Int#unary - (var100) */
var103 = -var100;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
var_dfa_state = var101;
var104 = 0;
var_low = var104;
var105 = 0;
var106 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var105) /* lexer_goto on <self:Lexer>*/;
var107 = 1;
{ /* Inline kernel#Int#- (var106,var107) */
var110 = var106 - var107;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
var_high = var108;
var111 = 0;
{ /* Inline kernel#Int#>= (var_high,var111) */
/* Covariant cast for argument 0 (i) <var111:Int> isa OTHER */
/* <var111:Int> isa OTHER */
var114 = 1; /* easy <var111:Int> isa OTHER*/
if (!var114) {
var_class_name117 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var118 = var_high >= var111;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
if (var112){
for(;;) {
{ /* Inline kernel#Int#<= (var_low,var_high) */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var121 = 1; /* easy <var_high:Int> isa OTHER*/
if (!var121) {
var_class_name124 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 260);
show_backtrace(1);
}
var125 = var_low <= var_high;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
if (!var119) break;
{ /* Inline kernel#Int#+ (var_low,var_high) */
var128 = var_low + var_high;
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
var129 = 2;
{ /* Inline kernel#Int#/ (var126,var129) */
var132 = var126 / var129;
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
var_middle = var130;
var133 = 3;
{ /* Inline kernel#Int#* (var_middle,var133) */
var136 = var_middle * var133;
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
var137 = 1;
{ /* Inline kernel#Int#+ (var134,var137) */
var140 = var134 + var137;
var138 = var140;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
var_offset = var138;
var141 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var_offset) /* lexer_goto on <self:Lexer>*/;
{ /* Inline kernel#Int#< (var_c,var141) */
/* Covariant cast for argument 0 (i) <var141:Int> isa OTHER */
/* <var141:Int> isa OTHER */
var144 = 1; /* easy <var141:Int> isa OTHER*/
if (!var144) {
var_class_name147 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name147);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 261);
show_backtrace(1);
}
var148 = var_c < var141;
var142 = var148;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
if (var142){
var149 = 1;
{ /* Inline kernel#Int#- (var_middle,var149) */
var152 = var_middle - var149;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var_high = var150;
} else {
var153 = 1;
{ /* Inline kernel#Int#+ (var_offset,var153) */
var156 = var_offset + var153;
var154 = var156;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
var157 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var154) /* lexer_goto on <self:Lexer>*/;
{ /* Inline kernel#Int#> (var_c,var157) */
/* Covariant cast for argument 0 (i) <var157:Int> isa OTHER */
/* <var157:Int> isa OTHER */
var160 = 1; /* easy <var157:Int> isa OTHER*/
if (!var160) {
var_class_name163 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name163);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var164 = var_c > var157;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
if (var158){
var165 = 1;
{ /* Inline kernel#Int#+ (var_middle,var165) */
var168 = var_middle + var165;
var166 = var168;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
var_low = var166;
} else {
var169 = 2;
{ /* Inline kernel#Int#+ (var_offset,var169) */
var172 = var_offset + var169;
var170 = var172;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var173 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var170) /* lexer_goto on <self:Lexer>*/;
var_dfa_state = var173;
goto BREAK_label;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
} else {
}
var174 = 2;
{ /* Inline kernel#Int#unary - (var174) */
var177 = -var174;
var175 = var177;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
{ /* Inline kernel#Int#> (var_dfa_state,var175) */
/* Covariant cast for argument 0 (i) <var175:Int> isa OTHER */
/* <var175:Int> isa OTHER */
var180 = 1; /* easy <var175:Int> isa OTHER*/
if (!var180) {
var_class_name183 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var184 = var_dfa_state > var175;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
if (var178){
goto BREAK_label185;
} else {
}
CONTINUE_label185: (void)0;
}
BREAK_label185: (void)0;
self->attrs[COLOR_lexer__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
var186 = 0;
{ /* Inline kernel#Int#>= (var_dfa_state,var186) */
/* Covariant cast for argument 0 (i) <var186:Int> isa OTHER */
/* <var186:Int> isa OTHER */
var189 = 1; /* easy <var186:Int> isa OTHER*/
if (!var189) {
var_class_name192 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name192);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 262);
show_backtrace(1);
}
var193 = var_dfa_state >= var186;
var187 = var193;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
if (var187){
var194 = ((long (*)(val*, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_accept]))(self, var_dfa_state) /* lexer_accept on <self:Lexer>*/;
var_tok = var194;
var195 = 1;
{ /* Inline kernel#Int#unary - (var195) */
var198 = -var195;
var196 = var198;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
{ /* Inline kernel#Int#!= (var_tok,var196) */
var201 = var_tok == var196;
var202 = !var201;
var199 = var202;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
if (var199){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) */
var205 = var_sp - var_start_stream_pos;
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var_accept_length = var203;
var206 = self->attrs[COLOR_lexer__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var206;
var207 = self->attrs[COLOR_lexer__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var207;
} else {
}
} else {
var208 = 1;
{ /* Inline kernel#Int#unary - (var208) */
var211 = -var208;
var209 = var211;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
{ /* Inline kernel#Int#!= (var_accept_state,var209) */
var214 = var_accept_state == var209;
var215 = !var214;
var212 = var215;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
if (var212){
var216 = NEW_location__Location(&type_location__Location);
var217 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var217 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1370);
show_backtrace(1);
}
var218 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var218) */
var221 = var_start_line + var218;
var219 = var221;
goto RET_LABEL220;
RET_LABEL220:(void)0;
}
var222 = 1;
{ /* Inline kernel#Int#+ (var_accept_line,var222) */
var225 = var_accept_line + var222;
var223 = var225;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
var226 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var226) */
var229 = var_start_pos + var226;
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
((void (*)(val*, val*, long, long, long, long))(var216->class->vft[COLOR_location__Location__init]))(var216, var217, var219, var223, var227, var_accept_pos) /* init on <var216:Location>*/;
var_location = var216;
self->attrs[COLOR_lexer__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) */
var232 = var_start_stream_pos + var_accept_length;
var230 = var232;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
self->attrs[COLOR_lexer__Lexer___stream_pos].l = var230; /* _stream_pos on <self:Lexer> */
var233 = 0;
{ /* Inline kernel#Int#== (var_accept_token,var233) */
var236 = var_accept_token == var233;
var234 = var236;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
if (var234){
var237 = NULL;
var = var237;
goto RET_LABEL;
} else {
}
var238 = 1;
{ /* Inline kernel#Int#== (var_accept_token,var238) */
var241 = var_accept_token == var238;
var239 = var241;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
if (var239){
var242 = NEW_parser_nodes__TEol(&type_parser_nodes__TEol);
((void (*)(val*, val*))(var242->class->vft[COLOR_lexer__TEol__init_tk]))(var242, var_location) /* init_tk on <var242:TEol>*/;
var = var242;
goto RET_LABEL;
} else {
}
var243 = 2;
{ /* Inline kernel#Int#== (var_accept_token,var243) */
var246 = var_accept_token == var243;
var244 = var246;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
if (var244){
var247 = NEW_parser_nodes__TComment(&type_parser_nodes__TComment);
((void (*)(val*, val*))(var247->class->vft[COLOR_lexer__TComment__init_tk]))(var247, var_location) /* init_tk on <var247:TComment>*/;
var = var247;
goto RET_LABEL;
} else {
}
var248 = 3;
{ /* Inline kernel#Int#== (var_accept_token,var248) */
var251 = var_accept_token == var248;
var249 = var251;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
if (var249){
var252 = NEW_parser_nodes__TKwpackage(&type_parser_nodes__TKwpackage);
((void (*)(val*, val*))(var252->class->vft[COLOR_lexer__TKwpackage__init_tk]))(var252, var_location) /* init_tk on <var252:TKwpackage>*/;
var = var252;
goto RET_LABEL;
} else {
}
var253 = 4;
{ /* Inline kernel#Int#== (var_accept_token,var253) */
var256 = var_accept_token == var253;
var254 = var256;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
if (var254){
var257 = NEW_parser_nodes__TKwmodule(&type_parser_nodes__TKwmodule);
((void (*)(val*, val*))(var257->class->vft[COLOR_lexer__TKwmodule__init_tk]))(var257, var_location) /* init_tk on <var257:TKwmodule>*/;
var = var257;
goto RET_LABEL;
} else {
}
var258 = 5;
{ /* Inline kernel#Int#== (var_accept_token,var258) */
var261 = var_accept_token == var258;
var259 = var261;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
if (var259){
var262 = NEW_parser_nodes__TKwimport(&type_parser_nodes__TKwimport);
((void (*)(val*, val*))(var262->class->vft[COLOR_lexer__TKwimport__init_tk]))(var262, var_location) /* init_tk on <var262:TKwimport>*/;
var = var262;
goto RET_LABEL;
} else {
}
var263 = 6;
{ /* Inline kernel#Int#== (var_accept_token,var263) */
var266 = var_accept_token == var263;
var264 = var266;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
if (var264){
var267 = NEW_parser_nodes__TKwclass(&type_parser_nodes__TKwclass);
((void (*)(val*, val*))(var267->class->vft[COLOR_lexer__TKwclass__init_tk]))(var267, var_location) /* init_tk on <var267:TKwclass>*/;
var = var267;
goto RET_LABEL;
} else {
}
var268 = 7;
{ /* Inline kernel#Int#== (var_accept_token,var268) */
var271 = var_accept_token == var268;
var269 = var271;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
if (var269){
var272 = NEW_parser_nodes__TKwabstract(&type_parser_nodes__TKwabstract);
((void (*)(val*, val*))(var272->class->vft[COLOR_lexer__TKwabstract__init_tk]))(var272, var_location) /* init_tk on <var272:TKwabstract>*/;
var = var272;
goto RET_LABEL;
} else {
}
var273 = 8;
{ /* Inline kernel#Int#== (var_accept_token,var273) */
var276 = var_accept_token == var273;
var274 = var276;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
if (var274){
var277 = NEW_parser_nodes__TKwinterface(&type_parser_nodes__TKwinterface);
((void (*)(val*, val*))(var277->class->vft[COLOR_lexer__TKwinterface__init_tk]))(var277, var_location) /* init_tk on <var277:TKwinterface>*/;
var = var277;
goto RET_LABEL;
} else {
}
var278 = 9;
{ /* Inline kernel#Int#== (var_accept_token,var278) */
var281 = var_accept_token == var278;
var279 = var281;
goto RET_LABEL280;
RET_LABEL280:(void)0;
}
if (var279){
var282 = NEW_parser_nodes__TKwenum(&type_parser_nodes__TKwenum);
((void (*)(val*, val*))(var282->class->vft[COLOR_lexer__TKwenum__init_tk]))(var282, var_location) /* init_tk on <var282:TKwenum>*/;
var = var282;
goto RET_LABEL;
} else {
}
var283 = 10;
{ /* Inline kernel#Int#== (var_accept_token,var283) */
var286 = var_accept_token == var283;
var284 = var286;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
if (var284){
var287 = NEW_parser_nodes__TKwend(&type_parser_nodes__TKwend);
((void (*)(val*, val*))(var287->class->vft[COLOR_lexer__TKwend__init_tk]))(var287, var_location) /* init_tk on <var287:TKwend>*/;
var = var287;
goto RET_LABEL;
} else {
}
var288 = 11;
{ /* Inline kernel#Int#== (var_accept_token,var288) */
var291 = var_accept_token == var288;
var289 = var291;
goto RET_LABEL290;
RET_LABEL290:(void)0;
}
if (var289){
var292 = NEW_parser_nodes__TKwmeth(&type_parser_nodes__TKwmeth);
((void (*)(val*, val*))(var292->class->vft[COLOR_lexer__TKwmeth__init_tk]))(var292, var_location) /* init_tk on <var292:TKwmeth>*/;
var = var292;
goto RET_LABEL;
} else {
}
var293 = 12;
{ /* Inline kernel#Int#== (var_accept_token,var293) */
var296 = var_accept_token == var293;
var294 = var296;
goto RET_LABEL295;
RET_LABEL295:(void)0;
}
if (var294){
var297 = NEW_parser_nodes__TKwtype(&type_parser_nodes__TKwtype);
((void (*)(val*, val*))(var297->class->vft[COLOR_lexer__TKwtype__init_tk]))(var297, var_location) /* init_tk on <var297:TKwtype>*/;
var = var297;
goto RET_LABEL;
} else {
}
var298 = 13;
{ /* Inline kernel#Int#== (var_accept_token,var298) */
var301 = var_accept_token == var298;
var299 = var301;
goto RET_LABEL300;
RET_LABEL300:(void)0;
}
if (var299){
var302 = NEW_parser_nodes__TKwinit(&type_parser_nodes__TKwinit);
((void (*)(val*, val*))(var302->class->vft[COLOR_lexer__TKwinit__init_tk]))(var302, var_location) /* init_tk on <var302:TKwinit>*/;
var = var302;
goto RET_LABEL;
} else {
}
var303 = 14;
{ /* Inline kernel#Int#== (var_accept_token,var303) */
var306 = var_accept_token == var303;
var304 = var306;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
if (var304){
var307 = NEW_parser_nodes__TKwredef(&type_parser_nodes__TKwredef);
((void (*)(val*, val*))(var307->class->vft[COLOR_lexer__TKwredef__init_tk]))(var307, var_location) /* init_tk on <var307:TKwredef>*/;
var = var307;
goto RET_LABEL;
} else {
}
var308 = 15;
{ /* Inline kernel#Int#== (var_accept_token,var308) */
var311 = var_accept_token == var308;
var309 = var311;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
if (var309){
var312 = NEW_parser_nodes__TKwis(&type_parser_nodes__TKwis);
((void (*)(val*, val*))(var312->class->vft[COLOR_lexer__TKwis__init_tk]))(var312, var_location) /* init_tk on <var312:TKwis>*/;
var = var312;
goto RET_LABEL;
} else {
}
var313 = 16;
{ /* Inline kernel#Int#== (var_accept_token,var313) */
var316 = var_accept_token == var313;
var314 = var316;
goto RET_LABEL315;
RET_LABEL315:(void)0;
}
if (var314){
var317 = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
((void (*)(val*, val*))(var317->class->vft[COLOR_lexer__TKwdo__init_tk]))(var317, var_location) /* init_tk on <var317:TKwdo>*/;
var = var317;
goto RET_LABEL;
} else {
}
var318 = 17;
{ /* Inline kernel#Int#== (var_accept_token,var318) */
var321 = var_accept_token == var318;
var319 = var321;
goto RET_LABEL320;
RET_LABEL320:(void)0;
}
if (var319){
var322 = NEW_parser_nodes__TKwreadable(&type_parser_nodes__TKwreadable);
((void (*)(val*, val*))(var322->class->vft[COLOR_lexer__TKwreadable__init_tk]))(var322, var_location) /* init_tk on <var322:TKwreadable>*/;
var = var322;
goto RET_LABEL;
} else {
}
var323 = 18;
{ /* Inline kernel#Int#== (var_accept_token,var323) */
var326 = var_accept_token == var323;
var324 = var326;
goto RET_LABEL325;
RET_LABEL325:(void)0;
}
if (var324){
var327 = NEW_parser_nodes__TKwwritable(&type_parser_nodes__TKwwritable);
((void (*)(val*, val*))(var327->class->vft[COLOR_lexer__TKwwritable__init_tk]))(var327, var_location) /* init_tk on <var327:TKwwritable>*/;
var = var327;
goto RET_LABEL;
} else {
}
var328 = 19;
{ /* Inline kernel#Int#== (var_accept_token,var328) */
var331 = var_accept_token == var328;
var329 = var331;
goto RET_LABEL330;
RET_LABEL330:(void)0;
}
if (var329){
var332 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
((void (*)(val*, val*))(var332->class->vft[COLOR_lexer__TKwvar__init_tk]))(var332, var_location) /* init_tk on <var332:TKwvar>*/;
var = var332;
goto RET_LABEL;
} else {
}
var333 = 20;
{ /* Inline kernel#Int#== (var_accept_token,var333) */
var336 = var_accept_token == var333;
var334 = var336;
goto RET_LABEL335;
RET_LABEL335:(void)0;
}
if (var334){
var337 = NEW_parser_nodes__TKwintern(&type_parser_nodes__TKwintern);
((void (*)(val*, val*))(var337->class->vft[COLOR_lexer__TKwintern__init_tk]))(var337, var_location) /* init_tk on <var337:TKwintern>*/;
var = var337;
goto RET_LABEL;
} else {
}
var338 = 21;
{ /* Inline kernel#Int#== (var_accept_token,var338) */
var341 = var_accept_token == var338;
var339 = var341;
goto RET_LABEL340;
RET_LABEL340:(void)0;
}
if (var339){
var342 = NEW_parser_nodes__TKwextern(&type_parser_nodes__TKwextern);
((void (*)(val*, val*))(var342->class->vft[COLOR_lexer__TKwextern__init_tk]))(var342, var_location) /* init_tk on <var342:TKwextern>*/;
var = var342;
goto RET_LABEL;
} else {
}
var343 = 22;
{ /* Inline kernel#Int#== (var_accept_token,var343) */
var346 = var_accept_token == var343;
var344 = var346;
goto RET_LABEL345;
RET_LABEL345:(void)0;
}
if (var344){
var347 = NEW_parser_nodes__TKwprotected(&type_parser_nodes__TKwprotected);
((void (*)(val*, val*))(var347->class->vft[COLOR_lexer__TKwprotected__init_tk]))(var347, var_location) /* init_tk on <var347:TKwprotected>*/;
var = var347;
goto RET_LABEL;
} else {
}
var348 = 23;
{ /* Inline kernel#Int#== (var_accept_token,var348) */
var351 = var_accept_token == var348;
var349 = var351;
goto RET_LABEL350;
RET_LABEL350:(void)0;
}
if (var349){
var352 = NEW_parser_nodes__TKwprivate(&type_parser_nodes__TKwprivate);
((void (*)(val*, val*))(var352->class->vft[COLOR_lexer__TKwprivate__init_tk]))(var352, var_location) /* init_tk on <var352:TKwprivate>*/;
var = var352;
goto RET_LABEL;
} else {
}
var353 = 24;
{ /* Inline kernel#Int#== (var_accept_token,var353) */
var356 = var_accept_token == var353;
var354 = var356;
goto RET_LABEL355;
RET_LABEL355:(void)0;
}
if (var354){
var357 = NEW_parser_nodes__TKwintrude(&type_parser_nodes__TKwintrude);
((void (*)(val*, val*))(var357->class->vft[COLOR_lexer__TKwintrude__init_tk]))(var357, var_location) /* init_tk on <var357:TKwintrude>*/;
var = var357;
goto RET_LABEL;
} else {
}
var358 = 25;
{ /* Inline kernel#Int#== (var_accept_token,var358) */
var361 = var_accept_token == var358;
var359 = var361;
goto RET_LABEL360;
RET_LABEL360:(void)0;
}
if (var359){
var362 = NEW_parser_nodes__TKwif(&type_parser_nodes__TKwif);
((void (*)(val*, val*))(var362->class->vft[COLOR_lexer__TKwif__init_tk]))(var362, var_location) /* init_tk on <var362:TKwif>*/;
var = var362;
goto RET_LABEL;
} else {
}
var363 = 26;
{ /* Inline kernel#Int#== (var_accept_token,var363) */
var366 = var_accept_token == var363;
var364 = var366;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
if (var364){
var367 = NEW_parser_nodes__TKwthen(&type_parser_nodes__TKwthen);
((void (*)(val*, val*))(var367->class->vft[COLOR_lexer__TKwthen__init_tk]))(var367, var_location) /* init_tk on <var367:TKwthen>*/;
var = var367;
goto RET_LABEL;
} else {
}
var368 = 27;
{ /* Inline kernel#Int#== (var_accept_token,var368) */
var371 = var_accept_token == var368;
var369 = var371;
goto RET_LABEL370;
RET_LABEL370:(void)0;
}
if (var369){
var372 = NEW_parser_nodes__TKwelse(&type_parser_nodes__TKwelse);
((void (*)(val*, val*))(var372->class->vft[COLOR_lexer__TKwelse__init_tk]))(var372, var_location) /* init_tk on <var372:TKwelse>*/;
var = var372;
goto RET_LABEL;
} else {
}
var373 = 28;
{ /* Inline kernel#Int#== (var_accept_token,var373) */
var376 = var_accept_token == var373;
var374 = var376;
goto RET_LABEL375;
RET_LABEL375:(void)0;
}
if (var374){
var377 = NEW_parser_nodes__TKwwhile(&type_parser_nodes__TKwwhile);
((void (*)(val*, val*))(var377->class->vft[COLOR_lexer__TKwwhile__init_tk]))(var377, var_location) /* init_tk on <var377:TKwwhile>*/;
var = var377;
goto RET_LABEL;
} else {
}
var378 = 29;
{ /* Inline kernel#Int#== (var_accept_token,var378) */
var381 = var_accept_token == var378;
var379 = var381;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
if (var379){
var382 = NEW_parser_nodes__TKwloop(&type_parser_nodes__TKwloop);
((void (*)(val*, val*))(var382->class->vft[COLOR_lexer__TKwloop__init_tk]))(var382, var_location) /* init_tk on <var382:TKwloop>*/;
var = var382;
goto RET_LABEL;
} else {
}
var383 = 30;
{ /* Inline kernel#Int#== (var_accept_token,var383) */
var386 = var_accept_token == var383;
var384 = var386;
goto RET_LABEL385;
RET_LABEL385:(void)0;
}
if (var384){
var387 = NEW_parser_nodes__TKwfor(&type_parser_nodes__TKwfor);
((void (*)(val*, val*))(var387->class->vft[COLOR_lexer__TKwfor__init_tk]))(var387, var_location) /* init_tk on <var387:TKwfor>*/;
var = var387;
goto RET_LABEL;
} else {
}
var388 = 31;
{ /* Inline kernel#Int#== (var_accept_token,var388) */
var391 = var_accept_token == var388;
var389 = var391;
goto RET_LABEL390;
RET_LABEL390:(void)0;
}
if (var389){
var392 = NEW_parser_nodes__TKwin(&type_parser_nodes__TKwin);
((void (*)(val*, val*))(var392->class->vft[COLOR_lexer__TKwin__init_tk]))(var392, var_location) /* init_tk on <var392:TKwin>*/;
var = var392;
goto RET_LABEL;
} else {
}
var393 = 32;
{ /* Inline kernel#Int#== (var_accept_token,var393) */
var396 = var_accept_token == var393;
var394 = var396;
goto RET_LABEL395;
RET_LABEL395:(void)0;
}
if (var394){
var397 = NEW_parser_nodes__TKwand(&type_parser_nodes__TKwand);
((void (*)(val*, val*))(var397->class->vft[COLOR_lexer__TKwand__init_tk]))(var397, var_location) /* init_tk on <var397:TKwand>*/;
var = var397;
goto RET_LABEL;
} else {
}
var398 = 33;
{ /* Inline kernel#Int#== (var_accept_token,var398) */
var401 = var_accept_token == var398;
var399 = var401;
goto RET_LABEL400;
RET_LABEL400:(void)0;
}
if (var399){
var402 = NEW_parser_nodes__TKwor(&type_parser_nodes__TKwor);
((void (*)(val*, val*))(var402->class->vft[COLOR_lexer__TKwor__init_tk]))(var402, var_location) /* init_tk on <var402:TKwor>*/;
var = var402;
goto RET_LABEL;
} else {
}
var403 = 34;
{ /* Inline kernel#Int#== (var_accept_token,var403) */
var406 = var_accept_token == var403;
var404 = var406;
goto RET_LABEL405;
RET_LABEL405:(void)0;
}
if (var404){
var407 = NEW_parser_nodes__TKwnot(&type_parser_nodes__TKwnot);
((void (*)(val*, val*))(var407->class->vft[COLOR_lexer__TKwnot__init_tk]))(var407, var_location) /* init_tk on <var407:TKwnot>*/;
var = var407;
goto RET_LABEL;
} else {
}
var408 = 35;
{ /* Inline kernel#Int#== (var_accept_token,var408) */
var411 = var_accept_token == var408;
var409 = var411;
goto RET_LABEL410;
RET_LABEL410:(void)0;
}
if (var409){
var412 = NEW_parser_nodes__TKwimplies(&type_parser_nodes__TKwimplies);
((void (*)(val*, val*))(var412->class->vft[COLOR_lexer__TKwimplies__init_tk]))(var412, var_location) /* init_tk on <var412:TKwimplies>*/;
var = var412;
goto RET_LABEL;
} else {
}
var413 = 36;
{ /* Inline kernel#Int#== (var_accept_token,var413) */
var416 = var_accept_token == var413;
var414 = var416;
goto RET_LABEL415;
RET_LABEL415:(void)0;
}
if (var414){
var417 = NEW_parser_nodes__TKwreturn(&type_parser_nodes__TKwreturn);
((void (*)(val*, val*))(var417->class->vft[COLOR_lexer__TKwreturn__init_tk]))(var417, var_location) /* init_tk on <var417:TKwreturn>*/;
var = var417;
goto RET_LABEL;
} else {
}
var418 = 37;
{ /* Inline kernel#Int#== (var_accept_token,var418) */
var421 = var_accept_token == var418;
var419 = var421;
goto RET_LABEL420;
RET_LABEL420:(void)0;
}
if (var419){
var422 = NEW_parser_nodes__TKwcontinue(&type_parser_nodes__TKwcontinue);
((void (*)(val*, val*))(var422->class->vft[COLOR_lexer__TKwcontinue__init_tk]))(var422, var_location) /* init_tk on <var422:TKwcontinue>*/;
var = var422;
goto RET_LABEL;
} else {
}
var423 = 38;
{ /* Inline kernel#Int#== (var_accept_token,var423) */
var426 = var_accept_token == var423;
var424 = var426;
goto RET_LABEL425;
RET_LABEL425:(void)0;
}
if (var424){
var427 = NEW_parser_nodes__TKwbreak(&type_parser_nodes__TKwbreak);
((void (*)(val*, val*))(var427->class->vft[COLOR_lexer__TKwbreak__init_tk]))(var427, var_location) /* init_tk on <var427:TKwbreak>*/;
var = var427;
goto RET_LABEL;
} else {
}
var428 = 39;
{ /* Inline kernel#Int#== (var_accept_token,var428) */
var431 = var_accept_token == var428;
var429 = var431;
goto RET_LABEL430;
RET_LABEL430:(void)0;
}
if (var429){
var432 = NEW_parser_nodes__TKwabort(&type_parser_nodes__TKwabort);
((void (*)(val*, val*))(var432->class->vft[COLOR_lexer__TKwabort__init_tk]))(var432, var_location) /* init_tk on <var432:TKwabort>*/;
var = var432;
goto RET_LABEL;
} else {
}
var433 = 40;
{ /* Inline kernel#Int#== (var_accept_token,var433) */
var436 = var_accept_token == var433;
var434 = var436;
goto RET_LABEL435;
RET_LABEL435:(void)0;
}
if (var434){
var437 = NEW_parser_nodes__TKwassert(&type_parser_nodes__TKwassert);
((void (*)(val*, val*))(var437->class->vft[COLOR_lexer__TKwassert__init_tk]))(var437, var_location) /* init_tk on <var437:TKwassert>*/;
var = var437;
goto RET_LABEL;
} else {
}
var438 = 41;
{ /* Inline kernel#Int#== (var_accept_token,var438) */
var441 = var_accept_token == var438;
var439 = var441;
goto RET_LABEL440;
RET_LABEL440:(void)0;
}
if (var439){
var442 = NEW_parser_nodes__TKwnew(&type_parser_nodes__TKwnew);
((void (*)(val*, val*))(var442->class->vft[COLOR_lexer__TKwnew__init_tk]))(var442, var_location) /* init_tk on <var442:TKwnew>*/;
var = var442;
goto RET_LABEL;
} else {
}
var443 = 42;
{ /* Inline kernel#Int#== (var_accept_token,var443) */
var446 = var_accept_token == var443;
var444 = var446;
goto RET_LABEL445;
RET_LABEL445:(void)0;
}
if (var444){
var447 = NEW_parser_nodes__TKwisa(&type_parser_nodes__TKwisa);
((void (*)(val*, val*))(var447->class->vft[COLOR_lexer__TKwisa__init_tk]))(var447, var_location) /* init_tk on <var447:TKwisa>*/;
var = var447;
goto RET_LABEL;
} else {
}
var448 = 43;
{ /* Inline kernel#Int#== (var_accept_token,var448) */
var451 = var_accept_token == var448;
var449 = var451;
goto RET_LABEL450;
RET_LABEL450:(void)0;
}
if (var449){
var452 = NEW_parser_nodes__TKwonce(&type_parser_nodes__TKwonce);
((void (*)(val*, val*))(var452->class->vft[COLOR_lexer__TKwonce__init_tk]))(var452, var_location) /* init_tk on <var452:TKwonce>*/;
var = var452;
goto RET_LABEL;
} else {
}
var453 = 44;
{ /* Inline kernel#Int#== (var_accept_token,var453) */
var456 = var_accept_token == var453;
var454 = var456;
goto RET_LABEL455;
RET_LABEL455:(void)0;
}
if (var454){
var457 = NEW_parser_nodes__TKwsuper(&type_parser_nodes__TKwsuper);
((void (*)(val*, val*))(var457->class->vft[COLOR_lexer__TKwsuper__init_tk]))(var457, var_location) /* init_tk on <var457:TKwsuper>*/;
var = var457;
goto RET_LABEL;
} else {
}
var458 = 45;
{ /* Inline kernel#Int#== (var_accept_token,var458) */
var461 = var_accept_token == var458;
var459 = var461;
goto RET_LABEL460;
RET_LABEL460:(void)0;
}
if (var459){
var462 = NEW_parser_nodes__TKwself(&type_parser_nodes__TKwself);
((void (*)(val*, val*))(var462->class->vft[COLOR_lexer__TKwself__init_tk]))(var462, var_location) /* init_tk on <var462:TKwself>*/;
var = var462;
goto RET_LABEL;
} else {
}
var463 = 46;
{ /* Inline kernel#Int#== (var_accept_token,var463) */
var466 = var_accept_token == var463;
var464 = var466;
goto RET_LABEL465;
RET_LABEL465:(void)0;
}
if (var464){
var467 = NEW_parser_nodes__TKwtrue(&type_parser_nodes__TKwtrue);
((void (*)(val*, val*))(var467->class->vft[COLOR_lexer__TKwtrue__init_tk]))(var467, var_location) /* init_tk on <var467:TKwtrue>*/;
var = var467;
goto RET_LABEL;
} else {
}
var468 = 47;
{ /* Inline kernel#Int#== (var_accept_token,var468) */
var471 = var_accept_token == var468;
var469 = var471;
goto RET_LABEL470;
RET_LABEL470:(void)0;
}
if (var469){
var472 = NEW_parser_nodes__TKwfalse(&type_parser_nodes__TKwfalse);
((void (*)(val*, val*))(var472->class->vft[COLOR_lexer__TKwfalse__init_tk]))(var472, var_location) /* init_tk on <var472:TKwfalse>*/;
var = var472;
goto RET_LABEL;
} else {
}
var473 = 48;
{ /* Inline kernel#Int#== (var_accept_token,var473) */
var476 = var_accept_token == var473;
var474 = var476;
goto RET_LABEL475;
RET_LABEL475:(void)0;
}
if (var474){
var477 = NEW_parser_nodes__TKwnull(&type_parser_nodes__TKwnull);
((void (*)(val*, val*))(var477->class->vft[COLOR_lexer__TKwnull__init_tk]))(var477, var_location) /* init_tk on <var477:TKwnull>*/;
var = var477;
goto RET_LABEL;
} else {
}
var478 = 49;
{ /* Inline kernel#Int#== (var_accept_token,var478) */
var481 = var_accept_token == var478;
var479 = var481;
goto RET_LABEL480;
RET_LABEL480:(void)0;
}
if (var479){
var482 = NEW_parser_nodes__TKwas(&type_parser_nodes__TKwas);
((void (*)(val*, val*))(var482->class->vft[COLOR_lexer__TKwas__init_tk]))(var482, var_location) /* init_tk on <var482:TKwas>*/;
var = var482;
goto RET_LABEL;
} else {
}
var483 = 50;
{ /* Inline kernel#Int#== (var_accept_token,var483) */
var486 = var_accept_token == var483;
var484 = var486;
goto RET_LABEL485;
RET_LABEL485:(void)0;
}
if (var484){
var487 = NEW_parser_nodes__TKwnullable(&type_parser_nodes__TKwnullable);
((void (*)(val*, val*))(var487->class->vft[COLOR_lexer__TKwnullable__init_tk]))(var487, var_location) /* init_tk on <var487:TKwnullable>*/;
var = var487;
goto RET_LABEL;
} else {
}
var488 = 51;
{ /* Inline kernel#Int#== (var_accept_token,var488) */
var491 = var_accept_token == var488;
var489 = var491;
goto RET_LABEL490;
RET_LABEL490:(void)0;
}
if (var489){
var492 = NEW_parser_nodes__TKwisset(&type_parser_nodes__TKwisset);
((void (*)(val*, val*))(var492->class->vft[COLOR_lexer__TKwisset__init_tk]))(var492, var_location) /* init_tk on <var492:TKwisset>*/;
var = var492;
goto RET_LABEL;
} else {
}
var493 = 52;
{ /* Inline kernel#Int#== (var_accept_token,var493) */
var496 = var_accept_token == var493;
var494 = var496;
goto RET_LABEL495;
RET_LABEL495:(void)0;
}
if (var494){
var497 = NEW_parser_nodes__TKwlabel(&type_parser_nodes__TKwlabel);
((void (*)(val*, val*))(var497->class->vft[COLOR_lexer__TKwlabel__init_tk]))(var497, var_location) /* init_tk on <var497:TKwlabel>*/;
var = var497;
goto RET_LABEL;
} else {
}
var498 = 53;
{ /* Inline kernel#Int#== (var_accept_token,var498) */
var501 = var_accept_token == var498;
var499 = var501;
goto RET_LABEL500;
RET_LABEL500:(void)0;
}
if (var499){
var502 = NEW_parser_nodes__TKwdebug(&type_parser_nodes__TKwdebug);
((void (*)(val*, val*))(var502->class->vft[COLOR_lexer__TKwdebug__init_tk]))(var502, var_location) /* init_tk on <var502:TKwdebug>*/;
var = var502;
goto RET_LABEL;
} else {
}
var503 = 54;
{ /* Inline kernel#Int#== (var_accept_token,var503) */
var506 = var_accept_token == var503;
var504 = var506;
goto RET_LABEL505;
RET_LABEL505:(void)0;
}
if (var504){
var507 = NEW_parser_nodes__TOpar(&type_parser_nodes__TOpar);
((void (*)(val*, val*))(var507->class->vft[COLOR_lexer__TOpar__init_tk]))(var507, var_location) /* init_tk on <var507:TOpar>*/;
var = var507;
goto RET_LABEL;
} else {
}
var508 = 55;
{ /* Inline kernel#Int#== (var_accept_token,var508) */
var511 = var_accept_token == var508;
var509 = var511;
goto RET_LABEL510;
RET_LABEL510:(void)0;
}
if (var509){
var512 = NEW_parser_nodes__TCpar(&type_parser_nodes__TCpar);
((void (*)(val*, val*))(var512->class->vft[COLOR_lexer__TCpar__init_tk]))(var512, var_location) /* init_tk on <var512:TCpar>*/;
var = var512;
goto RET_LABEL;
} else {
}
var513 = 56;
{ /* Inline kernel#Int#== (var_accept_token,var513) */
var516 = var_accept_token == var513;
var514 = var516;
goto RET_LABEL515;
RET_LABEL515:(void)0;
}
if (var514){
var517 = NEW_parser_nodes__TObra(&type_parser_nodes__TObra);
((void (*)(val*, val*))(var517->class->vft[COLOR_lexer__TObra__init_tk]))(var517, var_location) /* init_tk on <var517:TObra>*/;
var = var517;
goto RET_LABEL;
} else {
}
var518 = 57;
{ /* Inline kernel#Int#== (var_accept_token,var518) */
var521 = var_accept_token == var518;
var519 = var521;
goto RET_LABEL520;
RET_LABEL520:(void)0;
}
if (var519){
var522 = NEW_parser_nodes__TCbra(&type_parser_nodes__TCbra);
((void (*)(val*, val*))(var522->class->vft[COLOR_lexer__TCbra__init_tk]))(var522, var_location) /* init_tk on <var522:TCbra>*/;
var = var522;
goto RET_LABEL;
} else {
}
var523 = 58;
{ /* Inline kernel#Int#== (var_accept_token,var523) */
var526 = var_accept_token == var523;
var524 = var526;
goto RET_LABEL525;
RET_LABEL525:(void)0;
}
if (var524){
var527 = NEW_parser_nodes__TComma(&type_parser_nodes__TComma);
((void (*)(val*, val*))(var527->class->vft[COLOR_lexer__TComma__init_tk]))(var527, var_location) /* init_tk on <var527:TComma>*/;
var = var527;
goto RET_LABEL;
} else {
}
var528 = 59;
{ /* Inline kernel#Int#== (var_accept_token,var528) */
var531 = var_accept_token == var528;
var529 = var531;
goto RET_LABEL530;
RET_LABEL530:(void)0;
}
if (var529){
var532 = NEW_parser_nodes__TColumn(&type_parser_nodes__TColumn);
((void (*)(val*, val*))(var532->class->vft[COLOR_lexer__TColumn__init_tk]))(var532, var_location) /* init_tk on <var532:TColumn>*/;
var = var532;
goto RET_LABEL;
} else {
}
var533 = 60;
{ /* Inline kernel#Int#== (var_accept_token,var533) */
var536 = var_accept_token == var533;
var534 = var536;
goto RET_LABEL535;
RET_LABEL535:(void)0;
}
if (var534){
var537 = NEW_parser_nodes__TQuad(&type_parser_nodes__TQuad);
((void (*)(val*, val*))(var537->class->vft[COLOR_lexer__TQuad__init_tk]))(var537, var_location) /* init_tk on <var537:TQuad>*/;
var = var537;
goto RET_LABEL;
} else {
}
var538 = 61;
{ /* Inline kernel#Int#== (var_accept_token,var538) */
var541 = var_accept_token == var538;
var539 = var541;
goto RET_LABEL540;
RET_LABEL540:(void)0;
}
if (var539){
var542 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
((void (*)(val*, val*))(var542->class->vft[COLOR_lexer__TAssign__init_tk]))(var542, var_location) /* init_tk on <var542:TAssign>*/;
var = var542;
goto RET_LABEL;
} else {
}
var543 = 62;
{ /* Inline kernel#Int#== (var_accept_token,var543) */
var546 = var_accept_token == var543;
var544 = var546;
goto RET_LABEL545;
RET_LABEL545:(void)0;
}
if (var544){
var547 = NEW_parser_nodes__TPluseq(&type_parser_nodes__TPluseq);
((void (*)(val*, val*))(var547->class->vft[COLOR_lexer__TPluseq__init_tk]))(var547, var_location) /* init_tk on <var547:TPluseq>*/;
var = var547;
goto RET_LABEL;
} else {
}
var548 = 63;
{ /* Inline kernel#Int#== (var_accept_token,var548) */
var551 = var_accept_token == var548;
var549 = var551;
goto RET_LABEL550;
RET_LABEL550:(void)0;
}
if (var549){
var552 = NEW_parser_nodes__TMinuseq(&type_parser_nodes__TMinuseq);
((void (*)(val*, val*))(var552->class->vft[COLOR_lexer__TMinuseq__init_tk]))(var552, var_location) /* init_tk on <var552:TMinuseq>*/;
var = var552;
goto RET_LABEL;
} else {
}
var553 = 64;
{ /* Inline kernel#Int#== (var_accept_token,var553) */
var556 = var_accept_token == var553;
var554 = var556;
goto RET_LABEL555;
RET_LABEL555:(void)0;
}
if (var554){
var557 = NEW_parser_nodes__TDotdotdot(&type_parser_nodes__TDotdotdot);
((void (*)(val*, val*))(var557->class->vft[COLOR_lexer__TDotdotdot__init_tk]))(var557, var_location) /* init_tk on <var557:TDotdotdot>*/;
var = var557;
goto RET_LABEL;
} else {
}
var558 = 65;
{ /* Inline kernel#Int#== (var_accept_token,var558) */
var561 = var_accept_token == var558;
var559 = var561;
goto RET_LABEL560;
RET_LABEL560:(void)0;
}
if (var559){
var562 = NEW_parser_nodes__TDotdot(&type_parser_nodes__TDotdot);
((void (*)(val*, val*))(var562->class->vft[COLOR_lexer__TDotdot__init_tk]))(var562, var_location) /* init_tk on <var562:TDotdot>*/;
var = var562;
goto RET_LABEL;
} else {
}
var563 = 66;
{ /* Inline kernel#Int#== (var_accept_token,var563) */
var566 = var_accept_token == var563;
var564 = var566;
goto RET_LABEL565;
RET_LABEL565:(void)0;
}
if (var564){
var567 = NEW_parser_nodes__TDot(&type_parser_nodes__TDot);
((void (*)(val*, val*))(var567->class->vft[COLOR_lexer__TDot__init_tk]))(var567, var_location) /* init_tk on <var567:TDot>*/;
var = var567;
goto RET_LABEL;
} else {
}
var568 = 67;
{ /* Inline kernel#Int#== (var_accept_token,var568) */
var571 = var_accept_token == var568;
var569 = var571;
goto RET_LABEL570;
RET_LABEL570:(void)0;
}
if (var569){
var572 = NEW_parser_nodes__TPlus(&type_parser_nodes__TPlus);
((void (*)(val*, val*))(var572->class->vft[COLOR_lexer__TPlus__init_tk]))(var572, var_location) /* init_tk on <var572:TPlus>*/;
var = var572;
goto RET_LABEL;
} else {
}
var573 = 68;
{ /* Inline kernel#Int#== (var_accept_token,var573) */
var576 = var_accept_token == var573;
var574 = var576;
goto RET_LABEL575;
RET_LABEL575:(void)0;
}
if (var574){
var577 = NEW_parser_nodes__TMinus(&type_parser_nodes__TMinus);
((void (*)(val*, val*))(var577->class->vft[COLOR_lexer__TMinus__init_tk]))(var577, var_location) /* init_tk on <var577:TMinus>*/;
var = var577;
goto RET_LABEL;
} else {
}
var578 = 69;
{ /* Inline kernel#Int#== (var_accept_token,var578) */
var581 = var_accept_token == var578;
var579 = var581;
goto RET_LABEL580;
RET_LABEL580:(void)0;
}
if (var579){
var582 = NEW_parser_nodes__TStar(&type_parser_nodes__TStar);
((void (*)(val*, val*))(var582->class->vft[COLOR_lexer__TStar__init_tk]))(var582, var_location) /* init_tk on <var582:TStar>*/;
var = var582;
goto RET_LABEL;
} else {
}
var583 = 70;
{ /* Inline kernel#Int#== (var_accept_token,var583) */
var586 = var_accept_token == var583;
var584 = var586;
goto RET_LABEL585;
RET_LABEL585:(void)0;
}
if (var584){
var587 = NEW_parser_nodes__TSlash(&type_parser_nodes__TSlash);
((void (*)(val*, val*))(var587->class->vft[COLOR_lexer__TSlash__init_tk]))(var587, var_location) /* init_tk on <var587:TSlash>*/;
var = var587;
goto RET_LABEL;
} else {
}
var588 = 71;
{ /* Inline kernel#Int#== (var_accept_token,var588) */
var591 = var_accept_token == var588;
var589 = var591;
goto RET_LABEL590;
RET_LABEL590:(void)0;
}
if (var589){
var592 = NEW_parser_nodes__TPercent(&type_parser_nodes__TPercent);
((void (*)(val*, val*))(var592->class->vft[COLOR_lexer__TPercent__init_tk]))(var592, var_location) /* init_tk on <var592:TPercent>*/;
var = var592;
goto RET_LABEL;
} else {
}
var593 = 72;
{ /* Inline kernel#Int#== (var_accept_token,var593) */
var596 = var_accept_token == var593;
var594 = var596;
goto RET_LABEL595;
RET_LABEL595:(void)0;
}
if (var594){
var597 = NEW_parser_nodes__TEq(&type_parser_nodes__TEq);
((void (*)(val*, val*))(var597->class->vft[COLOR_lexer__TEq__init_tk]))(var597, var_location) /* init_tk on <var597:TEq>*/;
var = var597;
goto RET_LABEL;
} else {
}
var598 = 73;
{ /* Inline kernel#Int#== (var_accept_token,var598) */
var601 = var_accept_token == var598;
var599 = var601;
goto RET_LABEL600;
RET_LABEL600:(void)0;
}
if (var599){
var602 = NEW_parser_nodes__TNe(&type_parser_nodes__TNe);
((void (*)(val*, val*))(var602->class->vft[COLOR_lexer__TNe__init_tk]))(var602, var_location) /* init_tk on <var602:TNe>*/;
var = var602;
goto RET_LABEL;
} else {
}
var603 = 74;
{ /* Inline kernel#Int#== (var_accept_token,var603) */
var606 = var_accept_token == var603;
var604 = var606;
goto RET_LABEL605;
RET_LABEL605:(void)0;
}
if (var604){
var607 = NEW_parser_nodes__TLt(&type_parser_nodes__TLt);
((void (*)(val*, val*))(var607->class->vft[COLOR_lexer__TLt__init_tk]))(var607, var_location) /* init_tk on <var607:TLt>*/;
var = var607;
goto RET_LABEL;
} else {
}
var608 = 75;
{ /* Inline kernel#Int#== (var_accept_token,var608) */
var611 = var_accept_token == var608;
var609 = var611;
goto RET_LABEL610;
RET_LABEL610:(void)0;
}
if (var609){
var612 = NEW_parser_nodes__TLe(&type_parser_nodes__TLe);
((void (*)(val*, val*))(var612->class->vft[COLOR_lexer__TLe__init_tk]))(var612, var_location) /* init_tk on <var612:TLe>*/;
var = var612;
goto RET_LABEL;
} else {
}
var613 = 76;
{ /* Inline kernel#Int#== (var_accept_token,var613) */
var616 = var_accept_token == var613;
var614 = var616;
goto RET_LABEL615;
RET_LABEL615:(void)0;
}
if (var614){
var617 = NEW_parser_nodes__TLl(&type_parser_nodes__TLl);
((void (*)(val*, val*))(var617->class->vft[COLOR_lexer__TLl__init_tk]))(var617, var_location) /* init_tk on <var617:TLl>*/;
var = var617;
goto RET_LABEL;
} else {
}
var618 = 77;
{ /* Inline kernel#Int#== (var_accept_token,var618) */
var621 = var_accept_token == var618;
var619 = var621;
goto RET_LABEL620;
RET_LABEL620:(void)0;
}
if (var619){
var622 = NEW_parser_nodes__TGt(&type_parser_nodes__TGt);
((void (*)(val*, val*))(var622->class->vft[COLOR_lexer__TGt__init_tk]))(var622, var_location) /* init_tk on <var622:TGt>*/;
var = var622;
goto RET_LABEL;
} else {
}
var623 = 78;
{ /* Inline kernel#Int#== (var_accept_token,var623) */
var626 = var_accept_token == var623;
var624 = var626;
goto RET_LABEL625;
RET_LABEL625:(void)0;
}
if (var624){
var627 = NEW_parser_nodes__TGe(&type_parser_nodes__TGe);
((void (*)(val*, val*))(var627->class->vft[COLOR_lexer__TGe__init_tk]))(var627, var_location) /* init_tk on <var627:TGe>*/;
var = var627;
goto RET_LABEL;
} else {
}
var628 = 79;
{ /* Inline kernel#Int#== (var_accept_token,var628) */
var631 = var_accept_token == var628;
var629 = var631;
goto RET_LABEL630;
RET_LABEL630:(void)0;
}
if (var629){
var632 = NEW_parser_nodes__TGg(&type_parser_nodes__TGg);
((void (*)(val*, val*))(var632->class->vft[COLOR_lexer__TGg__init_tk]))(var632, var_location) /* init_tk on <var632:TGg>*/;
var = var632;
goto RET_LABEL;
} else {
}
var633 = 80;
{ /* Inline kernel#Int#== (var_accept_token,var633) */
var636 = var_accept_token == var633;
var634 = var636;
goto RET_LABEL635;
RET_LABEL635:(void)0;
}
if (var634){
var637 = NEW_parser_nodes__TStarship(&type_parser_nodes__TStarship);
((void (*)(val*, val*))(var637->class->vft[COLOR_lexer__TStarship__init_tk]))(var637, var_location) /* init_tk on <var637:TStarship>*/;
var = var637;
goto RET_LABEL;
} else {
}
var638 = 81;
{ /* Inline kernel#Int#== (var_accept_token,var638) */
var641 = var_accept_token == var638;
var639 = var641;
goto RET_LABEL640;
RET_LABEL640:(void)0;
}
if (var639){
var642 = NEW_parser_nodes__TBang(&type_parser_nodes__TBang);
((void (*)(val*, val*))(var642->class->vft[COLOR_lexer__TBang__init_tk]))(var642, var_location) /* init_tk on <var642:TBang>*/;
var = var642;
goto RET_LABEL;
} else {
}
var643 = 82;
{ /* Inline kernel#Int#== (var_accept_token,var643) */
var646 = var_accept_token == var643;
var644 = var646;
goto RET_LABEL645;
RET_LABEL645:(void)0;
}
if (var644){
var647 = NEW_parser_nodes__TAt(&type_parser_nodes__TAt);
((void (*)(val*, val*))(var647->class->vft[COLOR_lexer__TAt__init_tk]))(var647, var_location) /* init_tk on <var647:TAt>*/;
var = var647;
goto RET_LABEL;
} else {
}
var648 = 83;
{ /* Inline kernel#Int#== (var_accept_token,var648) */
var651 = var_accept_token == var648;
var649 = var651;
goto RET_LABEL650;
RET_LABEL650:(void)0;
}
if (var649){
var652 = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
((void (*)(val*, val*))(var652->class->vft[COLOR_lexer__TClassid__init_tk]))(var652, var_location) /* init_tk on <var652:TClassid>*/;
var = var652;
goto RET_LABEL;
} else {
}
var653 = 84;
{ /* Inline kernel#Int#== (var_accept_token,var653) */
var656 = var_accept_token == var653;
var654 = var656;
goto RET_LABEL655;
RET_LABEL655:(void)0;
}
if (var654){
var657 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*, val*))(var657->class->vft[COLOR_lexer__TId__init_tk]))(var657, var_location) /* init_tk on <var657:TId>*/;
var = var657;
goto RET_LABEL;
} else {
}
var658 = 85;
{ /* Inline kernel#Int#== (var_accept_token,var658) */
var661 = var_accept_token == var658;
var659 = var661;
goto RET_LABEL660;
RET_LABEL660:(void)0;
}
if (var659){
var662 = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
((void (*)(val*, val*))(var662->class->vft[COLOR_lexer__TAttrid__init_tk]))(var662, var_location) /* init_tk on <var662:TAttrid>*/;
var = var662;
goto RET_LABEL;
} else {
}
var663 = 86;
{ /* Inline kernel#Int#== (var_accept_token,var663) */
var666 = var_accept_token == var663;
var664 = var666;
goto RET_LABEL665;
RET_LABEL665:(void)0;
}
if (var664){
var667 = NEW_parser_nodes__TNumber(&type_parser_nodes__TNumber);
((void (*)(val*, val*))(var667->class->vft[COLOR_lexer__TNumber__init_tk]))(var667, var_location) /* init_tk on <var667:TNumber>*/;
var = var667;
goto RET_LABEL;
} else {
}
var668 = 87;
{ /* Inline kernel#Int#== (var_accept_token,var668) */
var671 = var_accept_token == var668;
var669 = var671;
goto RET_LABEL670;
RET_LABEL670:(void)0;
}
if (var669){
var672 = NEW_parser_nodes__TFloat(&type_parser_nodes__TFloat);
((void (*)(val*, val*))(var672->class->vft[COLOR_lexer__TFloat__init_tk]))(var672, var_location) /* init_tk on <var672:TFloat>*/;
var = var672;
goto RET_LABEL;
} else {
}
var673 = 88;
{ /* Inline kernel#Int#== (var_accept_token,var673) */
var676 = var_accept_token == var673;
var674 = var676;
goto RET_LABEL675;
RET_LABEL675:(void)0;
}
if (var674){
var677 = NEW_parser_nodes__TString(&type_parser_nodes__TString);
((void (*)(val*, val*))(var677->class->vft[COLOR_lexer__TString__init_tk]))(var677, var_location) /* init_tk on <var677:TString>*/;
var = var677;
goto RET_LABEL;
} else {
}
var678 = 89;
{ /* Inline kernel#Int#== (var_accept_token,var678) */
var681 = var_accept_token == var678;
var679 = var681;
goto RET_LABEL680;
RET_LABEL680:(void)0;
}
if (var679){
var682 = NEW_parser_nodes__TStartString(&type_parser_nodes__TStartString);
((void (*)(val*, val*))(var682->class->vft[COLOR_lexer__TStartString__init_tk]))(var682, var_location) /* init_tk on <var682:TStartString>*/;
var = var682;
goto RET_LABEL;
} else {
}
var683 = 90;
{ /* Inline kernel#Int#== (var_accept_token,var683) */
var686 = var_accept_token == var683;
var684 = var686;
goto RET_LABEL685;
RET_LABEL685:(void)0;
}
if (var684){
var687 = NEW_parser_nodes__TMidString(&type_parser_nodes__TMidString);
((void (*)(val*, val*))(var687->class->vft[COLOR_lexer__TMidString__init_tk]))(var687, var_location) /* init_tk on <var687:TMidString>*/;
var = var687;
goto RET_LABEL;
} else {
}
var688 = 91;
{ /* Inline kernel#Int#== (var_accept_token,var688) */
var691 = var_accept_token == var688;
var689 = var691;
goto RET_LABEL690;
RET_LABEL690:(void)0;
}
if (var689){
var692 = NEW_parser_nodes__TEndString(&type_parser_nodes__TEndString);
((void (*)(val*, val*))(var692->class->vft[COLOR_lexer__TEndString__init_tk]))(var692, var_location) /* init_tk on <var692:TEndString>*/;
var = var692;
goto RET_LABEL;
} else {
}
var693 = 92;
{ /* Inline kernel#Int#== (var_accept_token,var693) */
var696 = var_accept_token == var693;
var694 = var696;
goto RET_LABEL695;
RET_LABEL695:(void)0;
}
if (var694){
var697 = NEW_parser_nodes__TChar(&type_parser_nodes__TChar);
((void (*)(val*, val*))(var697->class->vft[COLOR_lexer__TChar__init_tk]))(var697, var_location) /* init_tk on <var697:TChar>*/;
var = var697;
goto RET_LABEL;
} else {
}
var698 = 93;
{ /* Inline kernel#Int#== (var_accept_token,var698) */
var701 = var_accept_token == var698;
var699 = var701;
goto RET_LABEL700;
RET_LABEL700:(void)0;
}
if (var699){
var702 = NEW_parser_nodes__TBadString(&type_parser_nodes__TBadString);
((void (*)(val*, val*))(var702->class->vft[COLOR_lexer__TBadString__init_tk]))(var702, var_location) /* init_tk on <var702:TBadString>*/;
var = var702;
goto RET_LABEL;
} else {
}
var703 = 94;
{ /* Inline kernel#Int#== (var_accept_token,var703) */
var706 = var_accept_token == var703;
var704 = var706;
goto RET_LABEL705;
RET_LABEL705:(void)0;
}
if (var704){
var707 = NEW_parser_nodes__TBadChar(&type_parser_nodes__TBadChar);
((void (*)(val*, val*))(var707->class->vft[COLOR_lexer__TBadChar__init_tk]))(var707, var_location) /* init_tk on <var707:TBadChar>*/;
var = var707;
goto RET_LABEL;
} else {
}
var708 = 95;
{ /* Inline kernel#Int#== (var_accept_token,var708) */
var711 = var_accept_token == var708;
var709 = var711;
goto RET_LABEL710;
RET_LABEL710:(void)0;
}
if (var709){
var712 = NEW_parser_nodes__TExternCodeSegment(&type_parser_nodes__TExternCodeSegment);
((void (*)(val*, val*))(var712->class->vft[COLOR_lexer__TExternCodeSegment__init_tk]))(var712, var_location) /* init_tk on <var712:TExternCodeSegment>*/;
var = var712;
goto RET_LABEL;
} else {
}
} else {
self->attrs[COLOR_lexer__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var713 = NEW_location__Location(&type_location__Location);
var714 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var714 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute _file");
fprintf(stderr, " (%s:%d)\n", "src/parser/lexer.nit", 1664);
show_backtrace(1);
}
var715 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var715) */
var718 = var_start_line + var715;
var716 = var718;
goto RET_LABEL717;
RET_LABEL717:(void)0;
}
var719 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var719) */
var722 = var_start_line + var719;
var720 = var722;
goto RET_LABEL721;
RET_LABEL721:(void)0;
}
var723 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var723) */
var726 = var_start_pos + var723;
var724 = var726;
goto RET_LABEL725;
RET_LABEL725:(void)0;
}
var727 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var727) */
var730 = var_start_pos + var727;
var728 = var730;
goto RET_LABEL729;
RET_LABEL729:(void)0;
}
((void (*)(val*, val*, long, long, long, long))(var713->class->vft[COLOR_location__Location__init]))(var713, var714, var716, var720, var724, var728) /* init on <var713:Location>*/;
var_location731 = var713;
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var734 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (!var734) {
var_class_name737 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name737);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var738 = var_sp > var_start_stream_pos;
var732 = var738;
goto RET_LABEL733;
RET_LABEL733:(void)0;
}
if (var732){
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) */
var741 = var_sp - var_start_stream_pos;
var739 = var741;
goto RET_LABEL740;
RET_LABEL740:(void)0;
}
var742 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var_start_stream_pos, var739) /* substring on <var_string:String>*/;
var_text = var742;
var743 = NEW_parser_nodes__ALexerError(&type_parser_nodes__ALexerError);
var744 = NEW_array__Array(&type_array__Arraykernel__Object);
var745 = 3;
((void (*)(val*, long))(var744->class->vft[COLOR_array__Array__with_capacity]))(var744, var745) /* with_capacity on <var744:Array[Object]>*/;
var_ = var744;
if (varonce) {
var746 = varonce;
} else {
var747 = "Syntax error: unknown token ";
var748 = 28;
var749 = string__NativeString__to_s_with_length(var747, var748);
var746 = var749;
varonce = var746;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var746) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_text) /* add on <var_:Array[Object]>*/;
if (varonce750) {
var751 = varonce750;
} else {
var752 = ".";
var753 = 1;
var754 = string__NativeString__to_s_with_length(var752, var753);
var751 = var754;
varonce750 = var751;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var751) /* add on <var_:Array[Object]>*/;
var755 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*, val*, val*))(var743->class->vft[COLOR_lexer__ALexerError__init_lexer_error]))(var743, var755, var_location731, var_text) /* init_lexer_error on <var743:ALexerError>*/;
var_token = var743;
var = var_token;
goto RET_LABEL;
} else {
var756 = NEW_parser_nodes__EOF(&type_parser_nodes__EOF);
((void (*)(val*, val*))(var756->class->vft[COLOR_lexer__EOF__init_tk]))(var756, var_location731) /* init_tk on <var756:EOF>*/;
var_token757 = var756;
var = var_token757;
goto RET_LABEL;
}
}
}
CONTINUE_label758: (void)0;
}
BREAK_label758: (void)0;
RET_LABEL:;
return var;
}
/* method lexer#Lexer#get_token for (self: Object): nullable Token */
val* VIRTUAL_lexer__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : nullable Token */;
var1 = lexer__Lexer__get_token(self);
var = var1;
RET_LABEL:;
return var;
}
