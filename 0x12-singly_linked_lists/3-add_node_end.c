#include "lists.h"

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int lengthC;

	lengthC = 0;
	while (str[lengthC] != '\0')
	{
		lengthC++;
	}
	return (lengthC);
}

/**
 * add_node_end - add node to end of list
 * @head: linked list
 * @str: string to add to end of list
 * Return: address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (str == NULL)
	{
		return (NULL);
	}
	if (strdup(str) == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}
