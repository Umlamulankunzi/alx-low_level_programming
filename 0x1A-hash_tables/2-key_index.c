#include "hash_tables.h"


/**
 * key_index - Uses djb2 algorithm to find index of key.
 * @key: key.
 * @size: size of the array of the hash table.
 *
 * Return: index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
