#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: substring to locate
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int c1;
	int c2;

	for (c1 = 0; haystack[c1] != '\0'; c1++)
	{
		for (c2 = 0; needle[c2] != '\0'; c2++)
		{
			if (haystack[c1 + c2] != needle[c2])
			{
				break;
			}
		}

		if (needle[c2] == '\0')
		{
			return (haystack + c1);
		}
	}
	return (NULL);
}
