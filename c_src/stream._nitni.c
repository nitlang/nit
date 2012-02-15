#include "stream._nitni.h"
#include "stream_nit.h"
/* out/indirect function for stream::FDStream::native_close */
val_t FDStream_native_close___out( val_t recv, val_t i )
{
FDStream recv___nitni;
bigint i___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
return___nitni = stream_FDStream_FDStream_native_close_1( recv___nitni, i___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
/* out/indirect function for stream::FDStream::native_read_char */
val_t FDStream_native_read_char___out( val_t recv, val_t i )
{
FDStream recv___nitni;
bigint i___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
return___nitni = stream_FDStream_FDStream_native_read_char_1( recv___nitni, i___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
/* out/indirect function for stream::FDStream::native_read */
val_t FDStream_native_read___out( val_t recv, val_t i, val_t buf, val_t len )
{
FDStream recv___nitni;
bigint i___nitni;
char * buf___nitni;
bigint len___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
buf___nitni = UNBOX_NativeString(buf);
len___nitni = UNTAG_Int(len);
return___nitni = stream_FDStream_FDStream_native_read_3( recv___nitni, i___nitni, buf___nitni, len___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
/* out/indirect function for stream::FDStream::native_write */
val_t FDStream_native_write___out( val_t recv, val_t i, val_t buf, val_t len )
{
FDStream recv___nitni;
bigint i___nitni;
char * buf___nitni;
bigint len___nitni;
bigint return___nitni;
val_t return___nit;
recv___nitni.v = recv;
i___nitni = UNTAG_Int(i);
buf___nitni = UNBOX_NativeString(buf);
len___nitni = UNTAG_Int(len);
return___nitni = stream_FDStream_FDStream_native_write_3( recv___nitni, i___nitni, buf___nitni, len___nitni );
return___nit = TAG_Int(return___nitni);
return return___nit;
}
