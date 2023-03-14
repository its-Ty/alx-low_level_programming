#include "main.h"

/**
 *  _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns the length of the matching prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int c1 = 0;
	int c2;
	int prefix_length = 0;

	while (s[c1] != '\0')
	{
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2])
			{
				prefix_length++;
				break;
			}
			if (accept[c2 + 1] == '\0' && s[c1] != accept[c2])
			{
				return (prefix_length);
			}
		}
		c1++;
	}
	return (prefix_length);
}
