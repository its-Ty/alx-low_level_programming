#include "stdio.h"
#include "stdlib.h"
#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: array to go through
 * @size: size of array
 * @action: Pointer to the function to be executed.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}
