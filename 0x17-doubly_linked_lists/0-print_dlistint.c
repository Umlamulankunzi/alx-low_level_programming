#include "lists.h"

/**
* print_dlistint - prints all the elements of a doubly linked list
* @h: head of linked list
*
* Return: total number of nodes of linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_items = 0;
	dlistint_t *curr = (dlistint_t *)h;

	while (curr)
	{
		printf("%d\n", curr->n);
		n_items++;
		curr = curr->next;
	}

	return (n_items);
}
