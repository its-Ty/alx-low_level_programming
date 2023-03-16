#include "main.h"
#include "stdlib.h"

/**
 * _calloc - Set values to 0 and allocate memory
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;
	unsigned int count; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	point = malloc(nmemb * size);
	if (point == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < (nmemb * size); count++)
	{
		*((char *)point + count) = 0;
	}

	return (point);
}
