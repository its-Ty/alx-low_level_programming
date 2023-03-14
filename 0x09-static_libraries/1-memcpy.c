#include "main.h"

/**
 * _memcpy - copy n bytes from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int numBytes = n;

	if (numBytes > 0)
	{
		int counter;

		for (counter = 0; counter < numBytes; counter++)
		{
			dest[counter] = src[counter];
		}
	}

	return (dest);
}
