in "C header" `{
	struct s_a{
		int x, y;
		};
	struct s_b{
		struct s_a super;
		int w, h;
		};
`}

extern class A in "C" `{struct s_a*`}
	new `{
		struct s_a* v = malloc(sizeof(struct s_a));
		v->x = 1;
		v->y = 2;
		return v;
	`}
	fun p `{
		printf( "A< %d %d >\n", self->x, self->y );
	`}
end

extern class B in "C" `{struct s_b*`}
	super A
	new `{
		struct s_b* v = malloc(sizeof(struct s_b));
		v->super.x = 3;
		v->super.y = 4;
		v->w = 5;
		v->h = 6;
		return v;
	`}
	redef fun p import super `{
		printf( "B< " );
		B_p___super(self);
		printf( "   %d %d >\n", self->w, self->h );
	`}
end

extern class C
	super A
	new `{
		struct s_a* v = malloc(sizeof(struct s_a));
		v->x = 11;
		v->y = 22;
		return v;
	`}
	redef fun p `{
		printf( "C< %d %d >\n", self->x, self->y );
	`}
end

(new A).p
(new B).p
(new C).p

