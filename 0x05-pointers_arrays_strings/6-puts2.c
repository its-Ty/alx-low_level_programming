#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints a string, but skips a letter
 * followed by a new line
 * @str: string that will be printed
 */

void puts2(char *str)
{
	for (int i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
