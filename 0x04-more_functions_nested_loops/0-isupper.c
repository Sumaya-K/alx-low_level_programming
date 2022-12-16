#include "main.h"
/**
 * _isupper - this function test if c is uppercase
 * @c: cherachter to check
 *
 * Return: Always 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

