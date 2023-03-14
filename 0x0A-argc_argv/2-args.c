#include "main.h"
#include "stdio.h"

/**
 * main - print each argument on a new line
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	_putchar('\n');

	return (0);
}
