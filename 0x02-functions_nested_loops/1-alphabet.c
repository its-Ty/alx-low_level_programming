#include "stdio.h"

/**
 * main - print _putchar, followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
