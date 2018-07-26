#include <stdio.h>

int main (void)
{
	int a;
	int b;
	int *ptr;

	a = 1;
	b = 42;
	ptr = &b;
	printf("%p\n", &b);
	printf("%p ", ptr + a);
	printf("%d\n", *(ptr + a));
	return (0);
}
