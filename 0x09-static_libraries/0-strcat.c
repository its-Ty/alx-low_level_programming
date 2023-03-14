#include "main.h"

/**
 * _strcat - join two strings
 * @dest: string to be added to
 * @src: string to add to other string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int c1 = 0;
	int c2 = 0;

	while (dest[c1] != '\0')
		c1++;

	while (src[c2] != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';

	return (dest);
}
