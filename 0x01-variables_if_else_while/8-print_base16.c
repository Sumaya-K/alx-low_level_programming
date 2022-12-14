#include <stdio.h>

/**
 * main - prints single digits until 10
 *
 * Return: Always 0
 */

int main(void)
{
	int x = 0;
	char c = 'a';

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
