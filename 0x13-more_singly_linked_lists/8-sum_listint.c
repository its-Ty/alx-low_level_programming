#include "lists.h"

/**
 * sum_listint - return sum of all data in list
 * @head: points to first node of list
 * Return: sum, or 0 if list is empty
 */

int sum_listint(listint_t *head)
{

	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
