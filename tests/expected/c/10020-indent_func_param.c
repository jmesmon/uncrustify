int foo(int a,
		int b,
		int c);

WARN_UNUSED_RESULT
int foo(int a,
		int b,
		int c);

static
int foo(int a,
		int b,
		int c);

__attribute__((__unused__))
int foo(int a,
		int b,
		int c);

__attribute__((__unused__))
int
foo(int a,
		int b,
		int c);

WARN_UNUSED_RESULT
int foo(a,
		b,
		c)
{
	return 0;
}

WARN_UNUSED_RESULT
int
bar(x a,
		y b,
		z c)
{
	baz(a
			b,
			c
			);
	return 0;
}
