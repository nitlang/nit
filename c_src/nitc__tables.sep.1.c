#include "nitc__tables.sep.0.h"
/* method tables$TablesCapable$lexer_goto for (self: TablesCapable, Int, Int): Int */
long nitc___nitc__TablesCapable___lexer_goto(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = lexer_goto(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method tables$TablesCapable$lexer_accept for (self: TablesCapable, Int): Int */
long nitc___nitc__TablesCapable___lexer_accept(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = lexer_accept(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method tables$TablesCapable$parser_goto for (self: TablesCapable, Int, Int): Int */
long nitc___nitc__TablesCapable___parser_goto(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = parser_goto(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method tables$TablesCapable$parser_action for (self: TablesCapable, Int, Int): Int */
long nitc___nitc__TablesCapable___parser_action(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int for extern */;
var1 = parser_action(self, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
