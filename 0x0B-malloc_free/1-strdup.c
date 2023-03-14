#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * _strdup - returns pointer to a new space in memory,
 * containing a copy of the string as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in memory
 */

char *_strdup(char *str)
{
	char *duplicates;
	int c1;
	int c2;
	int string_len;

	c1 = 0;
	string_len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + c1))
	{
		string_len++;
		c1++;
	}
	string_len++;

	duplicates = malloc(sizeof(char) * string_len);

	if (duplicates == NULL)
	{
		return (NULL);
	}

	c2 = 0;

	while (c2 < string_len)
	{
		*(duplicates + c2) = *(str + c2);
		c2++;
	}

	return (duplicates);
}
