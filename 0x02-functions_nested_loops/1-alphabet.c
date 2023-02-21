#include "stdio.h"
#include "main.h"

/**
 * Prints lowercase alphabet followed by a new line
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
