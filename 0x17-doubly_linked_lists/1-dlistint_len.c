#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h: pointer to head of linked list
*
* Return: number of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
		return (1 + dlistint_len(h->next));
	return (0);
}
