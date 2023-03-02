#include "main.h"

/**
 * _strncpy - copies source into destination string,
 * @dest: copy source to here
 * @src: the source being
 * @n: n bytes to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
