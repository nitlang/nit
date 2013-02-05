import test_ffi_c_types

fun foo( b : B ) : A `{
	printf( "%d %d\n", b->super.x, b->w );
	return (struct s_a*)b;
`}

foo( new B ).p
