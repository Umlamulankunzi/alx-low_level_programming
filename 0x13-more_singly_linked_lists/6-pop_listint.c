#include "lists.h"




/**
 * pop_listint - Deletes head node of linked list.
 * @head: A pointer to  address of the head node
 * Return: 0 if list empty else int data value of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int temp_value;

	if (!(*head))
		return (0);

	temp = *head;
	temp_value = (*head)->n;
	*head = (*head)->next;

	free(temp_value);
	return (ret);
}

