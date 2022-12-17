#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;
	int x = 9;

	while (i <= x)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
