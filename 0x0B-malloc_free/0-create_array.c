#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars & initialized with specific char
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	char *cptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	cptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		cptr[i] = c;
	}
	return (cptr);
}
