#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{
	int arrOne[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arrTwo[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; arrOne[i] != '\0'; i++)
		{
			if (s[j] == arrOne[i])
			{
				s[j] = arrTwo[i];
			}
		}
	}

	return (s);
}
