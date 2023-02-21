#include "main.h"

/**
 *print_alphabet_x10 - Prints lowercase alphabet ten times followed by a new line
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;
	
	for ( i = 1; i < 11; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
