#include "exec._nitni.h"
#include "exec_nit.h"
/* out/indirect function for exec::Process::basic_exec_execute */
val_t Process_basic_exec_execute___out( val_t recv, val_t p, val_t av, val_t ac, val_t pf )
{
Process recv___nitni;
char * p___nitni;
char * av___nitni;
bigint ac___nitni;
bigint pf___nitni;
NativeProcess return___nitni;
val_t return___nit;
recv___nitni = malloc( sizeof( struct s_Process ) );
recv___nitni->ref.val = NIT_NULL;
recv___nitni->ref.count = 0;
nitni_local_ref_add( (struct nitni_ref *)recv___nitni );
recv___nitni->ref.val = recv;
p___nitni = UNBOX_NativeString(p);
av___nitni = UNBOX_NativeString(av);
ac___nitni = UNTAG_Int(ac);
pf___nitni = UNTAG_Int(pf);
return___nitni = exec_Process_Process_basic_exec_execute_4( recv___nitni, p___nitni, av___nitni, ac___nitni, pf___nitni );
return___nit = BOX_NativeProcess(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for exec::NativeString::system */
val_t NativeString_system___out( val_t recv )
{
char * recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeString(recv);
return___nitni = string_NativeString_NativeString_system_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for exec::NativeProcess::id */
val_t NativeProcess_id___out( val_t recv )
{
NativeProcess recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeProcess(recv);
return___nitni = exec_NativeProcess_NativeProcess_id_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for exec::NativeProcess::is_finished */
val_t NativeProcess_is_finished___out( val_t recv )
{
NativeProcess recv___nitni;
int return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeProcess(recv);
return___nitni = exec_NativeProcess_NativeProcess_is_finished_0( recv___nitni );
return___nit = TAG_Bool(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for exec::NativeProcess::status */
val_t NativeProcess_status___out( val_t recv )
{
NativeProcess recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeProcess(recv);
return___nitni = exec_NativeProcess_NativeProcess_status_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for exec::NativeProcess::wait */
void NativeProcess_wait___out( val_t recv )
{
NativeProcess recv___nitni;
recv___nitni = UNBOX_NativeProcess(recv);
exec_NativeProcess_NativeProcess_wait_0( recv___nitni );
nitni_local_ref_clean(  );
}
/* out/indirect function for exec::NativeProcess::in_fd */
val_t NativeProcess_in_fd___out( val_t recv )
{
NativeProcess recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeProcess(recv);
return___nitni = exec_NativeProcess_NativeProcess_in_fd_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for exec::NativeProcess::out_fd */
val_t NativeProcess_out_fd___out( val_t recv )
{
NativeProcess recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeProcess(recv);
return___nitni = exec_NativeProcess_NativeProcess_out_fd_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
/* out/indirect function for exec::NativeProcess::err_fd */
val_t NativeProcess_err_fd___out( val_t recv )
{
NativeProcess recv___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni = UNBOX_NativeProcess(recv);
return___nitni = exec_NativeProcess_NativeProcess_err_fd_0( recv___nitni );
return___nit = TAG_Int(return___nitni);
nitni_local_ref_clean(  );
return return___nit;
}
