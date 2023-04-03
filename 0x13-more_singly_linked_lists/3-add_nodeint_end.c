#include "lists.h"



/**
 * add_nodeint_end - Add new node at end of linked list
 * @head: address of ptr to head of linked list.
 * @n: int value of new node
 * Return: address of new element if successful else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *end_node;

	new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		end_node = last_node(*head);
		end_node->next = new_node;
	}
	return (*head);
}






/**
 * last_node - find last node of a non-empty linked list
 * @head: address of ptr to head of linked list.
 * Return: address of last element of list  if successful else NULL
 */
listint_t *last_node(listint_t *head)
{
	if (!head)
		return (NULL);
	if (head->next == NULL)
		return (head);
	return (last_node(head->next));
}
