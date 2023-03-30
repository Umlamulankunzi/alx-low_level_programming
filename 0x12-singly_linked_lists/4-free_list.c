#include <stdlib.h>

#include "lists.h"


/**
 * free_list - frees linked list @head memory
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
