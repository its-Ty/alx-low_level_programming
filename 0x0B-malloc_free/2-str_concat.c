#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * str_concat - join two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to joined string
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
	int length1, length2, c1, c2;

	length1 = 0, length2 = 0, c1 = 0, c2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + c1))
	{
		length1++, c1++;
	}
	while (*(s2 + c2))
	{
		length2++, c2++;
	}
	length2++;

	join = malloc(sizeof(char) * (length1 + length2));
	if (join == NULL)
	{
		return (NULL);
	}

	c1 = 0, c2 = 0;
	while (c1 < length1)
	{
		*(join + c1) = *(s1 + c1);
		c1++;
	}
	while (c2 < length2)
	{
		*(join + c1) = *(s2 + c2);
		c1++, c2++;
	}

	return (join);
}
