#include "main.h"

/**
 * _isdigit - Checking if character is a number from 0 to 9
 * @c: character to check
 * Returns: 1 if c is a digit. 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
