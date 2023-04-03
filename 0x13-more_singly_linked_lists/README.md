More Singly Linked Lists ReadMe

0-print_listint.c
  Prints all the elements of a listint_t list.

1-listint_len.c
  Returns the number of elements in a linked listint_t list.

2-add_nodeint.c
  Adds a new node at the beginning of a listint_t list.

3-add_nodeint_end.c
  Adds a new node at the end of a listint_t list.

4-free_listint.c
  Frees a listint_t list.

5-free_listint2.c
  Frees a listint_t list.
  The function sets the head to NULL

6-pop_listint.c
  Deletes the head node of a listint_t linked list, and returns the head node’s data (n).
  If the linked list is empty return 0

7-get_nodeint.c
  Returns the nth node of a listint_t linked list.
  Where index is the index of the node, starting at 0
  If the node does not exist, return NULL

8-sum_listint.c
  Returns the sum of all the data (n) of a listint_t linked list.
  If the list is empty, return 0

9-insert_nodeint.c
  Inserts a new node at a given position.
  Where idx is the index of the list where the new node should be added. Index starts at 0
  Returns: the address of the new node, or NULL if it failed
  If it is not possible to add the new node at index idx, do not add the new node and return NULL

10-delete_nodeint.c
  Deletes the node at index index of a listint_t linked list.
  Where index is the index of the node that should be deleted. Index starts at 0
  Returns: 1 if it succeeded, -1 if it failed
