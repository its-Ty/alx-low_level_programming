#include "main.h"

/**
 *_strcat - combines two strings
 *@dest: string one
 *@src: string two
 *Return: Changed dest
 */

char* _strcat(char *dest, const char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';
	return dest;
}
