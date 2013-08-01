#include "exec._nitni.h"
#include "exec_nit.h"
/* out/indirect function for exec::Process::basic_exec_execute */
val_t Process_basic_exec_execute___out( val_t recv, val_t p, val_t av, val_t ac, val_t pf )
{
char * trans___p;
char * trans___av;
void* orig_return;
val_t trans_return;
trans___p = UNBOX_NativeString(p);
trans___av = UNBOX_NativeString(av);
orig_return = exec_Process_Process_basic_exec_execute_4( NULL, trans___p, trans___av, UNTAG_Int(ac), UNTAG_Int(pf) );
trans_return = BOX_NativeProcess(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeString::system */
val_t NativeString_system___out( val_t recv )
{
char * trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeString(recv);
orig_return = string_NativeString_NativeString_system_0( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::id */
val_t NativeProcess_id___out( val_t recv )
{
void* trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeProcess(recv);
orig_return = exec_NativeProcess_NativeProcess_id_0( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::is_finished */
val_t NativeProcess_is_finished___out( val_t recv )
{
void* trans_recv;
int orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeProcess(recv);
orig_return = exec_NativeProcess_NativeProcess_is_finished_0( trans_recv );
trans_return = TAG_Bool(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::status */
val_t NativeProcess_status___out( val_t recv )
{
void* trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeProcess(recv);
orig_return = exec_NativeProcess_NativeProcess_status_0( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::wait */
void NativeProcess_wait___out( val_t recv )
{
void* trans_recv;
trans_recv = UNBOX_NativeProcess(recv);
exec_NativeProcess_NativeProcess_wait_0( trans_recv );
nitni_local_ref_clean(  );
}
/* out/indirect function for exec::NativeProcess::in_fd */
val_t NativeProcess_in_fd___out( val_t recv )
{
void* trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeProcess(recv);
orig_return = exec_NativeProcess_NativeProcess_in_fd_0( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::out_fd */
val_t NativeProcess_out_fd___out( val_t recv )
{
void* trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeProcess(recv);
orig_return = exec_NativeProcess_NativeProcess_out_fd_0( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
/* out/indirect function for exec::NativeProcess::err_fd */
val_t NativeProcess_err_fd___out( val_t recv )
{
void* trans_recv;
bigint orig_return;
val_t trans_return;
trans_recv = UNBOX_NativeProcess(recv);
orig_return = exec_NativeProcess_NativeProcess_err_fd_0( trans_recv );
trans_return = TAG_Int(orig_return);
nitni_local_ref_clean(  );
return trans_return;
}
