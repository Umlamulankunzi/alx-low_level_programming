#include "main.h"
#include <stdlib.h>


/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: int
* @size: int
* Return: void * to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer, init_value;
	unsigned int i;

	init_value = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		buffer[i] = init_value;
	}
	return ((void *) buffer);
}
