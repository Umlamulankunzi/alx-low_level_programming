#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: char *
 */
char *_strdup(char *str)
{
	char *str_ptr;
	int str_size, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (str_size = 0; str_size < str[i] != '\0'; str_size++)
		;

	str_ptr = malloc((str_size * sizeof(char)) + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		str_ptr[i] = str[i];
	}
	str_ptr[i] = str[i];

	return (str_ptr);
}
