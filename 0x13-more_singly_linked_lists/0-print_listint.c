#include <stdio.h>

#include "lists.h"



size_t print_listint(const listint_t *h)
{
	if (h) 
	{
		printf("%d\n", h->n);
		return 1 + print_listint(h->next);
	}
	return 0;
}
