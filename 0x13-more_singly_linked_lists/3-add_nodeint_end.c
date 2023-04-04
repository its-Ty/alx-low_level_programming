#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * * @head: holds 1st node address, passed as pointer to pointer.
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem, *temp;

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
	{
		return (NULL);
	}

	new_elem->n = n;
	new_elem->next = *head;

	if (*head == NULL)
	{
		*head = new_elem;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_elem;
	}

	return (new_elem);
}
