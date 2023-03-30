#include <stdlib.h>
#include <stdio.h>

#include "lists.h"


/**
 * list_len - find length of linked list
 * @h: pointer to head node
 * Return: length of linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
