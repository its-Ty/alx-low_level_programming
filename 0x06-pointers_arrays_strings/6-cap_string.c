#include "main.h"

/**
 *cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((i == 0 || s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == '\n' || s[i-1] == '\"' || s[i-1] == ',' || s[i-1] == '.' || s[i-1] == '!' || 
		s[i-1] == '?' || s[i-1] == ';' || s[i-1] == '(' || s[i-1] == ')' || s[i-1] == '{' || s[i-1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 'a' - 'A';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 'a' - 'A';
		}
	}

	return (s);
}
