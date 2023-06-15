#include "lists.h"


/**
* sum_dlistint - calculates sum of all the data(n) of linked list
* @head: pointer to head of linked list
*
* Return: integer (sum of data(n)) Else 0 if list empty
*/
int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (head->n + sum_dlistint(head->next));
	return (0);
}
