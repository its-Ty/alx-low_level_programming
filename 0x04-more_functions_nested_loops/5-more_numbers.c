#include "main.h"

/**
 *more_numbers - Print from 0 to 14 ten times
 */

void more_numbers(void)
{
	char num;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 > 0)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
