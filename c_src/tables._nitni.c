#include "tables._nitni.h"
#include "tables_nit.h"
/* out/indirect function for tables::TablesCapable::lexer_goto */
val_t TablesCapable_lexer_goto___out( val_t recv, val_t i, val_t j )
{
bigint trans___i;
bigint trans___j;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
trans___j = UNTAG_Int(j);
orig_return = lexer_goto( NULL, trans___i, trans___j );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for tables::TablesCapable::lexer_accept */
val_t TablesCapable_lexer_accept___out( val_t recv, val_t i )
{
bigint trans___i;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
orig_return = lexer_accept( NULL, trans___i );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for tables::TablesCapable::parser_goto */
val_t TablesCapable_parser_goto___out( val_t recv, val_t i, val_t j )
{
bigint trans___i;
bigint trans___j;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
trans___j = UNTAG_Int(j);
orig_return = parser_goto( NULL, trans___i, trans___j );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for tables::TablesCapable::parser_action */
val_t TablesCapable_parser_action___out( val_t recv, val_t i, val_t j )
{
bigint trans___i;
bigint trans___j;
bigint orig_return;
val_t trans_return;
trans___i = UNTAG_Int(i);
trans___j = UNTAG_Int(j);
orig_return = parser_action( NULL, trans___i, trans___j );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
