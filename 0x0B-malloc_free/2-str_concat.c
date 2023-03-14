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
	int i, j, k, max;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	str_ptr = malloc(sizeof(char) * (i + j + 1));

	if (str_ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
		str_ptr[k] = s1[k];

	max = j;
	for (j = 0; j <= max; j++)
	{
		str_ptr[k] = s2[j];
		k++;
	}
	return (str_ptr);
}
