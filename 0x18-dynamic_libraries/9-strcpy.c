#include "main.h"

/**
* _strcpy - copies string from @src to @dest
* @dest: string pointer
* @src: string pointer
* Description: copies string from @src to @dest including the \0
* Return: char pointer to copied string
*/
char *_strcpy(char *dest, char *src)
{
	int n, max;

	n = 0;
	max = _strlen(src);

	while (n < max)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
