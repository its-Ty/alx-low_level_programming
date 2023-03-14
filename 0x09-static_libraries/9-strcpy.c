#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest
 * @dest: copy src to this buffer
 * @src: copy this to dest
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
