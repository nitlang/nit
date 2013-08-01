#include "math._nitni.h"
#include "math_nit.h"
/* out/indirect function for math::Int::rand */
val_t Int_rand___out( val_t recv )
{
bigint orig_return;
val_t trans_return;
orig_return = kernel_Int_Int_rand_0( UNTAG_Int(recv) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Int::bin_and */
val_t Int_bin_and___out( val_t recv, val_t i )
{
bigint orig_return;
val_t trans_return;
orig_return = kernel_Int_Int_binand_0( UNTAG_Int(recv), UNTAG_Int(i) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Int::bin_or */
val_t Int_bin_or___out( val_t recv, val_t i )
{
bigint orig_return;
val_t trans_return;
orig_return = kernel_Int_Int_binor_0( UNTAG_Int(recv), UNTAG_Int(i) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Int::bin_xor */
val_t Int_bin_xor___out( val_t recv, val_t i )
{
bigint orig_return;
val_t trans_return;
orig_return = kernel_Int_Int_binxor_0( UNTAG_Int(recv), UNTAG_Int(i) );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::sqrt */
val_t Float_sqrt___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_sqrt_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::cos */
val_t Float_cos___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_cos_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::sin */
val_t Float_sin___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_sin_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::tan */
val_t Float_tan___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_tan_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::acos */
val_t Float_acos___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_acos_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::asin */
val_t Float_asin___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_asin_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::atan */
val_t Float_atan___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_atan_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::pow */
val_t Float_pow___out( val_t recv, val_t e )
{
float trans_recv;
float trans___e;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
trans___e = UNBOX_Float(e);
orig_return = kernel_Float_Float_pow_1( trans_recv, trans___e );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::log */
val_t Float_log___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_log_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::exp */
val_t Float_exp___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_exp_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::rand */
val_t Float_rand___out( val_t recv )
{
float trans_recv;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
orig_return = kernel_Float_Float_rand_0( trans_recv );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Float::hypot_with */
val_t Float_hypot_with___out( val_t recv, val_t b )
{
float trans_recv;
float trans___b;
float orig_return;
val_t trans_return;
trans_recv = UNBOX_Float(recv);
trans___b = UNBOX_Float(b);
orig_return = hypotf( trans_recv, trans___b );
trans_return = BOX_Float(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for math::Object::atan2 */
val_t Object_atan2___out( val_t recv, val_t x, val_t y )
{
float trans___x;
float trans___y;
float orig_return;
val_t trans_return;
trans___x = UNBOX_Float(x);
trans___y = UNBOX_Float(y);
orig_return = kernel_Any_Any_atan2_2( NULL, trans___x, trans___y );
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
kernel_Any_Any_srand_from_1( NULL, UNTAG_Int(x) );
nitni_local_ref_clean(  );
}
/* out/indirect function for math::Object::srand */
void Object_srand___out( val_t recv )
{
kernel_Any_Any_srand_0( NULL );
nitni_local_ref_clean(  );
}
