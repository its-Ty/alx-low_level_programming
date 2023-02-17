#include <stdio.h>

/**
 *main - print single digit numbers starting from '0'
 *Return: Always 0 (Success)
 */

int main (void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");

	return (0);
}
