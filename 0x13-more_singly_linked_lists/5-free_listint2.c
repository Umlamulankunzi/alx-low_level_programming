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




/**
 * free_listint2 - Free linked list @head memory and set @head to NULL
 * @head: pointer to the address of head of linked list.
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	free_listint(*head);
	*head = NULL;
}
