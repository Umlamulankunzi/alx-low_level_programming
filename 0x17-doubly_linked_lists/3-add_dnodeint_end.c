#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: pointer to pointer to head of linked list
* @n: value of new node
*
* Return: pointer to added node Else NULL on error
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (curr)
	{
		while (curr->next)
			curr = curr->next;

		node->prev = curr;
		curr->next = node;
	}
	else
	{
		node->prev = NULL;
		*head = node;
	}

	return (node);
}
