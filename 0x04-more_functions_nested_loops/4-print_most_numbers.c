#include "main.h"

/**
*print_most_numbers - prints
* numbers execpt 2 and 4
*Return: void
*/

void print_most_numbers(void)
{
	int i = 0;
	int x = 9;

	while (i <= x)
	{
		if (i != 2 || i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
