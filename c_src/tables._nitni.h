#include <nit_common.h>
#include "parser___tables._sep.h"
#ifndef TABLES_NITNI_H
#define TABLES_NITNI_H

#ifndef TABLESCAPABLE_TYPE
#define TABLESCAPABLE_TYPE
typedef struct s_TablesCapable{
	val_t v;
} TablesCapable;
#endif

#include "../src/parser//tables_nit.h"

/* out/indirect function for tables::TablesCapable::lexer_goto */
val_t TablesCapable_lexer_goto___out( val_t recv, val_t i, val_t j );

/* out/indirect function for tables::TablesCapable::lexer_accept */
val_t TablesCapable_lexer_accept___out( val_t recv, val_t i );

/* out/indirect function for tables::TablesCapable::parser_goto */
val_t TablesCapable_parser_goto___out( val_t recv, val_t i, val_t j );

/* out/indirect function for tables::TablesCapable::parser_action */
val_t TablesCapable_parser_action___out( val_t recv, val_t i, val_t j );
#endif
