#include <stdlib.h>
#include <string.h>

#include "lists.h"


/**
 * add_node_end - add new node at end of linked list
 * @head: pointer to pointer to linked list
 * @str: string element to add as new node data
 * Return: address new node if successful Else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	end_node = malloc(sizeof(list_t));
	if (!end_node)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = len;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = end_node;

	return (end_node);
}
