#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Values that describe the result of the string comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
