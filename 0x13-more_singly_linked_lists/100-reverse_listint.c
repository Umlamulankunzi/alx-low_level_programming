#include "lists.h"


/**
* reverse_listint - reverse a linked list
* @head: pointer to address of linked list head node
* Return: pointer to head node of reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *fwd_node;

	if (*head == NULL || head == NULL)
		return (NULL);

	prev_node = NULL;		/** starts at NULL signifying end node */
	while((*head)->next)
	{
		fwd_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = fwd_node;
	}
	(*head)->next = prev_node;
	return (*head);
}
