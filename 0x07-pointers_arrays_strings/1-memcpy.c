#include "main.h"

/**
 * _memcpy - copy bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: pointer to dest
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
