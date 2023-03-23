#include "stdarg.h"
#include "stdio.h"
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int counter;
	char *strng;

	va_start(args, n);
	for (counter = 0; counter < n; counter++)
	{
		strng = va_arg(args, char *);
		if (strng == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strng);
		}

		if (separator != NULL && counter < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
