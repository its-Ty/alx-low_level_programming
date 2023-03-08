#include "main.h"

/**
 * get_sqRoot - find square root of n
 * @n: number
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int get_sqRoot(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}

	if (root * root == n)
	{
		return (root);
	}
	return (get_sqRoot(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (get_sqRoot(n, 0));
}
