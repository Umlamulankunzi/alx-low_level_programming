#include "lists.h"


/**
* add_dnodeint - add ew node at start of linked list
* @head: pointer to pointer to head of linked list
* @n: value of new node
*
* Return: pointer to added node Else NULL on error
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;

	return (node);
}
