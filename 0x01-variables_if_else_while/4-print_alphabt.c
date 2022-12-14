#include <stdio.h>
/**
 * main - print alphabets except
 * * q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
