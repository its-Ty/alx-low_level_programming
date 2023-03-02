#include "main.h"

/**
 * _strncat - join n bytes to dest string
 * @dest: string to add to
 * @src: string to add to dest
 * @n: append n number of bytes
 * Return: joined string
 */

char* _strncat(char *dest, const char *src, int n)
{
	int c1 = 0;
	int c2 = 0;

	while (dest[c1] != '\0')
	{
		c1++;
	}

	while (src[c2] != src[n])
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[i] = '\0';

	return (dest);
}
