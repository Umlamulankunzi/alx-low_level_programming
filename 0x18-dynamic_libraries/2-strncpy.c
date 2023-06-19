#include "main.h"

/**
* _strncpy - copies the @src string to the @dest string
* @dest: string to copied to
* @src: string to copy
* @n: number of bytes to be copied
* Return: char *
*/
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	do {
		dest[index] = '\0';
		index++;
	} while (index < n);

	return (dest);
}
