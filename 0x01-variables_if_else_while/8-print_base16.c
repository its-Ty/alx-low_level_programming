#include <stdio.h>

/**
 *main - print hexadecimal lowercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';
	int alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
