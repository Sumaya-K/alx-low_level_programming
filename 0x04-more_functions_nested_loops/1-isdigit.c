#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: the char to check
 *
 * Return: 1 is a digit and 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
