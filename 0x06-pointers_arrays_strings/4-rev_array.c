#include "main.h"

/**
 * reverse_array - reverse elements of array
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int temp = 0;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		i++, j--;
	}
}
