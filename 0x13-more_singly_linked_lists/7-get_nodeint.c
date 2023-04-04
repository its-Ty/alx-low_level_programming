#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node of list
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while ((counter < index) && head != NULL)
	{
		head = head->next;
		counter++;
	}

	if (counter == index)
	{
		return (head);
	}

	return (NULL);
}
