#include "main.h"

/**
 * _strcat - join two strings
 * @dest: string to be added to
 * @src: string to add to other string
 * Return: concatenated string
 */

char *_strcat(char *dest, const char *src)
{
	char *pointer = dest;

	while (*pointer != '\0')
	{
		pointer++;
	}

	while (*src != '\0')
	{
		*pointer = *src;
		pointer++;
		src++;
	}
	*pointer = '\0';

	return dest;
}
