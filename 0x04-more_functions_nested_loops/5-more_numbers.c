#include "main.h"

/**
 *more_numbers - Print numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	char num;
	int count;

	for (count = 1; count < 11; count++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
