#include "lists.h"

/**
 * add_nodeint - Adds new node to beginning of the list
 * @head: holds 1st node address, passed as pointer to pointer.
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem;

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
	{
		return (NULL);
	}

	new_elem->n = n;
	new_elem->next = *head;
	*head = new_elem;

	return (new_elem);
}
