#include "main.h"

/**
* _strcat - ppends the @src string to the @dest string
* @dest: string to appended
* @src: string to use to append
* Return: char *
*/
char *_strcat(char *dest, char *src)
{
	int dest_last_index, src_index;

	dest_last_index = 0;
	src_index = 0;

	while (dest[dest_last_index] != '\0')
	{
		dest_last_index++;
	}
	while (src[src_index] != '\0')
	{
		dest[dest_last_index] = src[src_index];
		dest_last_index++;
		src_index++;
	}

	return (dest);
}
