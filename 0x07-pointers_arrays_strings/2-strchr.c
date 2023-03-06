#include "main.h"

/**
 * _strchr - finds char values in a string and returns a pointer
 * @s: string to search
 * @c: character
 * Return: pointer to the character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
