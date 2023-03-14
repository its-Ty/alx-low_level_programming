#include "main.h"
#include "stdio.h"

/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
