#include <stdio.h>

/**
 * main - Derefrencing pointers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Value of 'n': %d\n", n);
	printf("Adress of 'n': %p\n", &n);
	printf("Value of p is %p\n", p);
	*p = 402;
	printf("Value of 'n': %d\n", n);
	return (0);
}
