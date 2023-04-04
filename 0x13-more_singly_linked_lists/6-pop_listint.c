#include "lists.h"

/**
 * pop_listint - deletes head node, and returns it's data
 * @head: a pointer to the pointer to the head node of the list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int deleted_data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	deleted_data = temp->n;
	*head = temp->next;
	free(temp);

	return (deleted_data);

}
