#include <stdio.h>

/**
 * main - storing the adress of variable into a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Adress of 'n': %p\n", &n);
	printf("Value of p is %p\n", p);
	return (0);
}
