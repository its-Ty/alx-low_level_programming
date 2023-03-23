#include "stdarg.h"
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: the number of parameters passed to the function
 * Return: the sum of all parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int counter;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (counter = 0; counter < n; counter++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
