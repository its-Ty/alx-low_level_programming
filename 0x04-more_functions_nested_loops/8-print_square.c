#include "main.h"

/**
 *print_square - print '\#' to form a square
 *@size: dimensions of square
 */

void print_square(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
