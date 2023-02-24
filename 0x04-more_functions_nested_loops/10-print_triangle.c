#include <main.h>

/**
 *print_triangle - Print traingle of #'s with given size
 *@size: size of triangle to draw
 */

void print_triangle(int size)
{
	int num_rows;
	int num_spaces;
	int num_hash;

	if (size > 0)
	{
		for (num_rows = 1; num_rows <= size; num_rows++)
		{
			for (num_spaces = 1; num_spaces <= (size - num_rows); num_spaces++)
			{
				_putchar(' ');
			}
			for (num_hash = 1; num_hash <= num_rows; num_hash++)
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
