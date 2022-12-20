#include <stdio.h>

/**
 * main - Derefrencing pointers; with char and int
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	n = 98;
	p = &n;
	c = 'H';
	pp = &c;

	printf("Value of 'n': %d\n", n);
	printf("Adress of 'n': %p\n", &n);
	printf("Value of p is %p\n", p);
	printf("Value of c '%c': %d\n", c, c);
	printf("Adress of 'c': %p\n", &c);
	printf("Value of pp is %p\n", pp);
	*p = 402;
	*pp = 'o';
	printf("Value of 'n': %d\n", n);
	printf("Value of 'c': %d\n", c);
	return (0);
}
