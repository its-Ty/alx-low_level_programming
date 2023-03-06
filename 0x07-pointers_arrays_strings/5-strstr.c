#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: string to search
 * @needle: substring to locate
 * Return: Returns a pointer to the first occurrence of the substring
 * or null, if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}

	}
	return ('\0');
}
