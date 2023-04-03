#include "lists.h"

/**
 * get_nodeint_at_index - Find node aa given index of a linked list.
 * @head: A pointer to head node of linked list.
 * @index: index of node to find.
 * Return: pointer to node if successful Else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}

	return (head);
}
