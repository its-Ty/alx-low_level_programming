#include "stdio.h"

/**
 *main - Print 1 - 100 
 *For multiples of 3: Print Fizz
 *For multiples of 5: Print Buzz
 *For multiples of 3 and 5: Print FizzBuzz
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
			printf("Buzz");}

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
}
