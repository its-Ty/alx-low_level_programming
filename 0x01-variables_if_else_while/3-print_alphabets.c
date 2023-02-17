#include <stdio.h>

/**
 *main - print alphabet lowercase then uppercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	char letterLower = 'a';
	char letterUpper = 'A';

	while (letterLower <= 'z')
	{
		putchar(letterLower);
		letterLower++;
	}

	while (letterUpper <= 'Z')
	{
		putchar(letterUpper);
		letterUpper++;
	}

	putchar('\n');

	return (0);
}
