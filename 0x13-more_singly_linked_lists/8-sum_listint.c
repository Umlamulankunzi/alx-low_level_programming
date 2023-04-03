#include "lists.h"

/**
 * sum_listint - Calculates  sum of all data values of a linked list.
 * @head: pointer to head node of the linked list.
 * Return: 0 if list empty Else sum of of data values
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
