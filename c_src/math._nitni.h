#include <nit_common.h>
#include "standard___math._sep.h"
#ifndef MATH_NITNI_H
#define MATH_NITNI_H

#ifndef OBJECT_TYPE
#define OBJECT_TYPE
struct s_Object{
		struct nitni_ref ref; /* real ref struct, must be first */
};
typedef struct s_Object *Object;
#define Object_incr_ref( x ) nitni_global_ref_incr( (struct nitni_ref*)(x) )
#define Object_decr_ref( x ) nitni_global_ref_decr( (struct nitni_ref*)(x) )
#endif
#include "math_nit.h"

/* out/indirect function for math::Int::rand */
val_t Int_rand___out( val_t recv );

/* out/indirect function for math::Int::bin_and */
val_t Int_bin_and___out( val_t recv, val_t i );

/* out/indirect function for math::Int::bin_or */
val_t Int_bin_or___out( val_t recv, val_t i );

/* out/indirect function for math::Int::bin_xor */
val_t Int_bin_xor___out( val_t recv, val_t i );

/* out/indirect function for math::Float::sqrt */
val_t Float_sqrt___out( val_t recv );

/* out/indirect function for math::Float::cos */
val_t Float_cos___out( val_t recv );

/* out/indirect function for math::Float::sin */
val_t Float_sin___out( val_t recv );

/* out/indirect function for math::Float::tan */
val_t Float_tan___out( val_t recv );

/* out/indirect function for math::Float::acos */
val_t Float_acos___out( val_t recv );

/* out/indirect function for math::Float::asin */
val_t Float_asin___out( val_t recv );

/* out/indirect function for math::Float::atan */
val_t Float_atan___out( val_t recv );

/* out/indirect function for math::Float::pow */
val_t Float_pow___out( val_t recv, val_t e );

/* out/indirect function for math::Float::log */
val_t Float_log___out( val_t recv );

/* out/indirect function for math::Float::exp */
val_t Float_exp___out( val_t recv );

/* out/indirect function for math::Float::rand */
val_t Float_rand___out( val_t recv );

/* out/indirect function for math::Float::hypot_with */
val_t Float_hypot_with___out( val_t recv, val_t b );

/* out/indirect function for math::Object::atan2 */
val_t Object_atan2___out( val_t recv, val_t x, val_t y );

/* out/indirect function for math::Object::pi */
val_t Object_pi___out( val_t recv );

/* out/indirect function for math::Object::srand_from */
void Object_srand_from___out( val_t recv, val_t x );

/* out/indirect function for math::Object::srand */
void Object_srand___out( val_t recv );
#endif
