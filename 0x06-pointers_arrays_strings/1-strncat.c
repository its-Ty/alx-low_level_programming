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

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
