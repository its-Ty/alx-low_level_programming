#include "stdio.h"

/**
 *main - Print 1 - 100
 *multiples of 3 with Fizz,
 *multiples of 5 with Buzz,
 *multiples of both 3 and 5 with FizzBuzz
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
