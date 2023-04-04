#include "lists.h"

/**
 * print_listint - prints all elements of the list
 * @h: list
 * Return: number of nodes(counter)
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}

	return (count);
}
