#include "stdlib.h"
#include "stdio.h"
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
		{
			return (counter);
		}
	}
	return (-1);
}
