#include <stdio.h>

/**
 *main - print alphabet lowercase reverse
 *Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
