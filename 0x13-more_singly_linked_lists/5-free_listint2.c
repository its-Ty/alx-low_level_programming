#include "lists.h"

/**
 * free_listint2 - Frees a list and sets head to null
 * @head: points to first node of list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *pointer;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		pointer = (*head);
		*head = (*head)->next;
		free(pointer);
	}

	*head = NULL;
}
