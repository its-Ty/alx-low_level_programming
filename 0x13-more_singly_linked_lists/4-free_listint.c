#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: points to first node of list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *pointer;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		pointer = head;
		head = head->next;
		free(pointer);
	}
}
