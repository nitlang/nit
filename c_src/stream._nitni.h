#include <nit_common.h>
#include "standard___stream._sep.h"
#ifndef STREAM_NITNI_H
#define STREAM_NITNI_H

#ifndef FDSTREAM_TYPE
#define FDSTREAM_TYPE
typedef struct s_FDStream{
	val_t v;
} FDStream;
#endif

#include ".././../lib/standard//stream_nit.h"

/* out/indirect function for stream::FDStream::native_close */
val_t FDStream_native_close___out( val_t recv, val_t i );

/* out/indirect function for stream::FDStream::native_read_char */
val_t FDStream_native_read_char___out( val_t recv, val_t i );

/* out/indirect function for stream::FDStream::native_read */
val_t FDStream_native_read___out( val_t recv, val_t i, val_t buf, val_t len );

/* out/indirect function for stream::FDStream::native_write */
val_t FDStream_native_write___out( val_t recv, val_t i, val_t buf, val_t len );
#endif
