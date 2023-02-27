#include "main.h"

/**
 * puts2 - prints a string, but skips a letter
 * followed by a new line
 * @str: string that will be printed
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = (str + 2);
	}

	_putchar('\n');
}
