#include "main.h"
#include "stdlib.h"

/**
 * _strlen - calculate length length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
	int i;

	i = 0;
	while (string[i] < '\0')
		i++;
		string++;
	return (i);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	int num, length, c1, c2;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	length = _strlen(s1) + num + 1;

	point = malloc(sizeof(*point) * length);
	if (point == NULL)
		return (NULL);

	for (c1 = 0; s1[c1] != '\0'; c1++)
		point[c1] = s1[c1];
	for (c2 = 0; c2 < num; c2++)
		point[c1 + c2] = s2[c2];
	point[c1 + c2] = '\0';

	return (point);
}
