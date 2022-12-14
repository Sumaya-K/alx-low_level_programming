#include <stdio.h>

/**
 * main - prints single digits until 10
 *
 * Return: Always 0
 */

int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);
}
