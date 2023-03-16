#include "main.h"
#include <stdlib.h>


/**
 * _memset_ - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: size of memory
 */
void _memset_(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}


/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: int
* @size: int
* Return: void * to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		return (NULL);

	_memset_(buffer, 0, nmemb * size);

	return (buffer);
}
