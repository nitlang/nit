#include "math._nitni.h"
#include "math_nit.h"
/* out/indirect function for math::Int::rand */
val_t Int_rand___out( val_t recv )
{
bigint recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNTAG_Int(recv);
return___nitni = kernel_Int_Int_rand_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::sqrt */
val_t Float_sqrt___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_sqrt_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::cos */
val_t Float_cos___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_cos_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::sin */
val_t Float_sin___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_sin_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::tan */
val_t Float_tan___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_tan_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::acos */
val_t Float_acos___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_acos_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::asin */
val_t Float_asin___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_asin_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::atan */
val_t Float_atan___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_atan_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::pow */
val_t Float_pow___out( val_t recv, val_t e )
{
float recv___nitni;
float e___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
e___nitni = UNBOX_Float(e);
return___nitni = kernel_Float_Float_pow_1( recv___nitni, e___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::log */
val_t Float_log___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_log_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::exp */
val_t Float_exp___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_exp_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::rand */
val_t Float_rand___out( val_t recv )
{
float recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
return___nitni = kernel_Float_Float_rand_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Float::hypot_with */
val_t Float_hypot_with___out( val_t recv, val_t b )
{
float recv___nitni;
float b___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = UNBOX_Float(recv);
b___nitni = UNBOX_Float(b);
return___nitni = hypotf( recv___nitni, b___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Object::atan2 */
val_t Object_atan2___out( val_t recv, val_t x, val_t y )
{
Object recv___nitni;
float x___nitni;
float y___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_Object ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
x___nitni = UNBOX_Float(x);
y___nitni = UNBOX_Float(y);
return___nitni = kernel_Any_Any_atan2_2( recv___nitni, x___nitni, y___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Object::pi */
val_t Object_pi___out( val_t recv )
{
Object recv___nitni;
float return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_Object ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
return___nitni = kernel_Any_Any_pi_0( recv___nitni );
return___nit = BOX_Float(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for math::Object::srand_from */
void Object_srand_from___out( val_t recv, val_t x )
{
Object recv___nitni;
bigint x___nitni;
recv___nitni = malloc( sizeof( struct s_Object ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
x___nitni = UNTAG_Int(x);
kernel_Any_Any_srand_from_1( recv___nitni, x___nitni );
nitni_local_ref_clean(  );
}
/* out/indirect function for math::Object::srand */
void Object_srand___out( val_t recv )
{
Object recv___nitni;
recv___nitni = malloc( sizeof( struct s_Object ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
kernel_Any_Any_srand_0( recv___nitni );
nitni_local_ref_clean(  );
}
