#include "lists.h"

/**
 * list_len - prints length of list_t linked list
 * @h: linked list
 * Return: number of nodes/elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
