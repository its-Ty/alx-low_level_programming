#include "main.h"

/**
 * print_line - print the character "_" to draw a line
 * @n: number of times the '_' is used
 */

void print_line(int n)
{
	int counter;

	for (counter = n; counter > 0; counter--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
