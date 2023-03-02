#include "main.h"

/**
 * _strncat - joins 2 strings
 * @dest: String to add to
 * @src: String that will be added to first string
 * @n: append n number of bytes
 * Return: joined string
 */

char* _strncat(char *dest, const char *src, int n)
{
	char *pointer;

	*pointer = dest;

	while (*pointer != '\0')
	{
		pointer++;
	}

	int count = 0;
	while (count < n && *src != '\0')
	{
		*pointer = *src;
		pointer++;
		src++;
		count++;
	}
	*pointer = '\0';

	return dest;
}
