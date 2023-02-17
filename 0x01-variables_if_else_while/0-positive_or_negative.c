#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point: Test for positive or negative
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%i: Is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i: Is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i: Is negative\n", n);
	}

	return (0);
}
