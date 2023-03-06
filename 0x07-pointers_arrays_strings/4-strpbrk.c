#include "main.h"

/**
 * _strpbrk - finds string
 * @s: string to search through
 * @accept: matches
 * Return: returns a pointer to a matching byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int c1;
	int c2;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2])
			{
				return (s + c1);
			}
		}
	}
	return (0);
}
