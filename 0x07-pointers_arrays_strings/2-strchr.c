#include "main.h"

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int counter = 0;

	while (s[counter] != '\0' && s[counter] != c)
	{
		counter++;
	}

	if (s[counter] == c)
	{
		return (&s[counter]);
	}
	else
	{
		return (NULL);
	}
}
