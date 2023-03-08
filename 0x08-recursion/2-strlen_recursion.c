#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to get length of
 */

int _strlen_recursion(char *s)
{
	int count;

        count = 0;

	if (*s == '\0')
	{
		return 0;
	}

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}