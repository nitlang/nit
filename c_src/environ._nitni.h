#include <nit_common.h>
#include "standard___environ._sep.h"
#ifndef ENVIRON_NITNI_H
#define ENVIRON_NITNI_H

#include "environ_nit.h"

/* out/indirect function for environ::NativeString::get_environ */
val_t NativeString_get_environ___out( val_t recv );

/* out/indirect function for environ::NativeString::setenv */
void NativeString_setenv___out( val_t recv, val_t v );
#endif
