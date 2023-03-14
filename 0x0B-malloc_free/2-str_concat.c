#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	char *str_ptr;
	int s1_size, s2_size, i;

	for (s1_size = 0; s1[s1_size] != '\0'; s1_size++)
		;
	for (s2_size = 0; s2[s2_size] != '\0'; s2_size++)
		;

	str_ptr = malloc(((s1_size + s2_size) * sizeof(char)) + 1);

	for (i = 0; i < s1_size; i++)
	{
		str_ptr[i] = s1[i];
	}
	for (; i < (s1_size + s2_size); i++)
	{
		str_ptr[i] = s2[i - s1_size];
	}
	str_ptr[i] = '\0';

	if (str_ptr == NULL)
	{
		return (NULL);
	}

	return (str_ptr);
}
