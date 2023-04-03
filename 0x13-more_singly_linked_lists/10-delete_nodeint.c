#include "lists.h"



/**
 * delete_nodeint_at_index - Deletes node at index @index of linked list.
 * @head: pointer to  address of head node of linked list
 * @index: index of node to delete..
 * Return: 1 if  successful else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *delete_node;

	if (index == 0)
	{
		delete_node = *head;
		*head = delete_node->next;
		free(delete_node);
		return (1);
	}

	prev_node = get_nodeint_at_index(*head, index - 1);

	if (prev_node == NULL)
		return (-1);

	delete_node = prev_node->next;
	prev_node->next = delete_node->next;
	free(delete_node);
	return (1);
}



/**
 * get_nodeint_at_index - Find node aa given index of a linked list.
 * @head: A pointer to head node of linked list.
 * @index: index of node to find.
 * Return: pointer to node if successful Else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}

	return (head);
}
