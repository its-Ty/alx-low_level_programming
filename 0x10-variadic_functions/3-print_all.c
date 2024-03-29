#include "stdarg.h"
#include "stdio.h"
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints int
 * @valist: valist
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints float
 * @valist: valist
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints string
 * @valist: valist
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything(ints, chars, floats, and strings)
 * @format: array of characters showing which data type to print
 */
void print_all(const char * const format, ...)
{
	char *separator;
	int i, j;
	va_list vaList;
	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	i = 0;
	j = 0;

	va_start(vaList, format);
	while (format != NULL && format[j] != '\0')
	{
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(vaList);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(vaList);
	printf("\n");
}
