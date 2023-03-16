#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - checks if memory allocation successful
 * @b: size to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *checker;

	checker = malloc(b);

	if (checker == NULL)
	{
		exit(98);
	}

	return (checker);
}
