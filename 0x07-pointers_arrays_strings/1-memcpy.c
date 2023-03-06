#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory
 * @n: number of bytes to copy
 * Return: pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int numBytes = n;
	int counter;

	if (numBytes > 0)
	{
		for (counter = 0; counter < numBytes; counter++;)
		{
			dest[counter] = src[counter];
		}
	}

	return (dest);
}

