#include "main.h"

/**
 * _memset - fill memory with a constant value
 * @s: point to location in memory
 * @b: constant value
 * @n: number of bytes
 * Return: memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 0; counter < n; counter++)
		{
			s[counter] = b;
		}
	}

	return (s);
}
