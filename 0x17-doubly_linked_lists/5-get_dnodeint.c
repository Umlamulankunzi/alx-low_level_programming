#include "lists.h"


/**
* get_dnodeint_at_index - returns node at index @index
* @head: pointer to head of linked list
* @index: index of the node to return. (indexes start at 0)
*
* Return: pointer to node at index @index Else NULL if not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		if (count == index)
			return (curr);

		count++;
		curr = curr->next;
	}

	return (NULL);
}
