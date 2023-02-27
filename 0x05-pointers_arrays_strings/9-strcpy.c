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


/**
* _strlen - calculates the length of string @s
* @s: string
* Description: calculates the length of a string
* Return: length of string
*/
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
