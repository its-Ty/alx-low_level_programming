#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: list
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int num_elements;

	num_elements = 0;
	while (h != NULL)
	{
		num_elements += 1;
		h = h->next;
	}
	return (num_elements);
}
