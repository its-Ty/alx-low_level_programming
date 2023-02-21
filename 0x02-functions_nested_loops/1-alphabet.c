#include "stdio.h"
#include "main.h"

/**
 * main - Check code
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';
        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }
        putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
