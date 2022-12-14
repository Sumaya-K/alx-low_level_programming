#include <stdio.h>

/**
 * main - Print lower and uppercase
 * alphabet letters
 *
 * Return: Always 0
 */

int main(void)
{
	char l = 'a';
	char u = 'A';

	for (l = 'a';  l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
