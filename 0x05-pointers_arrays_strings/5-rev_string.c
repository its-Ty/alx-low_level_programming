#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int countOne = 0;
	int countTwo = (_strlen(s) - 1);
	char temp;

	while (countOne < countTwo)
	{
		temp = s[countOne];
		s[countOne] = s[countTwo];
		s[countTwo] = temp;
		countOne++;
		countTwo--;
	}
}
