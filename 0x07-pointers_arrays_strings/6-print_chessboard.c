#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to 2D array representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int c1;
	int c2;

	for (c1 = 0; c1 < 8; c1++)
	{
		for (c2 = 0; c2 < 8; c2++)
		{
			printf("%c", a[c1][c2]);

			if (c2 == 7)
			{
				printf("\n");
			}
		}
	}
}
