#ifndef math__sep
#define math__sep
#include "kernel._sep.h"
#include <nit_common.h>
#include <math_nit.h>
extern const int SFT_math[];
#define COLOR_math___Int___rand SFT_math[0]
#define COLOR_math___Float___sqrt SFT_math[1]
#define COLOR_math___Float___cos SFT_math[2]
#define COLOR_math___Float___sin SFT_math[3]
#define COLOR_math___Float___tan SFT_math[4]
#define COLOR_math___Float___acos SFT_math[5]
#define COLOR_math___Float___asin SFT_math[6]
#define COLOR_math___Float___atan SFT_math[7]
#define COLOR_math___Float___pow SFT_math[8]
#define COLOR_math___Float___log SFT_math[9]
#define COLOR_math___Float___exp SFT_math[10]
#define COLOR_math___Float___rand SFT_math[11]
#define COLOR_math___Object___atan2 SFT_math[12]
#define COLOR_math___Object___pi SFT_math[13]
#define COLOR_math___Object___srand_from SFT_math[14]
#define COLOR_math___Object___srand SFT_math[15]
typedef val_t (* math___Int___rand_t)(val_t  self);
val_t math___Int___rand(val_t  self);
typedef val_t (* math___Float___sqrt_t)(val_t  self);
val_t math___Float___sqrt(val_t  self);
typedef val_t (* math___Float___cos_t)(val_t  self);
val_t math___Float___cos(val_t  self);
typedef val_t (* math___Float___sin_t)(val_t  self);
val_t math___Float___sin(val_t  self);
typedef val_t (* math___Float___tan_t)(val_t  self);
val_t math___Float___tan(val_t  self);
typedef val_t (* math___Float___acos_t)(val_t  self);
val_t math___Float___acos(val_t  self);
typedef val_t (* math___Float___asin_t)(val_t  self);
val_t math___Float___asin(val_t  self);
typedef val_t (* math___Float___atan_t)(val_t  self);
val_t math___Float___atan(val_t  self);
typedef val_t (* math___Float___pow_t)(val_t  self, val_t  param0);
val_t math___Float___pow(val_t  self, val_t  param0);
typedef val_t (* math___Float___log_t)(val_t  self);
val_t math___Float___log(val_t  self);
typedef val_t (* math___Float___exp_t)(val_t  self);
val_t math___Float___exp(val_t  self);
typedef val_t (* math___Float___rand_t)(val_t  self);
val_t math___Float___rand(val_t  self);
typedef val_t (* math___Object___atan2_t)(val_t  self, val_t  param0, val_t  param1);
val_t math___Object___atan2(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* math___Object___pi_t)(val_t  self);
val_t math___Object___pi(val_t  self);
typedef void (* math___Object___srand_from_t)(val_t  self, val_t  param0);
void math___Object___srand_from(val_t  self, val_t  param0);
typedef void (* math___Object___srand_t)(val_t  self);
void math___Object___srand(val_t  self);
#endif
