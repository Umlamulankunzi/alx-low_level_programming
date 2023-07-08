#include "hash_tables.h"


/**
 * hash_table_set - Add or update element in hash table.
 * @ht: pointer to the hash table.
 * @key: key to add - mist not  be an empty string.
 * @value: value associated with key.
 * Return: 1 if successful Else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup_copy;
	unsigned long int index, i;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup_copy = strdup(value);
	if (dup_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_copy;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(dup_copy);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = dup_copy;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
