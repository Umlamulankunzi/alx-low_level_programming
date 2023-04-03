#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - finds the length of a  linked list @h
* @h: linked list head
* Return: length of list
*/
size_t listint_len(const listint_t *h)
{
	if (h)
		return (1 + listint_len(h->next));
	return (0);
}
