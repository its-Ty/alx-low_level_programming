#include <main.h>

/**
 *print_triangle - Print traingle of #'s with given size
 *@size: size of triangle to draw
 */

void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				if (col <= size - row)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
