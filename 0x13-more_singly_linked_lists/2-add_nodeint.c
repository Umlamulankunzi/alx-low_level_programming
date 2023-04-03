#include "lists.h"



/**
 * add_nodeint - Add new node at start of Linked list
 * @head: A pointer to address of head of linked list.
 * @n: int value of  new node
 * Return: Address of new node if successful else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(*node));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
