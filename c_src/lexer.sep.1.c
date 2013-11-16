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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Deferred method called", "src/parser/lexer.nit", 25);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _message", "src/parser/lexer.nit", 1183);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _string", "src/parser/lexer.nit", 1193);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _token", "src/parser/lexer.nit", 1203);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _file", "src/parser/lexer.nit", 1222);
exit(1);
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
short int var91 /* : Bool */;
long var92 /* : Int */;
long var93 /* : Int */;
long var95 /* : Int */;
long var96 /* : Int */;
long var98 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
long var102 /* : Int */;
long var103 /* : Int */;
long var_low /* var low: Int */;
long var104 /* : Int */;
long var105 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
long var109 /* : Int */;
long var_high /* var high: Int */;
long var110 /* : Int */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
short int var122 /* : Bool */;
long var123 /* : Int */;
long var125 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
long var_middle /* var middle: Int */;
long var130 /* : Int */;
long var131 /* : Int */;
long var133 /* : Int */;
long var134 /* : Int */;
long var135 /* : Int */;
long var137 /* : Int */;
long var_offset /* var offset: Int */;
long var138 /* : Int */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
short int var144 /* : Bool */;
long var145 /* : Int */;
long var146 /* : Int */;
long var148 /* : Int */;
long var149 /* : Int */;
long var150 /* : Int */;
long var152 /* : Int */;
long var153 /* : Int */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
short int var159 /* : Bool */;
long var160 /* : Int */;
long var161 /* : Int */;
long var163 /* : Int */;
long var164 /* : Int */;
long var165 /* : Int */;
long var167 /* : Int */;
long var168 /* : Int */;
long var169 /* : Int */;
long var170 /* : Int */;
long var172 /* : Int */;
short int var173 /* : Bool */;
short int var175 /* : Bool */;
int cltype176;
int idtype177;
short int var178 /* : Bool */;
long var180 /* : Int */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
int cltype184;
int idtype185;
short int var186 /* : Bool */;
long var187 /* : Int */;
long var_tok /* var tok: Int */;
long var188 /* : Int */;
long var189 /* : Int */;
long var191 /* : Int */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
long var196 /* : Int */;
long var198 /* : Int */;
long var199 /* : Int */;
long var200 /* : Int */;
long var201 /* : Int */;
long var202 /* : Int */;
long var204 /* : Int */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
val* var209 /* : Location */;
val* var210 /* : SourceFile */;
long var211 /* : Int */;
long var212 /* : Int */;
long var214 /* : Int */;
long var215 /* : Int */;
long var216 /* : Int */;
long var218 /* : Int */;
long var219 /* : Int */;
long var220 /* : Int */;
long var222 /* : Int */;
val* var_location /* var location: Location */;
long var223 /* : Int */;
long var225 /* : Int */;
long var226 /* : Int */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : null */;
long var231 /* : Int */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
val* var235 /* : TEol */;
long var236 /* : Int */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
val* var240 /* : TComment */;
long var241 /* : Int */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
val* var245 /* : TKwpackage */;
long var246 /* : Int */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : TKwmodule */;
long var251 /* : Int */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
val* var255 /* : TKwimport */;
long var256 /* : Int */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
val* var260 /* : TKwclass */;
long var261 /* : Int */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
val* var265 /* : TKwabstract */;
long var266 /* : Int */;
short int var267 /* : Bool */;
short int var269 /* : Bool */;
val* var270 /* : TKwinterface */;
long var271 /* : Int */;
short int var272 /* : Bool */;
short int var274 /* : Bool */;
val* var275 /* : TKwenum */;
long var276 /* : Int */;
short int var277 /* : Bool */;
short int var279 /* : Bool */;
val* var280 /* : TKwend */;
long var281 /* : Int */;
short int var282 /* : Bool */;
short int var284 /* : Bool */;
val* var285 /* : TKwmeth */;
long var286 /* : Int */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
val* var290 /* : TKwtype */;
long var291 /* : Int */;
short int var292 /* : Bool */;
short int var294 /* : Bool */;
val* var295 /* : TKwinit */;
long var296 /* : Int */;
short int var297 /* : Bool */;
short int var299 /* : Bool */;
val* var300 /* : TKwredef */;
long var301 /* : Int */;
short int var302 /* : Bool */;
short int var304 /* : Bool */;
val* var305 /* : TKwis */;
long var306 /* : Int */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
val* var310 /* : TKwdo */;
long var311 /* : Int */;
short int var312 /* : Bool */;
short int var314 /* : Bool */;
val* var315 /* : TKwreadable */;
long var316 /* : Int */;
short int var317 /* : Bool */;
short int var319 /* : Bool */;
val* var320 /* : TKwwritable */;
long var321 /* : Int */;
short int var322 /* : Bool */;
short int var324 /* : Bool */;
val* var325 /* : TKwvar */;
long var326 /* : Int */;
short int var327 /* : Bool */;
short int var329 /* : Bool */;
val* var330 /* : TKwintern */;
long var331 /* : Int */;
short int var332 /* : Bool */;
short int var334 /* : Bool */;
val* var335 /* : TKwextern */;
long var336 /* : Int */;
short int var337 /* : Bool */;
short int var339 /* : Bool */;
val* var340 /* : TKwprotected */;
long var341 /* : Int */;
short int var342 /* : Bool */;
short int var344 /* : Bool */;
val* var345 /* : TKwprivate */;
long var346 /* : Int */;
short int var347 /* : Bool */;
short int var349 /* : Bool */;
val* var350 /* : TKwintrude */;
long var351 /* : Int */;
short int var352 /* : Bool */;
short int var354 /* : Bool */;
val* var355 /* : TKwif */;
long var356 /* : Int */;
short int var357 /* : Bool */;
short int var359 /* : Bool */;
val* var360 /* : TKwthen */;
long var361 /* : Int */;
short int var362 /* : Bool */;
short int var364 /* : Bool */;
val* var365 /* : TKwelse */;
long var366 /* : Int */;
short int var367 /* : Bool */;
short int var369 /* : Bool */;
val* var370 /* : TKwwhile */;
long var371 /* : Int */;
short int var372 /* : Bool */;
short int var374 /* : Bool */;
val* var375 /* : TKwloop */;
long var376 /* : Int */;
short int var377 /* : Bool */;
short int var379 /* : Bool */;
val* var380 /* : TKwfor */;
long var381 /* : Int */;
short int var382 /* : Bool */;
short int var384 /* : Bool */;
val* var385 /* : TKwin */;
long var386 /* : Int */;
short int var387 /* : Bool */;
short int var389 /* : Bool */;
val* var390 /* : TKwand */;
long var391 /* : Int */;
short int var392 /* : Bool */;
short int var394 /* : Bool */;
val* var395 /* : TKwor */;
long var396 /* : Int */;
short int var397 /* : Bool */;
short int var399 /* : Bool */;
val* var400 /* : TKwnot */;
long var401 /* : Int */;
short int var402 /* : Bool */;
short int var404 /* : Bool */;
val* var405 /* : TKwimplies */;
long var406 /* : Int */;
short int var407 /* : Bool */;
short int var409 /* : Bool */;
val* var410 /* : TKwreturn */;
long var411 /* : Int */;
short int var412 /* : Bool */;
short int var414 /* : Bool */;
val* var415 /* : TKwcontinue */;
long var416 /* : Int */;
short int var417 /* : Bool */;
short int var419 /* : Bool */;
val* var420 /* : TKwbreak */;
long var421 /* : Int */;
short int var422 /* : Bool */;
short int var424 /* : Bool */;
val* var425 /* : TKwabort */;
long var426 /* : Int */;
short int var427 /* : Bool */;
short int var429 /* : Bool */;
val* var430 /* : TKwassert */;
long var431 /* : Int */;
short int var432 /* : Bool */;
short int var434 /* : Bool */;
val* var435 /* : TKwnew */;
long var436 /* : Int */;
short int var437 /* : Bool */;
short int var439 /* : Bool */;
val* var440 /* : TKwisa */;
long var441 /* : Int */;
short int var442 /* : Bool */;
short int var444 /* : Bool */;
val* var445 /* : TKwonce */;
long var446 /* : Int */;
short int var447 /* : Bool */;
short int var449 /* : Bool */;
val* var450 /* : TKwsuper */;
long var451 /* : Int */;
short int var452 /* : Bool */;
short int var454 /* : Bool */;
val* var455 /* : TKwself */;
long var456 /* : Int */;
short int var457 /* : Bool */;
short int var459 /* : Bool */;
val* var460 /* : TKwtrue */;
long var461 /* : Int */;
short int var462 /* : Bool */;
short int var464 /* : Bool */;
val* var465 /* : TKwfalse */;
long var466 /* : Int */;
short int var467 /* : Bool */;
short int var469 /* : Bool */;
val* var470 /* : TKwnull */;
long var471 /* : Int */;
short int var472 /* : Bool */;
short int var474 /* : Bool */;
val* var475 /* : TKwas */;
long var476 /* : Int */;
short int var477 /* : Bool */;
short int var479 /* : Bool */;
val* var480 /* : TKwnullable */;
long var481 /* : Int */;
short int var482 /* : Bool */;
short int var484 /* : Bool */;
val* var485 /* : TKwisset */;
long var486 /* : Int */;
short int var487 /* : Bool */;
short int var489 /* : Bool */;
val* var490 /* : TKwlabel */;
long var491 /* : Int */;
short int var492 /* : Bool */;
short int var494 /* : Bool */;
val* var495 /* : TKwdebug */;
long var496 /* : Int */;
short int var497 /* : Bool */;
short int var499 /* : Bool */;
val* var500 /* : TOpar */;
long var501 /* : Int */;
short int var502 /* : Bool */;
short int var504 /* : Bool */;
val* var505 /* : TCpar */;
long var506 /* : Int */;
short int var507 /* : Bool */;
short int var509 /* : Bool */;
val* var510 /* : TObra */;
long var511 /* : Int */;
short int var512 /* : Bool */;
short int var514 /* : Bool */;
val* var515 /* : TCbra */;
long var516 /* : Int */;
short int var517 /* : Bool */;
short int var519 /* : Bool */;
val* var520 /* : TComma */;
long var521 /* : Int */;
short int var522 /* : Bool */;
short int var524 /* : Bool */;
val* var525 /* : TColumn */;
long var526 /* : Int */;
short int var527 /* : Bool */;
short int var529 /* : Bool */;
val* var530 /* : TQuad */;
long var531 /* : Int */;
short int var532 /* : Bool */;
short int var534 /* : Bool */;
val* var535 /* : TAssign */;
long var536 /* : Int */;
short int var537 /* : Bool */;
short int var539 /* : Bool */;
val* var540 /* : TPluseq */;
long var541 /* : Int */;
short int var542 /* : Bool */;
short int var544 /* : Bool */;
val* var545 /* : TMinuseq */;
long var546 /* : Int */;
short int var547 /* : Bool */;
short int var549 /* : Bool */;
val* var550 /* : TDotdotdot */;
long var551 /* : Int */;
short int var552 /* : Bool */;
short int var554 /* : Bool */;
val* var555 /* : TDotdot */;
long var556 /* : Int */;
short int var557 /* : Bool */;
short int var559 /* : Bool */;
val* var560 /* : TDot */;
long var561 /* : Int */;
short int var562 /* : Bool */;
short int var564 /* : Bool */;
val* var565 /* : TPlus */;
long var566 /* : Int */;
short int var567 /* : Bool */;
short int var569 /* : Bool */;
val* var570 /* : TMinus */;
long var571 /* : Int */;
short int var572 /* : Bool */;
short int var574 /* : Bool */;
val* var575 /* : TStar */;
long var576 /* : Int */;
short int var577 /* : Bool */;
short int var579 /* : Bool */;
val* var580 /* : TSlash */;
long var581 /* : Int */;
short int var582 /* : Bool */;
short int var584 /* : Bool */;
val* var585 /* : TPercent */;
long var586 /* : Int */;
short int var587 /* : Bool */;
short int var589 /* : Bool */;
val* var590 /* : TEq */;
long var591 /* : Int */;
short int var592 /* : Bool */;
short int var594 /* : Bool */;
val* var595 /* : TNe */;
long var596 /* : Int */;
short int var597 /* : Bool */;
short int var599 /* : Bool */;
val* var600 /* : TLt */;
long var601 /* : Int */;
short int var602 /* : Bool */;
short int var604 /* : Bool */;
val* var605 /* : TLe */;
long var606 /* : Int */;
short int var607 /* : Bool */;
short int var609 /* : Bool */;
val* var610 /* : TLl */;
long var611 /* : Int */;
short int var612 /* : Bool */;
short int var614 /* : Bool */;
val* var615 /* : TGt */;
long var616 /* : Int */;
short int var617 /* : Bool */;
short int var619 /* : Bool */;
val* var620 /* : TGe */;
long var621 /* : Int */;
short int var622 /* : Bool */;
short int var624 /* : Bool */;
val* var625 /* : TGg */;
long var626 /* : Int */;
short int var627 /* : Bool */;
short int var629 /* : Bool */;
val* var630 /* : TStarship */;
long var631 /* : Int */;
short int var632 /* : Bool */;
short int var634 /* : Bool */;
val* var635 /* : TBang */;
long var636 /* : Int */;
short int var637 /* : Bool */;
short int var639 /* : Bool */;
val* var640 /* : TAt */;
long var641 /* : Int */;
short int var642 /* : Bool */;
short int var644 /* : Bool */;
val* var645 /* : TClassid */;
long var646 /* : Int */;
short int var647 /* : Bool */;
short int var649 /* : Bool */;
val* var650 /* : TId */;
long var651 /* : Int */;
short int var652 /* : Bool */;
short int var654 /* : Bool */;
val* var655 /* : TAttrid */;
long var656 /* : Int */;
short int var657 /* : Bool */;
short int var659 /* : Bool */;
val* var660 /* : TNumber */;
long var661 /* : Int */;
short int var662 /* : Bool */;
short int var664 /* : Bool */;
val* var665 /* : TFloat */;
long var666 /* : Int */;
short int var667 /* : Bool */;
short int var669 /* : Bool */;
val* var670 /* : TString */;
long var671 /* : Int */;
short int var672 /* : Bool */;
short int var674 /* : Bool */;
val* var675 /* : TStartString */;
long var676 /* : Int */;
short int var677 /* : Bool */;
short int var679 /* : Bool */;
val* var680 /* : TMidString */;
long var681 /* : Int */;
short int var682 /* : Bool */;
short int var684 /* : Bool */;
val* var685 /* : TEndString */;
long var686 /* : Int */;
short int var687 /* : Bool */;
short int var689 /* : Bool */;
val* var690 /* : TChar */;
long var691 /* : Int */;
short int var692 /* : Bool */;
short int var694 /* : Bool */;
val* var695 /* : TBadString */;
long var696 /* : Int */;
short int var697 /* : Bool */;
short int var699 /* : Bool */;
val* var700 /* : TBadChar */;
long var701 /* : Int */;
short int var702 /* : Bool */;
short int var704 /* : Bool */;
val* var705 /* : TExternCodeSegment */;
val* var706 /* : Location */;
val* var707 /* : SourceFile */;
long var708 /* : Int */;
long var709 /* : Int */;
long var711 /* : Int */;
long var712 /* : Int */;
long var713 /* : Int */;
long var715 /* : Int */;
long var716 /* : Int */;
long var717 /* : Int */;
long var719 /* : Int */;
long var720 /* : Int */;
long var721 /* : Int */;
long var723 /* : Int */;
val* var_location724 /* var location: Location */;
short int var725 /* : Bool */;
short int var727 /* : Bool */;
int cltype728;
int idtype729;
short int var730 /* : Bool */;
long var731 /* : Int */;
long var733 /* : Int */;
val* var734 /* : String */;
val* var_text /* var text: String */;
val* var735 /* : ALexerError */;
val* var736 /* : Array[Object] */;
long var737 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var738 /* : String */;
char* var739 /* : NativeString */;
long var740 /* : Int */;
val* var741 /* : String */;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : NativeString */;
long var745 /* : Int */;
val* var746 /* : String */;
val* var747 /* : String */;
val* var_token /* var token: ALexerError */;
val* var748 /* : EOF */;
val* var_token749 /* var token: EOF */;
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _file", "src/parser/lexer.nit", 1287);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _file", "src/parser/lexer.nit", 1309);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _file", "src/parser/lexer.nit", 1313);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _file", "src/parser/lexer.nit", 1319);
exit(1);
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
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var91 = var_dfa_state < var83;
var86 = var91;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
if (var86){
var92 = 2;
{ /* Inline kernel#Int#unary - (var92) */
var95 = -var92;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
{ /* Inline kernel#Int#- (var93,var_dfa_state) */
var98 = var93 - var_dfa_state;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var_old_state = var96;
} else {
}
var99 = 1;
{ /* Inline kernel#Int#unary - (var99) */
var102 = -var99;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var_dfa_state = var100;
var103 = 0;
var_low = var103;
var104 = 0;
var105 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var104) /* lexer_goto on <self:Lexer>*/;
var106 = 1;
{ /* Inline kernel#Int#- (var105,var106) */
var109 = var105 - var106;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
var_high = var107;
var110 = 0;
{ /* Inline kernel#Int#>= (var_high,var110) */
/* Covariant cast for argument 0 (i) <var110:Int> isa OTHER */
/* <var110:Int> isa OTHER */
var113 = 1; /* easy <var110:Int> isa OTHER*/
if (!var113) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var116 = var_high >= var110;
var111 = var116;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
if (var111){
for(;;) {
{ /* Inline kernel#Int#<= (var_low,var_high) */
/* Covariant cast for argument 0 (i) <var_high:Int> isa OTHER */
/* <var_high:Int> isa OTHER */
var119 = 1; /* easy <var_high:Int> isa OTHER*/
if (!var119) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 256);
exit(1);
}
var122 = var_low <= var_high;
var117 = var122;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
if (!var117) break;
{ /* Inline kernel#Int#+ (var_low,var_high) */
var125 = var_low + var_high;
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
var126 = 2;
{ /* Inline kernel#Int#/ (var123,var126) */
var129 = var123 / var126;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
var_middle = var127;
var130 = 3;
{ /* Inline kernel#Int#* (var_middle,var130) */
var133 = var_middle * var130;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
var134 = 1;
{ /* Inline kernel#Int#+ (var131,var134) */
var137 = var131 + var134;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
var_offset = var135;
var138 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var_offset) /* lexer_goto on <self:Lexer>*/;
{ /* Inline kernel#Int#< (var_c,var138) */
/* Covariant cast for argument 0 (i) <var138:Int> isa OTHER */
/* <var138:Int> isa OTHER */
var141 = 1; /* easy <var138:Int> isa OTHER*/
if (!var141) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 257);
exit(1);
}
var144 = var_c < var138;
var139 = var144;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
if (var139){
var145 = 1;
{ /* Inline kernel#Int#- (var_middle,var145) */
var148 = var_middle - var145;
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
var_high = var146;
} else {
var149 = 1;
{ /* Inline kernel#Int#+ (var_offset,var149) */
var152 = var_offset + var149;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
var153 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var150) /* lexer_goto on <self:Lexer>*/;
{ /* Inline kernel#Int#> (var_c,var153) */
/* Covariant cast for argument 0 (i) <var153:Int> isa OTHER */
/* <var153:Int> isa OTHER */
var156 = 1; /* easy <var153:Int> isa OTHER*/
if (!var156) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var159 = var_c > var153;
var154 = var159;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
if (var154){
var160 = 1;
{ /* Inline kernel#Int#+ (var_middle,var160) */
var163 = var_middle + var160;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
var_low = var161;
} else {
var164 = 2;
{ /* Inline kernel#Int#+ (var_offset,var164) */
var167 = var_offset + var164;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var168 = ((long (*)(val*, long, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_goto]))(self, var_old_state, var165) /* lexer_goto on <self:Lexer>*/;
var_dfa_state = var168;
goto BREAK_label;
}
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
} else {
}
var169 = 2;
{ /* Inline kernel#Int#unary - (var169) */
var172 = -var169;
var170 = var172;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
{ /* Inline kernel#Int#> (var_dfa_state,var170) */
/* Covariant cast for argument 0 (i) <var170:Int> isa OTHER */
/* <var170:Int> isa OTHER */
var175 = 1; /* easy <var170:Int> isa OTHER*/
if (!var175) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var178 = var_dfa_state > var170;
var173 = var178;
goto RET_LABEL174;
RET_LABEL174:(void)0;
}
if (var173){
goto BREAK_label179;
} else {
}
CONTINUE_label179: (void)0;
}
BREAK_label179: (void)0;
self->attrs[COLOR_lexer__Lexer___cr].s = var_cr; /* _cr on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___line].l = var_line; /* _line on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___pos].l = var_pos; /* _pos on <self:Lexer> */
}
var180 = 0;
{ /* Inline kernel#Int#>= (var_dfa_state,var180) */
/* Covariant cast for argument 0 (i) <var180:Int> isa OTHER */
/* <var180:Int> isa OTHER */
var183 = 1; /* easy <var180:Int> isa OTHER*/
if (!var183) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 258);
exit(1);
}
var186 = var_dfa_state >= var180;
var181 = var186;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
if (var181){
var187 = ((long (*)(val*, long))(self->class->vft[COLOR_tables__TablesCapable__lexer_accept]))(self, var_dfa_state) /* lexer_accept on <self:Lexer>*/;
var_tok = var187;
var188 = 1;
{ /* Inline kernel#Int#unary - (var188) */
var191 = -var188;
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
{ /* Inline kernel#Int#!= (var_tok,var189) */
var194 = var_tok == var189;
var195 = !var194;
var192 = var195;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
if (var192){
var_accept_state = var_dfa_state;
var_accept_token = var_tok;
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) */
var198 = var_sp - var_start_stream_pos;
var196 = var198;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
var_accept_length = var196;
var199 = self->attrs[COLOR_lexer__Lexer___pos].l; /* _pos on <self:Lexer> */
var_accept_pos = var199;
var200 = self->attrs[COLOR_lexer__Lexer___line].l; /* _line on <self:Lexer> */
var_accept_line = var200;
} else {
}
} else {
var201 = 1;
{ /* Inline kernel#Int#unary - (var201) */
var204 = -var201;
var202 = var204;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
{ /* Inline kernel#Int#!= (var_accept_state,var202) */
var207 = var_accept_state == var202;
var208 = !var207;
var205 = var208;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
if (var205){
var209 = NEW_location__Location(&type_location__Location);
var210 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var210 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _file", "src/parser/lexer.nit", 1370);
exit(1);
}
var211 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var211) */
var214 = var_start_line + var211;
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var215 = 1;
{ /* Inline kernel#Int#+ (var_accept_line,var215) */
var218 = var_accept_line + var215;
var216 = var218;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
var219 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var219) */
var222 = var_start_pos + var219;
var220 = var222;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
((void (*)(val*, val*, long, long, long, long))(var209->class->vft[COLOR_location__Location__init]))(var209, var210, var212, var216, var220, var_accept_pos) /* init on <var209:Location>*/;
CHECK_NEW_location__Location(var209);
var_location = var209;
self->attrs[COLOR_lexer__Lexer___pos].l = var_accept_pos; /* _pos on <self:Lexer> */
self->attrs[COLOR_lexer__Lexer___line].l = var_accept_line; /* _line on <self:Lexer> */
{ /* Inline kernel#Int#+ (var_start_stream_pos,var_accept_length) */
var225 = var_start_stream_pos + var_accept_length;
var223 = var225;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
self->attrs[COLOR_lexer__Lexer___stream_pos].l = var223; /* _stream_pos on <self:Lexer> */
var226 = 0;
{ /* Inline kernel#Int#== (var_accept_token,var226) */
var229 = var_accept_token == var226;
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
if (var227){
var230 = NULL;
var = var230;
goto RET_LABEL;
} else {
}
var231 = 1;
{ /* Inline kernel#Int#== (var_accept_token,var231) */
var234 = var_accept_token == var231;
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
if (var232){
var235 = NEW_parser_nodes__TEol(&type_parser_nodes__TEol);
((void (*)(val*, val*))(var235->class->vft[COLOR_lexer__TEol__init_tk]))(var235, var_location) /* init_tk on <var235:TEol>*/;
CHECK_NEW_parser_nodes__TEol(var235);
var = var235;
goto RET_LABEL;
} else {
}
var236 = 2;
{ /* Inline kernel#Int#== (var_accept_token,var236) */
var239 = var_accept_token == var236;
var237 = var239;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
if (var237){
var240 = NEW_parser_nodes__TComment(&type_parser_nodes__TComment);
((void (*)(val*, val*))(var240->class->vft[COLOR_lexer__TComment__init_tk]))(var240, var_location) /* init_tk on <var240:TComment>*/;
CHECK_NEW_parser_nodes__TComment(var240);
var = var240;
goto RET_LABEL;
} else {
}
var241 = 3;
{ /* Inline kernel#Int#== (var_accept_token,var241) */
var244 = var_accept_token == var241;
var242 = var244;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
if (var242){
var245 = NEW_parser_nodes__TKwpackage(&type_parser_nodes__TKwpackage);
((void (*)(val*, val*))(var245->class->vft[COLOR_lexer__TKwpackage__init_tk]))(var245, var_location) /* init_tk on <var245:TKwpackage>*/;
CHECK_NEW_parser_nodes__TKwpackage(var245);
var = var245;
goto RET_LABEL;
} else {
}
var246 = 4;
{ /* Inline kernel#Int#== (var_accept_token,var246) */
var249 = var_accept_token == var246;
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
if (var247){
var250 = NEW_parser_nodes__TKwmodule(&type_parser_nodes__TKwmodule);
((void (*)(val*, val*))(var250->class->vft[COLOR_lexer__TKwmodule__init_tk]))(var250, var_location) /* init_tk on <var250:TKwmodule>*/;
CHECK_NEW_parser_nodes__TKwmodule(var250);
var = var250;
goto RET_LABEL;
} else {
}
var251 = 5;
{ /* Inline kernel#Int#== (var_accept_token,var251) */
var254 = var_accept_token == var251;
var252 = var254;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
if (var252){
var255 = NEW_parser_nodes__TKwimport(&type_parser_nodes__TKwimport);
((void (*)(val*, val*))(var255->class->vft[COLOR_lexer__TKwimport__init_tk]))(var255, var_location) /* init_tk on <var255:TKwimport>*/;
CHECK_NEW_parser_nodes__TKwimport(var255);
var = var255;
goto RET_LABEL;
} else {
}
var256 = 6;
{ /* Inline kernel#Int#== (var_accept_token,var256) */
var259 = var_accept_token == var256;
var257 = var259;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
if (var257){
var260 = NEW_parser_nodes__TKwclass(&type_parser_nodes__TKwclass);
((void (*)(val*, val*))(var260->class->vft[COLOR_lexer__TKwclass__init_tk]))(var260, var_location) /* init_tk on <var260:TKwclass>*/;
CHECK_NEW_parser_nodes__TKwclass(var260);
var = var260;
goto RET_LABEL;
} else {
}
var261 = 7;
{ /* Inline kernel#Int#== (var_accept_token,var261) */
var264 = var_accept_token == var261;
var262 = var264;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
if (var262){
var265 = NEW_parser_nodes__TKwabstract(&type_parser_nodes__TKwabstract);
((void (*)(val*, val*))(var265->class->vft[COLOR_lexer__TKwabstract__init_tk]))(var265, var_location) /* init_tk on <var265:TKwabstract>*/;
CHECK_NEW_parser_nodes__TKwabstract(var265);
var = var265;
goto RET_LABEL;
} else {
}
var266 = 8;
{ /* Inline kernel#Int#== (var_accept_token,var266) */
var269 = var_accept_token == var266;
var267 = var269;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
if (var267){
var270 = NEW_parser_nodes__TKwinterface(&type_parser_nodes__TKwinterface);
((void (*)(val*, val*))(var270->class->vft[COLOR_lexer__TKwinterface__init_tk]))(var270, var_location) /* init_tk on <var270:TKwinterface>*/;
CHECK_NEW_parser_nodes__TKwinterface(var270);
var = var270;
goto RET_LABEL;
} else {
}
var271 = 9;
{ /* Inline kernel#Int#== (var_accept_token,var271) */
var274 = var_accept_token == var271;
var272 = var274;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
if (var272){
var275 = NEW_parser_nodes__TKwenum(&type_parser_nodes__TKwenum);
((void (*)(val*, val*))(var275->class->vft[COLOR_lexer__TKwenum__init_tk]))(var275, var_location) /* init_tk on <var275:TKwenum>*/;
CHECK_NEW_parser_nodes__TKwenum(var275);
var = var275;
goto RET_LABEL;
} else {
}
var276 = 10;
{ /* Inline kernel#Int#== (var_accept_token,var276) */
var279 = var_accept_token == var276;
var277 = var279;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
if (var277){
var280 = NEW_parser_nodes__TKwend(&type_parser_nodes__TKwend);
((void (*)(val*, val*))(var280->class->vft[COLOR_lexer__TKwend__init_tk]))(var280, var_location) /* init_tk on <var280:TKwend>*/;
CHECK_NEW_parser_nodes__TKwend(var280);
var = var280;
goto RET_LABEL;
} else {
}
var281 = 11;
{ /* Inline kernel#Int#== (var_accept_token,var281) */
var284 = var_accept_token == var281;
var282 = var284;
goto RET_LABEL283;
RET_LABEL283:(void)0;
}
if (var282){
var285 = NEW_parser_nodes__TKwmeth(&type_parser_nodes__TKwmeth);
((void (*)(val*, val*))(var285->class->vft[COLOR_lexer__TKwmeth__init_tk]))(var285, var_location) /* init_tk on <var285:TKwmeth>*/;
CHECK_NEW_parser_nodes__TKwmeth(var285);
var = var285;
goto RET_LABEL;
} else {
}
var286 = 12;
{ /* Inline kernel#Int#== (var_accept_token,var286) */
var289 = var_accept_token == var286;
var287 = var289;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
if (var287){
var290 = NEW_parser_nodes__TKwtype(&type_parser_nodes__TKwtype);
((void (*)(val*, val*))(var290->class->vft[COLOR_lexer__TKwtype__init_tk]))(var290, var_location) /* init_tk on <var290:TKwtype>*/;
CHECK_NEW_parser_nodes__TKwtype(var290);
var = var290;
goto RET_LABEL;
} else {
}
var291 = 13;
{ /* Inline kernel#Int#== (var_accept_token,var291) */
var294 = var_accept_token == var291;
var292 = var294;
goto RET_LABEL293;
RET_LABEL293:(void)0;
}
if (var292){
var295 = NEW_parser_nodes__TKwinit(&type_parser_nodes__TKwinit);
((void (*)(val*, val*))(var295->class->vft[COLOR_lexer__TKwinit__init_tk]))(var295, var_location) /* init_tk on <var295:TKwinit>*/;
CHECK_NEW_parser_nodes__TKwinit(var295);
var = var295;
goto RET_LABEL;
} else {
}
var296 = 14;
{ /* Inline kernel#Int#== (var_accept_token,var296) */
var299 = var_accept_token == var296;
var297 = var299;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
if (var297){
var300 = NEW_parser_nodes__TKwredef(&type_parser_nodes__TKwredef);
((void (*)(val*, val*))(var300->class->vft[COLOR_lexer__TKwredef__init_tk]))(var300, var_location) /* init_tk on <var300:TKwredef>*/;
CHECK_NEW_parser_nodes__TKwredef(var300);
var = var300;
goto RET_LABEL;
} else {
}
var301 = 15;
{ /* Inline kernel#Int#== (var_accept_token,var301) */
var304 = var_accept_token == var301;
var302 = var304;
goto RET_LABEL303;
RET_LABEL303:(void)0;
}
if (var302){
var305 = NEW_parser_nodes__TKwis(&type_parser_nodes__TKwis);
((void (*)(val*, val*))(var305->class->vft[COLOR_lexer__TKwis__init_tk]))(var305, var_location) /* init_tk on <var305:TKwis>*/;
CHECK_NEW_parser_nodes__TKwis(var305);
var = var305;
goto RET_LABEL;
} else {
}
var306 = 16;
{ /* Inline kernel#Int#== (var_accept_token,var306) */
var309 = var_accept_token == var306;
var307 = var309;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
if (var307){
var310 = NEW_parser_nodes__TKwdo(&type_parser_nodes__TKwdo);
((void (*)(val*, val*))(var310->class->vft[COLOR_lexer__TKwdo__init_tk]))(var310, var_location) /* init_tk on <var310:TKwdo>*/;
CHECK_NEW_parser_nodes__TKwdo(var310);
var = var310;
goto RET_LABEL;
} else {
}
var311 = 17;
{ /* Inline kernel#Int#== (var_accept_token,var311) */
var314 = var_accept_token == var311;
var312 = var314;
goto RET_LABEL313;
RET_LABEL313:(void)0;
}
if (var312){
var315 = NEW_parser_nodes__TKwreadable(&type_parser_nodes__TKwreadable);
((void (*)(val*, val*))(var315->class->vft[COLOR_lexer__TKwreadable__init_tk]))(var315, var_location) /* init_tk on <var315:TKwreadable>*/;
CHECK_NEW_parser_nodes__TKwreadable(var315);
var = var315;
goto RET_LABEL;
} else {
}
var316 = 18;
{ /* Inline kernel#Int#== (var_accept_token,var316) */
var319 = var_accept_token == var316;
var317 = var319;
goto RET_LABEL318;
RET_LABEL318:(void)0;
}
if (var317){
var320 = NEW_parser_nodes__TKwwritable(&type_parser_nodes__TKwwritable);
((void (*)(val*, val*))(var320->class->vft[COLOR_lexer__TKwwritable__init_tk]))(var320, var_location) /* init_tk on <var320:TKwwritable>*/;
CHECK_NEW_parser_nodes__TKwwritable(var320);
var = var320;
goto RET_LABEL;
} else {
}
var321 = 19;
{ /* Inline kernel#Int#== (var_accept_token,var321) */
var324 = var_accept_token == var321;
var322 = var324;
goto RET_LABEL323;
RET_LABEL323:(void)0;
}
if (var322){
var325 = NEW_parser_nodes__TKwvar(&type_parser_nodes__TKwvar);
((void (*)(val*, val*))(var325->class->vft[COLOR_lexer__TKwvar__init_tk]))(var325, var_location) /* init_tk on <var325:TKwvar>*/;
CHECK_NEW_parser_nodes__TKwvar(var325);
var = var325;
goto RET_LABEL;
} else {
}
var326 = 20;
{ /* Inline kernel#Int#== (var_accept_token,var326) */
var329 = var_accept_token == var326;
var327 = var329;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
if (var327){
var330 = NEW_parser_nodes__TKwintern(&type_parser_nodes__TKwintern);
((void (*)(val*, val*))(var330->class->vft[COLOR_lexer__TKwintern__init_tk]))(var330, var_location) /* init_tk on <var330:TKwintern>*/;
CHECK_NEW_parser_nodes__TKwintern(var330);
var = var330;
goto RET_LABEL;
} else {
}
var331 = 21;
{ /* Inline kernel#Int#== (var_accept_token,var331) */
var334 = var_accept_token == var331;
var332 = var334;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
if (var332){
var335 = NEW_parser_nodes__TKwextern(&type_parser_nodes__TKwextern);
((void (*)(val*, val*))(var335->class->vft[COLOR_lexer__TKwextern__init_tk]))(var335, var_location) /* init_tk on <var335:TKwextern>*/;
CHECK_NEW_parser_nodes__TKwextern(var335);
var = var335;
goto RET_LABEL;
} else {
}
var336 = 22;
{ /* Inline kernel#Int#== (var_accept_token,var336) */
var339 = var_accept_token == var336;
var337 = var339;
goto RET_LABEL338;
RET_LABEL338:(void)0;
}
if (var337){
var340 = NEW_parser_nodes__TKwprotected(&type_parser_nodes__TKwprotected);
((void (*)(val*, val*))(var340->class->vft[COLOR_lexer__TKwprotected__init_tk]))(var340, var_location) /* init_tk on <var340:TKwprotected>*/;
CHECK_NEW_parser_nodes__TKwprotected(var340);
var = var340;
goto RET_LABEL;
} else {
}
var341 = 23;
{ /* Inline kernel#Int#== (var_accept_token,var341) */
var344 = var_accept_token == var341;
var342 = var344;
goto RET_LABEL343;
RET_LABEL343:(void)0;
}
if (var342){
var345 = NEW_parser_nodes__TKwprivate(&type_parser_nodes__TKwprivate);
((void (*)(val*, val*))(var345->class->vft[COLOR_lexer__TKwprivate__init_tk]))(var345, var_location) /* init_tk on <var345:TKwprivate>*/;
CHECK_NEW_parser_nodes__TKwprivate(var345);
var = var345;
goto RET_LABEL;
} else {
}
var346 = 24;
{ /* Inline kernel#Int#== (var_accept_token,var346) */
var349 = var_accept_token == var346;
var347 = var349;
goto RET_LABEL348;
RET_LABEL348:(void)0;
}
if (var347){
var350 = NEW_parser_nodes__TKwintrude(&type_parser_nodes__TKwintrude);
((void (*)(val*, val*))(var350->class->vft[COLOR_lexer__TKwintrude__init_tk]))(var350, var_location) /* init_tk on <var350:TKwintrude>*/;
CHECK_NEW_parser_nodes__TKwintrude(var350);
var = var350;
goto RET_LABEL;
} else {
}
var351 = 25;
{ /* Inline kernel#Int#== (var_accept_token,var351) */
var354 = var_accept_token == var351;
var352 = var354;
goto RET_LABEL353;
RET_LABEL353:(void)0;
}
if (var352){
var355 = NEW_parser_nodes__TKwif(&type_parser_nodes__TKwif);
((void (*)(val*, val*))(var355->class->vft[COLOR_lexer__TKwif__init_tk]))(var355, var_location) /* init_tk on <var355:TKwif>*/;
CHECK_NEW_parser_nodes__TKwif(var355);
var = var355;
goto RET_LABEL;
} else {
}
var356 = 26;
{ /* Inline kernel#Int#== (var_accept_token,var356) */
var359 = var_accept_token == var356;
var357 = var359;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
if (var357){
var360 = NEW_parser_nodes__TKwthen(&type_parser_nodes__TKwthen);
((void (*)(val*, val*))(var360->class->vft[COLOR_lexer__TKwthen__init_tk]))(var360, var_location) /* init_tk on <var360:TKwthen>*/;
CHECK_NEW_parser_nodes__TKwthen(var360);
var = var360;
goto RET_LABEL;
} else {
}
var361 = 27;
{ /* Inline kernel#Int#== (var_accept_token,var361) */
var364 = var_accept_token == var361;
var362 = var364;
goto RET_LABEL363;
RET_LABEL363:(void)0;
}
if (var362){
var365 = NEW_parser_nodes__TKwelse(&type_parser_nodes__TKwelse);
((void (*)(val*, val*))(var365->class->vft[COLOR_lexer__TKwelse__init_tk]))(var365, var_location) /* init_tk on <var365:TKwelse>*/;
CHECK_NEW_parser_nodes__TKwelse(var365);
var = var365;
goto RET_LABEL;
} else {
}
var366 = 28;
{ /* Inline kernel#Int#== (var_accept_token,var366) */
var369 = var_accept_token == var366;
var367 = var369;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
if (var367){
var370 = NEW_parser_nodes__TKwwhile(&type_parser_nodes__TKwwhile);
((void (*)(val*, val*))(var370->class->vft[COLOR_lexer__TKwwhile__init_tk]))(var370, var_location) /* init_tk on <var370:TKwwhile>*/;
CHECK_NEW_parser_nodes__TKwwhile(var370);
var = var370;
goto RET_LABEL;
} else {
}
var371 = 29;
{ /* Inline kernel#Int#== (var_accept_token,var371) */
var374 = var_accept_token == var371;
var372 = var374;
goto RET_LABEL373;
RET_LABEL373:(void)0;
}
if (var372){
var375 = NEW_parser_nodes__TKwloop(&type_parser_nodes__TKwloop);
((void (*)(val*, val*))(var375->class->vft[COLOR_lexer__TKwloop__init_tk]))(var375, var_location) /* init_tk on <var375:TKwloop>*/;
CHECK_NEW_parser_nodes__TKwloop(var375);
var = var375;
goto RET_LABEL;
} else {
}
var376 = 30;
{ /* Inline kernel#Int#== (var_accept_token,var376) */
var379 = var_accept_token == var376;
var377 = var379;
goto RET_LABEL378;
RET_LABEL378:(void)0;
}
if (var377){
var380 = NEW_parser_nodes__TKwfor(&type_parser_nodes__TKwfor);
((void (*)(val*, val*))(var380->class->vft[COLOR_lexer__TKwfor__init_tk]))(var380, var_location) /* init_tk on <var380:TKwfor>*/;
CHECK_NEW_parser_nodes__TKwfor(var380);
var = var380;
goto RET_LABEL;
} else {
}
var381 = 31;
{ /* Inline kernel#Int#== (var_accept_token,var381) */
var384 = var_accept_token == var381;
var382 = var384;
goto RET_LABEL383;
RET_LABEL383:(void)0;
}
if (var382){
var385 = NEW_parser_nodes__TKwin(&type_parser_nodes__TKwin);
((void (*)(val*, val*))(var385->class->vft[COLOR_lexer__TKwin__init_tk]))(var385, var_location) /* init_tk on <var385:TKwin>*/;
CHECK_NEW_parser_nodes__TKwin(var385);
var = var385;
goto RET_LABEL;
} else {
}
var386 = 32;
{ /* Inline kernel#Int#== (var_accept_token,var386) */
var389 = var_accept_token == var386;
var387 = var389;
goto RET_LABEL388;
RET_LABEL388:(void)0;
}
if (var387){
var390 = NEW_parser_nodes__TKwand(&type_parser_nodes__TKwand);
((void (*)(val*, val*))(var390->class->vft[COLOR_lexer__TKwand__init_tk]))(var390, var_location) /* init_tk on <var390:TKwand>*/;
CHECK_NEW_parser_nodes__TKwand(var390);
var = var390;
goto RET_LABEL;
} else {
}
var391 = 33;
{ /* Inline kernel#Int#== (var_accept_token,var391) */
var394 = var_accept_token == var391;
var392 = var394;
goto RET_LABEL393;
RET_LABEL393:(void)0;
}
if (var392){
var395 = NEW_parser_nodes__TKwor(&type_parser_nodes__TKwor);
((void (*)(val*, val*))(var395->class->vft[COLOR_lexer__TKwor__init_tk]))(var395, var_location) /* init_tk on <var395:TKwor>*/;
CHECK_NEW_parser_nodes__TKwor(var395);
var = var395;
goto RET_LABEL;
} else {
}
var396 = 34;
{ /* Inline kernel#Int#== (var_accept_token,var396) */
var399 = var_accept_token == var396;
var397 = var399;
goto RET_LABEL398;
RET_LABEL398:(void)0;
}
if (var397){
var400 = NEW_parser_nodes__TKwnot(&type_parser_nodes__TKwnot);
((void (*)(val*, val*))(var400->class->vft[COLOR_lexer__TKwnot__init_tk]))(var400, var_location) /* init_tk on <var400:TKwnot>*/;
CHECK_NEW_parser_nodes__TKwnot(var400);
var = var400;
goto RET_LABEL;
} else {
}
var401 = 35;
{ /* Inline kernel#Int#== (var_accept_token,var401) */
var404 = var_accept_token == var401;
var402 = var404;
goto RET_LABEL403;
RET_LABEL403:(void)0;
}
if (var402){
var405 = NEW_parser_nodes__TKwimplies(&type_parser_nodes__TKwimplies);
((void (*)(val*, val*))(var405->class->vft[COLOR_lexer__TKwimplies__init_tk]))(var405, var_location) /* init_tk on <var405:TKwimplies>*/;
CHECK_NEW_parser_nodes__TKwimplies(var405);
var = var405;
goto RET_LABEL;
} else {
}
var406 = 36;
{ /* Inline kernel#Int#== (var_accept_token,var406) */
var409 = var_accept_token == var406;
var407 = var409;
goto RET_LABEL408;
RET_LABEL408:(void)0;
}
if (var407){
var410 = NEW_parser_nodes__TKwreturn(&type_parser_nodes__TKwreturn);
((void (*)(val*, val*))(var410->class->vft[COLOR_lexer__TKwreturn__init_tk]))(var410, var_location) /* init_tk on <var410:TKwreturn>*/;
CHECK_NEW_parser_nodes__TKwreturn(var410);
var = var410;
goto RET_LABEL;
} else {
}
var411 = 37;
{ /* Inline kernel#Int#== (var_accept_token,var411) */
var414 = var_accept_token == var411;
var412 = var414;
goto RET_LABEL413;
RET_LABEL413:(void)0;
}
if (var412){
var415 = NEW_parser_nodes__TKwcontinue(&type_parser_nodes__TKwcontinue);
((void (*)(val*, val*))(var415->class->vft[COLOR_lexer__TKwcontinue__init_tk]))(var415, var_location) /* init_tk on <var415:TKwcontinue>*/;
CHECK_NEW_parser_nodes__TKwcontinue(var415);
var = var415;
goto RET_LABEL;
} else {
}
var416 = 38;
{ /* Inline kernel#Int#== (var_accept_token,var416) */
var419 = var_accept_token == var416;
var417 = var419;
goto RET_LABEL418;
RET_LABEL418:(void)0;
}
if (var417){
var420 = NEW_parser_nodes__TKwbreak(&type_parser_nodes__TKwbreak);
((void (*)(val*, val*))(var420->class->vft[COLOR_lexer__TKwbreak__init_tk]))(var420, var_location) /* init_tk on <var420:TKwbreak>*/;
CHECK_NEW_parser_nodes__TKwbreak(var420);
var = var420;
goto RET_LABEL;
} else {
}
var421 = 39;
{ /* Inline kernel#Int#== (var_accept_token,var421) */
var424 = var_accept_token == var421;
var422 = var424;
goto RET_LABEL423;
RET_LABEL423:(void)0;
}
if (var422){
var425 = NEW_parser_nodes__TKwabort(&type_parser_nodes__TKwabort);
((void (*)(val*, val*))(var425->class->vft[COLOR_lexer__TKwabort__init_tk]))(var425, var_location) /* init_tk on <var425:TKwabort>*/;
CHECK_NEW_parser_nodes__TKwabort(var425);
var = var425;
goto RET_LABEL;
} else {
}
var426 = 40;
{ /* Inline kernel#Int#== (var_accept_token,var426) */
var429 = var_accept_token == var426;
var427 = var429;
goto RET_LABEL428;
RET_LABEL428:(void)0;
}
if (var427){
var430 = NEW_parser_nodes__TKwassert(&type_parser_nodes__TKwassert);
((void (*)(val*, val*))(var430->class->vft[COLOR_lexer__TKwassert__init_tk]))(var430, var_location) /* init_tk on <var430:TKwassert>*/;
CHECK_NEW_parser_nodes__TKwassert(var430);
var = var430;
goto RET_LABEL;
} else {
}
var431 = 41;
{ /* Inline kernel#Int#== (var_accept_token,var431) */
var434 = var_accept_token == var431;
var432 = var434;
goto RET_LABEL433;
RET_LABEL433:(void)0;
}
if (var432){
var435 = NEW_parser_nodes__TKwnew(&type_parser_nodes__TKwnew);
((void (*)(val*, val*))(var435->class->vft[COLOR_lexer__TKwnew__init_tk]))(var435, var_location) /* init_tk on <var435:TKwnew>*/;
CHECK_NEW_parser_nodes__TKwnew(var435);
var = var435;
goto RET_LABEL;
} else {
}
var436 = 42;
{ /* Inline kernel#Int#== (var_accept_token,var436) */
var439 = var_accept_token == var436;
var437 = var439;
goto RET_LABEL438;
RET_LABEL438:(void)0;
}
if (var437){
var440 = NEW_parser_nodes__TKwisa(&type_parser_nodes__TKwisa);
((void (*)(val*, val*))(var440->class->vft[COLOR_lexer__TKwisa__init_tk]))(var440, var_location) /* init_tk on <var440:TKwisa>*/;
CHECK_NEW_parser_nodes__TKwisa(var440);
var = var440;
goto RET_LABEL;
} else {
}
var441 = 43;
{ /* Inline kernel#Int#== (var_accept_token,var441) */
var444 = var_accept_token == var441;
var442 = var444;
goto RET_LABEL443;
RET_LABEL443:(void)0;
}
if (var442){
var445 = NEW_parser_nodes__TKwonce(&type_parser_nodes__TKwonce);
((void (*)(val*, val*))(var445->class->vft[COLOR_lexer__TKwonce__init_tk]))(var445, var_location) /* init_tk on <var445:TKwonce>*/;
CHECK_NEW_parser_nodes__TKwonce(var445);
var = var445;
goto RET_LABEL;
} else {
}
var446 = 44;
{ /* Inline kernel#Int#== (var_accept_token,var446) */
var449 = var_accept_token == var446;
var447 = var449;
goto RET_LABEL448;
RET_LABEL448:(void)0;
}
if (var447){
var450 = NEW_parser_nodes__TKwsuper(&type_parser_nodes__TKwsuper);
((void (*)(val*, val*))(var450->class->vft[COLOR_lexer__TKwsuper__init_tk]))(var450, var_location) /* init_tk on <var450:TKwsuper>*/;
CHECK_NEW_parser_nodes__TKwsuper(var450);
var = var450;
goto RET_LABEL;
} else {
}
var451 = 45;
{ /* Inline kernel#Int#== (var_accept_token,var451) */
var454 = var_accept_token == var451;
var452 = var454;
goto RET_LABEL453;
RET_LABEL453:(void)0;
}
if (var452){
var455 = NEW_parser_nodes__TKwself(&type_parser_nodes__TKwself);
((void (*)(val*, val*))(var455->class->vft[COLOR_lexer__TKwself__init_tk]))(var455, var_location) /* init_tk on <var455:TKwself>*/;
CHECK_NEW_parser_nodes__TKwself(var455);
var = var455;
goto RET_LABEL;
} else {
}
var456 = 46;
{ /* Inline kernel#Int#== (var_accept_token,var456) */
var459 = var_accept_token == var456;
var457 = var459;
goto RET_LABEL458;
RET_LABEL458:(void)0;
}
if (var457){
var460 = NEW_parser_nodes__TKwtrue(&type_parser_nodes__TKwtrue);
((void (*)(val*, val*))(var460->class->vft[COLOR_lexer__TKwtrue__init_tk]))(var460, var_location) /* init_tk on <var460:TKwtrue>*/;
CHECK_NEW_parser_nodes__TKwtrue(var460);
var = var460;
goto RET_LABEL;
} else {
}
var461 = 47;
{ /* Inline kernel#Int#== (var_accept_token,var461) */
var464 = var_accept_token == var461;
var462 = var464;
goto RET_LABEL463;
RET_LABEL463:(void)0;
}
if (var462){
var465 = NEW_parser_nodes__TKwfalse(&type_parser_nodes__TKwfalse);
((void (*)(val*, val*))(var465->class->vft[COLOR_lexer__TKwfalse__init_tk]))(var465, var_location) /* init_tk on <var465:TKwfalse>*/;
CHECK_NEW_parser_nodes__TKwfalse(var465);
var = var465;
goto RET_LABEL;
} else {
}
var466 = 48;
{ /* Inline kernel#Int#== (var_accept_token,var466) */
var469 = var_accept_token == var466;
var467 = var469;
goto RET_LABEL468;
RET_LABEL468:(void)0;
}
if (var467){
var470 = NEW_parser_nodes__TKwnull(&type_parser_nodes__TKwnull);
((void (*)(val*, val*))(var470->class->vft[COLOR_lexer__TKwnull__init_tk]))(var470, var_location) /* init_tk on <var470:TKwnull>*/;
CHECK_NEW_parser_nodes__TKwnull(var470);
var = var470;
goto RET_LABEL;
} else {
}
var471 = 49;
{ /* Inline kernel#Int#== (var_accept_token,var471) */
var474 = var_accept_token == var471;
var472 = var474;
goto RET_LABEL473;
RET_LABEL473:(void)0;
}
if (var472){
var475 = NEW_parser_nodes__TKwas(&type_parser_nodes__TKwas);
((void (*)(val*, val*))(var475->class->vft[COLOR_lexer__TKwas__init_tk]))(var475, var_location) /* init_tk on <var475:TKwas>*/;
CHECK_NEW_parser_nodes__TKwas(var475);
var = var475;
goto RET_LABEL;
} else {
}
var476 = 50;
{ /* Inline kernel#Int#== (var_accept_token,var476) */
var479 = var_accept_token == var476;
var477 = var479;
goto RET_LABEL478;
RET_LABEL478:(void)0;
}
if (var477){
var480 = NEW_parser_nodes__TKwnullable(&type_parser_nodes__TKwnullable);
((void (*)(val*, val*))(var480->class->vft[COLOR_lexer__TKwnullable__init_tk]))(var480, var_location) /* init_tk on <var480:TKwnullable>*/;
CHECK_NEW_parser_nodes__TKwnullable(var480);
var = var480;
goto RET_LABEL;
} else {
}
var481 = 51;
{ /* Inline kernel#Int#== (var_accept_token,var481) */
var484 = var_accept_token == var481;
var482 = var484;
goto RET_LABEL483;
RET_LABEL483:(void)0;
}
if (var482){
var485 = NEW_parser_nodes__TKwisset(&type_parser_nodes__TKwisset);
((void (*)(val*, val*))(var485->class->vft[COLOR_lexer__TKwisset__init_tk]))(var485, var_location) /* init_tk on <var485:TKwisset>*/;
CHECK_NEW_parser_nodes__TKwisset(var485);
var = var485;
goto RET_LABEL;
} else {
}
var486 = 52;
{ /* Inline kernel#Int#== (var_accept_token,var486) */
var489 = var_accept_token == var486;
var487 = var489;
goto RET_LABEL488;
RET_LABEL488:(void)0;
}
if (var487){
var490 = NEW_parser_nodes__TKwlabel(&type_parser_nodes__TKwlabel);
((void (*)(val*, val*))(var490->class->vft[COLOR_lexer__TKwlabel__init_tk]))(var490, var_location) /* init_tk on <var490:TKwlabel>*/;
CHECK_NEW_parser_nodes__TKwlabel(var490);
var = var490;
goto RET_LABEL;
} else {
}
var491 = 53;
{ /* Inline kernel#Int#== (var_accept_token,var491) */
var494 = var_accept_token == var491;
var492 = var494;
goto RET_LABEL493;
RET_LABEL493:(void)0;
}
if (var492){
var495 = NEW_parser_nodes__TKwdebug(&type_parser_nodes__TKwdebug);
((void (*)(val*, val*))(var495->class->vft[COLOR_lexer__TKwdebug__init_tk]))(var495, var_location) /* init_tk on <var495:TKwdebug>*/;
CHECK_NEW_parser_nodes__TKwdebug(var495);
var = var495;
goto RET_LABEL;
} else {
}
var496 = 54;
{ /* Inline kernel#Int#== (var_accept_token,var496) */
var499 = var_accept_token == var496;
var497 = var499;
goto RET_LABEL498;
RET_LABEL498:(void)0;
}
if (var497){
var500 = NEW_parser_nodes__TOpar(&type_parser_nodes__TOpar);
((void (*)(val*, val*))(var500->class->vft[COLOR_lexer__TOpar__init_tk]))(var500, var_location) /* init_tk on <var500:TOpar>*/;
CHECK_NEW_parser_nodes__TOpar(var500);
var = var500;
goto RET_LABEL;
} else {
}
var501 = 55;
{ /* Inline kernel#Int#== (var_accept_token,var501) */
var504 = var_accept_token == var501;
var502 = var504;
goto RET_LABEL503;
RET_LABEL503:(void)0;
}
if (var502){
var505 = NEW_parser_nodes__TCpar(&type_parser_nodes__TCpar);
((void (*)(val*, val*))(var505->class->vft[COLOR_lexer__TCpar__init_tk]))(var505, var_location) /* init_tk on <var505:TCpar>*/;
CHECK_NEW_parser_nodes__TCpar(var505);
var = var505;
goto RET_LABEL;
} else {
}
var506 = 56;
{ /* Inline kernel#Int#== (var_accept_token,var506) */
var509 = var_accept_token == var506;
var507 = var509;
goto RET_LABEL508;
RET_LABEL508:(void)0;
}
if (var507){
var510 = NEW_parser_nodes__TObra(&type_parser_nodes__TObra);
((void (*)(val*, val*))(var510->class->vft[COLOR_lexer__TObra__init_tk]))(var510, var_location) /* init_tk on <var510:TObra>*/;
CHECK_NEW_parser_nodes__TObra(var510);
var = var510;
goto RET_LABEL;
} else {
}
var511 = 57;
{ /* Inline kernel#Int#== (var_accept_token,var511) */
var514 = var_accept_token == var511;
var512 = var514;
goto RET_LABEL513;
RET_LABEL513:(void)0;
}
if (var512){
var515 = NEW_parser_nodes__TCbra(&type_parser_nodes__TCbra);
((void (*)(val*, val*))(var515->class->vft[COLOR_lexer__TCbra__init_tk]))(var515, var_location) /* init_tk on <var515:TCbra>*/;
CHECK_NEW_parser_nodes__TCbra(var515);
var = var515;
goto RET_LABEL;
} else {
}
var516 = 58;
{ /* Inline kernel#Int#== (var_accept_token,var516) */
var519 = var_accept_token == var516;
var517 = var519;
goto RET_LABEL518;
RET_LABEL518:(void)0;
}
if (var517){
var520 = NEW_parser_nodes__TComma(&type_parser_nodes__TComma);
((void (*)(val*, val*))(var520->class->vft[COLOR_lexer__TComma__init_tk]))(var520, var_location) /* init_tk on <var520:TComma>*/;
CHECK_NEW_parser_nodes__TComma(var520);
var = var520;
goto RET_LABEL;
} else {
}
var521 = 59;
{ /* Inline kernel#Int#== (var_accept_token,var521) */
var524 = var_accept_token == var521;
var522 = var524;
goto RET_LABEL523;
RET_LABEL523:(void)0;
}
if (var522){
var525 = NEW_parser_nodes__TColumn(&type_parser_nodes__TColumn);
((void (*)(val*, val*))(var525->class->vft[COLOR_lexer__TColumn__init_tk]))(var525, var_location) /* init_tk on <var525:TColumn>*/;
CHECK_NEW_parser_nodes__TColumn(var525);
var = var525;
goto RET_LABEL;
} else {
}
var526 = 60;
{ /* Inline kernel#Int#== (var_accept_token,var526) */
var529 = var_accept_token == var526;
var527 = var529;
goto RET_LABEL528;
RET_LABEL528:(void)0;
}
if (var527){
var530 = NEW_parser_nodes__TQuad(&type_parser_nodes__TQuad);
((void (*)(val*, val*))(var530->class->vft[COLOR_lexer__TQuad__init_tk]))(var530, var_location) /* init_tk on <var530:TQuad>*/;
CHECK_NEW_parser_nodes__TQuad(var530);
var = var530;
goto RET_LABEL;
} else {
}
var531 = 61;
{ /* Inline kernel#Int#== (var_accept_token,var531) */
var534 = var_accept_token == var531;
var532 = var534;
goto RET_LABEL533;
RET_LABEL533:(void)0;
}
if (var532){
var535 = NEW_parser_nodes__TAssign(&type_parser_nodes__TAssign);
((void (*)(val*, val*))(var535->class->vft[COLOR_lexer__TAssign__init_tk]))(var535, var_location) /* init_tk on <var535:TAssign>*/;
CHECK_NEW_parser_nodes__TAssign(var535);
var = var535;
goto RET_LABEL;
} else {
}
var536 = 62;
{ /* Inline kernel#Int#== (var_accept_token,var536) */
var539 = var_accept_token == var536;
var537 = var539;
goto RET_LABEL538;
RET_LABEL538:(void)0;
}
if (var537){
var540 = NEW_parser_nodes__TPluseq(&type_parser_nodes__TPluseq);
((void (*)(val*, val*))(var540->class->vft[COLOR_lexer__TPluseq__init_tk]))(var540, var_location) /* init_tk on <var540:TPluseq>*/;
CHECK_NEW_parser_nodes__TPluseq(var540);
var = var540;
goto RET_LABEL;
} else {
}
var541 = 63;
{ /* Inline kernel#Int#== (var_accept_token,var541) */
var544 = var_accept_token == var541;
var542 = var544;
goto RET_LABEL543;
RET_LABEL543:(void)0;
}
if (var542){
var545 = NEW_parser_nodes__TMinuseq(&type_parser_nodes__TMinuseq);
((void (*)(val*, val*))(var545->class->vft[COLOR_lexer__TMinuseq__init_tk]))(var545, var_location) /* init_tk on <var545:TMinuseq>*/;
CHECK_NEW_parser_nodes__TMinuseq(var545);
var = var545;
goto RET_LABEL;
} else {
}
var546 = 64;
{ /* Inline kernel#Int#== (var_accept_token,var546) */
var549 = var_accept_token == var546;
var547 = var549;
goto RET_LABEL548;
RET_LABEL548:(void)0;
}
if (var547){
var550 = NEW_parser_nodes__TDotdotdot(&type_parser_nodes__TDotdotdot);
((void (*)(val*, val*))(var550->class->vft[COLOR_lexer__TDotdotdot__init_tk]))(var550, var_location) /* init_tk on <var550:TDotdotdot>*/;
CHECK_NEW_parser_nodes__TDotdotdot(var550);
var = var550;
goto RET_LABEL;
} else {
}
var551 = 65;
{ /* Inline kernel#Int#== (var_accept_token,var551) */
var554 = var_accept_token == var551;
var552 = var554;
goto RET_LABEL553;
RET_LABEL553:(void)0;
}
if (var552){
var555 = NEW_parser_nodes__TDotdot(&type_parser_nodes__TDotdot);
((void (*)(val*, val*))(var555->class->vft[COLOR_lexer__TDotdot__init_tk]))(var555, var_location) /* init_tk on <var555:TDotdot>*/;
CHECK_NEW_parser_nodes__TDotdot(var555);
var = var555;
goto RET_LABEL;
} else {
}
var556 = 66;
{ /* Inline kernel#Int#== (var_accept_token,var556) */
var559 = var_accept_token == var556;
var557 = var559;
goto RET_LABEL558;
RET_LABEL558:(void)0;
}
if (var557){
var560 = NEW_parser_nodes__TDot(&type_parser_nodes__TDot);
((void (*)(val*, val*))(var560->class->vft[COLOR_lexer__TDot__init_tk]))(var560, var_location) /* init_tk on <var560:TDot>*/;
CHECK_NEW_parser_nodes__TDot(var560);
var = var560;
goto RET_LABEL;
} else {
}
var561 = 67;
{ /* Inline kernel#Int#== (var_accept_token,var561) */
var564 = var_accept_token == var561;
var562 = var564;
goto RET_LABEL563;
RET_LABEL563:(void)0;
}
if (var562){
var565 = NEW_parser_nodes__TPlus(&type_parser_nodes__TPlus);
((void (*)(val*, val*))(var565->class->vft[COLOR_lexer__TPlus__init_tk]))(var565, var_location) /* init_tk on <var565:TPlus>*/;
CHECK_NEW_parser_nodes__TPlus(var565);
var = var565;
goto RET_LABEL;
} else {
}
var566 = 68;
{ /* Inline kernel#Int#== (var_accept_token,var566) */
var569 = var_accept_token == var566;
var567 = var569;
goto RET_LABEL568;
RET_LABEL568:(void)0;
}
if (var567){
var570 = NEW_parser_nodes__TMinus(&type_parser_nodes__TMinus);
((void (*)(val*, val*))(var570->class->vft[COLOR_lexer__TMinus__init_tk]))(var570, var_location) /* init_tk on <var570:TMinus>*/;
CHECK_NEW_parser_nodes__TMinus(var570);
var = var570;
goto RET_LABEL;
} else {
}
var571 = 69;
{ /* Inline kernel#Int#== (var_accept_token,var571) */
var574 = var_accept_token == var571;
var572 = var574;
goto RET_LABEL573;
RET_LABEL573:(void)0;
}
if (var572){
var575 = NEW_parser_nodes__TStar(&type_parser_nodes__TStar);
((void (*)(val*, val*))(var575->class->vft[COLOR_lexer__TStar__init_tk]))(var575, var_location) /* init_tk on <var575:TStar>*/;
CHECK_NEW_parser_nodes__TStar(var575);
var = var575;
goto RET_LABEL;
} else {
}
var576 = 70;
{ /* Inline kernel#Int#== (var_accept_token,var576) */
var579 = var_accept_token == var576;
var577 = var579;
goto RET_LABEL578;
RET_LABEL578:(void)0;
}
if (var577){
var580 = NEW_parser_nodes__TSlash(&type_parser_nodes__TSlash);
((void (*)(val*, val*))(var580->class->vft[COLOR_lexer__TSlash__init_tk]))(var580, var_location) /* init_tk on <var580:TSlash>*/;
CHECK_NEW_parser_nodes__TSlash(var580);
var = var580;
goto RET_LABEL;
} else {
}
var581 = 71;
{ /* Inline kernel#Int#== (var_accept_token,var581) */
var584 = var_accept_token == var581;
var582 = var584;
goto RET_LABEL583;
RET_LABEL583:(void)0;
}
if (var582){
var585 = NEW_parser_nodes__TPercent(&type_parser_nodes__TPercent);
((void (*)(val*, val*))(var585->class->vft[COLOR_lexer__TPercent__init_tk]))(var585, var_location) /* init_tk on <var585:TPercent>*/;
CHECK_NEW_parser_nodes__TPercent(var585);
var = var585;
goto RET_LABEL;
} else {
}
var586 = 72;
{ /* Inline kernel#Int#== (var_accept_token,var586) */
var589 = var_accept_token == var586;
var587 = var589;
goto RET_LABEL588;
RET_LABEL588:(void)0;
}
if (var587){
var590 = NEW_parser_nodes__TEq(&type_parser_nodes__TEq);
((void (*)(val*, val*))(var590->class->vft[COLOR_lexer__TEq__init_tk]))(var590, var_location) /* init_tk on <var590:TEq>*/;
CHECK_NEW_parser_nodes__TEq(var590);
var = var590;
goto RET_LABEL;
} else {
}
var591 = 73;
{ /* Inline kernel#Int#== (var_accept_token,var591) */
var594 = var_accept_token == var591;
var592 = var594;
goto RET_LABEL593;
RET_LABEL593:(void)0;
}
if (var592){
var595 = NEW_parser_nodes__TNe(&type_parser_nodes__TNe);
((void (*)(val*, val*))(var595->class->vft[COLOR_lexer__TNe__init_tk]))(var595, var_location) /* init_tk on <var595:TNe>*/;
CHECK_NEW_parser_nodes__TNe(var595);
var = var595;
goto RET_LABEL;
} else {
}
var596 = 74;
{ /* Inline kernel#Int#== (var_accept_token,var596) */
var599 = var_accept_token == var596;
var597 = var599;
goto RET_LABEL598;
RET_LABEL598:(void)0;
}
if (var597){
var600 = NEW_parser_nodes__TLt(&type_parser_nodes__TLt);
((void (*)(val*, val*))(var600->class->vft[COLOR_lexer__TLt__init_tk]))(var600, var_location) /* init_tk on <var600:TLt>*/;
CHECK_NEW_parser_nodes__TLt(var600);
var = var600;
goto RET_LABEL;
} else {
}
var601 = 75;
{ /* Inline kernel#Int#== (var_accept_token,var601) */
var604 = var_accept_token == var601;
var602 = var604;
goto RET_LABEL603;
RET_LABEL603:(void)0;
}
if (var602){
var605 = NEW_parser_nodes__TLe(&type_parser_nodes__TLe);
((void (*)(val*, val*))(var605->class->vft[COLOR_lexer__TLe__init_tk]))(var605, var_location) /* init_tk on <var605:TLe>*/;
CHECK_NEW_parser_nodes__TLe(var605);
var = var605;
goto RET_LABEL;
} else {
}
var606 = 76;
{ /* Inline kernel#Int#== (var_accept_token,var606) */
var609 = var_accept_token == var606;
var607 = var609;
goto RET_LABEL608;
RET_LABEL608:(void)0;
}
if (var607){
var610 = NEW_parser_nodes__TLl(&type_parser_nodes__TLl);
((void (*)(val*, val*))(var610->class->vft[COLOR_lexer__TLl__init_tk]))(var610, var_location) /* init_tk on <var610:TLl>*/;
CHECK_NEW_parser_nodes__TLl(var610);
var = var610;
goto RET_LABEL;
} else {
}
var611 = 77;
{ /* Inline kernel#Int#== (var_accept_token,var611) */
var614 = var_accept_token == var611;
var612 = var614;
goto RET_LABEL613;
RET_LABEL613:(void)0;
}
if (var612){
var615 = NEW_parser_nodes__TGt(&type_parser_nodes__TGt);
((void (*)(val*, val*))(var615->class->vft[COLOR_lexer__TGt__init_tk]))(var615, var_location) /* init_tk on <var615:TGt>*/;
CHECK_NEW_parser_nodes__TGt(var615);
var = var615;
goto RET_LABEL;
} else {
}
var616 = 78;
{ /* Inline kernel#Int#== (var_accept_token,var616) */
var619 = var_accept_token == var616;
var617 = var619;
goto RET_LABEL618;
RET_LABEL618:(void)0;
}
if (var617){
var620 = NEW_parser_nodes__TGe(&type_parser_nodes__TGe);
((void (*)(val*, val*))(var620->class->vft[COLOR_lexer__TGe__init_tk]))(var620, var_location) /* init_tk on <var620:TGe>*/;
CHECK_NEW_parser_nodes__TGe(var620);
var = var620;
goto RET_LABEL;
} else {
}
var621 = 79;
{ /* Inline kernel#Int#== (var_accept_token,var621) */
var624 = var_accept_token == var621;
var622 = var624;
goto RET_LABEL623;
RET_LABEL623:(void)0;
}
if (var622){
var625 = NEW_parser_nodes__TGg(&type_parser_nodes__TGg);
((void (*)(val*, val*))(var625->class->vft[COLOR_lexer__TGg__init_tk]))(var625, var_location) /* init_tk on <var625:TGg>*/;
CHECK_NEW_parser_nodes__TGg(var625);
var = var625;
goto RET_LABEL;
} else {
}
var626 = 80;
{ /* Inline kernel#Int#== (var_accept_token,var626) */
var629 = var_accept_token == var626;
var627 = var629;
goto RET_LABEL628;
RET_LABEL628:(void)0;
}
if (var627){
var630 = NEW_parser_nodes__TStarship(&type_parser_nodes__TStarship);
((void (*)(val*, val*))(var630->class->vft[COLOR_lexer__TStarship__init_tk]))(var630, var_location) /* init_tk on <var630:TStarship>*/;
CHECK_NEW_parser_nodes__TStarship(var630);
var = var630;
goto RET_LABEL;
} else {
}
var631 = 81;
{ /* Inline kernel#Int#== (var_accept_token,var631) */
var634 = var_accept_token == var631;
var632 = var634;
goto RET_LABEL633;
RET_LABEL633:(void)0;
}
if (var632){
var635 = NEW_parser_nodes__TBang(&type_parser_nodes__TBang);
((void (*)(val*, val*))(var635->class->vft[COLOR_lexer__TBang__init_tk]))(var635, var_location) /* init_tk on <var635:TBang>*/;
CHECK_NEW_parser_nodes__TBang(var635);
var = var635;
goto RET_LABEL;
} else {
}
var636 = 82;
{ /* Inline kernel#Int#== (var_accept_token,var636) */
var639 = var_accept_token == var636;
var637 = var639;
goto RET_LABEL638;
RET_LABEL638:(void)0;
}
if (var637){
var640 = NEW_parser_nodes__TAt(&type_parser_nodes__TAt);
((void (*)(val*, val*))(var640->class->vft[COLOR_lexer__TAt__init_tk]))(var640, var_location) /* init_tk on <var640:TAt>*/;
CHECK_NEW_parser_nodes__TAt(var640);
var = var640;
goto RET_LABEL;
} else {
}
var641 = 83;
{ /* Inline kernel#Int#== (var_accept_token,var641) */
var644 = var_accept_token == var641;
var642 = var644;
goto RET_LABEL643;
RET_LABEL643:(void)0;
}
if (var642){
var645 = NEW_parser_nodes__TClassid(&type_parser_nodes__TClassid);
((void (*)(val*, val*))(var645->class->vft[COLOR_lexer__TClassid__init_tk]))(var645, var_location) /* init_tk on <var645:TClassid>*/;
CHECK_NEW_parser_nodes__TClassid(var645);
var = var645;
goto RET_LABEL;
} else {
}
var646 = 84;
{ /* Inline kernel#Int#== (var_accept_token,var646) */
var649 = var_accept_token == var646;
var647 = var649;
goto RET_LABEL648;
RET_LABEL648:(void)0;
}
if (var647){
var650 = NEW_parser_nodes__TId(&type_parser_nodes__TId);
((void (*)(val*, val*))(var650->class->vft[COLOR_lexer__TId__init_tk]))(var650, var_location) /* init_tk on <var650:TId>*/;
CHECK_NEW_parser_nodes__TId(var650);
var = var650;
goto RET_LABEL;
} else {
}
var651 = 85;
{ /* Inline kernel#Int#== (var_accept_token,var651) */
var654 = var_accept_token == var651;
var652 = var654;
goto RET_LABEL653;
RET_LABEL653:(void)0;
}
if (var652){
var655 = NEW_parser_nodes__TAttrid(&type_parser_nodes__TAttrid);
((void (*)(val*, val*))(var655->class->vft[COLOR_lexer__TAttrid__init_tk]))(var655, var_location) /* init_tk on <var655:TAttrid>*/;
CHECK_NEW_parser_nodes__TAttrid(var655);
var = var655;
goto RET_LABEL;
} else {
}
var656 = 86;
{ /* Inline kernel#Int#== (var_accept_token,var656) */
var659 = var_accept_token == var656;
var657 = var659;
goto RET_LABEL658;
RET_LABEL658:(void)0;
}
if (var657){
var660 = NEW_parser_nodes__TNumber(&type_parser_nodes__TNumber);
((void (*)(val*, val*))(var660->class->vft[COLOR_lexer__TNumber__init_tk]))(var660, var_location) /* init_tk on <var660:TNumber>*/;
CHECK_NEW_parser_nodes__TNumber(var660);
var = var660;
goto RET_LABEL;
} else {
}
var661 = 87;
{ /* Inline kernel#Int#== (var_accept_token,var661) */
var664 = var_accept_token == var661;
var662 = var664;
goto RET_LABEL663;
RET_LABEL663:(void)0;
}
if (var662){
var665 = NEW_parser_nodes__TFloat(&type_parser_nodes__TFloat);
((void (*)(val*, val*))(var665->class->vft[COLOR_lexer__TFloat__init_tk]))(var665, var_location) /* init_tk on <var665:TFloat>*/;
CHECK_NEW_parser_nodes__TFloat(var665);
var = var665;
goto RET_LABEL;
} else {
}
var666 = 88;
{ /* Inline kernel#Int#== (var_accept_token,var666) */
var669 = var_accept_token == var666;
var667 = var669;
goto RET_LABEL668;
RET_LABEL668:(void)0;
}
if (var667){
var670 = NEW_parser_nodes__TString(&type_parser_nodes__TString);
((void (*)(val*, val*))(var670->class->vft[COLOR_lexer__TString__init_tk]))(var670, var_location) /* init_tk on <var670:TString>*/;
CHECK_NEW_parser_nodes__TString(var670);
var = var670;
goto RET_LABEL;
} else {
}
var671 = 89;
{ /* Inline kernel#Int#== (var_accept_token,var671) */
var674 = var_accept_token == var671;
var672 = var674;
goto RET_LABEL673;
RET_LABEL673:(void)0;
}
if (var672){
var675 = NEW_parser_nodes__TStartString(&type_parser_nodes__TStartString);
((void (*)(val*, val*))(var675->class->vft[COLOR_lexer__TStartString__init_tk]))(var675, var_location) /* init_tk on <var675:TStartString>*/;
CHECK_NEW_parser_nodes__TStartString(var675);
var = var675;
goto RET_LABEL;
} else {
}
var676 = 90;
{ /* Inline kernel#Int#== (var_accept_token,var676) */
var679 = var_accept_token == var676;
var677 = var679;
goto RET_LABEL678;
RET_LABEL678:(void)0;
}
if (var677){
var680 = NEW_parser_nodes__TMidString(&type_parser_nodes__TMidString);
((void (*)(val*, val*))(var680->class->vft[COLOR_lexer__TMidString__init_tk]))(var680, var_location) /* init_tk on <var680:TMidString>*/;
CHECK_NEW_parser_nodes__TMidString(var680);
var = var680;
goto RET_LABEL;
} else {
}
var681 = 91;
{ /* Inline kernel#Int#== (var_accept_token,var681) */
var684 = var_accept_token == var681;
var682 = var684;
goto RET_LABEL683;
RET_LABEL683:(void)0;
}
if (var682){
var685 = NEW_parser_nodes__TEndString(&type_parser_nodes__TEndString);
((void (*)(val*, val*))(var685->class->vft[COLOR_lexer__TEndString__init_tk]))(var685, var_location) /* init_tk on <var685:TEndString>*/;
CHECK_NEW_parser_nodes__TEndString(var685);
var = var685;
goto RET_LABEL;
} else {
}
var686 = 92;
{ /* Inline kernel#Int#== (var_accept_token,var686) */
var689 = var_accept_token == var686;
var687 = var689;
goto RET_LABEL688;
RET_LABEL688:(void)0;
}
if (var687){
var690 = NEW_parser_nodes__TChar(&type_parser_nodes__TChar);
((void (*)(val*, val*))(var690->class->vft[COLOR_lexer__TChar__init_tk]))(var690, var_location) /* init_tk on <var690:TChar>*/;
CHECK_NEW_parser_nodes__TChar(var690);
var = var690;
goto RET_LABEL;
} else {
}
var691 = 93;
{ /* Inline kernel#Int#== (var_accept_token,var691) */
var694 = var_accept_token == var691;
var692 = var694;
goto RET_LABEL693;
RET_LABEL693:(void)0;
}
if (var692){
var695 = NEW_parser_nodes__TBadString(&type_parser_nodes__TBadString);
((void (*)(val*, val*))(var695->class->vft[COLOR_lexer__TBadString__init_tk]))(var695, var_location) /* init_tk on <var695:TBadString>*/;
CHECK_NEW_parser_nodes__TBadString(var695);
var = var695;
goto RET_LABEL;
} else {
}
var696 = 94;
{ /* Inline kernel#Int#== (var_accept_token,var696) */
var699 = var_accept_token == var696;
var697 = var699;
goto RET_LABEL698;
RET_LABEL698:(void)0;
}
if (var697){
var700 = NEW_parser_nodes__TBadChar(&type_parser_nodes__TBadChar);
((void (*)(val*, val*))(var700->class->vft[COLOR_lexer__TBadChar__init_tk]))(var700, var_location) /* init_tk on <var700:TBadChar>*/;
CHECK_NEW_parser_nodes__TBadChar(var700);
var = var700;
goto RET_LABEL;
} else {
}
var701 = 95;
{ /* Inline kernel#Int#== (var_accept_token,var701) */
var704 = var_accept_token == var701;
var702 = var704;
goto RET_LABEL703;
RET_LABEL703:(void)0;
}
if (var702){
var705 = NEW_parser_nodes__TExternCodeSegment(&type_parser_nodes__TExternCodeSegment);
((void (*)(val*, val*))(var705->class->vft[COLOR_lexer__TExternCodeSegment__init_tk]))(var705, var_location) /* init_tk on <var705:TExternCodeSegment>*/;
CHECK_NEW_parser_nodes__TExternCodeSegment(var705);
var = var705;
goto RET_LABEL;
} else {
}
} else {
self->attrs[COLOR_lexer__Lexer___stream_pos].l = var_sp; /* _stream_pos on <self:Lexer> */
var706 = NEW_location__Location(&type_location__Location);
var707 = self->attrs[COLOR_lexer__Lexer___file].val; /* _file on <self:Lexer> */
if (var707 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _file", "src/parser/lexer.nit", 1664);
exit(1);
}
var708 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var708) */
var711 = var_start_line + var708;
var709 = var711;
goto RET_LABEL710;
RET_LABEL710:(void)0;
}
var712 = 1;
{ /* Inline kernel#Int#+ (var_start_line,var712) */
var715 = var_start_line + var712;
var713 = var715;
goto RET_LABEL714;
RET_LABEL714:(void)0;
}
var716 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var716) */
var719 = var_start_pos + var716;
var717 = var719;
goto RET_LABEL718;
RET_LABEL718:(void)0;
}
var720 = 1;
{ /* Inline kernel#Int#+ (var_start_pos,var720) */
var723 = var_start_pos + var720;
var721 = var723;
goto RET_LABEL722;
RET_LABEL722:(void)0;
}
((void (*)(val*, val*, long, long, long, long))(var706->class->vft[COLOR_location__Location__init]))(var706, var707, var709, var713, var717, var721) /* init on <var706:Location>*/;
CHECK_NEW_location__Location(var706);
var_location724 = var706;
{ /* Inline kernel#Int#> (var_sp,var_start_stream_pos) */
/* Covariant cast for argument 0 (i) <var_start_stream_pos:Int> isa OTHER */
/* <var_start_stream_pos:Int> isa OTHER */
var727 = 1; /* easy <var_start_stream_pos:Int> isa OTHER*/
if (!var727) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Cast failed", "lib/standard/kernel.nit", 259);
exit(1);
}
var730 = var_sp > var_start_stream_pos;
var725 = var730;
goto RET_LABEL726;
RET_LABEL726:(void)0;
}
if (var725){
{ /* Inline kernel#Int#- (var_sp,var_start_stream_pos) */
var733 = var_sp - var_start_stream_pos;
var731 = var733;
goto RET_LABEL732;
RET_LABEL732:(void)0;
}
var734 = ((val* (*)(val*, long, long))(var_string->class->vft[COLOR_string__AbstractString__substring]))(var_string, var_start_stream_pos, var731) /* substring on <var_string:String>*/;
var_text = var734;
var735 = NEW_parser_nodes__ALexerError(&type_parser_nodes__ALexerError);
var736 = NEW_array__Array(&type_array__Arraykernel__Object);
var737 = 3;
((void (*)(val*, long))(var736->class->vft[COLOR_array__Array__with_capacity]))(var736, var737) /* with_capacity on <var736:Array[Object]>*/;
CHECK_NEW_array__Array(var736);
var_ = var736;
if (varonce) {
var738 = varonce;
} else {
var739 = "Syntax error: unknown token ";
var740 = 28;
var741 = string__NativeString__to_s_with_length(var739, var740);
var738 = var741;
varonce = var738;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var738) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_text) /* add on <var_:Array[Object]>*/;
if (varonce742) {
var743 = varonce742;
} else {
var744 = ".";
var745 = 1;
var746 = string__NativeString__to_s_with_length(var744, var745);
var743 = var746;
varonce742 = var743;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var743) /* add on <var_:Array[Object]>*/;
var747 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
((void (*)(val*, val*, val*, val*))(var735->class->vft[COLOR_lexer__ALexerError__init_lexer_error]))(var735, var747, var_location724, var_text) /* init_lexer_error on <var735:ALexerError>*/;
CHECK_NEW_parser_nodes__ALexerError(var735);
var_token = var735;
var = var_token;
goto RET_LABEL;
} else {
var748 = NEW_parser_nodes__EOF(&type_parser_nodes__EOF);
((void (*)(val*, val*))(var748->class->vft[COLOR_lexer__EOF__init_tk]))(var748, var_location724) /* init_tk on <var748:EOF>*/;
CHECK_NEW_parser_nodes__EOF(var748);
var_token749 = var748;
var = var_token749;
goto RET_LABEL;
}
}
}
CONTINUE_label750: (void)0;
}
BREAK_label750: (void)0;
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
