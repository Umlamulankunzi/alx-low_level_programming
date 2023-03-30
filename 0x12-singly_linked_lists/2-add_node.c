#include <stdlib.h>
#include <string.h>

#include "lists.h"


/**
 * add_node - adds new node at start of linked list
 * @head: pointer to pointer to linked list
 * @str: string element to add in new node
 * Return: address of new element on success Else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
