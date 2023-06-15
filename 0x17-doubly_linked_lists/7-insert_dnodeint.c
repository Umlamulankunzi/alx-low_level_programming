#include "lists.h"
#include <stdio.h>


/**
* insert_dnodeint_at_index - inserts a new node at a given index
* @h: pointer to pointer to head of linked list
* @idx: index to add new node
* @n: value of new node to add
*
* Return: pointer to node Else NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *prev, *curr = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	while (curr)
	{
		if (count == idx)
		{
			prev = curr->prev;
			node->prev = curr->prev;
			node->next = curr;
			curr->prev = node;
			if (count)
				prev->next = node;
			else
				*h = node;
			return (node);
		}
		if (curr->next == NULL && count + 1 == idx)
		{
			node->prev = curr;
			node->next = NULL;
			curr->next = node;
			return (node);
		}
		curr = curr->next;
		count++;
	}
	free(node);
	return (NULL);
}
