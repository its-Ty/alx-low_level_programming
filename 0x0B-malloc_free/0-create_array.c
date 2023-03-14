#include "stdlib.h"
#include "stdio.h"
#include "main.h"

/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: fill array using this variable
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arrPoint;
	int counter;

	counter = 0;

	if (size <= 0)
	{
		return (NULL);
	}

	arrPoint = malloc(sizeof(char) * size);

	if (arrPoint == NULL)
	{
		return (NULL);
	}

	while (counter < (int)size)
	{
		*(arrPoint + counter) = c;
		counter++;
	}
	*(arrPoint + counter) = '\0';

	return (arrPoint);
}
