#include <stdio.h>

/**
 * main - print alphabt in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char x = 'z';

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
