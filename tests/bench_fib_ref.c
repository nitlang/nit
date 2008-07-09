#include <stdio.h>

int fib(int c)
{
	if (c <= 0)
		return 0;
	else if (c < 2)
		return 1;
	else
		return fib(c-1) + fib(c-2);
}

int main(int argc, char ** argv)
{
	printf("%d\n", fib(atoi(argv[1])));
	return 0;
}
