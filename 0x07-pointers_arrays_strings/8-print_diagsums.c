#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints sum of the two diagonals
 * @a: matrix of integers
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int counter;

        for (counter = 0; counter < size; counter++)
        {
		s1 += *(a + counter * size + counter);
		s2 += *(a + counter * size + (size - 1 - counter));
	}

	printf("%d, %d\n", s1, s2);
}
