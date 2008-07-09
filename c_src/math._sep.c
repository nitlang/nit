#include "math._sep.h"
val_t math___Int___rand(val_t  self) {
  struct trace_t trace = {NULL, "math::Int::rand (bin/../lib/standard//math.nit:19,2--49)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return TAG_Int(kernel_Int_Int_rand_0(UNTAG_Int( self)));
}
val_t math___Float___sqrt(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::sqrt (bin/../lib/standard//math.nit:23,2--55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_sqrt_0(UNBOX_Float( self)));
}
val_t math___Float___cos(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::cos (bin/../lib/standard//math.nit:24,2--53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_cos_0(UNBOX_Float( self)));
}
val_t math___Float___sin(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::sin (bin/../lib/standard//math.nit:25,2--53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_sin_0(UNBOX_Float( self)));
}
val_t math___Float___tan(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::tan (bin/../lib/standard//math.nit:26,2--53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_tan_0(UNBOX_Float( self)));
}
val_t math___Float___acos(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::acos (bin/../lib/standard//math.nit:27,2--55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_acos_0(UNBOX_Float( self)));
}
val_t math___Float___asin(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::asin (bin/../lib/standard//math.nit:28,2--55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_asin_0(UNBOX_Float( self)));
}
val_t math___Float___atan(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::atan (bin/../lib/standard//math.nit:29,2--55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_atan_0(UNBOX_Float( self)));
}
val_t math___Float___pow(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "math::Float::pow (bin/../lib/standard//math.nit:31,2--63)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_pow_1(UNBOX_Float( self), UNBOX_Float( param0)));
}
val_t math___Float___log(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::log (bin/../lib/standard//math.nit:32,2--53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_log_0(UNBOX_Float( self)));
}
val_t math___Float___exp(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::exp (bin/../lib/standard//math.nit:33,2--53)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_exp_0(UNBOX_Float( self)));
}
val_t math___Float___rand(val_t  self) {
  struct trace_t trace = {NULL, "math::Float::rand (bin/../lib/standard//math.nit:35,2--55)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Float_Float_rand_0(UNBOX_Float( self)));
}
val_t math___Object___atan2(val_t  self, val_t  param0, val_t  param1) {
  struct trace_t trace = {NULL, "math::Object::atan2 (bin/../lib/standard//math.nit:38,1--72)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Any_Any_atan2_2( self, UNBOX_Float( param0), UNBOX_Float( param1)));
}
val_t math___Object___pi(val_t  self) {
  struct trace_t trace = {NULL, "math::Object::pi (bin/../lib/standard//math.nit:39,1--46)"};
  trace.prev = tracehead; tracehead = &trace;
  tracehead = trace.prev;
  return BOX_Float(kernel_Any_Any_pi_0( self));
}
void math___Object___srand_from(val_t  self, val_t  param0) {
  struct trace_t trace = {NULL, "math::Object::srand_from (bin/../lib/standard//math.nit:40,1--63)"};
  trace.prev = tracehead; tracehead = &trace;
  kernel_Any_Any_srand_from_1( self, UNTAG_Int( param0));
  tracehead = trace.prev;
  return;
}
void math___Object___srand(val_t  self) {
  struct trace_t trace = {NULL, "math::Object::srand (bin/../lib/standard//math.nit:41,1--45)"};
  trace.prev = tracehead; tracehead = &trace;
  kernel_Any_Any_srand_0( self);
  tracehead = trace.prev;
  return;
}
