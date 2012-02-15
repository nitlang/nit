#include "tables._nitni.h"
#include "../src/parser//tables_nit.h"
/* out/indirect function for tables::TablesCapable::lexer_goto */
val_t TablesCapable_lexer_goto___out( val_t recv, val_t i, val_t j )
{
TablesCapable recv___nitni;
bigint i___nitni;
bigint j___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
j___nitni = UNTAG_Int(j);
return___nitni = lexer_goto( recv___nitni, i___nitni, j___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
/* out/indirect function for tables::TablesCapable::lexer_accept */
val_t TablesCapable_lexer_accept___out( val_t recv, val_t i )
{
TablesCapable recv___nitni;
bigint i___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
return___nitni = lexer_accept( recv___nitni, i___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
/* out/indirect function for tables::TablesCapable::parser_goto */
val_t TablesCapable_parser_goto___out( val_t recv, val_t i, val_t j )
{
TablesCapable recv___nitni;
bigint i___nitni;
bigint j___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
j___nitni = UNTAG_Int(j);
return___nitni = parser_goto( recv___nitni, i___nitni, j___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
/* out/indirect function for tables::TablesCapable::parser_action */
val_t TablesCapable_parser_action___out( val_t recv, val_t i, val_t j )
{
TablesCapable recv___nitni;
bigint i___nitni;
bigint j___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
j___nitni = UNTAG_Int(j);
return___nitni = parser_action( recv___nitni, i___nitni, j___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
