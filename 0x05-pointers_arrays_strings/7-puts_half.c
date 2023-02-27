#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of the string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int len;

	if (_strlen(str) % 2 != 0)
	{
		len = (_strlen(str) + 1) / 2;
	}
	else
	{
		len = _strlen(str) / 2;
	}

	for (i = len; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
