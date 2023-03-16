#include "main.h"
#include "stdlib.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *point;
	int count;
	int num_elem = (max - min + 1);

	if (min > max)
	{
		return (NULL);
	}

	point = malloc(sizeof(int) * num_elem);
	if (point == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < num_elem; count++)
	{
		point[count] = min++;
	}

	return (point);
}
