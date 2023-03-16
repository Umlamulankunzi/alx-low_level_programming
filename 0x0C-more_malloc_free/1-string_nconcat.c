#include "main.h"
#include <stdlib.h>


/**
 * string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: unsigned int
 * Description: concatenates @s1 and first n bytes of @s2
 * Return: void * to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size, s2_size, buffer_size;
	char *buffer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_size = len_str(s1);
	s2_size = len_str(s2);

	n = (n > s2_size) ? s2_size : n;

	buffer_size = s1_size + n + 1;
	buffer = malloc(buffer_size * sizeof(*buffer));
	if (buffer == NULL)
		return (NULL);

	*buffer = '\0';

	copy_str(s1, buffer, s1_size);
	copy_str(s2, buffer, n);

	return (buffer);
}



/**
 * copy_str - copies first @n characters of string @src to @dest
 * @src: string
 * @dest: string
 * @n: number of characters of @src to copy to @dest
 * Description: copies first @n characters of string @src to @dest
 * Return: void * to allocated memory
 */
void copy_str(char *src, char *dest, unsigned int n)
{
	unsigned int i, last_index;

	last_index = len_str(dest); /* returns index of '\0' */

	for (i = 0; i < n; i++)
		*(dest + (i + last_index)) = *(src + i);
	*(dest + (i + last_index)) = '\0';
}



/**
 * len_str - counts length of string
 * @s: string
 * Description: finds length of string
 * Return: length of string
 */
unsigned int len_str(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len_str(s + 1));
}
