#include "main.h"

/**
 *print_diagonal - print diagonal line using '\'
 *@n: number of times '\' will be used
 */

void print_diagonal(int n)
{
	int line;
	int spaces;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (spaces = 1; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
