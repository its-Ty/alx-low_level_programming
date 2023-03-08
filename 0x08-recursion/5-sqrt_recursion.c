#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		root = 1;
		while (root * root <= n)
		{
			if (root * root == n)
			{
				return (root);
			}
			root++;
		}
		return (-1);
	}
}
