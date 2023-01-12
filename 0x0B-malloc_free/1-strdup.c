#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/*
 * _strdup - return pointers to a newly allocated space in mem
 * @str: variables of string type
 * Return: charachers of the string
 */

char *_strdup(char *str);
{
	char *c;
	unsigned int i, n;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++);
	i++;
	c = malloc(sizeof(char) * i);
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}


