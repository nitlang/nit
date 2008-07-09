#ifndef vararg__sep
#define vararg__sep
#include "genericity._sep.h"
#include <nit_common.h>
extern const int SFT_vararg[];
#define COLOR_vararg___MMSignature____vararg_rank SFT_vararg[0]
#define COLOR_vararg___MMSignature___vararg_rank SFT_vararg[1]
#define COLOR_vararg___MMSignature___vararg_rank__eq SFT_vararg[2]
#define COLOR_vararg___MMSignature___has_vararg SFT_vararg[3]
#define COLOR_SUPER_vararg___MMSignature___adaptation_to SFT_vararg[4]
#define COLOR_SUPER_vararg___MMSignature___init SFT_vararg[5]
#define ATTR_vararg___MMSignature____vararg_rank(recv) ATTR(recv, COLOR_vararg___MMSignature____vararg_rank)
typedef val_t (* vararg___MMSignature___vararg_rank_t)(val_t  self);
val_t vararg___MMSignature___vararg_rank(val_t  self);
typedef void (* vararg___MMSignature___vararg_rank__eq_t)(val_t  self, val_t  param0);
void vararg___MMSignature___vararg_rank__eq(val_t  self, val_t  param0);
typedef val_t (* vararg___MMSignature___has_vararg_t)(val_t  self);
val_t vararg___MMSignature___has_vararg(val_t  self);
typedef val_t (* vararg___MMSignature___adaptation_to_t)(val_t  self, val_t  param0);
val_t vararg___MMSignature___adaptation_to(val_t  self, val_t  param0);
typedef void (* vararg___MMSignature___init_t)(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
void vararg___MMSignature___init(val_t  self, val_t  param0, val_t  param1, val_t  param2, int* init_table);
val_t NEW_vararg___MMSignature___init(val_t  param0, val_t  param1, val_t  param2);
#endif
