#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t counter;
	counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar("[0] (nil)\n");
		}
		else
		{
			_putchar("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (count);
}
