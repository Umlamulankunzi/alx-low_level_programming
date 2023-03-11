#include "main.h"

/**
* _strncat - appends the @src string to the @dest string
* @dest: string to appended
* @src: string to use to append
* @n: number of bytes from @src to append to @dest
* Return: char *
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_last_index, src_index;

	dest_last_index = 0;
	src_index = 0;

	while (dest[dest_last_index] != '\0')
	{
		dest_last_index++;
	}
	while (src[src_index] != '\0' && src_index < n)
	{
		dest[dest_last_index] = src[src_index];
		dest_last_index++;
		src_index++;
	}
	dest[dest_last_index] = '\0';
	return (dest);
}
