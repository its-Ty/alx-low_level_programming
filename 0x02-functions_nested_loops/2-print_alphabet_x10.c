#include "main.h"

/**
 *print_alphabet_x10 - Prints lowercase alphabet ten times followed by a new line
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	for( count = 1; count < 11; count++)
	{
		for( letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
