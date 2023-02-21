#include "main.h"

/**
 *print_alphabet_x10 - Prints lowercase alphabet ten times followed by a new line
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	for( count = 1; count < 11; count++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
