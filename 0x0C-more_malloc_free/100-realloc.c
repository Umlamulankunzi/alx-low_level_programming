#include "main.h"
#include <stdlib.h>


/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated
* @old_size: size, in bytes, of @ptr
* @new_size: new size, in bytes of new memory block
* Return: void *
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *buffer;
	unsigned int data_size;

	data_size = (new_size > old_size) ? old_size : new_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	buffer = malloc(new_size);

	if (buffer == NULL)
		return (NULL);

	_memcpy_(buffer, ptr, data_size);
	free(ptr);

	return (buffer);
}



/**
 *_memcpy_ -   copy n  bytes frim src to dest
 *@dest: char *
 *@src: char *
 *@n: size of bytes
 */
void _memcpy_(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
}
