#include "main.h"

/**
 *print_diagonal - print diagonal line using '\'
 *@n: number of times '\' will be used
 */

void print_diagonal(int n)
{
	int count;
	int spaces;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('\');
			_putchar('\n');

			for (spaces = 1; space < count; spaces++)
			{
				_putchar(' ');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
