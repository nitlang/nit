#include "math._nitni.h"
#include "math_nit.h"
/* out/indirect function for math::Int::rand */
val_t Int_rand___out( val_t recv )
{
bigint trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNTAG_Int(recv);
orig_return = kernel_Int_Int_rand_0( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Int::bin_and */
val_t Int_bin_and___out( val_t recv, val_t i )
{
bigint trans_recv;
bigint trans___i;
bigint orig_return;
val_t trans_return;
trans_recv = UNTAG_Int(recv);
trans___i = UNTAG_Int(i);
orig_return = kernel_Int_Int_binand_0( trans_recv, trans___i );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Int::bin_or */
val_t Int_bin_or___out( val_t recv, val_t i )
{
bigint trans_recv;
bigint trans___i;
bigint orig_return;
val_t trans_return;
trans_recv = UNTAG_Int(recv);
trans___i = UNTAG_Int(i);
orig_return = kernel_Int_Int_binor_0( trans_recv, trans___i );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Int::bin_xor */
val_t Int_bin_xor___out( val_t recv, val_t i )
{
bigint trans_recv;
bigint trans___i;
bigint orig_return;
val_t trans_return;
trans_recv = UNTAG_Int(recv);
trans___i = UNTAG_Int(i);
orig_return = kernel_Int_Int_binxor_0( trans_recv, trans___i );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::sqrt */
val_t Float_sqrt___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_sqrt_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::cos */
val_t Float_cos___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_cos_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::sin */
val_t Float_sin___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_sin_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::tan */
val_t Float_tan___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_tan_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::acos */
val_t Float_acos___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_acos_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::asin */
val_t Float_asin___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_asin_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::atan */
val_t Float_atan___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_atan_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::pow */
val_t Float_pow___out( val_t recv, val_t e )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_pow_1( UNBOX_Float(recv), UNBOX_Float(e) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::log */
val_t Float_log___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_log_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::exp */
val_t Float_exp___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_exp_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::rand */
val_t Float_rand___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Float_Float_rand_0( UNBOX_Float(recv) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::hypot_with */
val_t Float_hypot_with___out( val_t recv, val_t b )
{
float orig_return;
val_t trans_return;
orig_return = hypotf( UNBOX_Float(recv), UNBOX_Float(b) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Object::atan2 */
val_t Object_atan2___out( val_t recv, val_t x, val_t y )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Any_Any_atan2_2( NULL, UNBOX_Float(x), UNBOX_Float(y) );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Object::pi */
val_t Object_pi___out( val_t recv )
{
float orig_return;
val_t trans_return;
orig_return = kernel_Any_Any_pi_0( NULL );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Object::srand_from */
void Object_srand_from___out( val_t recv, val_t x )
{
bigint trans___x;
trans___x = UNTAG_Int(x);
kernel_Any_Any_srand_from_1( NULL, trans___x );
nitni_local_ref_clean(  );
}
/* out/indirect function for math::Object::srand */
void Object_srand___out( val_t recv )
{
kernel_Any_Any_srand_0( NULL );
nitni_local_ref_clean(  );
}
