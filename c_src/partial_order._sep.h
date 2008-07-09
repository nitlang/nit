#ifndef partial_order__sep
#define partial_order__sep
#include "standard._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_PartialOrder[];

extern const classtable_elt_t VFT_PartialOrderElement[];
extern const int SFT_partial_order[];
#define ID_PartialOrder SFT_partial_order[0]
#define COLOR_PartialOrder SFT_partial_order[1]
#define COLOR_partial_order___PartialOrder____elements SFT_partial_order[2]
#define COLOR_partial_order___PartialOrder____elements_list SFT_partial_order[3]
#define COLOR_partial_order___PartialOrder____roots SFT_partial_order[4]
#define INIT_TABLE_POS_PartialOrder SFT_partial_order[5]
#define COLOR_partial_order___PartialOrder___roots SFT_partial_order[6]
#define COLOR_partial_order___PartialOrder_____bra SFT_partial_order[7]
#define COLOR_partial_order___PartialOrder___to_dot SFT_partial_order[8]
#define COLOR_partial_order___PartialOrder___to_dot_header SFT_partial_order[9]
#define COLOR_partial_order___PartialOrder___to_dot_node SFT_partial_order[10]
#define COLOR_partial_order___PartialOrder___to_dot_edge SFT_partial_order[11]
#define COLOR_partial_order___PartialOrder___select_smallests SFT_partial_order[12]
#define COLOR_partial_order___PartialOrder___add SFT_partial_order[13]
#define COLOR_partial_order___PartialOrder___has_all SFT_partial_order[14]
#define COLOR_partial_order___PartialOrder___new_poe SFT_partial_order[15]
#define COLOR_partial_order___PartialOrder___add_to_smallests SFT_partial_order[16]
#define COLOR_partial_order___PartialOrder___compute_smallers_for SFT_partial_order[17]
#define COLOR_partial_order___PartialOrder___init SFT_partial_order[18]
#define ID_PartialOrderElement SFT_partial_order[19]
#define COLOR_PartialOrderElement SFT_partial_order[20]
#define COLOR_partial_order___PartialOrderElement____order SFT_partial_order[21]
#define COLOR_partial_order___PartialOrderElement____value SFT_partial_order[22]
#define COLOR_partial_order___PartialOrderElement____rank SFT_partial_order[23]
#define COLOR_partial_order___PartialOrderElement____direct_greaters SFT_partial_order[24]
#define COLOR_partial_order___PartialOrderElement____direct_smallers SFT_partial_order[25]
#define COLOR_partial_order___PartialOrderElement____greaters SFT_partial_order[26]
#define COLOR_partial_order___PartialOrderElement____greaters_and_self_cache SFT_partial_order[27]
#define COLOR_partial_order___PartialOrderElement____smallers_last_length SFT_partial_order[28]
#define COLOR_partial_order___PartialOrderElement____smallers_cache SFT_partial_order[29]
#define COLOR_partial_order___PartialOrderElement____linear_extension_cache SFT_partial_order[30]
#define COLOR_partial_order___PartialOrderElement____reverse_linear_extension_cache SFT_partial_order[31]
#define INIT_TABLE_POS_PartialOrderElement SFT_partial_order[32]
#define COLOR_partial_order___PartialOrderElement___order SFT_partial_order[33]
#define COLOR_partial_order___PartialOrderElement___value SFT_partial_order[34]
#define COLOR_partial_order___PartialOrderElement___rank SFT_partial_order[35]
#define COLOR_partial_order___PartialOrderElement___direct_greaters SFT_partial_order[36]
#define COLOR_partial_order___PartialOrderElement___direct_smallers SFT_partial_order[37]
#define COLOR_partial_order___PartialOrderElement___greaters SFT_partial_order[38]
#define COLOR_partial_order___PartialOrderElement___greaters_and_self SFT_partial_order[39]
#define COLOR_partial_order___PartialOrderElement___smallers SFT_partial_order[40]
#define COLOR_partial_order___PartialOrderElement___linear_extension SFT_partial_order[41]
#define COLOR_partial_order___PartialOrderElement___reverse_linear_extension SFT_partial_order[42]
#define COLOR_partial_order___PartialOrderElement_____l SFT_partial_order[43]
#define COLOR_partial_order___PartialOrderElement_____leq SFT_partial_order[44]
#define COLOR_partial_order___PartialOrderElement_____g SFT_partial_order[45]
#define COLOR_partial_order___PartialOrderElement_____geq SFT_partial_order[46]
#define COLOR_partial_order___PartialOrderElement___register_direct_smallers SFT_partial_order[47]
#define COLOR_partial_order___PartialOrderElement___init SFT_partial_order[48]
#define ATTR_partial_order___PartialOrder____elements(recv) ATTR(recv, COLOR_partial_order___PartialOrder____elements)
#define ATTR_partial_order___PartialOrder____elements_list(recv) ATTR(recv, COLOR_partial_order___PartialOrder____elements_list)
#define ATTR_partial_order___PartialOrder____roots(recv) ATTR(recv, COLOR_partial_order___PartialOrder____roots)
typedef val_t (* partial_order___PartialOrder___roots_t)(val_t  self);
val_t partial_order___PartialOrder___roots(val_t  self);
typedef val_t (* partial_order___PartialOrder___is_empty_t)(val_t  self);
val_t partial_order___PartialOrder___is_empty(val_t  self);
typedef val_t (* partial_order___PartialOrder___length_t)(val_t  self);
val_t partial_order___PartialOrder___length(val_t  self);
typedef val_t (* partial_order___PartialOrder___first_t)(val_t  self);
val_t partial_order___PartialOrder___first(val_t  self);
typedef val_t (* partial_order___PartialOrder___has_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrder___has(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrder___has_only_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrder___has_only(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrder___count_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrder___count(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrder___iterator_t)(val_t  self);
val_t partial_order___PartialOrder___iterator(val_t  self);
typedef val_t (* partial_order___PartialOrder_____bra_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrder_____bra(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrder___to_dot_t)(val_t  self);
val_t partial_order___PartialOrder___to_dot(val_t  self);
typedef val_t (* partial_order___PartialOrder___to_dot_header_t)(val_t  self);
val_t partial_order___PartialOrder___to_dot_header(val_t  self);
typedef val_t (* partial_order___PartialOrder___to_dot_node_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrder___to_dot_node(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrder___to_dot_edge_t)(val_t  self, val_t  param0, val_t  param1);
val_t partial_order___PartialOrder___to_dot_edge(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* partial_order___PartialOrder___select_smallests_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrder___select_smallests(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrder___add_t)(val_t  self, val_t  param0, val_t  param1);
val_t partial_order___PartialOrder___add(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* partial_order___PartialOrder___has_all_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrder___has_all(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrder___new_poe_t)(val_t  self, val_t  param0, val_t  param1);
val_t partial_order___PartialOrder___new_poe(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* partial_order___PartialOrder___add_to_smallests_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2);
val_t partial_order___PartialOrder___add_to_smallests(val_t  self, val_t  param0, val_t  param1, val_t  param2);
typedef void (* partial_order___PartialOrder___compute_smallers_for_t)(val_t  self, val_t  param0, val_t  param1);
void partial_order___PartialOrder___compute_smallers_for(val_t  self, val_t  param0, val_t  param1);
typedef void (* partial_order___PartialOrder___init_t)(val_t  self, int* init_table);
void partial_order___PartialOrder___init(val_t  self, int* init_table);
val_t NEW_partial_order___PartialOrder___init();
#define ATTR_partial_order___PartialOrderElement____order(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____order)
typedef val_t (* partial_order___PartialOrderElement___order_t)(val_t  self);
val_t partial_order___PartialOrderElement___order(val_t  self);
#define ATTR_partial_order___PartialOrderElement____value(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____value)
typedef val_t (* partial_order___PartialOrderElement___value_t)(val_t  self);
val_t partial_order___PartialOrderElement___value(val_t  self);
#define ATTR_partial_order___PartialOrderElement____rank(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____rank)
typedef val_t (* partial_order___PartialOrderElement___rank_t)(val_t  self);
val_t partial_order___PartialOrderElement___rank(val_t  self);
#define ATTR_partial_order___PartialOrderElement____direct_greaters(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____direct_greaters)
typedef val_t (* partial_order___PartialOrderElement___direct_greaters_t)(val_t  self);
val_t partial_order___PartialOrderElement___direct_greaters(val_t  self);
#define ATTR_partial_order___PartialOrderElement____direct_smallers(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____direct_smallers)
typedef val_t (* partial_order___PartialOrderElement___direct_smallers_t)(val_t  self);
val_t partial_order___PartialOrderElement___direct_smallers(val_t  self);
#define ATTR_partial_order___PartialOrderElement____greaters(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____greaters)
typedef val_t (* partial_order___PartialOrderElement___greaters_t)(val_t  self);
val_t partial_order___PartialOrderElement___greaters(val_t  self);
#define ATTR_partial_order___PartialOrderElement____greaters_and_self_cache(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____greaters_and_self_cache)
typedef val_t (* partial_order___PartialOrderElement___greaters_and_self_t)(val_t  self);
val_t partial_order___PartialOrderElement___greaters_and_self(val_t  self);
#define ATTR_partial_order___PartialOrderElement____smallers_last_length(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____smallers_last_length)
#define ATTR_partial_order___PartialOrderElement____smallers_cache(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____smallers_cache)
typedef val_t (* partial_order___PartialOrderElement___smallers_t)(val_t  self);
val_t partial_order___PartialOrderElement___smallers(val_t  self);
#define ATTR_partial_order___PartialOrderElement____linear_extension_cache(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____linear_extension_cache)
typedef val_t (* partial_order___PartialOrderElement___linear_extension_t)(val_t  self);
val_t partial_order___PartialOrderElement___linear_extension(val_t  self);
#define ATTR_partial_order___PartialOrderElement____reverse_linear_extension_cache(recv) ATTR(recv, COLOR_partial_order___PartialOrderElement____reverse_linear_extension_cache)
typedef val_t (* partial_order___PartialOrderElement___reverse_linear_extension_t)(val_t  self);
val_t partial_order___PartialOrderElement___reverse_linear_extension(val_t  self);
typedef val_t (* partial_order___PartialOrderElement_____l_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrderElement_____l(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrderElement_____leq_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrderElement_____leq(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrderElement_____g_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrderElement_____g(val_t  self, val_t  param0);
typedef val_t (* partial_order___PartialOrderElement_____geq_t)(val_t  self, val_t  param0);
val_t partial_order___PartialOrderElement_____geq(val_t  self, val_t  param0);
typedef void (* partial_order___PartialOrderElement___register_direct_smallers_t)(val_t  self, val_t  param0);
void partial_order___PartialOrderElement___register_direct_smallers(val_t  self, val_t  param0);
typedef void (* partial_order___PartialOrderElement___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void partial_order___PartialOrderElement___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_partial_order___PartialOrderElement___init(val_t  param0, val_t  param1, val_t  param2);
#endif
