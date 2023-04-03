#include "lists.h"



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




/**
 * insert_nodeint_at_index - Inserts new node to linked list at index @idx
 * @head: pointer to address oh head node.
 * @idx:  index to insert new node.
 * @n: int value for new node..
 * Return: Address of new node if succesful Else  NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	
	temp_node = get_nodeint_at_index(*head, idx - 1);

	if (!temp_node)
		return (NULL);


	new_node->next = temp_node->next;
	temp_node->next = new_node;	
	return (new_node);
}
