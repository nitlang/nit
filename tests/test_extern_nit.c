#include "test_extern_nit.h"

long int foo(void *s) { return 10; }
long int bar(void *s, long int i) { return i*2; }
void *baz(void *s, void *a) { return a; }
