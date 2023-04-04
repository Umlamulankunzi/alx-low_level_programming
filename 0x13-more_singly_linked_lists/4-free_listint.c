#include "lists.h"


/**
 * free_listint - Free linked list @head dynamic memory
 * @head: A pointer to the head of linked list.
 */
void free_listint(listint_t *head)
{
	if (head)
		free_listint(head->next);
	free(head);
}
