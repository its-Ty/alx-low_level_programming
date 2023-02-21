#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: variable being checked
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int last = 0;
	last = (n % 10);
	if (last < 0)
	{
		last *= -1;
	}
	_putchar('0' + last);
	return (last);
}
