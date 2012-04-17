#include <nit_common.h>
#include "parser___tables._sep.h"
#ifndef TABLES_NITNI_H
#define TABLES_NITNI_H

#ifndef TABLESCAPABLE_TYPE
#define TABLESCAPABLE_TYPE
struct s_TablesCapable{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_TablesCapable *TablesCapable;
#define TablesCapable_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define TablesCapable_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#include "tables_nit.h"

/* out/indirect function for tables::TablesCapable::lexer_goto */
val_t TablesCapable_lexer_goto___out( val_t recv, val_t i, val_t j );

/* out/indirect function for tables::TablesCapable::lexer_accept */
val_t TablesCapable_lexer_accept___out( val_t recv, val_t i );

/* out/indirect function for tables::TablesCapable::parser_goto */
val_t TablesCapable_parser_goto___out( val_t recv, val_t i, val_t j );

/* out/indirect function for tables::TablesCapable::parser_action */
val_t TablesCapable_parser_action___out( val_t recv, val_t i, val_t j );
#endif
