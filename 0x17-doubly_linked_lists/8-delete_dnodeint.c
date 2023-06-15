#include "lists.h"


/**
* dlistint_len - returns the number of elements in a linked list
* @h: pointer to head of linked list
*
* Return: number of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
		return (1 + dlistint_len(h->next));
	return (0);
}


/**
* delete_endnode - deletes last node of linked list
* @head: pointer to head of linked list
*
* Return: 1 if successful Else -1
*/
int delete_endnode(dlistint_t **head)
{
	dlistint_t *curr = *head;

	while (curr)
	{
		if (curr->next == NULL)
		{
			curr->prev->next = NULL;
			free(curr);
			return (1);
		}
		curr = curr->next;
	}
	return (-1);
}


/**
* delete_firstnode - deletes first node of linked list
* @head: pointer to head of linked list
*
* Return: 1 always
*/
int delete_firstnode(dlistint_t **head)
{
	dlistint_t *curr = *head;
	dlistint_t *new_hd = curr->next;

	new_hd->prev = NULL;
	*head = new_hd;
	free(curr);

	return (1);
}


/**
* del_listint - function that frees a dlistint_t list
* @head: head pointer to linked list
*
*/
void del_listint(dlistint_t *head)
{
	if (head)
		del_listint(head->next);
	free(head);
}


/**
* delete_dnodeint_at_index - delete  node at given index
* @head: pointer to pointer to head of linked list
* @index: index of node to delete
*
* Return: 1 on success. Else -1 on fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	size_t len_lst = dlistint_len(*head);
	dlistint_t *nxt, *prev, *curr;

	if (index == 0 && len_lst == 1)
	{
		del_listint(*head);
		*head = NULL;
		return (1);
	}
	else if (index == 0 && len_lst)
		return (delete_firstnode(head));

	else if (index == len_lst)
		return (delete_endnode(head));

	else if (len_lst)
	{
		curr = *head;

		while (curr)
		{
			if (count == index)
			{
				prev = curr->prev;
				nxt = curr->next;
				prev->next = nxt;
				nxt->prev = prev;

				free(curr);
				return (1);
			}
			count++;
			curr = curr->next;
		}
	}
	return (-1);
}
