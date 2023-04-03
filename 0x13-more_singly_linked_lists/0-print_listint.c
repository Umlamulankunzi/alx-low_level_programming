#include <stdio.h>

#include "lists.h"


/**
* print_listint - print all elements of a linked list @h
* @h: pointer to head node of list
* Return: size of list if successfull Else 0
*/
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
	return (0);
}

